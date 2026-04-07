#include <stdio.h>

int main() {

float F;
float C;
char D;

printf(" choose option:\n ");
printf("F - fahrenheint to Celsius\n ");
printf("C - Celsius to Fahrenheint ");
scanf("%c", &D);

if(D == 'C'){

printf("type the temperature in C° ");
scanf("%f", &C);

F =  C * 9/5 + 32;

printf("temperature is %.2f F° ", F);

}else if(D == 'F'){

printf("type the temperature in F° ");
scanf("%f", &F);

C =  (F - 32) * 5/9;

printf("temperature is %.2f C° ", C);
}


    return 0;
}

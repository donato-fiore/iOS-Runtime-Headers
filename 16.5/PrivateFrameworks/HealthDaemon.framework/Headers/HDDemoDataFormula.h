// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDEMODATAFORMULA_H
#define HDDEMODATAFORMULA_H


#import <Foundation/Foundation.h>


@interface HDDemoDataFormula : NSObject



+(CGFloat)computeBasalMetabolicRateFromWeight:(CGFloat)arg0 height:(CGFloat)arg1 age:(CGFloat)arg2 sex:(NSInteger)arg3 ;
+(CGFloat)computeBloodAlcoholContentForNumDrinks:(CGFloat)arg0 elapsedTime:(CGFloat)arg1 weight:(CGFloat)arg2 sex:(NSInteger)arg3 ;
+(CGFloat)computeBodyFatPercentageFromWeight:(CGFloat)arg0 leanBodyMass:(CGFloat)arg1 ;
+(CGFloat)computeBodyMassIndexFromWeight:(CGFloat)arg0 height:(CGFloat)arg1 ;
+(CGFloat)computeLeanBodyMassFromWeight:(CGFloat)arg0 height:(CGFloat)arg1 sex:(NSInteger)arg2 waistCircumference:(CGFloat)arg3 forearmCircumference:(CGFloat)arg4 wristCircumference:(CGFloat)arg5 hipCircumference:(CGFloat)arg6 ;
+(CGFloat)convertDegreeCelsiusToFahrenheit:(CGFloat)arg0 ;
+(CGFloat)convertDegreeFahrenheitToCelsius:(CGFloat)arg0 ;


@end


#endif
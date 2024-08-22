// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSUNITELECTRICCHARGE_H
#define NSUNITELECTRICCHARGE_H

@protocol NSSecureCoding;


#import "NSDimension.h"

@interface NSUnitElectricCharge : NSDimension <NSSecureCoding>





+(id)_measurementWithNaturalScale:(id)arg0 system:(NSUInteger)arg1 ;
+(id)ampereHours;
+(id)baseUnit;
+(id)coulombs;
+(id)icuType;
+(id)kiloampereHours;
+(id)megaampereHours;
+(id)microampereHours;
+(id)milliampereHours;
+(void)initialize;


@end


#endif
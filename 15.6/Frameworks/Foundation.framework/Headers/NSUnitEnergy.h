// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSUNITENERGY_H
#define NSUNITENERGY_H

@protocol NSSecureCoding;


#import "NSDimension.h"

@interface NSUnitEnergy : NSDimension <NSSecureCoding>





+(id)_measurementWithNaturalScale:(id)arg0 system:(NSUInteger)arg1 ;
+(id)baseUnit;
+(id)calories;
+(id)foodcalories;
+(id)icuType;
+(id)joules;
+(id)kilocalories;
+(id)kilojoules;
+(id)kilowattHours;
+(void)initialize;


@end


#endif
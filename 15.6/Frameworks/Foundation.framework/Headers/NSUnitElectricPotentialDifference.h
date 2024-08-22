// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSUNITELECTRICPOTENTIALDIFFERENCE_H
#define NSUNITELECTRICPOTENTIALDIFFERENCE_H

@protocol NSSecureCoding;


#import "NSDimension.h"

@interface NSUnitElectricPotentialDifference : NSDimension <NSSecureCoding>





+(id)_measurementWithNaturalScale:(id)arg0 system:(NSUInteger)arg1 ;
+(id)baseUnit;
+(id)icuType;
+(id)kilovolts;
+(id)megavolts;
+(id)microvolts;
+(id)millivolts;
+(id)volts;
+(void)initialize;


@end


#endif
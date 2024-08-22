// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSUNITELECTRICRESISTANCE_H
#define NSUNITELECTRICRESISTANCE_H

@protocol NSSecureCoding;


#import "NSDimension.h"

@interface NSUnitElectricResistance : NSDimension <NSSecureCoding>





+(id)_measurementWithNaturalScale:(id)arg0 system:(NSUInteger)arg1 ;
+(id)baseUnit;
+(id)icuType;
+(id)kiloohms;
+(id)megaohms;
+(id)microohms;
+(id)milliohms;
+(id)ohms;
+(void)initialize;


@end


#endif
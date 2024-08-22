// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSUNITELECTRICCURRENT_H
#define NSUNITELECTRICCURRENT_H

@protocol NSSecureCoding;


#import "NSDimension.h"

@interface NSUnitElectricCurrent : NSDimension <NSSecureCoding>





+(id)_measurementWithNaturalScale:(id)arg0 system:(NSUInteger)arg1 ;
+(id)amperes;
+(id)baseUnit;
+(id)icuType;
+(id)kiloamperes;
+(id)megaamperes;
+(id)microamperes;
+(id)milliamperes;
+(void)initialize;


@end


#endif
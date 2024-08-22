// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSUNITTEMPERATURE_H
#define NSUNITTEMPERATURE_H

@protocol NSSecureCoding;


#import "NSDimension.h"

@interface NSUnitTemperature : NSDimension <NSSecureCoding>





+(id)baseUnit;
+(id)celsius;
+(id)fahrenheit;
+(id)icuType;
+(id)kelvin;
+(void)initialize;


@end


#endif
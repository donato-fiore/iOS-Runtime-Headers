// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSUNITFUELEFFICIENCY_H
#define NSUNITFUELEFFICIENCY_H

@protocol NSSecureCoding;


#import "NSDimension.h"

@interface NSUnitFuelEfficiency : NSDimension <NSSecureCoding>





+(id)baseUnit;
+(id)icuType;
+(id)litersPer100Kilometers;
+(id)milesPerGallon;
+(id)milesPerImperialGallon;
+(void)initialize;


@end


#endif
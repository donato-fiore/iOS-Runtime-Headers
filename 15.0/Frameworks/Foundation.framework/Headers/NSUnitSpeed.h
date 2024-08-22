// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSUNITSPEED_H
#define NSUNITSPEED_H

@protocol NSSecureCoding;


#import "NSDimension.h"

@interface NSUnitSpeed : NSDimension <NSSecureCoding>





+(id)baseUnit;
+(id)icuType;
+(id)kilometersPerHour;
+(id)knots;
+(id)metersPerSecond;
+(id)milesPerHour;
+(void)initialize;


@end


#endif
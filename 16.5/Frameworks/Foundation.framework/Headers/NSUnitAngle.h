// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSUNITANGLE_H
#define NSUNITANGLE_H

@protocol NSSecureCoding;


#import "NSDimension.h"

@interface NSUnitAngle : NSDimension <NSSecureCoding>





+(id)arcMinutes;
+(id)arcSeconds;
+(id)baseUnit;
+(id)degrees;
+(id)gradians;
+(id)icuType;
+(id)radians;
+(id)revolutions;
+(void)initialize;


@end


#endif
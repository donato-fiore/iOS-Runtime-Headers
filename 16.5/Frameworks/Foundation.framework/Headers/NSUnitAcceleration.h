// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSUNITACCELERATION_H
#define NSUNITACCELERATION_H

@protocol NSSecureCoding;


#import "NSDimension.h"

@interface NSUnitAcceleration : NSDimension <NSSecureCoding>





+(id)baseUnit;
+(id)gravity;
+(id)icuType;
+(id)metersPerSecondSquared;
+(void)initialize;


@end


#endif
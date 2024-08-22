// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSUNITILLUMINANCE_H
#define NSUNITILLUMINANCE_H

@protocol NSSecureCoding;


#import "NSDimension.h"

@interface NSUnitIlluminance : NSDimension <NSSecureCoding>





+(id)baseUnit;
+(id)icuType;
+(id)lux;
+(void)initialize;


@end


#endif
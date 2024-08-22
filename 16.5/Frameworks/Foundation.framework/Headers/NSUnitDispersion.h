// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSUNITDISPERSION_H
#define NSUNITDISPERSION_H

@protocol NSSecureCoding;


#import "NSDimension.h"

@interface NSUnitDispersion : NSDimension <NSSecureCoding>





+(id)baseUnit;
+(id)icuType;
+(id)partsPerMillion;
+(void)initialize;


@end


#endif
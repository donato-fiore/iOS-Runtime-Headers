// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GPBLISTVALUE_H
#define GPBLISTVALUE_H

@class NSMutableArray;


#import "GPBMessage.h"

@interface GPBListValue : GPBMessage

@property (retain, nonatomic) NSMutableArray *valuesArray;
@property (readonly, nonatomic) NSUInteger valuesArray_Count;


+(id)descriptor;


@end


#endif
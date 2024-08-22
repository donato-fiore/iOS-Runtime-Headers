// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GPBENUMVALUE_H
#define GPBENUMVALUE_H

@class NSString, NSMutableArray;


#import "GPBMessage.h"

@interface GPBEnumValue : GPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) int number;
@property (retain, nonatomic) NSMutableArray *optionsArray;
@property (readonly, nonatomic) NSUInteger optionsArray_Count;


+(id)descriptor;


@end


#endif
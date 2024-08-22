// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GPBSTRINGVALUE_H
#define GPBSTRINGVALUE_H

@class NSString;


#import "GPBMessage.h"

@interface GPBStringValue : GPBMessage

@property (copy, nonatomic) NSString *value;


+(id)descriptor;


@end


#endif
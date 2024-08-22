// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIPBSTRINGVALUE_H
#define TRIPBSTRINGVALUE_H

@class NSString;


#import "TRIPBMessage.h"

@interface TRIPBStringValue : TRIPBMessage

@property (copy, nonatomic) NSString *value;


+(id)descriptor;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GPBBYTESVALUE_H
#define GPBBYTESVALUE_H

@class NSData;


#import "GPBMessage.h"

@interface GPBBytesValue : GPBMessage

@property (copy, nonatomic) NSData *value;


+(id)descriptor;


@end


#endif
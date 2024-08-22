// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIPBBYTESVALUE_H
#define TRIPBBYTESVALUE_H

@class NSData;


#import "TRIPBMessage.h"

@interface TRIPBBytesValue : TRIPBMessage

@property (copy, nonatomic) NSData *value;


+(id)descriptor;


@end


#endif
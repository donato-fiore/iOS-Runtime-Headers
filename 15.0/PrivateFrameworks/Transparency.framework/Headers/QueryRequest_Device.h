// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QUERYREQUEST_DEVICE_H
#define QUERYREQUEST_DEVICE_H

@class NSMutableArray, NSData;


#import "GPBMessage.h"

@interface QueryRequest_Device : GPBMessage

@property (retain, nonatomic) NSMutableArray *clientDataArray;
@property (readonly, nonatomic) NSUInteger clientDataArray_Count;
@property (copy, nonatomic) NSData *deviceId;


+(id)descriptor;


@end


#endif
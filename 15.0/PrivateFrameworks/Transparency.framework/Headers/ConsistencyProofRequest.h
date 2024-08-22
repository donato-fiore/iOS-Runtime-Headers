// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CONSISTENCYPROOFREQUEST_H
#define CONSISTENCYPROOFREQUEST_H

@class NSMutableArray;


#import "GPBMessage.h"

@interface ConsistencyProofRequest : GPBMessage

@property (retain, nonatomic) NSMutableArray *requestsArray;
@property (readonly, nonatomic) NSUInteger requestsArray_Count;
@property (nonatomic) int version;


+(id)descriptor;


@end


#endif
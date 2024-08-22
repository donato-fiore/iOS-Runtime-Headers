// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CONSISTENCYPROOFRESPONSE_H
#define CONSISTENCYPROOFRESPONSE_H

@class NSDictionary, NSMutableArray;


#import "GPBMessage.h"

@interface ConsistencyProofResponse : GPBMessage

@property (nonatomic) int application;
@property (nonatomic) int logType;
@property (readonly) NSDictionary *metadata;
@property (retain, nonatomic) NSMutableArray *responsesArray;
@property (readonly, nonatomic) NSUInteger responsesArray_Count;
@property (nonatomic) int status;


+(id)descriptor;


@end


#endif
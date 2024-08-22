// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CONSISTENCYPROOFREQUEST_LOGCONSISTENCYREQUEST_H
#define CONSISTENCYPROOFREQUEST_LOGCONSISTENCYREQUEST_H



#import "GPBMessage.h"

@interface ConsistencyProofRequest_LogConsistencyRequest : GPBMessage

@property (nonatomic) int application;
@property (nonatomic) NSUInteger endRevision;
@property (nonatomic) int logType;
@property (nonatomic) NSUInteger startRevision;


+(id)descriptor;


@end


#endif
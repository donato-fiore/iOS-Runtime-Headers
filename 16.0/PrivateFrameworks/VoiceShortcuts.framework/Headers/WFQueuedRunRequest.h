// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFQUEUEDRUNREQUEST_H
#define WFQUEUEDRUNREQUEST_H

@class WFWorkflowRunDescriptor, WFWorkflowRunRequest, WFWorkflowRunningContext;
@protocol OS_voucher;

#import <Foundation/Foundation.h>


@interface WFQueuedRunRequest : NSObject

@property (readonly, copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, nonatomic) WFWorkflowRunDescriptor *descriptor; // ivar: _descriptor
@property (readonly, nonatomic) WFWorkflowRunRequest *runRequest; // ivar: _runRequest
@property (readonly, nonatomic) WFWorkflowRunningContext *runningContext; // ivar: _runningContext
@property (readonly, nonatomic) BOOL shouldNotifyObservers; // ivar: _shouldNotifyObservers
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (readonly, nonatomic) NSObject<OS_voucher> *voucher; // ivar: _voucher


-(id)description;
-(id)initWithType:(NSUInteger)arg0 descriptor:(id)arg1 runRequest:(id)arg2 runningContext:(id)arg3 voucher:(id)arg4 completionHandler:(id)arg5 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFQUEUEDRUNREQUEST_H
#define WFQUEUEDRUNREQUEST_H

@class WFWorkflowRunRequest, WFWorkflowRunningContext;

#import <Foundation/Foundation.h>


@interface WFQueuedRunRequest : NSObject

@property (readonly, copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, nonatomic) WFWorkflowRunRequest *runRequest; // ivar: _runRequest
@property (readonly, nonatomic) WFWorkflowRunningContext *runningContext; // ivar: _runningContext
@property (readonly, nonatomic) BOOL shouldNotifyObservers; // ivar: _shouldNotifyObservers
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)description;
-(id)initWithType:(NSUInteger)arg0 runRequest:(id)arg1 runningContext:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif
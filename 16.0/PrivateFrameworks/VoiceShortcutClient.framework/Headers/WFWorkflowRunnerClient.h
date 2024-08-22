// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFWORKFLOWRUNNERCLIENT_H
#define WFWORKFLOWRUNNERCLIENT_H

@protocol WFWorkflowRunnerClientDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WFWorkflowRunningContext.h"
#import "WFWorkflowRunDescriptor.h"
#import "WFWorkflowRunRequest.h"

@interface WFWorkflowRunnerClient : NSObject

@property (retain, nonatomic) WFWorkflowRunningContext *context; // ivar: _context
@property (weak, nonatomic) NSObject<WFWorkflowRunnerClientDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (retain, nonatomic) WFWorkflowRunDescriptor *descriptor; // ivar: _descriptor
@property (retain, nonatomic) id *progressSubscriber; // ivar: _progressSubscriber
@property (retain, nonatomic) WFWorkflowRunRequest *runRequest; // ivar: _runRequest
@property (readonly, nonatomic, getter=isRunning) BOOL running;


-(id)initWithDescriptor:(id)arg0 runRequest:(id)arg1 ;
-(id)initWithDescriptor:(id)arg0 runRequest:(id)arg1 delegateQueue:(id)arg2 ;
-(id)runWorkflowWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)beginObservingProgressForWorkflowWithRunningContext:(id)arg0 ;
-(void)dispatchWorkflowResultHandlingWithResult:(id)arg0 ;
-(void)handleWorkflowDidStart:(id)arg0 ;
-(void)handleWorkflowRunResult:(id)arg0 completion:(id)arg1 ;
-(void)start;
-(void)stop;
-(void)stopObservingRunProgress;


@end


#endif
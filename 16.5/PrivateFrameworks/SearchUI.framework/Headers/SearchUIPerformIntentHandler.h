// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIPERFORMINTENTHANDLER_H
#define SEARCHUIPERFORMINTENTHANDLER_H

@class NSString, WFWorkflowRunnerClient;
@protocol WFWorkflowRunnerClientDelegate;


#import "SearchUIOpenUserActivityHandler.h"

@interface SearchUIPerformIntentHandler : SearchUIOpenUserActivityHandler <WFWorkflowRunnerClientDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFWorkflowRunnerClient *runnerClient; // ivar: _runnerClient
@property (readonly) Class superclass;


-(BOOL)shouldDeselectAfterExecution;
-(void)getUserActivityForCommand:(id)arg0 environment:(id)arg1 completionHandler:(id)arg2 ;
-(void)performCommand:(id)arg0 triggerEvent:(NSUInteger)arg1 environment:(id)arg2 ;
-(void)workflowRunnerClient:(id)arg0 didFinishRunningWorkflowWithOutput:(id)arg1 error:(id)arg2 cancelled:(BOOL)arg3 ;
-(void)workflowRunnerClient:(id)arg0 didStartRunningWorkflowWithProgress:(id)arg1 ;


@end


#endif
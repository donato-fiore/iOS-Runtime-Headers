// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIRUNSHORTCUTHANDLER_H
#define SEARCHUIRUNSHORTCUTHANDLER_H

@class ATXActionSearchResultExecution, NSString, WFWorkflowRunnerClient;
@protocol ATXActionSearchResultExecutionDelegate, WFWorkflowRunnerClientDelegate;


#import "SearchUIOpenUserActivityHandler.h"

@interface SearchUIRunShortcutHandler : SearchUIOpenUserActivityHandler <ATXActionSearchResultExecutionDelegate, WFWorkflowRunnerClientDelegate>



@property (retain, nonatomic) ATXActionSearchResultExecution *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) WFWorkflowRunnerClient *workFlowRunnerClient; // ivar: _workFlowRunnerClient


+(id)fallbackCommandForRowModel:(id)arg0 environment:(id)arg1 ;
-(BOOL)shouldDeselectAfterExecution;
-(NSUInteger)destination;
-(void)actionSearchResultExecution:(id)arg0 didDismissRemoteAlertWithReason:(NSInteger)arg1 actionCompleted:(BOOL)arg2 withResult:(NSInteger)arg3 shouldClearAction:(BOOL)arg4 ;
-(void)performCommand:(id)arg0 triggerEvent:(NSUInteger)arg1 environment:(id)arg2 ;
-(void)removeRowModel;
-(void)workflowRunnerClient:(id)arg0 didFinishRunningWorkflowWithOutput:(id)arg1 error:(id)arg2 cancelled:(BOOL)arg3 ;
-(void)workflowRunnerClient:(id)arg0 didStartRunningWorkflowWithProgress:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFRUNWORKFLOWACTION_H
#define WFRUNWORKFLOWACTION_H

@class WFAction, NSString, WFWorkflowController, WFWorkflowRunnerClient, NSProgress;
@protocol WFWorkflowRunnerClientDelegate, WFWorkflowControllerDelegate;



@interface WFRunWorkflowAction : WFAction <WFWorkflowRunnerClientDelegate, WFWorkflowControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) WFWorkflowController *workflowController; // ivar: _workflowController
@property (retain, nonatomic) WFWorkflowRunnerClient *workflowRunnerClient; // ivar: _workflowRunnerClient
@property (retain, nonatomic) NSProgress *workflowRunningProgress; // ivar: _workflowRunningProgress


-(BOOL)workflowController:(id)arg0 handleUnsupportedEnvironmentForAction:(id)arg1 currentState:(id)arg2 completionHandler:(id)arg3 ;
-(BOOL)workflowController:(id)arg0 handleUnsupportedUserInterfaceForAction:(id)arg1 currentState:(id)arg2 completionHandler:(id)arg3 ;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)getWorkflowWithError:(*id)arg0 ;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(id)userInterfaceForWorkflowController:(id)arg0 ;
-(id)workflowController:(id)arg0 parameterInputProviderForAction:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)finishRunningWithError:(id)arg0 ;
-(void)getHandoffWorkflowControllerState:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)setHandoffWorkflowControllerState:(id)arg0 ;
-(void)stop;
-(void)workflowController:(id)arg0 didFinishRunningWithError:(id)arg1 cancelled:(BOOL)arg2 ;
-(void)workflowController:(id)arg0 prepareToRunAction:(id)arg1 withInput:(id)arg2 completionHandler:(id)arg3 ;
-(void)workflowRunnerClient:(id)arg0 didFinishRunningWorkflowWithOutput:(id)arg1 error:(id)arg2 cancelled:(BOOL)arg3 ;
-(void)workflowRunnerClient:(id)arg0 didStartRunningWorkflowWithProgress:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFOPENURLACTION_H
#define WFOPENURLACTION_H

@class WFHandleCustomIntentAction;



@interface WFOpenURLAction : WFHandleCustomIntentAction



-(BOOL)allowsAnyURLDestinationWhenAddedToWorkflowByUser;
-(BOOL)populatesInputFromInputParameter;
-(BOOL)requiresRemoteExecution;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)getContentDestinationWithCompletionHandler:(id)arg0 ;
-(void)openURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)resolveSlot:(id)arg0 withProcessedValue:(id)arg1 parameter:(id)arg2 input:(id)arg3 completion:(id)arg4 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFRUNSSHSCRIPTACTION_H
#define WFRUNSSHSCRIPTACTION_H

@class WFAction, NSString;
@protocol NMSSHSessionDelegate;



@interface WFRunSSHScriptAction : WFAction <NMSSHSessionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)authenticateAndRunAsynchronouslyWithInput:(id)arg0 session:(id)arg1 ;
-(void)finishRunningSSHScriptWithError:(id)arg0 ;
-(void)getContentDestinationWithCompletionHandler:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)session:(id)arg0 didDisconnectWithError:(id)arg1 ;


@end


#endif
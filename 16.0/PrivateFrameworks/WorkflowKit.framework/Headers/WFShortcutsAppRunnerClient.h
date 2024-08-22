// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSHORTCUTSAPPRUNNERCLIENT_H
#define WFSHORTCUTSAPPRUNNERCLIENT_H

@class WFWorkflowRunnerClient;



@interface WFShortcutsAppRunnerClient : WFWorkflowRunnerClient



-(id)initWithIdentifier:(id)arg0 action:(id)arg1 metadata:(id)arg2 runSource:(id)arg3 ;
-(id)initWithWorkflow:(id)arg0 state:(id)arg1 runSource:(id)arg2 input:(id)arg3 remoteDialogPresenterEndpoint:(id)arg4 requestOutput:(BOOL)arg5 ;
-(id)initWithWorkflowData:(id)arg0 runSource:(id)arg1 ;
-(id)runWorkflowWithRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif
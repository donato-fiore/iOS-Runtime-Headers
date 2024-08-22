// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFHANDOFFRUNNERCLIENT_H
#define WFHANDOFFRUNNERCLIENT_H

@class WFWorkflowRunnerClient;



@interface WFHandoffRunnerClient : WFWorkflowRunnerClient



-(id)initWithWorkflowControllerState:(id)arg0 runSource:(id)arg1 remoteDialogPresenterEndpoint:(id)arg2 ;
-(id)runWorkflowWithRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif
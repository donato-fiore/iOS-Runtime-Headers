// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWIDGETWORKFLOWRUNNERCLIENT_H
#define WFWIDGETWORKFLOWRUNNERCLIENT_H



#import "WFWorkflowRunnerClient.h"
#import "WFWorkflowRunningContext.h"

@interface WFWidgetWorkflowRunnerClient : WFWorkflowRunnerClient

@property (readonly, nonatomic) WFWorkflowRunningContext *context;


-(id)initWithWorkflowIdentifier:(id)arg0 ;


@end


#endif
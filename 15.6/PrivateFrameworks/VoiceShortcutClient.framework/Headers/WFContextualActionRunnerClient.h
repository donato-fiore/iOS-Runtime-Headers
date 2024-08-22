// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCONTEXTUALACTIONRUNNERCLIENT_H
#define WFCONTEXTUALACTIONRUNNERCLIENT_H

@protocol WFContextualActionRunnerClientDelegate;


#import "WFWorkflowRunnerClient.h"

@interface WFContextualActionRunnerClient : WFWorkflowRunnerClient

@property (weak, nonatomic) NSObject<WFContextualActionRunnerClientDelegate> *delegate;


-(id)initWithContextualAction:(id)arg0 actionContext:(id)arg1 ;
-(void)handleWorkflowRunResult:(id)arg0 completion:(id)arg1 ;
-(void)start;


@end


#endif
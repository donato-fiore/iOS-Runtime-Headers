// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSHOJISYSTEMACTIONSRUNNERCLIENT_H
#define WFSHOJISYSTEMACTIONSRUNNERCLIENT_H

@protocol WFShojiSystemActionsRunnerClientDelegate;


#import "WFWorkflowRunnerClient.h"

@interface WFShojiSystemActionsRunnerClient : WFWorkflowRunnerClient

@property (weak, nonatomic) NSObject<WFShojiSystemActionsRunnerClientDelegate> *delegate;


-(id)initWithContextualAction:(id)arg0 ;
-(void)handleWorkflowRunResult:(id)arg0 completion:(id)arg1 ;


@end


#endif
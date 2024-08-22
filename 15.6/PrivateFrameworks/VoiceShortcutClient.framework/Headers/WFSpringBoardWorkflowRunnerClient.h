// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSPRINGBOARDWORKFLOWRUNNERCLIENT_H
#define WFSPRINGBOARDWORKFLOWRUNNERCLIENT_H

@class NSString;
@protocol WFWorkflowRunnerClientDelegate;


#import "WFWorkflowRunnerClient.h"
#import "WFSpringBoardWebClipMetadata.h"
#import "WFSpringBoardWorkflowRunnerClient.h"

@interface WFSpringBoardWorkflowRunnerClient : WFWorkflowRunnerClient <WFWorkflowRunnerClientDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFSpringBoardWebClipMetadata *metadata; // ivar: _metadata
@property (retain, nonatomic) WFSpringBoardWorkflowRunnerClient *retainedSelf; // ivar: _retainedSelf
@property (readonly) Class superclass;


-(id)initWithWebClipMetadata:(id)arg0 ;
-(id)initWithWorkflowIdentifier:(id)arg0 ;
-(void)showSingleStepCompletionWithCompletion:(id)arg0 ;
-(void)start;
-(void)workflowRunnerClient:(id)arg0 didFinishRunningWorkflowWithError:(id)arg1 cancelled:(BOOL)arg2 ;


@end


#endif
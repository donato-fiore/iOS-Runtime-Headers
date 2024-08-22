// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXACTIONSEARCHRESULTEXECUTION_H
#define ATXACTIONSEARCHRESULTEXECUTION_H

@class NSString, SFSearchResult, WFSuggestionsWorkflowRunnerClient;
@protocol WFWorkflowRunnerClientDelegate, ATXActionSearchResultExecutionDelegate;

#import <Foundation/Foundation.h>


@interface ATXActionSearchResultExecution : NSObject <WFWorkflowRunnerClientDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ATXActionSearchResultExecutionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SFSearchResult *searchResult; // ivar: _searchResult
@property (readonly) Class superclass;
@property (retain, nonatomic) WFSuggestionsWorkflowRunnerClient *workflowRunnerClient; // ivar: _workflowRunnerClient


-(BOOL)_shouldTellDelegateToClearActionOnDismissal:(NSInteger)arg0 ;
-(void)_spawnShortcutExecutionWithShortcut:(id)arg0 executionContext:(NSInteger)arg1 ;
-(void)executeShortcut;
-(void)workflowRunnerClient:(id)arg0 didFinishRunningWorkflowWithOutput:(id)arg1 error:(id)arg2 cancelled:(BOOL)arg3 ;
-(void)workflowRunnerClient:(id)arg0 didStartRunningWorkflowWithProgress:(id)arg1 ;


@end


#endif
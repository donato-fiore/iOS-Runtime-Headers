// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIMEDIACOMMAND_H
#define SEARCHUIMEDIACOMMAND_H

@class NSString, INIntent, SFMediaMetadata, WFSpotlightResultWorkflowRunnerClient;
@protocol WFWorkflowRunnerClientDelegate;


#import "SearchUITapCommand.h"

@interface SearchUIMediaCommand : SearchUITapCommand <WFWorkflowRunnerClientDelegate>



@property (readonly) NSString *clientSelectedBundleIdentifier; // ivar: _clientSelectedBundleIdentifier
@property (copy) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) INIntent *intent; // ivar: _intent
@property (readonly) SFMediaMetadata *mediaMetadata; // ivar: _mediaMetadata
@property (readonly) Class superclass;
@property (readonly) BOOL supportsIntentPath; // ivar: _supportsIntentPath
@property (retain) WFSpotlightResultWorkflowRunnerClient *workflowClient; // ivar: _workflowClient


-(BOOL)prefersModalPresentation;
-(void)callCompletionIfNeeded;
-(void)executeFallbackPath;
-(void)performCommandWithCompletion:(id)arg0 ;
-(void)performIntent:(id)arg0 withBundleIdentifier:(id)arg1 ;
-(void)workflowRunnerClient:(id)arg0 didFinishRunningWorkflowWithOutput:(id)arg1 error:(id)arg2 cancelled:(BOOL)arg3 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUIMEDIAHANDLER_H
#define SEARCHUIMEDIAHANDLER_H

@class NSString, INIntent, SFMediaMetadata, WFSpotlightResultWorkflowRunnerClient;
@protocol WFWorkflowRunnerClientDelegate;


#import "SearchUICommandHandler.h"

@interface SearchUIMediaHandler : SearchUICommandHandler <WFWorkflowRunnerClientDelegate>



@property (readonly) NSString *clientSelectedBundleIdentifier; // ivar: _clientSelectedBundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) INIntent *intent; // ivar: _intent
@property (readonly) SFMediaMetadata *mediaMetadata; // ivar: _mediaMetadata
@property (readonly) Class superclass;
@property (readonly) BOOL supportsIntentPath; // ivar: _supportsIntentPath
@property (retain) WFSpotlightResultWorkflowRunnerClient *workflowClient; // ivar: _workflowClient


-(BOOL)prefersModalPresentation;
-(void)executeFallbackPath;
-(void)performCommand:(id)arg0 triggerEvent:(NSUInteger)arg1 environment:(id)arg2 ;
-(void)performIntent:(id)arg0 withBundleIdentifier:(id)arg1 ;
-(void)workflowRunnerClient:(id)arg0 didFinishRunningWorkflowWithOutput:(id)arg1 error:(id)arg2 cancelled:(BOOL)arg3 ;


@end


#endif
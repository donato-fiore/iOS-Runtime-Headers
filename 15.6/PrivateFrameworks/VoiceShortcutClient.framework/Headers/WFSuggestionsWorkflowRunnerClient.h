// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSUGGESTIONSWORKFLOWRUNNERCLIENT_H
#define WFSUGGESTIONSWORKFLOWRUNNERCLIENT_H

@class NSDictionary;


#import "WFWorkflowRunnerClient.h"

@interface WFSuggestionsWorkflowRunnerClient : WFWorkflowRunnerClient

@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(id)allSuggestionsRunSources;
-(id)initWithINShortcut:(id)arg0 executionContext:(NSInteger)arg1 ;
-(id)initWithINShortcut:(id)arg0 executionContext:(NSInteger)arg1 remoteDialogPresenterEndpoint:(id)arg2 ;


@end


#endif
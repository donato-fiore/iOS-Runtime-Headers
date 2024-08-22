// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APUIACTIONSUGGESTIONVIEW_H
#define APUIACTIONSUGGESTIONVIEW_H

@class ATXAction, UITapGestureRecognizer, WFSuggestionsWorkflowRunnerClient, NSString;
@protocol WFWorkflowRunnerClientDelegate;


#import "APUISuggestionView.h"

@interface APUIActionSuggestionView : APUISuggestionView <WFWorkflowRunnerClientDelegate>

 {
    ATXAction *_atxAction;
    UITapGestureRecognizer *_tapRecognizer;
    WFSuggestionsWorkflowRunnerClient *_workflowRunnerClient;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_tapRecognized:(id)arg0 ;
-(void)layoutSuggestion:(id)arg0 ;
-(void)workflowRunnerClient:(id)arg0 didFinishRunningWorkflowWithOutput:(id)arg1 error:(id)arg2 cancelled:(BOOL)arg3 ;
-(void)workflowRunnerClient:(id)arg0 didStartRunningWorkflowWithProgress:(id)arg1 ;


@end


#endif
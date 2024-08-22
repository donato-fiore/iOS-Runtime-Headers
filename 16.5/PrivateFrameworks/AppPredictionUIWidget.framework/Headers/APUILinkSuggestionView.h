// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APUILINKSUGGESTIONVIEW_H
#define APUILINKSUGGESTIONVIEW_H

@class ATXLinkActionContainer, UITapGestureRecognizer, WFWorkflowRunnerClient, NSString;
@protocol WFWorkflowRunnerClientDelegate;


#import "APUISuggestionView.h"

@interface APUILinkSuggestionView : APUISuggestionView <WFWorkflowRunnerClientDelegate>

 {
    ATXLinkActionContainer *_linkAction;
    UITapGestureRecognizer *_tapRecognizer;
    WFWorkflowRunnerClient *_workflowRunnerClient;
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
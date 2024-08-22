// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFEDITORVIEWCONTROLLER_H
#define WFEDITORVIEWCONTROLLER_H

@class UIViewController, WFContextualActionSuggester, HMHome, WFWorkflow, NSProgress;
@protocol WFEditorHostingViewControllerDelegate, WFEditorAuxiliaryViewPresenter, WFEditorViewControllerDelegate;


#import "WFEditorHostingViewController.h"

@interface WFEditorViewController : UIViewController <WFEditorHostingViewControllerDelegate>



@property (retain, nonatomic) WFContextualActionSuggester *actionSuggester; // ivar: _actionSuggester
@property (weak, nonatomic) NSObject<WFEditorAuxiliaryViewPresenter> *auxiliaryViewPresenter; // ivar: _auxiliaryViewPresenter
@property (nonatomic) BOOL canShowEmptyState;
@property (nonatomic) BOOL canShowInputAction;
@property (weak, nonatomic) NSObject<WFEditorViewControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isEditable) BOOL editable;
@property (nonatomic) HMHome *home;
@property (readonly, nonatomic) WFEditorHostingViewController *hostingViewController; // ivar: _hostingViewController
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic) WFWorkflow *workflow; // ivar: _workflow
@property (readonly, nonatomic) NSProgress *workflowRunningProgress;


-(id)contentScrollViewForEdge:(NSUInteger)arg0 ;
-(id)initWithWorkflow:(id)arg0 ;
-(void)actionsDidChangeInEditorHostingViewController:(id)arg0 ;
-(void)appendAction:(id)arg0 ;
-(void)editorHostingViewController:(id)arg0 didChangeRunningState:(BOOL)arg1 isWaiting:(BOOL)arg2 ;
-(void)editorHostingViewController:(id)arg0 didChangeVariablePickingState:(BOOL)arg1 ;
-(void)editorHostingViewControllerDidFinishRunning:(id)arg0 cancelled:(BOOL)arg1 ;
-(void)loadView;
-(void)performScrollingTest:(id)arg0 ;
-(void)reportSuggestionSessionEnded;
-(void)runWithSource:(id)arg0 ;
-(void)scrollToAction:(id)arg0 ;
-(void)showActionError:(id)arg0 for:(id)arg1 ;
-(void)stop;
-(void)stopPickingVariables;


@end


#endif
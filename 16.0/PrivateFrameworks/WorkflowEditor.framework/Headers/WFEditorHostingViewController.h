// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFEDITORHOSTINGVIEWCONTROLLER_H
#define WFEDITORHOSTINGVIEWCONTROLLER_H

@class UIViewController, WFContextualActionSuggester, WFAction, HMHome, NSProgress;
@protocol _TtP14WorkflowEditor26WorkflowEditorViewDelegate_, WFWorkflowEditingDelegate, WFEditorAuxiliaryViewPresenter, WFEditorHostingViewControllerDelegate;



@interface WFEditorHostingViewController : UIViewController <_TtP14WorkflowEditor26WorkflowEditorViewDelegate_, WFWorkflowEditingDelegate>

 {
    ? workflow;
    ? hostingViewController;
    ? editorOptions;
    ? actionList;
    ? observers;
    ? runner;
    ? coordinateSpaceName;
}


@property (nonatomic, retain) WFContextualActionSuggester *actionSuggester; // ivar: actionSuggester
@property (nonatomic, weak) NSObject<WFEditorAuxiliaryViewPresenter> *auxiliaryViewPresenter; // ivar: auxiliaryViewPresenter
@property (nonatomic) BOOL canShowEmptyState;
@property (nonatomic) BOOL canShowInputAction;
@property (nonatomic, readonly) WFAction *currentlyRunningAction;
@property (nonatomic, weak) NSObject<WFEditorHostingViewControllerDelegate> *delegate; // ivar: delegate
@property (nonatomic, retain) HMHome *home;
@property (nonatomic) BOOL isEditable;
@property (nonatomic, readonly) BOOL isHomeWorkflow;
@property (nonatomic, readonly) BOOL isRunning;
@property (nonatomic, readonly) BOOL isWaiting;
@property (nonatomic, readonly) NSProgress *workflowRunningProgress;


-(?)workflow:(?)arg0 removeActioncompletionHandler;
-(id)contentScrollViewForEdge:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithWorkflow:(id)arg0 ;
-(void)appendAction:(id)arg0 selectionAware:(BOOL)arg1 ;
-(void)insertAction:(id)arg0 at:(NSInteger)arg1 ;
-(void)insertActions:(id)arg0 at:(NSInteger)arg1 ;
-(void)loadView;
-(void)moveActionsFrom:(id)arg0 to:(id)arg1 ;
-(void)performScrollingTest:(id)arg0 ;
-(void)removeActions:(id)arg0 mode:(NSInteger)arg1 ;
-(void)runWithSource:(id)arg0 ;
-(void)scrollToAction:(id)arg0 ;
-(void)showActionError:(id)arg0 for:(id)arg1 ;
-(void)startPickingParametersForImportQuestionsWithExcluding:(id)arg0 onSelect:(id)arg1 ;
-(void)stop;
-(void)stopPickingVariables;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)workflow:(id)arg0 insertActions:(id)arg1 atIndexes:(id)arg2 ;
-(void)workflow:(id)arg0 moveActionsAtIndexes:(id)arg1 toIndexes:(id)arg2 ;


@end


#endif
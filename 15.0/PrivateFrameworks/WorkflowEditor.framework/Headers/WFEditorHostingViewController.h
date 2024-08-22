// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFEDITORHOSTINGVIEWCONTROLLER_H
#define WFEDITORHOSTINGVIEWCONTROLLER_H

@class UIViewController, WFAction, NSProgress;
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


@property (nonatomic, weak) NSObject<WFEditorAuxiliaryViewPresenter> *auxiliaryViewPresenter; // ivar: auxiliaryViewPresenter
@property (nonatomic) BOOL canShowEmptyState;
@property (nonatomic) BOOL canShowInputAction;
@property (nonatomic, readonly) WFAction *currentlyRunningAction;
@property (nonatomic, weak) NSObject<WFEditorHostingViewControllerDelegate> *delegate; // ivar: delegate
@property (nonatomic) BOOL isEditable;
@property (nonatomic) BOOL isHomeWorkflow;
@property (nonatomic, readonly) BOOL isRunning;
@property (nonatomic, readonly) BOOL isWaiting;
@property (nonatomic, readonly) NSProgress *workflowRunningProgress;


-(?)workflow:(?)arg0 removeActioncompletionHandler;
-(id)contentScrollViewForEdge:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithWorkflow:(id)arg0 ;
-(void)appendAction:(id)arg0 ;
-(void)insertAction:(id)arg0 at:(NSInteger)arg1 ;
-(void)insertActions:(id)arg0 at:(NSInteger)arg1 ;
-(void)loadView;
-(void)moveActionsFrom:(id)arg0 to:(id)arg1 ;
-(void)performScrollingTest:(id)arg0 ;
-(void)removeActions:(id)arg0 ;
-(void)runWithSource:(id)arg0 ;
-(void)scrollToAction:(id)arg0 ;
-(void)startPickingParametersForImportQuestionsWithExcluding:(id)arg0 onSelect:(id)arg1 ;
-(void)stop;
-(void)stopPickingVariables;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)workflow:(id)arg0 actionForSuggestionsDrawerDidUpdateOutputContentClasses:(id)arg1 ;
-(void)workflow:(id)arg0 insertActions:(id)arg1 atIndexes:(id)arg2 ;
-(void)workflow:(id)arg0 moveActionsAtIndexes:(id)arg1 toIndexes:(id)arg2 ;
-(void)workflow:(id)arg0 reloadActions:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCOMPOSEVIEWCONTROLLER_H
#define WFCOMPOSEVIEWCONTROLLER_H

@class UIViewController, WFDatabase, NSString, NSMutableArray, WFEditorViewController, HMHome, NSHashTable, UIView, UIButton, UILabel, WFRunWorkflowToolbar, NSUndoManager, WFWorkflow;
@protocol WFComposeFlowControllerDelegate, WFWorkflowSettingsViewControllerDelegate, WFDrawerControllerDelegate, WFSwiftUIActionDrawerCoordinatorDelegate, UINavigationBarDelegate, WFEditorViewControllerDelegate, WFRunWorkflowToolbarDelegate, WFSwiftUIActionDescriptionViewControllerDelegate, WFEditorAuxiliaryViewPresenter, WFInspectorPaneSegmentedControlDelegate, UIPopoverPresentationControllerDelegate, WFShortcutIconEditorViewControllerDelegate, UINavigationItemRenameDelegate, WFAddToHomeScreenActivityDelegate, WFComposeViewControllerDelegate, WFEditorDocumentMenuDelegate, WFComposeViewControllerPresenter;


#import "WFAddToHomeScreenActivity.h"
#import "WFSwiftUIActionDrawerCoordinator.h"
#import "WFComposeFlowController.h"
#import "WFMoveToFolderCoordinator.h"
#import "WFWorkflowSettingsViewController.h"
#import "WFComposeUserActivityManager.h"

@interface WFComposeViewController : UIViewController <WFComposeFlowControllerDelegate, WFWorkflowSettingsViewControllerDelegate, WFDrawerControllerDelegate, WFSwiftUIActionDrawerCoordinatorDelegate, UINavigationBarDelegate, WFEditorViewControllerDelegate, WFRunWorkflowToolbarDelegate, WFSwiftUIActionDescriptionViewControllerDelegate, WFEditorAuxiliaryViewPresenter, WFInspectorPaneSegmentedControlDelegate, UIPopoverPresentationControllerDelegate, WFShortcutIconEditorViewControllerDelegate, UINavigationItemRenameDelegate, WFAddToHomeScreenActivityDelegate>



@property (retain, nonatomic) WFAddToHomeScreenActivity *addToHomeScreenActivity; // ivar: _addToHomeScreenActivity
@property (readonly, nonatomic) CGFloat bottomContentInset; // ivar: _bottomContentInset
@property (readonly, nonatomic) BOOL canExpandDrawerAsAuxiliaryViewPresenter;
@property (readonly, nonatomic) WFDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFComposeViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) WFSwiftUIActionDrawerCoordinator *drawerCoordinator; // ivar: _drawerCoordinator
@property (readonly, nonatomic) NSUInteger editingState;
@property (readonly, nonatomic) NSMutableArray *editingStates; // ivar: _editingStates
@property (weak, nonatomic) NSObject<WFEditorDocumentMenuDelegate> *editorDocumentMenuDelegate; // ivar: _editorDocumentMenuDelegate
@property (readonly, nonatomic) WFEditorViewController *editorViewController; // ivar: _editorViewController
@property (retain, nonatomic) WFComposeFlowController *flowController; // ivar: _flowController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) BOOL isEditingNewWorkflow; // ivar: _isEditingNewWorkflow
@property (readonly, nonatomic) BOOL isNewShortcutFlow;
@property (nonatomic) BOOL isRenameSessionActive; // ivar: _isRenameSessionActive
@property (retain, nonatomic) WFMoveToFolderCoordinator *moveCoordinator; // ivar: _moveCoordinator
@property (readonly, nonatomic) NSHashTable *movedDragControllers; // ivar: _movedDragControllers
@property (readonly, nonatomic) NSUInteger navigationUpdateBehavior;
@property (nonatomic) BOOL observingSharingEnabledUserDefault; // ivar: _observingSharingEnabledUserDefault
@property (weak, nonatomic) NSObject<WFComposeViewControllerPresenter> *presenter; // ivar: _presenter
@property (readonly, weak, nonatomic) UIView *separatorView; // ivar: _separatorView
@property (readonly, weak, nonatomic) UIButton *settingsButton; // ivar: _settingsButton
@property (readonly, nonatomic) WFWorkflowSettingsViewController *settingsViewController; // ivar: _settingsViewController
@property (nonatomic) BOOL shouldShowShareButton; // ivar: _shouldShowShareButton
@property (readonly) Class superclass;
@property (retain, nonatomic) UIButton *titleAccessorySettingsButton; // ivar: _titleAccessorySettingsButton
@property (retain, nonatomic) UILabel *titleViewLabel; // ivar: _titleViewLabel
@property (retain, nonatomic) UIButton *titleViewSettingsButton; // ivar: _titleViewSettingsButton
@property (retain, nonatomic) WFRunWorkflowToolbar *toolbar; // ivar: _toolbar
@property (readonly, nonatomic) NSUndoManager *undoManager; // ivar: _undoManager
@property (retain, nonatomic) WFComposeUserActivityManager *userActivityManager; // ivar: _userActivityManager
@property (readonly, nonatomic) WFWorkflow *workflow; // ivar: _workflow


+(BOOL)canShowInputAction;
-(BOOL)accessibilityPerformEscape;
-(BOOL)accessibilityPerformMagicTap;
-(BOOL)canBecomeFirstResponder;
-(BOOL)displaysInlineRenameInHeader;
-(BOOL)needsAdditionalSpaceInNavBar;
-(BOOL)settingsViewControllerWantsToKnowIfNewShortcutFlow:(id)arg0 ;
-(BOOL)shouldUseOverlaidDrawer;
-(BOOL)showsSettingsToolbarButton;
-(BOOL)usesDocumentMenu;
-(NSInteger)positionForBar:(id)arg0 ;
-(NSUInteger)visibleToolbarPlacement;
-(id)activityControllerWithFileActivity:(id)arg0 sender:(id)arg1 ;
-(id)cancelBarButtonItem;
-(id)dismissingScrollViewForDrawerController:(id)arg0 ;
-(id)doneBarButtonItem;
-(id)drawerController;
-(id)drawerHostingViewController;
-(id)drawerViewController;
-(id)emptyStateString;
-(id)findViewInNavigationBarWithName:(id)arg0 ;
-(id)initWithWorkflow:(id)arg0 database:(id)arg1 ;
-(id)initWithWorkflow:(id)arg0 database:(id)arg1 home:(id)arg2 shouldShowShareButton:(BOOL)arg3 ;
-(id)keyCommands;
-(id)navigationItem:(id)arg0 willBeginRenamingWithSuggestedTitle:(id)arg1 selectedRange:(struct _NSRange *)arg2 ;
-(id)placeholderName;
-(id)settingsBarButtonItem;
-(id)settingsButtonWithConfiguration:(id)arg0 ;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)actionsDidChangeInEditorViewController:(id)arg0 ;
-(void)addAskForInputActionFromKeyPress;
-(void)addChooseFromMenuActionFromKeyPress;
-(void)addCommentActionFromKeyPress;
-(void)addConditionalActionFromKeyPress;
-(void)addRepeatCountActionFromKeyPress;
-(void)addRepeatEachActionFromKeyPress;
-(void)addSetVariableActionFromKeyPress;
-(void)addShowResultActionFromKeyPress;
-(void)adjustLargeTitleSize;
-(void)appendAction:(id)arg0 ;
-(void)appendActionWithIdentifier:(id)arg0 ;
-(void)beginEditing;
-(void)collapseDrawerAsAuxiliaryViewPresenter;
-(void)composeFlowControllerDidFinishEditing:(id)arg0 ;
-(void)dealloc;
-(void)didTapCancel:(id)arg0 ;
-(void)didTapDone;
-(void)didTapDone:(id)arg0 ;
-(void)didTapNext;
-(void)dismissForTutorial:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)drawerController:(id)arg0 didTransitionToVisibility:(NSUInteger)arg1 ;
-(void)drawerController:(id)arg0 willTransitionToVisibility:(NSUInteger)arg1 ;
-(void)editorViewController:(id)arg0 didChangeRunningState:(BOOL)arg1 ;
-(void)editorViewController:(id)arg0 didChangeVariablePickingState:(BOOL)arg1 ;
-(void)expandDrawer;
-(void)expandDrawerAsAuxiliaryViewPresenter;
-(void)finishEditing;
-(void)finishEditingAndDismissForTutorial:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)homeScreenActivityDidFinish:(id)arg0 success:(BOOL)arg1 ;
-(void)iconEditorWillDisappear:(id)arg0 ;
-(void)inspectorPaneSegmentedControl:(id)arg0 didSelectPane:(NSInteger)arg1 ;
-(void)layoutTitleView;
-(void)loadView;
-(void)navigationItem:(id)arg0 didEndRenamingWithTitle:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)popEditingState:(NSUInteger)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)presentAddToHomeScreenWithSource:(id)arg0 ;
-(void)presentDrawerViewControllerAsAuxiliaryViewPresenter:(id)arg0 inPopover:(BOOL)arg1 sourceRect:(struct CGRect )arg2 ;
-(void)presentIconPickerWithSourceItem:(id)arg0 ;
-(void)presentSettingsViewController;
-(void)presentShortcutDetailsAsAuxiliaryViewPresenter;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)pushEditingState:(NSUInteger)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)redoLastWorkflowEdit;
-(void)renameWorkflow;
-(void)runToolbarPlayTapped:(id)arg0 ;
-(void)runToolbarRedoTapped:(id)arg0 ;
-(void)runToolbarSettingsTapped:(id)arg0 ;
-(void)runToolbarShareTapped:(id)arg0 sender:(id)arg1 ;
-(void)runToolbarStopTapped:(id)arg0 ;
-(void)runToolbarUndoTapped:(id)arg0 ;
-(void)runWorkflowFromKeyPress;
-(void)searchActions;
-(void)setUpToolbar;
-(void)settingsViewControllerWantsWorkflowReload:(id)arg0 ;
-(void)setupDrawerIfNeeded;
-(void)shareWorkflowWithSender:(id)arg0 ;
-(void)stopWorkflow;
-(void)swiftUIActionDrawerCoordinator:(id)arg0 didAppendAction:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)undoLastWorkflowEdit;
-(void)updateBackActionForDocumentMenu;
-(void)updateBottomContentInsetForVisibility:(NSUInteger)arg0 ;
-(void)updateDocumentMenuWithTitle:(id)arg0 navigationItem:(id)arg1 ;
-(void)updateDrawerVisibility;
-(void)updateEditingStateAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)updateNavigationBarStateAnimated:(BOOL)arg0 ;
-(void)updateShareButtonVisibility;
-(void)updateTitleItemIfNeeded;
-(void)updateTitleView:(id)arg0 ;
-(void)updateToolbarVisibility;
-(void)updateUserActivityState:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif
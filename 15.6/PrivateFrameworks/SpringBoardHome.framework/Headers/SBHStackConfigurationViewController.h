// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHSTACKCONFIGURATIONVIEWCONTROLLER_H
#define SBHSTACKCONFIGURATIONVIEWCONTROLLER_H

@class UIViewController, CCUILabeledRoundButtonViewController, MTMaterialView, NSLayoutConstraint, BSUIScrollView, UIPageControl, UIView, NSTimer, NSMutableSet, NSHashTable, NSMutableDictionary, NSSet, NSString;
@protocol SBHStackConfigurationAnimationCoordinating, SBHScrollableIconViewContaining, SBUICoronaAnimationControllerParticipant, SBIconViewDelegate, SBLeafIconObserver, BSUIScrollViewDelegate, SBIconListModelObserver, SBIconListViewDragDelegate, SBIconDragManagerDelegate, SBHWidgetSheetViewControlling, SBHWidgetSheetViewControllerPresenter, SBIconListLayoutProvider, SBIconViewProviding, SBHStackConfigurationViewControllerDelegate, SBLeafIconDataSource;


#import "SBHRootFolderVisualConfiguration.h"
#import "SBHStackConfiguration.h"
#import "SBHWidgetSettings.h"
#import "SBIconDragManager.h"
#import "SBIconListView.h"
#import "SBIconView.h"
#import "SBRootFolder.h"
#import "SBHStackConfigurationBackgroundViewController.h"
#import "SBHStackConfigurationBackgroundDimmingView.h"
#import "SBHStackConfigurationApertureView.h"
#import "SBHScrollableIconViewInteraction.h"
#import "SBTitledHomeScreenButton.h"
#import "SBHIconModel.h"

@interface SBHStackConfigurationViewController : UIViewController <SBHStackConfigurationAnimationCoordinating, SBHScrollableIconViewContaining, SBUICoronaAnimationControllerParticipant, SBIconViewDelegate, SBLeafIconObserver, BSUIScrollViewDelegate, SBIconListModelObserver, SBIconListViewDragDelegate, SBIconDragManagerDelegate, SBHWidgetSheetViewControlling, SBHWidgetSheetViewControllerPresenter>

 {
    SBHRootFolderVisualConfiguration *_rootFolderVisualConfiguration;
    id<SBIconListLayoutProvider> *_listLayoutProvider;
    id<SBIconViewDelegate> *_defaultIconViewDelegate;
    id<SBIconViewProviding> *_iconViewProvider;
    SBHStackConfiguration *_configuration;
    SBHWidgetSettings *_widgetSettings;
    SBIconDragManager *_iconDragManager;
    SBIconImageInfo _iconImageInfo;
    SBIconListView *_iconListView;
    SBIconView *_stackIconView;
    SBRootFolder *_rootFolder;
    CGSize _scaledIconSpacing;
    SBHStackConfigurationBackgroundViewController *_backgroundViewController;
    CCUILabeledRoundButtonViewController *_smartRotateButtonViewController;
    CCUILabeledRoundButtonViewController *_suggestionsButtonViewController;
    MTMaterialView *_backgroundMaterialView;
    SBHStackConfigurationBackgroundDimmingView *_backgroundDimmingView;
    SBHStackConfigurationApertureView *_apertureView;
    NSLayoutConstraint *_apertureCenterXConstraint;
    NSLayoutConstraint *_apertureCenterYConstraint;
    NSLayoutConstraint *_apertureHeightConstraint;
    NSLayoutConstraint *_apertureSizeConstraint;
    SBHScrollableIconViewInteraction *_scrollingInteraction;
    BSUIScrollView *_scrollView;
    NSLayoutConstraint *_pageControlOutsetConstraint;
    UIPageControl *_pageControl;
    UIView *_scalingView;
    UIView *_contentView;
    NSUInteger _scrollPositionNeed;
    BOOL _needsDoneButton;
    BOOL _needsAddButton;
    NSTimer *_closeConfigurationTimer;
    BOOL _grabbedIconHasEverEnteredStackConfigurationView;
    NSMutableSet *_draggingEnteredIconListViews;
    NSHashTable *_keepStaticAssertions;
    NSMutableDictionary *_userInfo;
}


@property (retain, nonatomic) SBTitledHomeScreenButton *addButton; // ivar: _addButton
@property (readonly, nonatomic) NSSet *apertureBackgroundViews;
@property (readonly, nonatomic) UIView *configurationView;
@property (nonatomic) CGRect contentBoundingFrame; // ivar: _contentBoundingFrame
@property (retain, nonatomic) SBIconView *currentConfiguringIconView; // ivar: _currentConfiguringIconView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBHStackConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SBTitledHomeScreenButton *doneButton; // ivar: _doneButton
@property (nonatomic, getter=isEditing) BOOL editing;
@property (readonly, nonatomic) NSSet *fadingViews;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isIconContentPossiblyVisibleOverApplication) BOOL iconContentPossiblyVisibleOverApplication;
@property (readonly, nonatomic) SBIconListView *iconListView;
@property (readonly, nonatomic) SBHIconModel *iconModel;
@property (readonly, nonatomic) NSSet *materialViews;
@property (nonatomic, getter=isOverlayLibraryViewVisible) BOOL overlayLibraryViewVisible;
@property (nonatomic, getter=isOverlayTodayViewVisible) BOOL overlayTodayViewVisible;
@property (weak, nonatomic) NSObject<SBHWidgetSheetViewControllerPresenter> *presenter; // ivar: _presenter
@property (readonly, nonatomic, getter=isRootFolderContentVisible) BOOL rootFolderContentVisible;
@property (nonatomic, getter=isScrolling) BOOL scrolling;
@property (readonly, nonatomic) SBIconView *sourceIconView;
@property (readonly, nonatomic) SBIconView *sourceStackIconView;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat titledButtonsAlpha; // ivar: _titledButtonsAlpha
@property (nonatomic, getter=isTrackingScroll) BOOL trackingScroll;
@property (readonly, nonatomic) NSMutableDictionary *userInfo;
@property (readonly, nonatomic) NSObject<SBLeafIconDataSource> *visiblyActiveDataSource;
@property (readonly, nonatomic) UIView *visiblyActiveDataSourceSnapshotView;
@property (readonly, nonatomic) NSSet *widgetBackgroundViews;
@property (readonly, nonatomic) UIView *widgetContentContainerView;
@property (readonly, nonatomic) UIView *widgetStackMatchingBackgroundView;


-(BOOL)_allowUserInteraction;
-(BOOL)_canAddAdditionalWidgets;
-(BOOL)_shouldKeepIconImageViewControllersStatic;
-(BOOL)_shouldUseConcentricCornersWhenExpanded;
-(BOOL)_widgetDataSourceIsSuggestion:(id)arg0 ;
-(BOOL)closesAfterDragExits;
-(BOOL)hidesPresenterTitledButtons;
-(BOOL)icon:(id)arg0 canReceiveGrabbedIcon:(id)arg1 ;
-(BOOL)iconDragManager:(id)arg0 doesIconViewRepresentRealIconPosition:(id)arg1 ;
-(BOOL)iconListView:(id)arg0 canHandleIconDropSession:(id)arg1 ;
-(BOOL)iconListView:(id)arg0 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg1 onIconView:(id)arg2 ;
-(BOOL)iconShouldAllowAccessoryViewTap:(id)arg0 ;
-(BOOL)iconShouldAllowCloseBoxTap:(id)arg0 ;
-(BOOL)iconView:(id)arg0 canAddDragItemsToSession:(id)arg1 ;
-(BOOL)iconView:(id)arg0 supportsConfigurationForDataSource:(id)arg1 ;
-(BOOL)iconViewCanBecomeFocused:(id)arg0 ;
-(BOOL)iconViewCanBeginDrags:(id)arg0 ;
-(BOOL)iconViewDisplaysAccessories:(id)arg0 ;
-(BOOL)iconViewDisplaysCloseBox:(id)arg0 ;
-(BOOL)iconViewDisplaysLabel:(id)arg0 ;
-(BOOL)isDisplayingEditingButtons;
-(CGFloat)_expandedPageControlOutset;
-(CGFloat)_iconContentScale;
-(NSInteger)closeBoxTypeForIconView:(id)arg0 ;
-(NSInteger)iconView:(id)arg0 accessoryTypeWithProposedAccessoryType:(NSInteger)arg1 ;
-(NSUInteger)_sourceActiveWidgetIndex;
-(NSUInteger)_widgetIndexForContentOffset:(struct CGPoint )arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_newHomeScreenButtonBackgroundView;
-(id)_unraveledWidgetIconForDataSource:(id)arg0 withGridSizeClass:(NSUInteger)arg1 ;
-(id)actionDelegateForIconView:(id)arg0 ;
-(id)animationCoordinator;
-(id)behaviorDelegateForIconView:(id)arg0 ;
-(id)configurationUIDelegateForIconView:(id)arg0 ;
-(id)customImageViewControllerForIconView:(id)arg0 ;
-(id)dragItemsForIconView:(id)arg0 ;
-(id)draggingDelegateForIconView:(id)arg0 ;
-(id)iconDragManager:(id)arg0 dragPreviewForIconView:(id)arg1 ;
-(id)iconDragManager:(id)arg0 draggedIconForIdentifier:(id)arg1 ;
-(id)iconListView:(id)arg0 customSpringAnimationBehaviorForDroppingItem:(id)arg1 ;
-(id)iconListView:(id)arg0 iconDropSessionDidUpdate:(id)arg1 ;
-(id)iconListView:(id)arg0 iconViewForDroppingIconDragItem:(id)arg1 proposedIconView:(id)arg2 ;
-(id)iconListView:(id)arg0 previewForDroppingIconDragItem:(id)arg1 proposedPreview:(id)arg2 ;
-(id)iconListViewForIndexPath:(id)arg0 ;
-(id)iconView:(id)arg0 configurationInteractionForDataSource:(id)arg1 ;
-(id)iconView:(id)arg0 containerViewControllerForConfigurationInteraction:(id)arg1 ;
-(id)iconView:(id)arg0 dragPreviewForItem:(id)arg1 session:(id)arg2 previewParameters:(id)arg3 ;
-(id)iconView:(id)arg0 homeScreenContentViewForConfigurationInteraction:(id)arg1 ;
-(id)iconViewDelegateForExternalDragForIconDragManager:(id)arg0 ;
-(id)iconViewQueryableForIconDragManager:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 iconView:(id)arg1 iconViewProvider:(id)arg2 listLayoutProvider:(id)arg3 showsAddButton:(BOOL)arg4 showsDoneButton:(BOOL)arg5 ;
-(id)keepIconImageViewControllersStaticForReason:(id)arg0 ;
-(id)makeTitledButtonOfClass:(Class)arg0 ;
-(id)nonEditingStatusBarHidingReason;
-(id)reuseDelegateForIconView:(id)arg0 ;
-(id)rootFolderForIconDragManager:(id)arg0 ;
-(id)rootViewForIconDragManager:(id)arg0 ;
-(id)shortcutsDelegateForIconView:(id)arg0 ;
-(id)stackConfigurationInteractionForIconView:(id)arg0 ;
-(id)widgetInsertionRippleIconAnimatorForIcon:(id)arg0 iconListView:(id)arg1 withReferenceIconView:(id)arg2 ;
-(struct CGPoint )_targetContentOffsetForWidgetIndex:(NSUInteger)arg0 ;
-(struct CGRect )iconView:(id)arg0 contentBoundingRectForConfigurationInteraction:(id)arg1 ;
-(struct CGSize )_stableApertureSize;
-(struct UIEdgeInsets )visibleContainerInsets;
-(void)_cancelAllInteractionTimers;
-(void)_cancelCloseConfigurationTimer;
-(void)_closeConfigurationTimerFired;
-(void)_didChangePageControlPage:(id)arg0 ;
-(void)_didTapAddWidgetButton:(id)arg0 ;
-(void)_didTapBackgroundView:(id)arg0 ;
-(void)_didTapDoneButton:(id)arg0 ;
-(void)_didToggleSmartRotate:(id)arg0 ;
-(void)_didToggleSuggestions:(id)arg0 ;
-(void)_iconListDidChangeWidgetIcons;
-(void)_promoteWidgetIcon:(id)arg0 ;
-(void)_requestDismissal;
-(void)_saveConfiguration;
-(void)_scrollToWidgetIndex:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)_scrollToWidgetIndex:(NSUInteger)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_setCloseFolderTimerIfNecessary;
-(void)_setPageControlScale:(CGFloat)arg0 ;
-(void)_setupApertureViewInContainer:(id)arg0 ;
-(void)_setupBackgroundInContainer:(id)arg0 ;
-(void)_setupContentViewWithContentFrame:(struct CGRect )arg0 ;
-(void)_setupEditingButtons;
-(void)_setupIconListViewCenteredInScrollView:(id)arg0 ;
-(void)_setupLargeSizeLayoutAdjustmentsIfNecessary;
-(void)_setupMatchMoveAnimationWithSourceView:(id)arg0 targetView:(id)arg1 ;
-(void)_setupPageControlInContainer:(id)arg0 ;
-(void)_setupScrollViewInContainer:(id)arg0 ;
-(void)_setupTapToDismissGestureInView:(id)arg0 ;
-(void)_updateAddWidgetButtonOperabilityForDataSourceCount;
-(void)_updateButtonSubtitleForSmartRotate:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_updateCurrentPageControlPage;
-(void)_updateForWidgetIconCountChanged;
-(void)_updateLayoutForEditButtons;
-(void)_updatePresentationModeForIconViews;
-(void)configureWithStackLayoutMetrics:(struct SBHStackLayoutMetrics )arg0 ;
-(void)coronaAnimationController:(id)arg0 willAnimateCoronaTransitionWithAnimator:(id)arg1 ;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)enumerateScrollableIconViewsUsingBlock:(id)arg0 ;
-(void)iconAccessoryViewTapped:(id)arg0 ;
-(void)iconCloseBoxTapped:(id)arg0 ;
-(void)iconList:(id)arg0 didAddIcon:(id)arg1 ;
-(void)iconList:(id)arg0 didMoveIcon:(id)arg1 ;
-(void)iconList:(id)arg0 didRemoveIcon:(id)arg1 ;
-(void)iconList:(id)arg0 didReplaceIcon:(id)arg1 withIcon:(id)arg2 ;
-(void)iconListView:(id)arg0 iconDragItem:(id)arg1 willAnimateDropWithAnimator:(id)arg2 ;
-(void)iconListView:(id)arg0 iconDropSession:(id)arg1 didPauseAtLocation:(struct CGPoint )arg2 ;
-(void)iconListView:(id)arg0 iconDropSessionDidEnd:(id)arg1 ;
-(void)iconListView:(id)arg0 iconDropSessionDidEnter:(id)arg1 ;
-(void)iconListView:(id)arg0 iconDropSessionDidExit:(id)arg1 ;
-(void)iconListView:(id)arg0 performIconDrop:(id)arg1 ;
-(void)iconListView:(id)arg0 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg1 ;
-(void)iconListView:(id)arg0 willUseIconView:(id)arg1 forDroppingIconDragItem:(id)arg2 ;
-(void)iconTapped:(id)arg0 ;
-(void)iconView:(id)arg0 configurationDidEndWithInteraction:(id)arg1 ;
-(void)iconView:(id)arg0 configurationDidUpdateWithInteraction:(id)arg1 ;
-(void)iconView:(id)arg0 configurationWillBeginWithInteraction:(id)arg1 ;
-(void)iconView:(id)arg0 configurationWillEndWithInteraction:(id)arg1 ;
-(void)iconView:(id)arg0 didEndDragSession:(id)arg1 withOperation:(NSUInteger)arg2 ;
-(void)iconView:(id)arg0 dragLiftAnimationDidChangeDirection:(NSInteger)arg1 ;
-(void)iconView:(id)arg0 item:(id)arg1 willAnimateDragCancelWithAnimator:(id)arg2 ;
-(void)iconView:(id)arg0 willAnimateDragLiftWithAnimator:(id)arg1 session:(id)arg2 ;
-(void)iconViewWillBeginDrag:(id)arg0 session:(id)arg1 ;
-(void)leafIcon:(id)arg0 didAddIconDataSource:(id)arg1 ;
-(void)leafIcon:(id)arg0 didChangeActiveDataSource:(id)arg1 ;
-(void)loadView;
-(void)noteIconDrag:(id)arg0 didChangeInIconListView:(id)arg1 ;
-(void)noteIconDrag:(id)arg0 didEnterIconListView:(id)arg1 ;
-(void)noteIconDrag:(id)arg0 didExitIconListView:(id)arg1 ;
-(void)noteIconDragDidEnd:(id)arg0 ;
-(void)scrollIconToVisible:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)scrollViewDidEndScrolling:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setScrollPosition:(NSUInteger)arg0 ;
-(void)setSuppressesEditingStateForListView:(BOOL)arg0 ;
-(void)updateExtraButtonVisibilityAnimated:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif
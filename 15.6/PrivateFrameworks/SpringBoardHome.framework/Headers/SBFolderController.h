// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFOLDERCONTROLLER_H
#define SBFOLDERCONTROLLER_H

@class NSTimer, NSMutableSet, NSHashTable, NSMapTable, NSArray, UIWindow, UIView, NSIndexPath, NSString, UIColor, UIStatusBar, _UILegibilitySettings, NSSet;
@protocol SBFolderControllerDelegate, SBIconListViewDragObserver, SBFolderControllerBackgroundViewDelegate, SBFolderViewDelegate, SBFolderObserver, SBIconListLayoutObserver, SBIconViewObserver, SBScaleIconZoomAnimationContaining, BSDescriptionProviding, SBIconLocationPresenting, SBIconViewQuerying, SBHVisibleContentPresenter, BSInvalidatable, SBIconViewProviding, SBIconListLayoutProvider;


#import "SBNestingViewController.h"
#import "SBFolderContainerView.h"
#import "SBFolderView.h"
#import "SBFolderControllerBackgroundView.h"
#import "SBIconAnimator.h"
#import "SBFolderControllerAnimationContext.h"
#import "SBFolderControllerConfiguration.h"
#import "SBIconListModel.h"
#import "SBIconListView.h"
#import "SBFolderController.h"
#import "SBFolder.h"
#import "SBFolderIconImageCache.h"
#import "SBIconView.h"
#import "SBHIconImageCache.h"
#import "SBHIconModel.h"
#import "SBIconPageIndicatorImageSetCache.h"
#import "SBIconListPageControl.h"

@interface SBFolderController : SBNestingViewController <SBFolderControllerDelegate, SBIconListViewDragObserver, SBFolderControllerBackgroundViewDelegate, SBFolderViewDelegate, SBFolderObserver, SBIconListLayoutObserver, SBIconViewObserver, SBScaleIconZoomAnimationContaining, BSDescriptionProviding, SBIconLocationPresenting, SBIconViewQuerying, SBHVisibleContentPresenter>

 {
    SBFolderContainerView *_containerView;
    SBFolderView *_contentView;
    SBFolderControllerBackgroundView *_backgroundView;
    NSTimer *_closeFolderTimer;
    BOOL _grabbedIconHasEverEnteredFolderView;
    SBIconAnimator *_iconAnimator;
    NSMutableSet *_draggingEnteredIconListViews;
    NSMutableSet *_fakeStatusBarHidingReasons;
    NSMutableSet *_realStatusBarHidingReasons;
    NSInteger _leadingVisiblePageIndex;
    NSInteger _trailingVisiblePageIndex;
    NSHashTable *_pageViewControllerAppearStateOverrideAssertions;
    NSHashTable *_iconImageViewControllerKeepStaticAssertions;
    id<BSInvalidatable> *_iconImageViewControllerKeepStaticForAnimatedScrollAssertion;
    NSMutableSet *_iconViewsWithCustomImageViewControllers;
    NSMapTable *_iconViewCustomImageViewControllerTouchCancellationAssertions;
    NSMutableSet *_appearanceTransitioningCustomImageViewControllers;
}


@property (readonly, copy, nonatomic) NSArray *_viewControllersToNotifyForViewObscuration;
@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, nonatomic) BOOL addsFocusGuidesForWrapping; // ivar: _addsFocusGuidesForWrapping
@property (readonly, nonatomic) NSUInteger allowedOrientations; // ivar: _allowedOrientations
@property (nonatomic, getter=isAnimating) BOOL animating; // ivar: _isAnimating
@property (retain, nonatomic) SBFolderControllerAnimationContext *animationContext; // ivar: _animationContext
@property (readonly, nonatomic) UIWindow *animationWindow;
@property (readonly, nonatomic) BOOL canAcceptFolderIconDrags;
@property (readonly, nonatomic) BOOL closesAfterDragExits;
@property (copy, nonatomic) SBFolderControllerConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) NSUInteger contentVisibility; // ivar: _contentVisibility
@property (readonly, nonatomic) id *context; // ivar: _context
@property (readonly, nonatomic) SBIconListModel *currentIconListModel;
@property (readonly, nonatomic) SBIconListView *currentIconListView;
@property (readonly, nonatomic) NSIndexPath *currentIndexPath;
@property (readonly, nonatomic) NSInteger currentPageIndex;
@property (readonly, nonatomic) CGFloat currentScrollingOffset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) SBFolderController *deepestFolderController;
@property (retain, nonatomic) UIColor *defaultAccessibilityTintColor; // ivar: _defaultAccessibilityTintColor
@property (readonly, nonatomic) NSInteger defaultPageIndex;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disablesScrollingWhileIconDragIsDropping;
@property (readonly, nonatomic) SBIconListView *dockIconListView;
@property (readonly, nonatomic) SBIconListView *dockListView;
@property (readonly, nonatomic, getter=isEditing) BOOL editing; // ivar: _isEditing
@property (readonly, copy, nonatomic) NSArray *extraViews;
@property (readonly, copy, nonatomic) NSArray *extraViewsContainers;
@property (retain, nonatomic) UIStatusBar *fakeStatusBar; // ivar: _fakeStatusBar
@property (readonly, nonatomic) UIView *fallbackIconContainerView;
@property (readonly, nonatomic) NSInteger firstIconPageIndex;
@property (retain, nonatomic) SBFolder *folder; // ivar: _folder
@property (readonly, nonatomic) SBFolderContainerView *folderContainerView;
@property (weak, nonatomic) NSObject<SBFolderControllerDelegate> *folderDelegate; // ivar: _folderDelegate
@property (readonly, nonatomic) SBFolderIconImageCache *folderIconImageCache; // ivar: _folderIconImageCache
@property (retain, nonatomic) SBIconView *folderIconView; // ivar: _folderIconView
@property (readonly, nonatomic) SBFolderView *folderView;
@property (readonly, nonatomic) SBFolderView *folderViewIfLoaded;
@property (readonly, nonatomic) BOOL hasDock;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *headerView; // ivar: _headerView
@property (retain, nonatomic) SBHIconImageCache *iconImageCache; // ivar: _iconImageCache
@property (readonly, nonatomic) NSUInteger iconListViewCount;
@property (readonly, copy, nonatomic) NSArray *iconListViews;
@property (readonly, nonatomic) SBHIconModel *iconModel;
@property (readonly, nonatomic) SBIconPageIndicatorImageSetCache *iconPageIndicatorImageSetCache; // ivar: _iconPageIndicatorImageSetCache
@property (readonly, weak, nonatomic) NSObject<SBIconViewProviding> *iconViewProvider; // ivar: _iconViewProvider
@property (readonly, nonatomic) SBFolderController *innerFolderController;
@property (readonly, nonatomic) NSInteger lastIconPageIndex;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (readonly, nonatomic) NSObject<SBIconListLayoutProvider> *listLayoutProvider; // ivar: _listLayoutProvider
@property (readonly, nonatomic) NSInteger maximumPageIndex;
@property (readonly, nonatomic) NSInteger minimumPageIndex;
@property (nonatomic, getter=isOpen) BOOL open; // ivar: _isOpen
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (copy, nonatomic) NSString *originatingIconLocation; // ivar: _originatingIconLocation
@property (readonly, weak, nonatomic) SBFolderController *outerFolderController;
@property (readonly, nonatomic, getter=isOverridingPageViewControllerAppearanceStateToRemainDisappeared) BOOL overridingPageViewControllerAppearanceStateToRemainDisappeared;
@property (retain, nonatomic) SBIconListPageControl *pageControl; // ivar: _pageControl
@property (nonatomic) CGFloat pageControlAlpha;
@property (nonatomic, getter=isPageControlHidden) BOOL pageControlHidden;
@property (readonly, copy, nonatomic) NSSet *presentedIconLocations;
@property (nonatomic, getter=isRotating) BOOL rotating; // ivar: _rotating
@property (readonly, nonatomic, getter=isScrollDecelerating) BOOL scrollDecelerating;
@property (readonly, nonatomic, getter=isScrollDragging) BOOL scrollDragging;
@property (readonly, nonatomic, getter=isScrollTracking) BOOL scrollTracking;
@property (readonly, nonatomic, getter=isScrolling) BOOL scrolling;
@property (readonly, nonatomic) BOOL shouldAnimateFirstTwoViewsAsOne;
@property (readonly, nonatomic) BOOL shouldAnimateLastTwoViewsAsOne;
@property (retain, nonatomic) NSObject<BSInvalidatable> *statusBarAssertion; // ivar: _statusBarAssertion
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL suspendsWallpaperAnimationWhileOpen;
@property (readonly, nonatomic) NSInteger userInterfaceLayoutDirection;
@property (readonly, nonatomic) NSUInteger userInterfaceLayoutDirectionHandling;


+(Class)listViewClass;
+(id)iconLocation;
-(BOOL)_allowUserInteraction;
-(BOOL)_canAcceptIconDropSession:(id)arg0 inListView:(id)arg1 ;
-(BOOL)_canAnyIconViewBeVisiblySettled;
-(BOOL)_homescreenAndDockShouldFade;
-(BOOL)_iconAppearsOnCurrentPage:(id)arg0 ;
-(BOOL)_isHitTestingDisabledOnCustomIconImageViewControllers;
-(BOOL)_isValidPageIndex:(NSInteger)arg0 ;
-(BOOL)_listIndexIsVisible:(NSUInteger)arg0 ;
-(BOOL)doesPageContainIconListView:(NSInteger)arg0 ;
-(BOOL)folderController:(id)arg0 canChangeCurrentPageIndexToIndex:(NSInteger)arg1 ;
-(BOOL)folderController:(id)arg0 iconListView:(id)arg1 canHandleIconDropSession:(id)arg2 ;
-(BOOL)folderController:(id)arg0 iconListView:(id)arg1 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg2 onIconView:(id)arg3 ;
-(BOOL)folderControllerShouldClose:(id)arg0 withPinchGesture:(id)arg1 ;
-(BOOL)folderView:(id)arg0 canChangeCurrentPageIndexToIndex:(NSInteger)arg1 ;
-(BOOL)folderView:(id)arg0 iconListView:(id)arg1 canHandleIconDropSession:(id)arg2 ;
-(BOOL)folderView:(id)arg0 iconListView:(id)arg1 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg2 onIconView:(id)arg3 ;
-(BOOL)isDisplayingIcon:(id)arg0 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocations:(id)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg0 ;
-(BOOL)isDisplayingIconView:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isPresentingIconLocation:(id)arg0 ;
-(BOOL)restoreExpandedPathIdentifiers:(id)arg0 ;
-(BOOL)shouldOpenFolderIcon:(id)arg0 ;
-(BOOL)shouldViewControllersAppearVisibleForListView:(id)arg0 ;
-(CGFloat)minimumHomeScreenScaleForFolderController:(id)arg0 ;
-(CGFloat)minimumHomeScreenScaleForFolderControllerBackgroundView:(id)arg0 ;
-(CGFloat)minimumHomeScreenScaleForFolderView:(id)arg0 ;
-(Class)controllerClassForFolder:(id)arg0 ;
-(Class)iconListViewClassForFolderView:(id)arg0 ;
-(NSInteger)pageIndexForIconListModelIndex:(NSUInteger)arg0 ;
-(NSInteger)pageIndexForIconListViewIndex:(NSUInteger)arg0 ;
-(NSUInteger)_depth;
-(NSUInteger)effectiveContentVisibility;
-(NSUInteger)effectiveContentVisibilityIfHasInnerFolder:(BOOL)arg0 ;
-(NSUInteger)iconImageViewControllerPresentationModeForIconView:(id)arg0 ;
-(NSUInteger)iconListModelIndexForPageIndex:(NSInteger)arg0 ;
-(NSUInteger)iconListViewIndexForIconListModelIndex:(NSUInteger)arg0 ;
-(NSUInteger)iconListViewIndexForPageIndex:(NSInteger)arg0 ;
-(id)_makeContentViewWithConfiguration:(id)arg0 ;
-(id)_newAnimatorForZoomUp:(BOOL)arg0 ;
-(id)accessibilityTintColorForScreenRect:(struct CGRect )arg0 ;
-(id)beginModifyingDockOffscreenFractionForReason:(id)arg0 ;
-(id)beginOverridingPageViewControllerAppearanceStateToRemainDisappearedForReason:(id)arg0 ;
-(id)borrowScalingView;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)fakeStatusBarForFolderController:(id)arg0 ;
-(id)firstIconViewForIcon:(id)arg0 ;
-(id)firstIconViewForIcon:(id)arg0 excludingLocations:(id)arg1 ;
-(id)firstIconViewForIcon:(id)arg0 inLocations:(id)arg1 ;
-(id)firstIconViewForIcon:(id)arg0 options:(NSUInteger)arg1 ;
-(id)firstIconViewWithOptions:(NSUInteger)arg0 iconPassingTest:(id)arg1 ;
-(id)folderController:(id)arg0 accessibilityTintColorForScreenRect:(struct CGRect )arg1 ;
-(id)folderController:(id)arg0 iconAnimatorForOperation:(NSInteger)arg1 onViewController:(id)arg2 animated:(BOOL)arg3 initialDelay:(*CGFloat)arg4 ;
-(id)folderController:(id)arg0 iconListView:(id)arg1 customSpringAnimationBehaviorForDroppingItem:(id)arg2 ;
-(id)folderController:(id)arg0 iconListView:(id)arg1 iconDropSessionDidUpdate:(id)arg2 ;
-(id)folderController:(id)arg0 iconListView:(id)arg1 iconViewForDroppingIconDragItem:(id)arg2 proposedIconView:(id)arg3 ;
-(id)folderController:(id)arg0 iconListView:(id)arg1 previewForDroppingIconDragItem:(id)arg2 proposedPreview:(id)arg3 ;
-(id)folderControllerForFolder:(id)arg0 ;
-(id)folderControllerWantsToHideStatusBar:(id)arg0 animated:(BOOL)arg1 ;
-(id)folderView:(id)arg0 accessibilityTintColorForRect:(struct CGRect )arg1 ;
-(id)folderView:(id)arg0 iconListView:(id)arg1 customSpringAnimationBehaviorForDroppingItem:(id)arg2 ;
-(id)folderView:(id)arg0 iconListView:(id)arg1 iconDropSessionDidUpdate:(id)arg2 ;
-(id)folderView:(id)arg0 iconListView:(id)arg1 iconViewForDroppingIconDragItem:(id)arg2 proposedIconView:(id)arg3 ;
-(id)folderView:(id)arg0 iconListView:(id)arg1 previewForDroppingIconDragItem:(id)arg2 proposedPreview:(id)arg3 ;
-(id)iconListViewAtIndex:(NSUInteger)arg0 ;
-(id)iconListViewAtPoint:(struct CGPoint )arg0 ;
-(id)iconListViewForDrag:(id)arg0 ;
-(id)iconListViewForIconListModelIndex:(NSUInteger)arg0 ;
-(id)iconListViewForTouch:(id)arg0 ;
-(id)iconLocation;
-(id)iconLocationForFolderView:(id)arg0 ;
-(id)iconViewForIcon:(id)arg0 location:(id)arg1 ;
-(id)iconViewForIcon:(id)arg0 location:(id)arg1 options:(NSUInteger)arg2 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)keepIconImageViewControllersStaticInAllPagesExcluding:(id)arg0 forReason:(id)arg1 ;
-(id)keyCommands;
-(id)matchMoveSourceViewForIconView:(id)arg0 ;
-(id)nestingViewController:(id)arg0 animationControllerForOperation:(NSInteger)arg1 onViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)nestingViewController:(id)arg0 sourceViewForPresentingViewController:(id)arg1 ;
-(id)pageViewControllersForLeadingPageIndex:(NSInteger)arg0 trailingPageIndex:(NSInteger)arg1 ;
-(id)preferredFocusEnvironments;
-(id)statusBarStyleRequestForFolderController:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)viewControllersForPageIndex:(NSInteger)arg0 ;
-(id)visiblePageViewControllers;
-(struct UIEdgeInsets )contentOverlayInsetsFromParentIfAvailableForFolderController:(id)arg0 ;
-(struct UIEdgeInsets )contentOverlayInsetsFromParentIfAvailableForFolderView:(id)arg0 ;
-(struct UIEdgeInsets )statusBarEdgeInsetsForFolderController:(id)arg0 ;
-(struct UIEdgeInsets )statusBarInsetsForOrientation:(NSInteger)arg0 ;
-(void)_addFakeStatusBarView;
-(void)_beginTrackingIconViewWithCustomImageViewController:(id)arg0 ;
-(void)_cancelAllInteractionTimers;
-(void)_cancelCloseFolderTimer;
-(void)_cancelTouchesForAllCustomIconImageViewControllers;
-(void)_cancelTouchesForCustomIconImageViewController:(id)arg0 ;
-(void)_clearIconAnimator;
-(void)_closeFolder;
-(void)_closeFolderTimerFired;
-(void)_compactFolder;
-(void)_configureForInnerFolderController:(id)arg0 ;
-(void)_disableTouchesOnAllCustomIconImageViewControllers;
-(void)_enableTouchesOnAllCustomIconImageViewControllers;
-(void)_endTrackingIconViewWithCustomImageViewController:(id)arg0 ;
-(void)_fadeHomescreenAndDockIfNecessaryForFolderOpen:(BOOL)arg0 ;
-(void)_handleEndEditingKeyCommand:(id)arg0 ;
-(void)_hideFakeStatusBarForReason:(id)arg0 animated:(BOOL)arg1 ;
-(void)_hideStatusBarForReason:(id)arg0 animated:(BOOL)arg1 ;
-(void)_invalidate;
-(void)_invalidateAllCancelTouchesAssertions;
-(void)_removeFakeStatusBar;
-(void)_removeFakeStatusBarAndAssertionIfExists;
-(void)_removeIconImageViewControllerKeepStaticAssertion:(id)arg0 ;
-(void)_removePageViewControllerAppearStateOverrideAssertion:(id)arg0 ;
-(void)_resetIconLists;
-(void)_setCloseFolderTimerIfNecessary;
-(void)_setHomescreenAndDockAlpha:(CGFloat)arg0 ;
-(void)_unhideFakeStatusBarForReason:(id)arg0 animated:(BOOL)arg1 ;
-(void)_unhideStatusBarForReason:(id)arg0 ;
-(void)_updateAssociatedControllerStateAnimated:(BOOL)arg0 ;
-(void)_updateFolderRequiredTrailingEmptyListCount;
-(void)_updateHomescreenAndDockFade;
-(void)_updatePresentationModeForIconView:(id)arg0 ;
-(void)_updatePresentationModeForIconViews;
-(void)_updateStateOfAssociatedController:(id)arg0 animated:(BOOL)arg1 ;
-(void)addViewToHierarchyForNestedViewController:(id)arg0 ;
-(void)beginEditingTitle;
-(void)cancelScrolling;
-(void)configureInnerFolderControllerConfiguration:(id)arg0 ;
-(void)dealloc;
-(void)delegateDidChange;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateDisplayedIconViewsUsingBlock:(id)arg0 ;
-(void)enumerateDisplayedIconViewsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)fadeContentForMagnificationFraction:(CGFloat)arg0 ;
-(void)fadeContentForMinificationFraction:(CGFloat)arg0 ;
-(void)folder:(id)arg0 didAddIcons:(id)arg1 removedIcons:(id)arg2 ;
-(void)folder:(id)arg0 didReplaceIcon:(id)arg1 withIcon:(id)arg2 ;
-(void)folderController:(id)arg0 draggedIconShouldDropFromListView:(id)arg1 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 iconDragItem:(id)arg2 willAnimateDropWithAnimator:(id)arg3 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 iconDropSession:(id)arg2 didPauseAtLocation:(struct CGPoint )arg3 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 iconDropSessionDidEnter:(id)arg2 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 iconDropSessionDidExit:(id)arg2 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 performIconDrop:(id)arg2 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg2 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 willUseIconView:(id)arg2 forDroppingIconDragItem:(id)arg3 ;
-(void)folderController:(id)arg0 willCreateInnerFolderControllerWithConfiguration:(id)arg1 ;
-(void)folderController:(id)arg0 willRemoveFakeStatusBar:(id)arg1 ;
-(void)folderController:(id)arg0 willUseIconTransitionAnimator:(id)arg1 forOperation:(NSInteger)arg2 onViewController:(id)arg3 animated:(BOOL)arg4 ;
-(void)folderControllerDidClose:(id)arg0 ;
-(void)folderControllerDidEndScrolling:(id)arg0 ;
-(void)folderControllerDidOpen:(id)arg0 ;
-(void)folderControllerShouldBeginEditing:(id)arg0 withHaptic:(BOOL)arg1 ;
-(void)folderControllerShouldEndEditing:(id)arg0 ;
-(void)folderControllerWillBeginScrolling:(id)arg0 ;
-(void)folderControllerWillClose:(id)arg0 ;
-(void)folderControllerWillOpen:(id)arg0 ;
-(void)folderView:(id)arg0 currentPageIndexDidChange:(NSInteger)arg1 ;
-(void)folderView:(id)arg0 currentPageIndexWillChange:(NSInteger)arg1 ;
-(void)folderView:(id)arg0 didAddIconListView:(id)arg1 ;
-(void)folderView:(id)arg0 didRemoveIconListView:(id)arg1 ;
-(void)folderView:(id)arg0 iconListView:(id)arg1 iconDragItem:(id)arg2 willAnimateDropWithAnimator:(id)arg3 ;
-(void)folderView:(id)arg0 iconListView:(id)arg1 iconDropSession:(id)arg2 didPauseAtLocation:(struct CGPoint )arg3 ;
-(void)folderView:(id)arg0 iconListView:(id)arg1 iconDropSessionDidEnter:(id)arg2 ;
-(void)folderView:(id)arg0 iconListView:(id)arg1 iconDropSessionDidExit:(id)arg2 ;
-(void)folderView:(id)arg0 iconListView:(id)arg1 performIconDrop:(id)arg2 ;
-(void)folderView:(id)arg0 iconListView:(id)arg1 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg2 ;
-(void)folderView:(id)arg0 iconListView:(id)arg1 willUseIconView:(id)arg2 forDroppingIconDragItem:(id)arg3 ;
-(void)folderView:(id)arg0 willAnimateScrollToPageIndex:(NSInteger)arg1 ;
-(void)folderViewDidChangeOrientation:(id)arg0 ;
-(void)folderViewDidEndScrolling:(id)arg0 ;
-(void)folderViewDidScroll:(id)arg0 ;
-(void)folderViewShouldBeginEditing:(id)arg0 ;
-(void)folderViewShouldClose:(id)arg0 withPinchGesture:(id)arg1 ;
-(void)folderViewShouldEndEditing:(id)arg0 ;
-(void)folderViewWillBeginDragging:(id)arg0 ;
-(void)folderViewWillBeginScrolling:(id)arg0 ;
-(void)folderViewWillEndDragging:(id)arg0 ;
-(void)folderViewWillUpdatePageDuringScrolling:(id)arg0 ;
-(void)iconListView:(id)arg0 concludeIconDrop:(id)arg1 ;
-(void)iconListView:(id)arg0 didAddIconView:(id)arg1 ;
-(void)iconListView:(id)arg0 didRemoveIconView:(id)arg1 ;
-(void)iconListView:(id)arg0 iconDropSessionDidEnd:(id)arg1 ;
-(void)iconListViewDidChangeBoundsSize:(id)arg0 ;
-(void)iconView:(id)arg0 didChangeCustomImageViewController:(id)arg1 ;
-(void)iconViewDidDismissContextMenu:(id)arg0 ;
-(void)iconViewDidHandleTap:(id)arg0 ;
-(void)iconViewWillPresentContextMenu:(id)arg0 ;
-(void)invalidate;
-(void)layoutIconListsWithAnimationType:(NSInteger)arg0 forceRelayout:(BOOL)arg1 ;
-(void)loadView;
-(void)minimumHomeScreenScaleDidChange;
-(void)nestingViewController:(id)arg0 willPerformOperation:(NSInteger)arg1 onViewController:(id)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)noteIconDrag:(id)arg0 didChangeInIconListView:(id)arg1 ;
-(void)noteIconDrag:(id)arg0 didEnterIconListView:(id)arg1 ;
-(void)noteIconDrag:(id)arg0 didExitIconListView:(id)arg1 ;
-(void)noteIconDragDidEnd:(id)arg0 ;
-(void)noteUserIsInteractingWithIcons;
-(void)orientationDidChange:(NSInteger)arg0 ;
-(void)parentDelegateDidChange;
-(void)popFolderAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)prepareForAnimation:(id)arg0 withTargetIcon:(id)arg1 ;
-(void)prepareToClose;
-(void)prepareToLaunchTappedIcon:(id)arg0 completionHandler:(id)arg1 ;
-(void)prepareToOpen;
-(void)prepareToTearDown;
-(void)pushFolderIcon:(id)arg0 location:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)removeViewFromHierarchyForNestedViewController:(id)arg0 ;
-(void)returnScalingView;
-(void)revealIcon:(id)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)scrollUsingDecelerationAnimationToDefaultPageWithCompletionHandler:(id)arg0 ;
-(void)scrollUsingDecelerationAnimationToPageIndex:(NSInteger)arg0 withCompletionHandler:(id)arg1 ;
-(void)setContentAlpha:(CGFloat)arg0 ;
-(void)unscatterAnimated:(BOOL)arg0 afterDelay:(CGFloat)arg1 withCompletion:(id)arg2 ;
-(void)updateAppearanceStateForPageViewControllers:(BOOL)arg0 ;
-(void)updateContentViewOcclusion;
-(void)updateContentViewOcclusionWithOverriddenHasInnerFolder:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 forOperation:(NSInteger)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif
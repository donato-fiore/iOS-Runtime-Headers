// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFLOATINGDOCKVIEWCONTROLLER_H
#define SBFLOATINGDOCKVIEWCONTROLLER_H

@class SBFTouchPassThroughViewController, _UILegibilitySettings, NSHashTable, UIWindow, UIView, NSMutableArray, NSString, NSArray, UIViewController, NSSet, SBFTouchPassThroughView, UIViewController<SBFloatingDockSuggestionsViewProviding>;
@protocol SBIconListViewDragDelegate, SBIconListModelObserver, SBFolderControllerDelegate, SBFolderPresentingViewControllerDelegate, SBScaleIconZoomAnimationContaining, SBIconViewDelegate, SBIconViewProviding, SBFloatingDockViewDelegate, SBHLibraryViewControllerObserver, SBHModalLibraryPresenterContextProviding, SBHModalLibraryPresentationDelegate, SBHLibraryIndicatorIconDropInteractionContextProviding, SBUICoronaAnimationControllerParticipant, SBIconViewQuerying, SBIconLocationPresenting, BSDescriptionProviding, SBFloatingDockViewControllerDelegate;


#import "SBFloatingDockView.h"
#import "SBIconView.h"
#import "SBHLibraryIconViewController.h"
#import "SBHLibraryIndicatorIconDropInteractionDelegate.h"
#import "SBHomeScreenIconTransitionAnimator.h"
#import "SBIconListView.h"
#import "SBIconListModel.h"
#import "SBFolderPresentingViewController.h"
#import "SBHIconManager.h"
#import "SBHIconModel.h"
#import "SBHModalLibraryPresenter.h"
#import "SBHLibraryViewController.h"
#import "SBFolderController.h"
#import "SBHFloatingDockStyleConfiguration.h"

@interface SBFloatingDockViewController : SBFTouchPassThroughViewController <SBIconListViewDragDelegate, SBIconListModelObserver, SBFolderControllerDelegate, SBFolderPresentingViewControllerDelegate, SBScaleIconZoomAnimationContaining, SBIconViewDelegate, SBIconViewProviding, SBFloatingDockViewDelegate, SBHLibraryViewControllerObserver, SBHModalLibraryPresenterContextProviding, SBHModalLibraryPresentationDelegate, SBHLibraryIndicatorIconDropInteractionContextProviding, SBUICoronaAnimationControllerParticipant, SBIconViewQuerying, SBIconLocationPresenting, BSDescriptionProviding>

 {
    SBFloatingDockView *_dockView;
    SBIconView *_libraryPodIconView;
    SBHLibraryIconViewController *_libraryIconViewController;
    SBHLibraryIndicatorIconDropInteractionDelegate *_libraryIconDropInteractionDelegate;
    NSInteger _targetingPresentingLibrary;
    _UILegibilitySettings *_legibilitySettings;
    NSHashTable *_bouncedDropSessions;
    *__CFRunLoopObserver _resizeRunLoopObserver;
}


@property (readonly, nonatomic) UIWindow *animationWindow;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) CGFloat contentHeight;
@property (retain, nonatomic) NSMutableArray *currentCollapseCompletions; // ivar: _currentCollapseCompletions
@property (retain, nonatomic) NSMutableArray *currentExpandCompletions; // ivar: _currentExpandCompletions
@property (retain, nonatomic) SBHomeScreenIconTransitionAnimator *currentFolderAnimator; // ivar: _currentFolderAnimator
@property (readonly, nonatomic) SBIconListView *currentIconListView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBFloatingDockViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SBIconListView *dockIconListView;
@property (retain, nonatomic) SBIconListModel *dockListModel; // ivar: _dockListModel
@property (nonatomic) CGFloat dockOffscreenProgress; // ivar: _dockOffscreenProgress
@property (retain, nonatomic) SBFloatingDockView *dockView;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (readonly, copy, nonatomic) NSArray *extraViews;
@property (readonly, copy, nonatomic) NSArray *extraViewsContainers;
@property (readonly, nonatomic) UIView *fallbackIconContainerView;
@property (readonly, nonatomic) CGRect floatingDockScreenFrame;
@property (readonly, nonatomic) CGRect floatingDockScreenPresentationFrame;
@property (retain, nonatomic) SBFolderPresentingViewController *folderPresentingViewController; // ivar: _folderPresentingViewController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBHIconManager *iconManager; // ivar: _iconManager
@property (readonly, nonatomic) SBHIconModel *iconModel;
@property (readonly, weak, nonatomic) NSObject<SBIconViewProviding> *iconViewProvider; // ivar: _iconViewProvider
@property (nonatomic) CGFloat lastDockHeight; // ivar: _lastDockHeight
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, getter=isLibraryPodIconEnabled) BOOL libraryPodIconEnabled; // ivar: _libraryPodIconEnabled
@property (readonly, nonatomic) SBIconView *libraryPodIconView;
@property (nonatomic, getter=isLibraryPodIconVisible) BOOL libraryPodIconVisible; // ivar: _libraryPodIconVisible
@property (retain, nonatomic) SBHModalLibraryPresenter *libraryPresenter; // ivar: _libraryPresenter
@property (retain, nonatomic) SBHLibraryViewController *libraryViewController; // ivar: _libraryViewController
@property (readonly, nonatomic) CGFloat maximumContentHeight;
@property (readonly, nonatomic) CGFloat maximumDockContinuousCornerRadius;
@property (nonatomic) CGSize maximumEditingIconSize;
@property (retain, nonatomic) UIViewController *overrideLibraryContainerViewController;
@property (readonly, nonatomic) CGFloat preferredVerticalMargin;
@property (readonly, nonatomic) SBFolderController *presentedFolderController;
@property (readonly, copy, nonatomic) NSSet *presentedIconLocations;
@property (readonly, nonatomic, getter=isPresentingFolder) BOOL presentingFolder;
@property (readonly, nonatomic, getter=isPresentingLibrary) BOOL presentingLibrary;
@property (readonly, nonatomic, getter=isPresentingLibraryInForeground) BOOL presentingLibraryInForeground;
@property (nonatomic) CGFloat requestedVerticalMargin;
@property (retain, nonatomic) SBFTouchPassThroughView *scalingView; // ivar: _scalingView
@property (readonly, nonatomic) BOOL shouldAnimateFirstTwoViewsAsOne;
@property (readonly, nonatomic) BOOL shouldAnimateLastTwoViewsAsOne;
@property (nonatomic) BOOL shouldIndicateImpossibleDrop; // ivar: _shouldIndicateImpossibleDrop
@property (retain, nonatomic) UIViewController<SBFloatingDockSuggestionsViewProviding> *suggestionsViewController; // ivar: _suggestionsViewController
@property (readonly) Class superclass;
@property (copy, nonatomic) SBHFloatingDockStyleConfiguration *transitionTargetUnderlyingPresentationStyleConfiguration; // ivar: _transitionTargetUnderlyingPresentationStyleConfiguration
@property (nonatomic, getter=isTransitioningUnderlyingBackgroundStyle) BOOL transitioningUnderlyingPresentationStyleConfiguration; // ivar: _transitioningUnderlyingPresentationStyleConfiguration
@property (readonly, nonatomic) CGFloat translationFromFullyPresentedFrame;
@property (copy, nonatomic) SBHFloatingDockStyleConfiguration *underlyingPresentationStyleConfiguration; // ivar: _underlyingPresentationStyleConfiguration
@property (nonatomic) BOOL wantsFastIconReordering; // ivar: _wantsFastIconReordering


-(BOOL)_isInAppToAppTransition;
-(BOOL)_isInSwitcherTransition;
-(BOOL)_isLibraryContainedInForeground;
-(BOOL)_shouldOpenFolderIcon:(id)arg0 ;
-(BOOL)folderController:(id)arg0 canChangeCurrentPageIndexToIndex:(NSInteger)arg1 ;
-(BOOL)folderController:(id)arg0 iconListView:(id)arg1 canHandleIconDropSession:(id)arg2 ;
-(BOOL)folderController:(id)arg0 iconListView:(id)arg1 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg2 onIconView:(id)arg3 ;
-(BOOL)folderControllerShouldClose:(id)arg0 withPinchGesture:(id)arg1 ;
-(BOOL)iconListView:(id)arg0 canHandleIconDropSession:(id)arg1 ;
-(BOOL)iconListView:(id)arg0 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg1 onIconView:(id)arg2 ;
-(BOOL)iconViewCanBecomeFocused:(id)arg0 ;
-(BOOL)iconViewCanBeginDrags:(id)arg0 ;
-(BOOL)isDefaultContainerForegroundForPresenter:(id)arg0 ;
-(BOOL)isDisplayingIcon:(id)arg0 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocations:(id)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg0 ;
-(BOOL)isDisplayingIconView:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isIconViewRecycled:(id)arg0 ;
-(BOOL)isLibraryPodIconEffectivelyVisible;
-(BOOL)isPresentingIconLocation:(id)arg0 ;
-(BOOL)modalLibraryPresenterShouldAllowSwipeToDismissGesture:(id)arg0 ;
-(CGFloat)contentHeightForFrame:(struct CGRect )arg0 ;
-(CGFloat)minimumHomeScreenScaleForFolderPresentationController:(id)arg0 ;
-(CGFloat)minimumVerticalMarginForFrame:(struct CGRect )arg0 ;
-(Class)controllerClassForFolder:(id)arg0 ;
-(NSUInteger)_backgroundEffectForPresentedFolder;
-(NSUInteger)_currentFolderIconBackgroundStyle;
-(NSUInteger)_platterEffectForPresentedFolder;
-(NSUInteger)focusEffectTypeForIconView:(id)arg0 ;
-(id)_backdropGroupNameForCurrentUserInterfaceStyle;
-(id)_backdropGroupNamespace;
-(id)acquireOrderSourceContainerViewBeforeLibraryViewAssertionForReason:(id)arg0 ;
-(id)acquireUseSnapshotAsBackgroundViewAssertionForReason:(id)arg0 ;
-(id)borrowScalingView;
-(id)containerViewControllerForPresentingInForeground:(id)arg0 ;
-(id)customImageViewControllerForIconView:(id)arg0 ;
-(id)dequeueReusableIconViewOfClass:(Class)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)firstIconViewForIcon:(id)arg0 ;
-(id)firstIconViewForIcon:(id)arg0 excludingLocations:(id)arg1 ;
-(id)firstIconViewForIcon:(id)arg0 inLocations:(id)arg1 ;
-(id)firstIconViewForIcon:(id)arg0 options:(NSUInteger)arg1 ;
-(id)folderController:(id)arg0 accessibilityTintColorForScreenRect:(struct CGRect )arg1 ;
-(id)folderController:(id)arg0 iconListView:(id)arg1 customSpringAnimationBehaviorForDroppingItem:(id)arg2 ;
-(id)folderController:(id)arg0 iconListView:(id)arg1 iconDropSessionDidUpdate:(id)arg2 ;
-(id)folderController:(id)arg0 iconListView:(id)arg1 previewForDroppingIconDragItem:(id)arg2 proposedPreview:(id)arg3 ;
-(id)folderPresentationController:(id)arg0 animationControllerForTransitionWithFolder:(id)arg1 presenting:(BOOL)arg2 animated:(BOOL)arg3 ;
-(id)folderPresentationController:(id)arg0 sourceViewForPresentingViewController:(id)arg1 ;
-(id)iconListView:(id)arg0 customSpringAnimationBehaviorForDroppingItem:(id)arg1 ;
-(id)iconListView:(id)arg0 iconDropSessionDidUpdate:(id)arg1 ;
-(id)iconListView:(id)arg0 iconViewForDroppingIconDragItem:(id)arg1 proposedIconView:(id)arg2 ;
-(id)iconListView:(id)arg0 previewForDroppingIconDragItem:(id)arg1 proposedPreview:(id)arg2 ;
-(id)iconModelForDroppingIntoLibraryIndicatorIconView:(id)arg0 ;
-(id)iconViewForIcon:(id)arg0 location:(id)arg1 ;
-(id)initWithIconManager:(id)arg0 iconViewProvider:(id)arg1 ;
-(id)libraryIconViewControllerForPresenter:(id)arg0 ;
-(id)libraryIconViewForPresenter:(id)arg0 ;
-(id)recentIconListView;
-(id)sourceContainerViewForPresenter:(id)arg0 ;
-(id)sourceListViewForPresenter:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)suggestionsIconLocation;
-(id)targetIconContainerView;
-(id)userIconListView;
-(id)userIconLocation;
-(void)_addDockGestureRecognizer:(id)arg0 ;
-(void)_coalesceRequestsToResizeDockForChangedNumberOfIcons;
-(void)_prepareLibraryViewControllerForDismissal:(id)arg0 ;
-(void)_presentFolderForIcon:(id)arg0 location:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)_rebuildAfterIconModelChange;
-(void)_rebuildLibraryPodIcon;
-(void)_rebuildUserIconListView;
-(void)_resizeDockForChangedNumberOfIconsAnimated:(BOOL)arg0 ;
-(void)_setPaddingEdgeInsets:(struct UIEdgeInsets )arg0 ;
-(void)_sizeCategoryDidChange:(id)arg0 ;
-(void)_updateDockForStyleConfiguration:(id)arg0 ;
-(void)_updateFolderIconBackgroundsForStyleConfiguration:(id)arg0 ;
-(void)_updateLibraryPodDockAccessoryViewDisplayed;
-(void)_updateLibraryPodIconComponentVisibility;
-(void)_updatePlatterShadowForStyleConfiguration:(id)arg0 ;
-(void)_updatePresentedFolderBackgroundForStyleConfiguration:(id)arg0 ;
-(void)cleanUpAfterUnderlyingBackgroundStyleTransition;
-(void)configureIconView:(id)arg0 forIcon:(id)arg1 ;
-(void)coronaAnimationController:(id)arg0 willAnimateCoronaTransitionWithAnimator:(id)arg1 ;
-(void)dealloc;
-(void)dismissLibraryAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)dismissPresentedFolderAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateDisplayedIconViewsUsingBlock:(id)arg0 ;
-(void)enumerateIconListViewsUsingBlock:(id)arg0 ;
-(void)enumerateIconListsUsingBlock:(id)arg0 ;
-(void)enumerateVisibleIconViewsUsingBlock:(id)arg0 ;
-(void)floatingDockSuggestionsViewControllerDidChangeNumberOfVisibleSuggestions:(id)arg0 ;
-(void)floatingDockViewMainPlatterDidChangeFrame:(id)arg0 ;
-(void)folderController:(id)arg0 didBeginEditingTitle:(id)arg1 ;
-(void)folderController:(id)arg0 didEndEditingTitle:(id)arg1 ;
-(void)folderController:(id)arg0 draggedIconShouldDropFromListView:(id)arg1 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 iconDragItem:(id)arg2 willAnimateDropWithAnimator:(id)arg3 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 iconDropSession:(id)arg2 didPauseAtLocation:(struct CGPoint )arg3 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 iconDropSessionDidEnter:(id)arg2 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 iconDropSessionDidExit:(id)arg2 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 performIconDrop:(id)arg2 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg2 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 willUseIconView:(id)arg2 forDroppingIconDragItem:(id)arg3 ;
-(void)folderControllerDidClose:(id)arg0 ;
-(void)folderControllerDidEndScrolling:(id)arg0 ;
-(void)folderControllerDidOpen:(id)arg0 ;
-(void)folderControllerShouldBeginEditing:(id)arg0 withHaptic:(BOOL)arg1 ;
-(void)folderControllerShouldEndEditing:(id)arg0 ;
-(void)folderControllerWillBeginScrolling:(id)arg0 ;
-(void)folderControllerWillClose:(id)arg0 ;
-(void)folderControllerWillOpen:(id)arg0 ;
-(void)folderPresentationController:(id)arg0 willPerformTransitionWithFolder:(id)arg1 presenting:(BOOL)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)handleSpringLoadDidActivateForLibraryIndicatorIconView:(id)arg0 ;
-(void)icon:(id)arg0 touchEnded:(BOOL)arg1 ;
-(void)icon:(id)arg0 touchMoved:(id)arg1 ;
-(void)iconDraggingDidChange:(id)arg0 ;
-(void)iconEditingDidChange:(id)arg0 ;
-(void)iconList:(id)arg0 didAddIcon:(id)arg1 ;
-(void)iconList:(id)arg0 didRemoveIcon:(id)arg1 ;
-(void)iconListView:(id)arg0 iconDragItem:(id)arg1 willAnimateDropWithAnimator:(id)arg2 ;
-(void)iconListView:(id)arg0 iconDropSession:(id)arg1 didPauseAtLocation:(struct CGPoint )arg2 ;
-(void)iconListView:(id)arg0 iconDropSessionDidEnter:(id)arg1 ;
-(void)iconListView:(id)arg0 iconDropSessionDidExit:(id)arg1 ;
-(void)iconListView:(id)arg0 performIconDrop:(id)arg1 ;
-(void)iconListView:(id)arg0 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg1 ;
-(void)iconListView:(id)arg0 willUseIconView:(id)arg1 forDroppingIconDragItem:(id)arg2 ;
-(void)iconManagerDidChangeIconModel:(id)arg0 ;
-(void)iconModelDidLayout:(id)arg0 ;
-(void)iconTapped:(id)arg0 ;
-(void)iconTouchBegan:(id)arg0 ;
-(void)layoutUserControlledIconListsWithAnimationType:(NSInteger)arg0 forceRelayout:(BOOL)arg1 ;
-(void)libraryIndicatorIconView:(id)arg0 didAcceptDropForSession:(id)arg1 ;
-(void)libraryViewController:(id)arg0 dataSourceDidChange:(id)arg1 ;
-(void)modalLibraryPresenter:(id)arg0 didDismissLibrary:(id)arg1 ;
-(void)modalLibraryPresenter:(id)arg0 didPassCriticalDismissalPoint:(id)arg1 ;
-(void)modalLibraryPresenter:(id)arg0 didPresentLibrary:(id)arg1 ;
-(void)modalLibraryPresenter:(id)arg0 willDismissLibrary:(id)arg1 ;
-(void)modalLibraryPresenter:(id)arg0 willPresentLibrary:(id)arg1 ;
-(void)prepareForTransitionToStyleConfiguration:(id)arg0 fromDockVisible:(BOOL)arg1 toDockVisible:(BOOL)arg2 ;
-(void)presentFolderForIcon:(id)arg0 location:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)presentLibraryAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)recycleIconView:(id)arg0 ;
-(void)reduceTransparencyEnabledStateDidChange:(id)arg0 ;
-(void)returnScalingView;
-(void)toggleLibraryPresentedAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif
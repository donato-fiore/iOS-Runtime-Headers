// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISEARCHCONTROLLER_H
#define UISEARCHCONTROLLER_H

@class NSArray, NSString;
@protocol NSCoding, UIGestureRecognizerDelegate, _UIScrollViewScrollObserver_Internal, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UISearchControllerDelegate, UISearchResultsUpdating, UISearchResultsUpdatingPrivate;


#import "UIViewController.h"
#import "_UISearchControllerDidScrollDelegate.h"
#import "UISystemInputViewController.h"
#import "UITapGestureRecognizer.h"
#import "UIScrollView.h"
#import "UIView.h"
#import "_UINavigationControllerManagedSearchPalette.h"
#import "UINavigationItem.h"
#import "UIFocusContainerGuide.h"
#import "UICollectionView.h"
#import "_UISearchControllerTVKeyboardContainerView.h"
#import "UIFocusGuide.h"
#import "UISearchBar.h"

@interface UISearchController : UIViewController <NSCoding, UIGestureRecognizerDelegate, _UIScrollViewScrollObserver_Internal, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>

 {
    id<UIViewControllerAnimatedTransitioning> *_animator;
    id *_windowWillAnimateToken;
    _UISearchControllerDidScrollDelegate *_didScrollDelegate;
    UISystemInputViewController *_systemInputViewController;
    BOOL _shouldFocusResultsOnNextFocusUpdate;
    UITapGestureRecognizer *_backButtonDismissGestureRecognizer;
    UITapGestureRecognizer *_doneButtonGestureRecognizer;
    NSInteger _lastKnownInterfaceOrientation;
    BOOL _shouldUseLegacyAnimator;
    ? _controllerFlags;
    UIScrollView *_noResultsContentScrollViewTop;
    UIScrollView *_noResultsContentScrollViewBottom;
    UIScrollView *_tvObservingScrollView;
    UIEdgeInsets _previousObservedScrollViewGradientMaskLengths;
    BOOL _previousObservedScrollViewShouldPreventFocusScrollPastContentSize;
}


@property (nonatomic, setter=_setAlwaysHidesNavigationBar:) BOOL _alwaysHidesNavigationBar; // ivar: __alwaysHidesNavigationBar
@property (nonatomic, setter=_setAutomaticallyShowsCancelButton:) BOOL _automaticallyShowsCancelButton;
@property (nonatomic, setter=_setAutomaticallyShowsScopeBar:) BOOL _automaticallyShowsScopeBar;
@property (nonatomic, getter=_automaticallyShowsSearchResultsController, setter=_setAutomaticallyShowsSearchResultsController:) BOOL _automaticallyShowsSearchResultsController;
@property (readonly, nonatomic) int _barPresentationStyle; // ivar: _barPresentationStyle
@property (readonly) BOOL _delegateWantsInsertSearchFieldTextSuggestion;
@property (nonatomic, getter=_isGridKeyboardVisible, setter=_setGridKeyboardVisible:) BOOL _gridKeyboardVisible; // ivar: __gridKeyboardVisible
@property (readonly, nonatomic) BOOL _isShowingSearchResultsControllerWhileActive;
@property (readonly, nonatomic) UIView *_leftDividerView; // ivar: __leftDividerView
@property (readonly, retain, nonatomic) _UINavigationControllerManagedSearchPalette *_managedPalette; // ivar: _managedPalette
@property (weak, nonatomic) UINavigationItem *_navigationItemCurrentlyDisplayingSearchController; // ivar: __navigationItemCurrentlyDisplayingSearchController
@property (nonatomic) NSInteger _previousSearchBarPosition; // ivar: __previousSearchBarPosition
@property (nonatomic, setter=_setRequestedInteractionModel:) NSUInteger _requestedInteractionModel; // ivar: __requestedInteractionModel
@property (nonatomic) CGFloat _resultsContentScrollViewPresentationOffset; // ivar: __resultsContentScrollViewPresentationOffset
@property (retain, nonatomic) UIView *_resultsControllerViewContainer; // ivar: _resultsControllerViewContainer
@property (readonly, nonatomic) UIView *_rightDividerView; // ivar: __rightDividerView
@property (retain, nonatomic) NSArray *_scopeBarConstraints; // ivar: __scopeBarConstraints
@property (readonly, nonatomic) UIFocusContainerGuide *_scopeBarFocusContainerGuide; // ivar: __scopeBarFocusContainerGuide
@property (readonly, nonatomic) BOOL _searchFieldIsBeginningEditing;
@property (readonly, nonatomic) BOOL _searchbarWasTableHeaderView;
@property (nonatomic, getter=_shouldDisplayDefaultSuggestion, setter=_setShouldDisplayDefaultSuggestion:) BOOL _shouldDisplayDefaultSuggestion; // ivar: __shouldDisplayDefaultSuggestion
@property (nonatomic, setter=_setShouldHideGridKeyboardUnfocused:) BOOL _shouldHideGridKeyboardUnfocused; // ivar: __shouldHideGridKeyboardUnfocused
@property (nonatomic) BOOL _shouldLogAppearance; // ivar: __shouldLogAppearance
@property (nonatomic, setter=_setShouldRespectPreferredContentSize:) BOOL _shouldRespectPreferredContentSize; // ivar: __shouldRespectPreferredContentSize
@property (nonatomic, setter=_setShowResultsForEmptySearch:) BOOL _showResultsForEmptySearch; // ivar: __showResultsForEmptySearch
@property (nonatomic, getter=_showsSearchResultsController, setter=_setShowsSearchResultsController:) BOOL _showsSearchResultsController;
@property (retain, nonatomic) UIView *_suggestionContainerView; // ivar: __suggestionContainerView
@property (readonly, nonatomic) UICollectionView *_suggestionView; // ivar: __suggestionView
@property (retain, nonatomic) UIView *_systemInputMarginView; // ivar: __systemInputMarginView
@property (readonly, nonatomic) UISystemInputViewController *_systemInputViewController;
@property (nonatomic) BOOL _tabBarHidden; // ivar: __tabBarHidden
@property (nonatomic) CGFloat _topResultsViewEdgeInset; // ivar: __topResultsViewEdgeInset
@property (readonly, nonatomic) _UISearchControllerTVKeyboardContainerView *_tvKeyboardContainerView; // ivar: __tvKeyboardContainerView
@property (readonly, nonatomic) BOOL _tvShouldScrollWithObservedScrollViewIfPossible;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) BOOL automaticallyShowsCancelButton;
@property (nonatomic) BOOL automaticallyShowsScopeBar;
@property (nonatomic) BOOL automaticallyShowsSearchResultsController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UISearchControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dimsBackgroundDuringPresentation;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesNavigationBarDuringPresentation; // ivar: _hidesNavigationBarDuringPresentation
@property (retain, nonatomic) UIFocusGuide *keyboardToSearchResultsFocusGuide; // ivar: _keyboardToSearchResultsFocusGuide
@property (nonatomic) BOOL obscuresBackgroundDuringPresentation; // ivar: _obscuresBackgroundDuringPresentation
@property (readonly, nonatomic) UISearchBar *searchBar; // ivar: _searchBar
@property (retain, nonatomic) UIScrollView *searchControllerObservedScrollView; // ivar: _searchControllerObservedScrollView
@property (copy, nonatomic) NSArray *searchHints; // ivar: _searchHints
@property (readonly, nonatomic) UIViewController *searchResultsController; // ivar: _searchResultsController
@property (retain, nonatomic) UIFocusGuide *searchResultsToHiddenKeyboardFocusGuide; // ivar: _searchResultsToHiddenKeyboardFocusGuide
@property (weak, nonatomic) NSObject<UISearchResultsUpdating> *searchResultsUpdater; // ivar: _searchResultsUpdater
@property (weak, nonatomic) NSObject<UISearchResultsUpdatingPrivate> *searchResultsUpdaterPrivate; // ivar: _searchResultsUpdaterPrivate
@property (copy, nonatomic) NSArray *searchSuggestions; // ivar: _searchSuggestions
@property (nonatomic) BOOL showsSearchResultsController;
@property (readonly) Class superclass;


+(void)_resignSearchBarAsFirstResponder:(id)arg0 ;
-(BOOL)_allowFormSheetStylePresentation;
-(BOOL)_containedInNavigationPaletteAndNotHidden;
-(BOOL)_disableAutomaticKeyboardUI;
-(BOOL)_gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)_isSearchController;
-(BOOL)_requiresCustomPresentationController;
-(BOOL)_resultsControllerWillLayoutVisibleUnderContainerView;
-(BOOL)_transitioningOutWithoutDisappearing;
-(CGFloat)transitionDuration:(id)arg0 ;
-(id)_animatorForBarPresentationStyle:(int)arg0 dismissing:(BOOL)arg1 ;
-(id)_carPlayLimitedUIToken;
-(id)_carPlayLimitedUIViewController;
-(id)_createAnimationCoordinator;
-(id)_defaultAnimationController;
-(id)_locatePresentingViewController;
-(id)_locatePresentingViewControllerIfInManagedPaletteOrHostedByNavigationBar;
-(id)_presentationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)_searchPresentationController;
-(id)_systemInputViewControllerAfterUpdate:(BOOL)arg0 ;
-(id)_viewToInsertSearchBarContainerViewUnder;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)focusItemContainer;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithSearchResultsController:(id)arg0 ;
-(id)preferredFocusEnvironments;
-(id)searchPlaceholderColor;
-(id)searchTextColor;
-(id)searchTextField;
-(struct CGSize )preferredContentSize;
-(struct UIEdgeInsets )_edgeInsetsForChildViewController:(id)arg0 insetsAreAbsolute:(*BOOL)arg1 ;
-(void)_adjustSearchBarSizeForOrientation:(NSInteger)arg0 ;
-(void)_adjustSearchBarSizeForOrientation:(NSInteger)arg0 oldPaletteFrame:(struct CGRect )arg1 ;
-(void)_adjustTVSearchContainerViewForContentScrollView:(id)arg0 ;
-(void)_beginWatchingPresentingController;
-(void)_commonInit;
-(void)_connectSearchBar:(id)arg0 ;
-(void)_createSystemInputViewControllerIfNeededForTraitEnvironment:(id)arg0 ;
-(void)_didCreateSystemInputViewController;
-(void)_didDismissSearchController;
-(void)_didPresentFromViewController:(id)arg0 ;
-(void)_dismissPresentation:(BOOL)arg0 ;
-(void)_displayDefaultHelperPlaceholderMessage;
-(void)_endWatchingPresentingController;
-(void)_handleBackButtonGesture:(id)arg0 ;
-(void)_installBackGestureRecognizer;
-(void)_installDoneGestureRecognizer;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_limitedUIDidChangeAnimated:(BOOL)arg0 ;
-(void)_navigationControllerWillShowViewController:(id)arg0 ;
-(void)_observeScrollViewDidScroll:(id)arg0 ;
-(void)_performAutomaticPresentationFromTextField:(BOOL)arg0 ;
-(void)_performDidBeginEditingForSearchBar:(id)arg0 ;
-(void)_preferredContentSizeDidChangeForChildViewController:(id)arg0 ;
-(void)_presentingViewControllerDidChange:(id)arg0 ;
-(void)_presentingViewControllerWillChange:(id)arg0 ;
-(void)_removeCarPlayLimitedUIObserver;
-(void)_resizeResultsControllerWithDelta:(struct CGSize )arg0 ;
-(void)_searchBar:(id)arg0 selectedScopeButtonIndexDidChange:(NSInteger)arg1 ;
-(void)_searchBar:(id)arg0 textDidChange:(id)arg1 programatically:(BOOL)arg2 ;
-(void)_searchBarCancelButtonClicked:(id)arg0 ;
-(void)_searchBarDidUpdateScopeBar:(id)arg0 ;
-(void)_searchBarSearchButtonClicked:(id)arg0 ;
-(void)_searchBarTextDidBeginEditing:(id)arg0 ;
-(void)_searchBarTokensDidChange:(id)arg0 ;
-(void)_sendDelegateInsertSearchFieldTextSuggestion:(id)arg0 ;
-(void)_setCarPlayLimitedUIToken:(id)arg0 ;
-(void)_setCarPlayLimitedUIViewController:(id)arg0 ;
-(void)_setTransitioningOutWithoutDisappearing:(BOOL)arg0 ;
-(void)_setupForCurrentTraitCollection;
-(void)_sizeSearchViewToPresentingViewController:(id)arg0 ;
-(void)_startManagingPalette:(id)arg0 ;
-(void)_stopManagingPalette;
-(void)_tvUpdateScrollViewGradientMaskWithNavigationController;
-(void)_uninstallBackGestureRecognizer;
-(void)_uninstallDoneGestureRecognizer;
-(void)_updateBarPresentationStyleForPresentingViewController:(id)arg0 ;
-(void)_updateFocusFromDoneButton:(id)arg0 ;
-(void)_updateSearchBarMaskIfNecessary;
-(void)_updateSearchResultsContentScrollViewWithDelta:(struct CGSize )arg0 ;
-(void)_updateSearchResultsControllerWithDelta:(struct CGSize )arg0 ;
-(void)_updateSearchResultsPositionWithDelta:(struct CGSize )arg0 ;
-(void)_updateSystemInputViewController;
-(void)_updateTableHeaderBackgroundViewInTableView:(id)arg0 amountScrolledUnder:(CGFloat)arg1 ;
-(void)_updateVisibilityOfSearchResultsForSearchBar:(id)arg0 ;
-(void)_watchScrollView:(id)arg0 forScrolling:(BOOL)arg1 ;
-(void)_willDismissSearchController;
-(void)_willPresentFromViewController:(id)arg0 ;
-(void)_willUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)animateTransition:(id)arg0 ;
-(void)applicationDidEnterBackground:(id)arg0 ;
-(void)applicationWillEnterForeground:(id)arg0 ;
-(void)dealloc;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadView;
-(void)setModalPresentationStyle:(NSInteger)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif
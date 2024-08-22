// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHLIBRARYSEARCHCONTROLLER_H
#define SBHLIBRARYSEARCHCONTROLLER_H

@class UIViewController, UIView, UIScrollView, UIViewController<SBHLibrarySearchControllerContentViewControllerScrollViewProvider>, NSArray, NSString, SBFFluidBehaviorSettings;
@protocol SBHSearchBarDelegate, BSUIScrollViewDelegate, SBHIconLibraryTableViewControllerLayoutDelegate, UIGestureRecognizerDelegate, PTSettingsKeyObserver, SBHLibrarySearchControllerDelegate, SBIconListLayoutProvider, SBHSearchResultsUpdating;


#import "SBHHomePullToSearchSettings.h"
#import "SBHSearchVisualConfiguration.h"
#import "SBHAppLibraryVisualConfiguration.h"
#import "SBHSearchBar.h"
#import "SBHSearchTextField.h"
#import "SBHIconLibraryTableViewController.h"

@interface SBHLibrarySearchController : UIViewController <SBHSearchBarDelegate, BSUIScrollViewDelegate, SBHIconLibraryTableViewControllerLayoutDelegate, UIGestureRecognizerDelegate, PTSettingsKeyObserver>

 {
    UIView *_containerView;
    UIView *_contentContainerView;
    UIView *_searchResultsContainerView;
    UIView *_searchBackgroundView;
    UIView *_searchResultsPlatterView;
    UIScrollView *_scrollView;
    SBHHomePullToSearchSettings *_pullToSearchSettings;
    SBHSearchVisualConfiguration *_searchVisualConfiguration;
    SBHAppLibraryVisualConfiguration *_libraryVisualConfiguration;
    BOOL _needsLowQualityBackgroundEffects;
    BOOL _disablePullToSearch;
}


@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) UIViewController<SBHLibrarySearchControllerContentViewControllerScrollViewProvider> *contentViewController; // ivar: _contentViewController
@property (readonly, nonatomic) NSArray *contentViewGradientMaskLayers; // ivar: _contentViewGradientMaskLayers
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBHLibrarySearchControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forcedSearchTextFieldNoneditable; // ivar: _forcedSearchTextFieldNoneditable
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SBIconListLayoutProvider> *listLayoutProvider; // ivar: _listLayoutProvider
@property (nonatomic) BOOL scrollViewBeganScrollingFromTop; // ivar: _scrollViewBeganScrollingFromTop
@property (retain, nonatomic) SBFFluidBehaviorSettings *searchAnimationSettings; // ivar: _searchAnimationSettings
@property (readonly, nonatomic) SBHSearchBar *searchBar; // ivar: _searchBar
@property (nonatomic) NSUInteger searchBarAppearance; // ivar: _searchBarAppearance
@property (retain, nonatomic) UIView *searchDimmingView; // ivar: _searchDimmingView
@property (readonly, nonatomic) SBHSearchTextField *searchField; // ivar: _searchField
@property (readonly, nonatomic, getter=isSearchFieldEditing) BOOL searchFieldEditing;
@property (readonly, nonatomic) SBHIconLibraryTableViewController *searchResultsController; // ivar: _searchResultsController
@property (readonly, nonatomic) NSArray *searchResultsGradientMaskLayers; // ivar: _searchResultsGradientMaskLayers
@property (weak, nonatomic) NSObject<SBHSearchResultsUpdating> *searchResultsUpdater; // ivar: _searchResultsUpdater
@property (readonly, nonatomic) NSInteger searchState; // ivar: _searchState
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL usesPlatterAppearance; // ivar: _usesPlatterAppearance


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)isTransitionInProgress;
-(BOOL)searchBarShouldBeginEditing:(id)arg0 ;
-(BOOL)searchBarShouldEndEditing:(id)arg0 ;
-(BOOL)searchBarShouldReturn:(id)arg0 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(CGFloat)_bottomLayoutInsetForSearchResultsView;
-(CGFloat)_rubberbandingOffsetForContentOffset:(struct CGPoint )arg0 ;
-(CGFloat)_searchPresentationProgressForOffset:(CGFloat)arg0 ;
-(CGFloat)fixedBottomLayoutInsetInWindowCoordinateSpaceForTableViewController:(id)arg0 ;
-(id)_activeSearchConfiguration;
-(id)_inactiveSearchConfiguration;
-(id)contentScrollView;
-(id)initWithSearchResultsController:(id)arg0 contentViewController:(id)arg1 usingPlatterAppearance:(BOOL)arg2 ;
-(id)keyCommands;
-(struct CGRect )_calculateSearchBarFrame:(BOOL)arg0 ;
-(struct CGRect )_calculateSearchBarFrame:(BOOL)arg0 forExplicitVisualConfiguration:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(struct UIEdgeInsets )_edgeInsetsForChildViewController:(id)arg0 insetsAreAbsolute:(*BOOL)arg1 ;
-(void)_didDismissSearch;
-(void)_didPresentSearch;
-(void)_dismissPresentation:(BOOL)arg0 ;
-(void)_layoutSearchViews;
-(void)_layoutSearchViewsWithMode:(NSInteger)arg0 withCompletion:(id)arg1 ;
-(void)_performPresentation:(BOOL)arg0 ;
-(void)_setUpFeatherMaskLayerMatchMoveAnimations;
-(void)_setupSearchAnimationSettings;
-(void)_updateEffectiveSearchVisualConfiguration;
-(void)_willDismissSearchAnimated:(BOOL)arg0 ;
-(void)_willPresentSearchAnimated:(BOOL)arg0 ;
-(void)beginEditingForSearchField;
-(void)endEditingForSearchField;
-(void)ppt_setDisablePullToSearch:(BOOL)arg0 ;
-(void)scrollViewDidEndScrolling:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillBeginScrolling:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg0 ;
-(void)searchBarDidInvalidateIntrinsicContentSize:(id)arg0 ;
-(void)searchBarTextDidEndEditing:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif
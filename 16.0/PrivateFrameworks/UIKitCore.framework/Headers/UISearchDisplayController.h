// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISEARCHDISPLAYCONTROLLER_H
#define UISEARCHDISPLAYCONTROLLER_H

@class NSString, NSArray;
@protocol _UIScrollViewScrollObserver_Internal, UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "UILabel.h"
#import "UIPopoverController.h"
#import "UIScrollView.h"
#import "UISearchDisplayControllerContainerView.h"
#import "UINavigationItem.h"
#import "_UINavigationControllerPalette.h"
#import "UIButton.h"
#import "UIColor.h"
#import "_UISearchControllerDidScrollDelegate.h"
#import "UISearchBar.h"
#import "UIViewController.h"
#import "UITableView.h"

@interface UISearchDisplayController : NSObject <_UIScrollViewScrollObserver_Internal>

 {
    UIView *_dimmingView;
    UILabel *_noResultsLabel;
    NSString *_noResultsMessage;
    *__CFArray _containingScrollViews;
    CGFloat _lastKeyboardAdjustment;
    CGFloat _lastFooterAdjustment;
    UIPopoverController *_popoverController;
    NSInteger _searchResultsTableViewStyle;
    id *_navigationControllerBookkeeper;
    NSArray *_savedSelectedCellsWhenViewWillAppear;
    UIScrollView *_savedContainingScrollView;
    UISearchDisplayControllerContainerView *_containerView;
    NSUInteger _savedSearchBarResizingMask;
    UINavigationItem *_navigationItem;
    CGPoint _containingScrollViewContentOffset;
    CGRect _searchFieldInNavigationBarFrame;
    _UINavigationControllerPalette *_attachedNavigationPalette;
    UIButton *_animatingAppearanceNavigationButton;
    CGFloat _animatingAppearanceNavigationSearchBarWidth;
    UIColor *_dimmingOverlayColor;
    UIView *_tableViewBackgroundHeaderView;
    NSInteger _unactivatedBarPosition;
    _UISearchControllerDidScrollDelegate *_didScrollDelegate;
    ? _searchDisplayControllerFlags;
}


@property (nonatomic) CGFloat _activationGapHeight; // ivar: __activationGapHeight
@property (nonatomic) CGFloat _additionalNonCollapsingHeightAboveSearchBar; // ivar: __additionalNonCollapsingHeightAboveSearchBar
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) BOOL automaticallyShowsNoResultsMessage;
@property (nonatomic, getter=_isCancelButtonManagementDisabled, setter=_setCancelButtonManagementDisabled:) BOOL cancelButtonManagementDisabled;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<UISearchDisplayDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dimTableViewOnEmptySearchString;
@property (nonatomic) BOOL displaysSearchBarInNavigationBar; // ivar: _displaysSearchBarInNavigationBar
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isNavigationBarHidingEnabled) BOOL navigationBarHidingEnabled;
@property (nonatomic) NSUInteger navigationBarSearchFieldSizing; // ivar: _navigationBarSearchFieldSizing
@property (readonly, nonatomic) UINavigationItem *navigationItem;
@property (copy, nonatomic) NSString *noResultsMessage;
@property (nonatomic) BOOL noResultsMessageVisible;
@property (readonly, nonatomic) UISearchBar *searchBar; // ivar: _searchBar
@property (readonly, weak, nonatomic) UIViewController *searchContentsController; // ivar: _viewController
@property (weak, nonatomic) NSObject<UITableViewDataSource> *searchResultsDataSource; // ivar: _tableViewDataSource
@property (weak, nonatomic) NSObject<UITableViewDelegate> *searchResultsDelegate; // ivar: _tableViewDelegate
@property (readonly, nonatomic) UITableView *searchResultsTableView; // ivar: _tableView
@property (copy, nonatomic) NSString *searchResultsTitle; // ivar: _resultsTitle
@property (readonly) Class superclass;


+(void)_uiibSetRequiresSearchDisplayControllerSupport;
-(BOOL)_allowDisablingNavigationBarHiding;
-(BOOL)_areSearchContentsSplitViewMaster;
-(BOOL)_containedInPopover;
-(BOOL)_isSearchBarInBar;
-(BOOL)_searchBarShouldScrollToVisible:(id)arg0 ;
-(BOOL)_shouldAccountForStatusBarHeight;
-(BOOL)_showsResultsForEmptyField;
-(BOOL)hidNavigationBar;
-(BOOL)popoverControllerShouldDismissPopover:(id)arg0 ;
-(CGFloat)_dimmingViewAlpha;
-(CGFloat)_statusBarHeight;
-(CGFloat)_updateNavigationPalette;
-(id)_containerView;
-(id)_containingTableView;
-(id)_containingViewOfClass:(Class)arg0 ;
-(id)_createPopoverController;
-(id)_dimmingOverlayColor;
-(id)_dimmingViewColor;
-(id)_topShadowView;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSearchBar:(id)arg0 contentsController:(id)arg1 ;
-(id)initWithSearchBar:(id)arg0 contentsController:(id)arg1 searchResultsTableViewStyle:(NSInteger)arg2 ;
-(struct UIEdgeInsets )_tableViewContentInsets;
-(void)_adjustTableViewContentInsetsAndOffsetsIgnoringCurrent:(BOOL)arg0 ;
-(void)_animateNavigationBarSearchBarAppearance:(id)arg0 ;
-(void)_cleanUpSearchBar;
-(void)_clearSavedSelectedCellsWeUsedWhenHedgingOurBets;
-(void)_clearViewController;
-(void)_configureContainerView;
-(void)_configureNewSearchBar;
-(void)_configureSearchBarForTableView;
-(void)_destroyManagedTableView;
-(void)_disableParentScrollViews;
-(void)_enableParentScrollViews;
-(void)_hideVisibleRefreshControl;
-(void)_hoistSearchBar;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_managedTableViewDidScroll;
-(void)_observeScrollViewDidScroll:(id)arg0 ;
-(void)_popoverClearButtonPressed:(id)arg0 ;
-(void)_popoverKeyboardDidHide:(id)arg0 ;
-(void)_popoverKeyboardDidShow:(id)arg0 ;
-(void)_restoreSelectedCellsInCaseViewDidNotReallyAppear;
-(void)_saveSelectedRowsInCaseViewDoesNotReallyAppear;
-(void)_sendDelegateDidBeginDidEndSearch;
-(void)_setAllowDisablingNavigationBarHiding:(BOOL)arg0 ;
-(void)_setDimmingOverlayColor:(id)arg0 ;
-(void)_setShowsResultsForEmptyField:(BOOL)arg0 ;
-(void)_setTableViewVisible:(BOOL)arg0 inView:(id)arg1 ;
-(void)_setupNoResultsLabelIfNecessary;
-(void)_updateNoSearchResultsMessageVisiblity;
-(void)_updatePinnedSearchBar;
-(void)_updateSearchBarMaskIfNecessary;
-(void)_updateTableHeaderBackgroundViewInTableView:(id)arg0 amountScrolledUnder:(CGFloat)arg1 ;
-(void)_watchContainingTableViewForScrolling:(BOOL)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)navigationControllerDidCancelShowingViewController:(id)arg0 ;
-(void)navigationControllerDidShowViewController:(id)arg0 ;
-(void)navigationControllerWillShowViewController:(id)arg0 ;
-(void)popoverController:(id)arg0 animationCompleted:(NSInteger)arg1 ;
-(void)searchBar:(id)arg0 selectedScopeButtonIndexDidChange:(NSInteger)arg1 ;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg0 ;
-(void)searchBarResultsListButtonClicked:(id)arg0 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)searchBarTextDidBeginEditing:(id)arg0 ;
-(void)showHideAnimationDidFinish;
-(void)windowDidRotate:(id)arg0 ;
-(void)windowWillAnimateRotation:(id)arg0 ;


@end


#endif
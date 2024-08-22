// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFUNIFIEDTABBAR_H
#define SFUNIFIEDTABBAR_H

@class UIView, UIScrollView, NSMutableArray, UIHoverGestureRecognizer, UIPointerInteraction, NSDate, NSString, UITextField, NSArray;
@protocol SFUnifiedTabBarItemViewDelegate, UIScrollViewDelegate, UIPointerInteractionDelegate, SFUnifiedBarContentView, SFUnifiedTabBarNavigationDelegate;


#import "SFUnifiedTabBarLayout.h"
#import "SFUnifiedTabBarItemTitleContainerView.h"
#import "SFUnifiedTabBarItemView.h"
#import "SFUnifiedBarItem.h"
#import "SFUnifiedBarMetrics.h"
#import "SFUnifiedBarTheme.h"
#import "SFUnifiedTabBarItemArrangement.h"
#import "SFTabHoverPreviewController.h"

@interface SFUnifiedTabBar : UIView <SFUnifiedTabBarItemViewDelegate, UIScrollViewDelegate, UIPointerInteractionDelegate, SFUnifiedBarContentView>

 {
    UIScrollView *_scrollView;
    SFUnifiedTabBarLayout *_layout;
    CGRect _lastLayoutFrame;
    NSMutableArray *_viewReuseStack;
    SFUnifiedTabBarItemTitleContainerView *_squishedTitleContainer;
    SFUnifiedTabBarItemView *_itemViewOwningSearchField;
    UIView *_searchFieldPopoverAlignmentView;
    UIHoverGestureRecognizer *_hoverRecognizer;
    BOOL _tabHoverPreviewSnapshotsNeedUpdate;
    NSInteger _scrollingAnimationCount;
    UIPointerInteraction *_pointerInteraction;
    UIView *_activeItemCutoutView;
    SFUnifiedBarItem *_activeItemShowingCutout;
    NSDate *_lastTapToRevealActiveItemDate;
}


@property (nonatomic) CGFloat barBackgroundAlpha; // ivar: _barBackgroundAlpha
@property (readonly, nonatomic) SFUnifiedBarMetrics *barMetrics; // ivar: _barMetrics
@property (retain, nonatomic) SFUnifiedBarTheme *barTheme; // ivar: _barTheme
@property (nonatomic) NSDirectionalEdgeInsets contentInset; // ivar: _contentInset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger indexOfCenterItem;
@property (retain, nonatomic) SFUnifiedTabBarItemArrangement *itemArrangement; // ivar: _itemArrangement
@property (readonly, nonatomic) UIView *itemContainerView;
@property (readonly, nonatomic) NSUInteger maximumNumberOfVisibleItems;
@property (readonly, nonatomic) UIView *menuPopoverSourceView;
@property (nonatomic) CGPoint midpointForCenteredContent; // ivar: _midpointForCenteredContent
@property (weak) NSObject<SFUnifiedTabBarNavigationDelegate> *navigationDelegate; // ivar: _navigationDelegate
@property (nonatomic) BOOL pinsScrollPositionToTrailingEdgeDuringResize; // ivar: _pinsScrollPositionToTrailingEdgeDuringResize
@property (nonatomic) CGFloat preferredWidth;
@property (nonatomic) NSInteger role; // ivar: _role
@property (readonly, nonatomic) UITextField *searchField; // ivar: _searchField
@property (readonly, nonatomic) UIEdgeInsets searchFieldPopoverSourceInsets;
@property (readonly, nonatomic) UIView *searchFieldPopoverSourceView;
@property (nonatomic) BOOL searchFieldShowsFormatMenuButtonAccessories; // ivar: _searchFieldShowsFormatMenuButtonAccessories
@property (nonatomic) BOOL showsSquishedAccessoryViews; // ivar: _showsSquishedAccessoryViews
@property (nonatomic) BOOL showsSquishedTitleContainer;
@property (nonatomic) NSUInteger sizeClass; // ivar: _sizeClass
@property (nonatomic) CGFloat squishTransformFactor; // ivar: _squishTransformFactor
@property (readonly, nonatomic) NSArray *squishedAccessoryViews;
@property (nonatomic) UIEdgeInsets squishedContentInset; // ivar: _squishedContentInset
@property (readonly, nonatomic, getter=isStandalone) BOOL standalone;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SFTabHoverPreviewController *tabHoverPreviewController; // ivar: _tabHoverPreviewController
@property (nonatomic) CGFloat themeColorVisibility; // ivar: _themeColorVisibility


-(BOOL)_activeItemHidesIcon;
-(BOOL)_centersContentForSingleItem;
-(BOOL)canCloseItem:(id)arg0 ;
-(BOOL)tabBarItemViewCanBecomeFocused:(id)arg0 ;
-(NSInteger)_itemViewAccessoryButtonLayout;
-(NSInteger)_platterStyleForItem:(id)arg0 ;
-(id)_activeTabBarItemView;
-(id)_currentLayoutConfiguration;
-(id)_firstFullyVisibleInactiveItem;
-(id)_prepareForAnimatedResizeIfNeeded;
-(id)_viewForItem:(id)arg0 inArrangement:(id)arg1 ;
-(id)dragPreviewForTabBarItem:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)newSearchField;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(id)tabBarItemAtPoint:(struct CGPoint )arg0 ;
-(id)tabBarItemClosestToPoint:(struct CGPoint )arg0 ;
-(id)viewForTabBarItem:(id)arg0 ;
-(struct CGPoint )_adjustedContentOffsetForContentOffset:(struct CGPoint )arg0 size:(struct CGSize )arg1 contentSize:(struct CGSize )arg2 ;
-(struct CGPoint )_targetContentOffsetForAnimatedResizeWithTargetLayout:(id)arg0 ;
-(struct CGRect )frameForTabBarItem:(id)arg0 ;
-(struct UIEdgeInsets )_itemTouchInsets;
-(void)_applyLayoutInfo:(struct ? )arg0 toItemView:(id)arg1 ;
-(void)_beginTransitioningSearchField;
-(void)_didBeginScrollingAnimation;
-(void)_didEndAnimationsForItems:(id)arg0 ;
-(void)_didEndScrollingAnimation;
-(void)_didSelectItemView:(id)arg0 ;
-(void)_discardItemView:(id)arg0 ;
-(void)_discardViewForItem:(id)arg0 ;
-(void)_discardViewsForAnimatingItemsIfNeeded:(id)arg0 ;
-(void)_discardViewsForIndexes:(id)arg0 ofItems:(id)arg1 ;
-(void)_endTransitioningSearchField;
-(void)_hover:(id)arg0 ;
-(void)_installActiveItemCutoutViewIfNeeded;
-(void)_installSearchFieldIfNeeded;
-(void)_layOutActiveItemCutoutView;
-(void)_layoutAppearingItemsAtIndexes:(id)arg0 withDistanceToScroll:(CGFloat)arg1 usingLayout:(id)arg2 ;
-(void)_layoutDisappearingItemsAtIndexes:(id)arg0 withDistanceScrolled:(CGFloat)arg1 usingLayout:(id)arg2 ;
-(void)_layoutItems;
-(void)_layoutItemsAtIndexes:(id)arg0 usingLayout:(id)arg1 ;
-(void)_layoutSquishedTitleContainer;
-(void)_setRevealsSquishedActiveItem:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_uninstallActiveItemCutoutViewIfNeeded;
-(void)_uninstallSearchFieldIfNeeded;
-(void)_updateContentSizeIfNeeded;
-(void)_updateCutoutsForItemsAtIndexes:(id)arg0 inArrangement:(id)arg1 ;
-(void)_updateScrolling;
-(void)closeItem:(id)arg0 ;
-(void)didSelectItem:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)revealActiveItemIfNeeded;
-(void)scrollToItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)setActiveItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)setActiveItemIsExpanded:(BOOL)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)tabBarItemView:(id)arg0 extensionButtonTapped:(id)arg1 extension:(id)arg2 ;
-(void)tabBarItemView:(id)arg0 multipleExtensionButtonTapped:(id)arg1 ;
-(void)tabBarItemViewCloseButtonTapped:(id)arg0 ;
-(void)tabBarItemViewDidRequestFocusForPencilInput:(id)arg0 completionHandler:(id)arg1 ;
-(void)tabBarItemViewMediaStateMuteButtonTapped:(id)arg0 ;
-(void)tabBarItemViewMenuButtonClicked:(id)arg0 ;
-(void)tabBarItemViewMenuButtonReceivedTouchDown:(id)arg0 ;
-(void)tabBarItemViewMenuButtonTapped:(id)arg0 ;
-(void)tabBarItemViewReaderButtonTapped:(id)arg0 ;
-(void)tabBarItemViewReloadButtonTapped:(id)arg0 ;
-(void)tabBarItemViewStopButtonTapped:(id)arg0 ;
-(void)tabBarItemViewTranslationButtonTapped:(id)arg0 ;
-(void)tabBarItemViewVoiceSearchButtonTapped:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateLayout;


@end


#endif
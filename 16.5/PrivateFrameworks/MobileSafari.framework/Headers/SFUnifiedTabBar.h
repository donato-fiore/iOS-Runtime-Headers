// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFUNIFIEDTABBAR_H
#define SFUNIFIEDTABBAR_H

@class UIView, UIScrollView, NSMutableDictionary, _UIVisualEffectBackdropView, UIHoverGestureRecognizer, UIPointerInteraction, NSDate, NSString, UITextField, NSArray;
@protocol SFUnifiedTabBarItemViewDelegate, _SFFluidProgressViewDelegate, UIScrollViewDelegate, UIPointerInteractionDelegate, SFUnifiedBarContentView, SFUnifiedTabBarNavigationDelegate;


#import "SFUnifiedTabBarLayout.h"
#import "SFUnifiedTabBarItemTitleContainerView.h"
#import "SFUnifiedTabBarItemView.h"
#import "SFPinnedOverflowItem.h"
#import "SFUnifiedTabBarItemArrangement.h"
#import "SFUnifiedTabBarMetrics.h"
#import "SFUnifiedBarTheme.h"
#import "_SFFluidProgressView.h"
#import "SFTabHoverPreviewController.h"

@interface SFUnifiedTabBar : UIView <SFUnifiedTabBarItemViewDelegate, _SFFluidProgressViewDelegate, UIScrollViewDelegate, UIPointerInteractionDelegate, SFUnifiedBarContentView>

 {
    UIScrollView *_scrollView;
    SFUnifiedTabBarLayout *_layout;
    CGRect _lastLayoutFrame;
    NSMutableDictionary *_itemViewRegistrationsByReuseIdentifier;
    SFUnifiedTabBarItemTitleContainerView *_squishedTitleContainer;
    SFUnifiedTabBarItemView *_itemViewOwningSearchField;
    UIView *_searchFieldPopoverAlignmentView;
    _UIVisualEffectBackdropView *_backgroundCaptureView;
    UIView *_pinnedItemsSeparator;
    SFPinnedOverflowItem *_pinnedOverflowItem;
    UIView *_dragPreviewContainer;
    UIHoverGestureRecognizer *_hoverRecognizer;
    BOOL _tabHoverPreviewSnapshotsNeedUpdate;
    NSInteger _scrollingAnimationCount;
    UIPointerInteraction *_pointerInteraction;
    NSDate *_lastTapToRevealActiveItemDate;
    SFUnifiedTabBarItemArrangement *_unresolvedItemArrangement;
}


@property (nonatomic) CGFloat barBackgroundAlpha; // ivar: _barBackgroundAlpha
@property (retain, nonatomic) SFUnifiedTabBarMetrics *barMetrics; // ivar: _barMetrics
@property (retain, nonatomic) SFUnifiedBarTheme *barTheme; // ivar: _barTheme
@property (nonatomic, getter=isContentHidden) BOOL contentHidden; // ivar: _contentHidden
@property (nonatomic) NSDirectionalEdgeInsets contentInset; // ivar: _contentInset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger indexOfCenterItem;
@property (readonly, nonatomic) BOOL isCurrentlyScrollable;
@property (retain, nonatomic) SFUnifiedTabBarItemArrangement *itemArrangement; // ivar: _itemArrangement
@property (readonly, nonatomic) UIView *itemContainerView;
@property (nonatomic) BOOL itemsNeedEraserBasedCutoutBorder; // ivar: _itemsNeedEraserBasedCutoutBorder
@property (readonly, nonatomic) NSUInteger maximumNumberOfVisibleItems;
@property (readonly, nonatomic) UIView *menuPopoverSourceView;
@property (nonatomic) CGPoint midpointForCenteredContent; // ivar: _midpointForCenteredContent
@property (retain, nonatomic) _SFFluidProgressView *minimizedProgressView; // ivar: _minimizedProgressView
@property (weak) NSObject<SFUnifiedTabBarNavigationDelegate> *navigationDelegate; // ivar: _navigationDelegate
@property (readonly, nonatomic) CGRect pinnedItemDropArea;
@property (nonatomic) BOOL pinsScrollPositionToTrailingEdgeDuringResize; // ivar: _pinsScrollPositionToTrailingEdgeDuringResize
@property (readonly, nonatomic) CGFloat preferredBottomSpacing;
@property (readonly, nonatomic) CGSize preferredSize;
@property (readonly, nonatomic) CGFloat preferredSquishedBottomSpacing;
@property (readonly, nonatomic) CGFloat preferredTopSpacing;
@property (nonatomic) NSInteger role; // ivar: _role
@property (readonly, nonatomic) UITextField *searchField; // ivar: _searchField
@property (readonly, nonatomic) UIEdgeInsets searchFieldPopoverSourceInsets;
@property (readonly, nonatomic) UIView *searchFieldPopoverSourceView;
@property (nonatomic) BOOL searchFieldShowsFormatMenuButtonAccessories; // ivar: _searchFieldShowsFormatMenuButtonAccessories
@property (readonly, nonatomic) BOOL searchFieldShowsPersistentStopReloadButton;
@property (nonatomic) BOOL showsSquishedAccessoryViews; // ivar: _showsSquishedAccessoryViews
@property (readonly, nonatomic) BOOL showsSquishedContent;
@property (nonatomic) BOOL showsSquishedTitleContainer;
@property (nonatomic) NSUInteger sizeClass; // ivar: _sizeClass
@property (nonatomic) CGFloat squishTransformFactor; // ivar: _squishTransformFactor
@property (readonly, nonatomic) NSArray *squishedAccessoryViews;
@property (nonatomic) UIEdgeInsets squishedContentInset; // ivar: _squishedContentInset
@property (readonly, nonatomic, getter=isStandalone) BOOL standalone;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SFTabHoverPreviewController *tabHoverPreviewController; // ivar: _tabHoverPreviewController
@property (nonatomic) CGFloat themeColorVisibility; // ivar: _themeColorVisibility
@property (readonly, nonatomic) CGFloat topSquishedSpacingAdjustment;
@property (readonly, nonatomic) BOOL usesMoreMenu;


-(BOOL)_centersContentForSingleItem;
-(BOOL)_shouldDelayContentTouches;
-(BOOL)canCloseItem:(id)arg0 ;
-(BOOL)tabBarItemViewCanBecomeFocused:(id)arg0 ;
-(CGFloat)_preferredWidth;
-(NSInteger)_itemViewAccessoryButtonLayout;
-(NSInteger)_platterStyleForTabBarItem:(id)arg0 ;
-(NSUInteger)_pinnedItemLimitForItemArrangement:(id)arg0 ;
-(id)_activeTabBarItemView;
-(id)_backgroundCaptureGroupName;
-(id)_currentLayoutConfiguration;
-(id)_firstFullyVisibleInactiveItem;
-(id)_pinnedOverflowMenu;
-(id)_prepareForResizeIfNeeded;
-(id)_viewForItem:(id)arg0 inArrangement:(id)arg1 ;
-(id)dragPreviewForBarItem:(id)arg0 ;
-(id)dragPreviewForBarItem:(id)arg0 pinned:(BOOL)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)newSearchField;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(id)tabBarItemAtPoint:(struct CGPoint )arg0 ;
-(id)tabBarItemClosestToPoint:(struct CGPoint )arg0 ;
-(id)viewForBarItem:(id)arg0 ;
-(struct CGPoint )_adjustedContentOffsetForContentOffset:(struct CGPoint )arg0 size:(struct CGSize )arg1 contentSize:(struct CGSize )arg2 ;
-(struct CGPoint )_targetContentOffsetForAnimatedResizeWithTargetLayout:(id)arg0 ;
-(struct CGRect )frameForTabBarItem:(id)arg0 ;
-(struct UIEdgeInsets )_itemTouchInsets;
-(void)_applyLayoutInfo:(struct ? )arg0 toItemView:(id)arg1 ;
-(void)_beginTransitioningSearchField;
-(void)_configureTabBarItemView:(id)arg0 forItem:(id)arg1 inArrangement:(id)arg2 isPreview:(BOOL)arg3 ;
-(void)_didBeginScrollingAnimation;
-(void)_didEndAnimationsForItems:(id)arg0 ;
-(void)_didEndScrollingAnimation;
-(void)_didSelectItemView:(id)arg0 ;
-(void)_discardItemView:(id)arg0 ;
-(void)_discardViewForItem:(id)arg0 ;
-(void)_discardViewsForAnimatingItemsIfNeeded:(id)arg0 ;
-(void)_discardViewsForIndexes:(id)arg0 ofItems:(id)arg1 ;
-(void)_endTransitioningSearchFieldInItemView:(id)arg0 ;
-(void)_hover:(id)arg0 ;
-(void)_installSearchFieldIfNeeded;
-(void)_layOutPinnedItemsSeparator;
-(void)_layoutAppearingItemsAtIndexes:(id)arg0 withDistanceToScroll:(CGFloat)arg1 usingLayout:(id)arg2 ;
-(void)_layoutDisappearingItemsAtIndexes:(id)arg0 withDistanceScrolled:(CGFloat)arg1 usingLayout:(id)arg2 ;
-(void)_layoutItems;
-(void)_layoutItemsAtIndexes:(id)arg0 usingLayout:(id)arg1 ;
-(void)_layoutSquishedTitleContainer;
-(void)_setResolvedItemArrangement:(id)arg0 animated:(BOOL)arg1 keepingItemVisible:(id)arg2 completionHandler:(id)arg3 ;
-(void)_setRevealsSquishedActiveItem:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_setUpBuiltInItemViewRegistrations;
-(void)_setUpPinnedItemsSeparatorIfNeeded;
-(void)_tearDownPinnedItemsSeparatorIfNeeded;
-(void)_uninstallSearchFieldIfNeeded;
-(void)_updateContentSizeIfNeeded;
-(void)_updateHoveringItem:(id)arg0 ;
-(void)_updateItemSizesIfNeeded;
-(void)_updateMinimizedProgressViewFillColor;
-(void)_updatePinnedItemsSeparator;
-(void)_updateScrolling;
-(void)_updateShowsMinimizedProgressView;
-(void)cleanUpDragPreviewForBarItem:(id)arg0 ;
-(void)closeItem:(id)arg0 ;
-(void)didSelectItem:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)fluidProgressViewDidShowProgress:(id)arg0 ;
-(void)fluidProgressViewWillShowProgress:(id)arg0 ;
-(void)layoutSubviews;
// -(void)registerReuseIdentifier:(id)arg0 withItemViewProvider:(id)arg1 configurationHandler:(unk)arg2  ;
-(void)revealActiveItemIfNeeded;
-(void)scrollToItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)setActiveItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)setActiveItemIsExpanded:(BOOL)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)tabBarItemView:(id)arg0 didFinishShowingAvailabilityLabelOfType:(NSInteger)arg1 ;
-(void)tabBarItemView:(id)arg0 didUpdateHovering:(BOOL)arg1 ;
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
-(void)updateCloseButtonVisibility;
-(void)updateLayout;


@end


#endif
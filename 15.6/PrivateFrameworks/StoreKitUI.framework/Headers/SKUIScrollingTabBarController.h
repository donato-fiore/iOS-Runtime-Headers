// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUISCROLLINGTABBARCONTROLLER_H
#define SKUISCROLLINGTABBARCONTROLLER_H

@class UIScrollView, UIViewController, UIView, NSMapTable, NSArray, NSString, UINavigationController;
@protocol SKUIDynamicBarAnimatorDelegate, SKUIProxyScrollViewDelegate, SKUIScrollingTabBarContentCollectionViewDelegate, SKUIScrollingTabBarControllerItemContextDelegate, SKUIScrollingTabBarPaletteDelegate, SKUIScrollViewDelegateObserver, UICollectionViewDataSource, UICollectionViewDelegate, SKUITabBarController, SKUITabBarControllerDelegate;


#import "SKUIViewController.h"
#import "SKUIScrollingTabBarContentCollectionView.h"
#import "SKUIDynamicBarAnimator.h"
#import "SKUIProxyScrollView.h"
#import "SKUICrossFadingTabBar.h"
#import "SKUIScrollingTabBarBackgroundView.h"
#import "SKUIScrollingTabBarPalette.h"
#import "SKUIScrollingTabBarControllerItemContext.h"

@interface SKUIScrollingTabBarController : SKUIViewController <SKUIDynamicBarAnimatorDelegate, SKUIProxyScrollViewDelegate, SKUIScrollingTabBarContentCollectionViewDelegate, SKUIScrollingTabBarControllerItemContextDelegate, SKUIScrollingTabBarPaletteDelegate, SKUIScrollViewDelegateObserver, UICollectionViewDataSource, UICollectionViewDelegate, SKUITabBarController>

 {
    NSUInteger _activePaletteTransitions;
    ? _additionalPositionOffsetsUpdateRecord;
    NSUInteger _additionalPositionOffsetsAtomicUpdateRequestCount;
    BOOL _canHideBarsOnSwipe;
    CGSize _contentCollectionViewItemSize;
    SKUIScrollingTabBarContentCollectionView *_contentCollectionView;
    SKUIDynamicBarAnimator *_dynamicBarAnimator;
    UIScrollView *_focusedContentScrollView;
    UIViewController *_focusedViewController;
    BOOL _focusedScrollViewIsDragging;
    NSInteger _indexOfViewControllerWithUpdatedContentSize;
    BOOL _isDelegatingPresentedViewControllerLogicToSelectedViewController;
    SKUIProxyScrollView *_proxyScrollView;
    UIEdgeInsets _proxyScrollViewContentInsetAdjustment;
    NSUInteger _referenceCountForIgnoringContentOffsetUpdateRequests;
    BOOL _shouldPreserveFocusUponNextContentCollectionViewItemSizeChange;
    BOOL _shouldShowBarsAfterDraggingDownward;
    SKUICrossFadingTabBar *_tabBar;
    UIView *_tabBarContainerView;
    UIOffset _tabBarExplicitHidingOffset;
    BOOL _tabBarExplicitlyHidden;
    SKUIScrollingTabBarBackgroundView *_tabBarExtendedBackgroundView;
    SKUIScrollingTabBarPalette *_tabBarPalette;
    UIViewController *_topLevelFocusedViewController;
    SKUIScrollingTabBarControllerItemContext *_transientViewControllerItemContext;
    NSMapTable *_viewControllerToItemContext;
}


@property (nonatomic) UIOffset additionalTabBarButtonsContainerPositionOffset; // ivar: _additionalTabBarButtonsContainerPositionOffset
@property (nonatomic) UIOffset additionalTabBarPalettePositionOffset; // ivar: _additionalTabBarPalettePositionOffset
@property (readonly, nonatomic) NSArray *allViewControllers;
@property (nonatomic) BOOL chargeEnabledOnTabBarButtonsContainer; // ivar: _chargeEnabledOnTabBarButtonsContainer
@property (readonly, nonatomic) CGFloat contentViewControllerBottomInsetAdjustment;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<SKUITabBarControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIViewController *floatingOverlayViewController;
@property (nonatomic) NSInteger forcedUserInterfaceStyle;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UINavigationController *moreNavigationController;
@property (nonatomic) BOOL scrollEnabled; // ivar: _scrollEnabled
@property (nonatomic) NSUInteger selectedIndex;
@property (nonatomic) UIViewController *selectedViewController;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *tabBar;
@property (readonly, nonatomic) CGRect tabBarButtonsContainerFrame;
@property (readonly, nonatomic) CGRect tabBarPaletteFrame;
@property (retain, nonatomic) UIViewController *transientViewController; // ivar: _transientViewController
@property (copy, nonatomic) NSArray *viewControllers; // ivar: _viewControllers


+(BOOL)_shouldForwardViewWillTransitionToSize;
+(BOOL)areScrollingTabsAllowed;
-(BOOL)_focusedContentScrollViewIsScrolledToOrPastBottom;
-(BOOL)dynamicBarAnimator:(id)arg0 canHideBarsByDraggingWithOffset:(CGFloat)arg1 ;
-(CGFloat)_effectiveBottomBarOffset;
-(CGFloat)_effectiveTopBarHeight;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_backdropBarGroupName;
-(id)_deepestFocusedViewControllerWithTopLevelFocusedViewController:(id)arg0 ;
-(id)_parentCellForViewController:(id)arg0 ;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForStatusBarStyle;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)contentScrollView;
-(id)existingTabBarPalette;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)presentedViewController;
-(id)rotatingSnapshotViewForWindow:(id)arg0 ;
-(id)tabBarPaletteWithHeight:(CGFloat)arg0 ;
-(struct ? )_viewControllerContentScrollViewContentInsetDescriptor;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )_edgeInsetsForChildViewController:(id)arg0 insetsAreAbsolute:(*BOOL)arg1 ;
-(struct UIOffset )_roundedOffsetFromOffset:(struct UIOffset )arg0 ;
// -(void)_animatePaletteWithSetup:(id)arg0 animations:(unk)arg1 completion:(id)arg2  ;
-(void)_discardUndesirableLastSelectedPageIndexesWithHorizontalLayoutContext:(struct ? )arg0 ;
-(void)_invalidateContentCollectionViewLayoutForUpdatedContentSizeWithHorizontalLayoutContext:(struct ? )arg0 indexOfViewControllerWithUpdatedContentSize:(NSUInteger)arg1 ;
-(void)_notifyViewControllerAppearanceProgressUpdateWithHorizontalLayoutContext:(struct ? )arg0 ;
-(void)_popVisibleNavigationStacksToRootWithHorizontalLayoutContext:(struct ? )arg0 ;
-(void)_selectTabAtIndex:(NSUInteger)arg0 shouldFallbackToPoppingToTabRootContent:(BOOL)arg1 ;
-(void)_setFocusedViewController:(id)arg0 showBarsIfNeeded:(BOOL)arg1 animated:(BOOL)arg2 notifyDelegate:(BOOL)arg3 ;
-(void)_tabBarButtonTapped:(id)arg0 ;
-(void)_updateAdditionalPositionOffsetsWithUpdateRecord:(struct ? )arg0 ;
-(void)_updateDynamicBarGeometry;
-(void)_updateFocusedViewControllerInsetsForVerticalLayoutChange;
-(void)_updateFocusedViewControllerWithHorizontalLayoutContext:(struct ? )arg0 ;
-(void)_updateForHorizontalLayoutChange;
-(void)_updateHidesBarsOnSwipeAvailability;
-(void)_updateHorizontalScrollingAvailability;
-(void)_updateLayoutOfCollectionViewCell:(id)arg0 ;
-(void)_updateLayoutOfTabBar;
-(void)_updateLayoutOfVisibleCollectionViewCells;
-(void)_updateNavigationBarsForVerticalLayoutChange;
-(void)_updateScrollViewContentOffsetsToTargetContentOffsets;
-(void)_updateStatusBarPositionForcingVisible:(BOOL)arg0 ;
-(void)_updateTabBarBackgroundsAndHairlines;
-(void)_updateTabBarButtons;
-(void)_updateTabBarButtonsSelectionProgressWithHorizontalLayoutContext:(struct ? )arg0 ;
-(void)_updateViewControllerContentScrollViewInset;
-(void)_viewControllerNeedsNestedPagingScrollViewUpdate:(id)arg0 ;
-(void)attachTabBarPalette:(id)arg0 ;
-(void)attachTabBarPalette:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)decodeRestorableStateWithCoder:(id)arg0 ;
-(void)detachTabBarPalette:(id)arg0 ;
-(void)detachTabBarPalette:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)didUpdateAdditionalTabBarComponentsPositionOffsets;
-(void)dynamicBarAnimatorDidUpdate:(id)arg0 ;
-(void)encodeRestorableStateWithCoder:(id)arg0 ;
-(void)hideBarWithTransition:(int)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)observedScrollViewDidScroll:(id)arg0 ;
-(void)observedScrollViewWillBeginDragging:(id)arg0 ;
-(void)observedScrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint )arg2 ;
-(void)scrollViewDidChangeContentInset:(id)arg0 ;
-(void)scrollingTabBarContentCollectionViewDidLayoutSubviews:(id)arg0 ;
-(void)scrollingTabBarControllerItemContext:(id)arg0 observedNavigationStackDidChange:(id)arg1 ;
-(void)scrollingTabBarControllerItemContextRequestsContentOffsetUpdate:(id)arg0 ;
-(void)scrollingTabBarControllerItemContextRequestsContentSizeUpdate:(id)arg0 ;
-(void)setClientContext:(id)arg0 ;
-(void)showBarWithTransition:(int)arg0 ;
-(void)tabBarBackgroundExtendsBehindPaletteDidChangeForPalette:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateTabBarComponentPositionOffsetsWithPresentationValues;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willUpdateAdditionalTabBarComponentsPositionOffsets;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHLIBRARYPODFOLDERVIEW_H
#define SBHLIBRARYPODFOLDERVIEW_H

@class NSArray, NSString, UINavigationBar, BSUIScrollView;
@protocol SBIconListModelObserver, SBIconListLayoutObserver, UINavigationBarDelegate, SBHLibrarySearchControllerContentViewControllerScrollViewProvider, BSUIScrollViewDelegate, UIScrollViewDelegate;


#import "SBFolderView.h"

@interface SBHLibraryPodFolderView : SBFolderView <SBIconListModelObserver, SBIconListLayoutObserver, UINavigationBarDelegate, SBHLibrarySearchControllerContentViewControllerScrollViewProvider>

 {
    BOOL _usingCenteredLayout;
    CGFloat _minimumNavBarHeight;
    CGFloat _maximumNavBarHeight;
    NSArray *_podScrollViewGradientMaskLayers;
}


@property (nonatomic) BOOL centersContentIfPossible; // ivar: _centersContentIfPossible
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<BSUIScrollViewDelegate> *librarySearchControllerScrollViewDelegate; // ivar: _librarySearchControllerScrollViewDelegate
@property (readonly, nonatomic) UINavigationBar *navigationBar; // ivar: _navBar
@property (readonly, nonatomic) BSUIScrollView *podScrollView; // ivar: _podScrollView
@property (weak, nonatomic) NSObject<UIScrollViewDelegate> *scrollViewDelegate; // ivar: _scrollViewDelegate
@property (readonly) Class superclass;


+(Class)defaultIconListViewClass;
+(id)defaultIconLocation;
-(BOOL)_animatesRotationForAllVisibleIconListViews;
-(BOOL)_shouldUseScrollableIconViewInteraction;
-(BOOL)isLibraryPodCategoryFolderView;
-(CGFloat)_pageWidth;
-(NSInteger)iconVisibilityHandling;
-(NSInteger)positionForBar:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(struct CGPoint )_restingContentOffsetForScrollOffset:(struct CGPoint )arg0 withVelocity:(struct CGPoint )arg1 ;
-(struct CGRect )_frameForIconListAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )_iconListFrameForPageRect:(struct CGRect )arg0 atIndex:(NSUInteger)arg1 ;
-(struct CGSize )_iconListViewSize;
-(struct CGSize )_iconSpacingForIconListView;
-(struct CGSize )_scrollViewContentSize;
-(struct NSDirectionalEdgeInsets )_layoutMarginsforNavigationBar:(id)arg0 ;
-(struct UIEdgeInsets )_scrollingInteractionVisibleInsets;
-(void)_configureIconListView:(id)arg0 ;
-(void)_configureScrollingInteraction:(id)arg0 ;
-(void)_enumerateScrollableIconViewsUsingBlock:(id)arg0 ;
-(void)_layoutNavBarAndContentInsets;
-(void)_layoutSubviews;
-(void)_orientationDidChange:(NSInteger)arg0 ;
-(void)_positionNavBarAbuttingListView;
-(void)_updateIconListContainment:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)_updateScrollViewContentSize;
-(void)_updateVisibleRowRange;
-(void)_zeroFirstListViewOriginIfNeeded;
-(void)accessibilityReduceTransparencyDidChange:(id)arg0 ;
-(void)didMoveToWindow;
-(void)iconList:(id)arg0 didAddIcon:(id)arg1 ;
-(void)iconList:(id)arg0 didMoveIcon:(id)arg1 ;
-(void)iconList:(id)arg0 didRemoveIcon:(id)arg1 ;
-(void)iconListView:(id)arg0 didAddIconView:(id)arg1 ;
-(void)iconListView:(id)arg0 didRemoveIconView:(id)arg1 ;
-(void)iconListViewDidChangeBoundsSize:(id)arg0 ;
-(void)scrollViewDidEndScrolling:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillBeginScrolling:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setFolder:(id)arg0 ;
-(void)setLegibilitySettings:(id)arg0 ;
-(void)updateAccessibilityTintColors;


@end


#endif
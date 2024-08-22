// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVSTACKTEMPLATECONTROLLER_H
#define _TVSTACKTEMPLATECONTROLLER_H

@class TVStackCommonTemplateController, NSArray, IKChangeSet, NSMutableArray, NSIndexPath, UIViewController, UIView, NSString;
@protocol _TVStackViewDelegateFlowLayout, TVTabBarAdjusting, TVShowcasing;


#import "_TVNeedsMoreContentEvaluator.h"

@interface _TVStackTemplateController : TVStackCommonTemplateController <_TVStackViewDelegateFlowLayout, TVTabBarAdjusting, TVShowcasing>

 {
    NSArray *_unfilteredViewControllers;
    IKChangeSet *_filteredChangeSet;
    NSArray *_viewControllers;
    NSMutableArray *_preloadQueue;
    NSArray *_stackSections;
    NSArray *_stackRows;
    CGFloat _contentHeight;
    CGFloat _showcaseFactor;
    NSIndexPath *_lastFocusedIndexPath;
    _TVNeedsMoreContentEvaluator *_needsMoreContentEvaluator;
    UIViewController *_backdropTintViewController;
    UIView *_backdropTintView;
    BOOL _requiresShowcasing;
    BOOL _shouldInvalidateMetrics;
    ? _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat showcaseFactor;
@property (nonatomic) CGFloat showcaseInset; // ivar: _showcaseInset
@property (readonly) Class superclass;


-(BOOL)_didExtendContentForPeekMetrics:(struct ? *)arg0 above:(BOOL)arg1 initial:(BOOL)arg2 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)shouldAdjustForTabBarSafeAreaInsets;
-(CGFloat)_maxViewWidth;
-(CGFloat)_offsetToScrollStop:(id)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfCollections;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
// -(id)_updateWithCollectionListElement:(id)arg0 commits:(*id)arg1 autoHighlightIndexPath:(unk)arg2  ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg0 ;
-(id)init;
-(id)scrollStopForEnteringSectionAtIndex:(NSInteger)arg0 fromEdge:(NSInteger)arg1 ;
-(id)scrollStopForShowcaseTransition;
-(id)tabBarObservedScrollView;
-(id)viewControllers;
-(struct CGPoint )collectionView:(id)arg0 targetContentOffsetForProposedContentOffset:(struct CGPoint )arg1 ;
-(struct CGSize )_maxContentSize;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForSectionAtIndex:(NSInteger)arg2 ;
-(struct UIEdgeInsets )_scrollableBoundsInset;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_adjustedContentOffsetForRowIndex:(NSInteger)arg0 targetContentOffset:(struct CGPoint *)arg1 ;
-(void)_buildStackSections;
-(void)_configureBackgroundTintView;
-(void)_invalidateSectionMetricsIfNeeded;
-(void)_preloadNext;
-(void)_scheduleNextPreloadConditional;
-(void)_scrollToTopAnimated:(BOOL)arg0 ;
-(void)_updateBackgroundTintView;
-(void)_updateBackgroundTintViewEffects;
-(void)_updateFirstItemRowIndexes;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 showcaseFactorDidChangeForLayout:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)didUpdateSectionInfo;
-(void)didUpdateSupplementarySectionInfo;
-(void)mediaInfoDidChange;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateBackgroundAndBackdrop;
-(void)updateBackgroundAndBackdropMaskFactor;
-(void)updateCollectionViewControllersAndForceReload:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif
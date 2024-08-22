// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVCAROUSELVIEW_H
#define _TVCAROUSELVIEW_H

@class UIView, NSIndexPath, NSDictionary, NSString, CADisplayLink, NSDate, UIFocusGuide, UIPageControl, NSArray;
@protocol UICollectionViewDataSource, UICollectionViewDelegate, OS_dispatch_source, TVCarouselViewDataSource, TVCarouselViewDelegate;


#import "_TVCarouselCollectionView.h"

@interface _TVCarouselView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>

 {
    ? _carouselViewFlags;
    NSObject<OS_dispatch_source> *_autoScrollTimer;
    _TVCarouselCollectionView *_collectionView;
    NSUInteger _indexToDeque;
    NSIndexPath *_focusedIndexPath;
    NSUInteger _numberOfRealItemsForDataSource;
    CGFloat _originalSelectionDuration;
    CGFloat _originalUnselectionDuration;
    NSInteger _numFocusChangesInInterval;
    NSDictionary *_previousCollectionToDatasourceIndexMap;
    ? _flags;
}


@property (nonatomic) CGFloat autoscrollInterval; // ivar: _autoscrollInterval
@property (retain, nonatomic) NSDictionary *collectionToDatasourceIndexMap; // ivar: _collectionToDatasourceIndexMap
@property (weak, nonatomic) NSObject<TVCarouselViewDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TVCarouselViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (retain, nonatomic) NSDate *firstFocusChangeInInterval; // ivar: _firstFocusChangeInInterval
@property (nonatomic) CGPoint focusDirection; // ivar: _focusDirection
@property (retain, nonatomic) UIFocusGuide *focusGuide; // ivar: _focusGuide
@property (nonatomic) CGFloat focusThrottleTimeInterval; // ivar: _focusThrottleTimeInterval
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *headerView; // ivar: _headerView
@property (nonatomic) CGFloat interitemSpacing; // ivar: _interitemSpacing
@property (nonatomic) CGSize itemSize; // ivar: _itemSize
@property (nonatomic) CGFloat offsetChangePerSecond; // ivar: _offsetChangePerSecond
@property (retain, nonatomic) UIPageControl *pageControl; // ivar: _pageControl
@property (nonatomic) CGFloat pageControlMargin; // ivar: _pageControlMargin
@property (nonatomic) CGFloat previousDisplayLinkTimestamp; // ivar: _previousDisplayLinkTimestamp
@property (nonatomic) NSUInteger scrollMode; // ivar: _scrollMode
@property (nonatomic) BOOL shouldScaleOnIdleFocus; // ivar: _shouldScaleOnIdleFocus
@property (nonatomic) CGFloat showcaseFactor; // ivar: _showcaseFactor
@property (nonatomic) BOOL showsPageControl; // ivar: _showsPageControl
@property (readonly) Class superclass;
@property (nonatomic) CGPoint targetContentOffset; // ivar: _targetContentOffset
@property (nonatomic) CGFloat unitScrollDuration; // ivar: _unitScrollDuration
@property (readonly, copy, nonatomic) NSArray *visibleCells;


-(BOOL)_canScrollCarouselView;
-(BOOL)collectionView:(id)arg0 canFocusItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldDeselectItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(CGFloat)_centeringAnimationDuration;
-(CGFloat)_contentOffsetXForCollectionViewIndex:(NSInteger)arg0 ;
-(NSInteger)_centerCollectionViewCellIndex;
-(NSInteger)_numberOfCells;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSUInteger)_itemIndexForIndexPath:(id)arg0 ;
-(NSUInteger)_previousItemIndexForIndexPath:(id)arg0 ;
-(NSUInteger)indexForCell:(id)arg0 ;
-(id)_cellForItemAtIndex:(NSUInteger)arg0 ;
-(id)_collectionView;
-(id)_prepareIndexMap:(NSInteger)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)dequeueReusableCellWithReuseIdentifier:(id)arg0 forIndex:(NSUInteger)arg1 ;
-(id)focusedCell;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredFocusedView;
-(struct CGSize )_collectionViewLayoutItemSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_accessibilityReducedMotionNotification:(id)arg0 ;
// -(void)_animatePagedCenteringAnimated:(BOOL)arg0 animations:(id)arg1 completion:(unk)arg2  ;
-(void)_applicationDidBecomeActiveNotification:(id)arg0 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg0 ;
-(void)_centerItemAtPageIndex:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)_focusItemAtIndex:(NSInteger)arg0 ;
-(void)_handlePlayGesture:(id)arg0 ;
-(void)_pageControlValueChanged:(id)arg0 ;
-(void)_setContentOffsetForCollectionViewIndex:(NSInteger)arg0 ;
-(void)_setContentOffsetForCollectionViewIndex:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)_startAutoScrollTimer;
-(void)_startContinuousScroll;
-(void)_stopAutoScrollTimer;
-(void)_stopContinuousScroll;
-(void)_updateAutoScrollTimer;
-(void)_updateCarouselWithDataSource:(id)arg0 indicesToRemove:(id)arg1 indicesToAdd:(id)arg2 indicesToReload:(id)arg3 ;
-(void)_updateCollectionViewLayout;
-(void)_updateCollectionViewLayoutAnimated:(BOOL)arg0 ;
-(void)_updateContentForNewCenterIndex:(NSInteger)arg0 ;
-(void)_updateContentOffsetForFocusedIndex:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)_updateIdleModeLayoutAttributes;
-(void)_updatePageControl;
-(void)calculateChangeSetForFocusedIndex:(NSInteger)arg0 newDataSourceMap:(id)arg1 indexesToRemove:(*id)arg2 indexesToAdd:(*id)arg3 indexesToReload:(*id)arg4 ;
-(void)centerItemAtPageIndex:(NSInteger)arg0 ;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didHighlightItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didUnhighlightItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)displayLinkDidFire:(id)arg0 ;
-(void)layoutSubviews;
-(void)registerClass:(Class)arg0 forCellWithReuseIdentifier:(id)arg1 ;
-(void)registerNib:(id)arg0 forCellWithReuseIdentifier:(id)arg1 ;
-(void)reloadData;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;


@end


#endif
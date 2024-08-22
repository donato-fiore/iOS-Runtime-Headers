// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVCAROUSELVIEW_H
#define TVCAROUSELVIEW_H

@class UIView, NSIndexPath, NSDictionary, NSString, CADisplayLink, NSDate, NSArray;
@protocol UICollectionViewDataSource, UICollectionViewDelegate, OS_dispatch_source, TVCarouselViewDataSource, TVCarouselViewDelegate;


#import "_TVCarouselCollectionView.h"

@interface TVCarouselView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>

 {
    NSObject<OS_dispatch_source> *_autoScrollTimer;
    _TVCarouselCollectionView *_collectionView;
    NSUInteger _indexToDeque;
    NSIndexPath *_focusedIndexPath;
    NSUInteger _numberOfRealItemsForDataSource;
    CGFloat _originalSelectionDuration;
    CGFloat _originalUnselectionDuration;
    NSInteger _numFocusChangesInInterval;
}


@property (nonatomic) CGFloat autoScrollInterval; // ivar: _autoScrollInterval
@property (retain, nonatomic) NSDictionary *collectionToDatasourceIndexMap; // ivar: _collectionToDatasourceIndexMap
@property (nonatomic) CGFloat continuousScrollVelocity; // ivar: _continuousScrollVelocity
@property (weak, nonatomic) NSObject<TVCarouselViewDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TVCarouselViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (retain, nonatomic) NSDate *firstFocusChangeInInterval; // ivar: _firstFocusChangeInInterval
@property (nonatomic) CGPoint focusDirection; // ivar: _focusDirection
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat interitemSpacing; // ivar: _interitemSpacing
@property (nonatomic) CGSize itemSize; // ivar: _itemSize
@property (nonatomic) CGFloat offsetChangePerSecond; // ivar: _offsetChangePerSecond
@property (nonatomic) CGFloat previousDisplayLinkTimestamp; // ivar: _previousDisplayLinkTimestamp
@property (nonatomic) NSUInteger scrollMode; // ivar: _scrollMode
@property (readonly) Class superclass;
@property (nonatomic) CGPoint targetContentOffset; // ivar: _targetContentOffset
@property (readonly, copy, nonatomic) NSArray *visibleCells;


-(BOOL)_canScrollCarouselView;
-(BOOL)collectionView:(id)arg0 canFocusItemAtIndexPath:(id)arg1 ;
-(CGFloat)_contentOffsetXForCollectionViewIndex:(NSInteger)arg0 ;
-(NSInteger)_centerCollectionViewCellIndex;
-(NSInteger)_numberOfCells;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSUInteger)indexForCell:(id)arg0 ;
-(id)_cellForItemAtIndex:(NSUInteger)arg0 ;
-(id)_collectionView;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)dequeueReusableCellWithReuseIdentifier:(id)arg0 forIndex:(NSUInteger)arg1 ;
-(id)focusedCell;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredFocusedView;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_adjustCarouselForDirectionShift:(NSInteger)arg0 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg0 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg0 ;
-(void)_handlePlayGesture:(id)arg0 ;
-(void)_prepareIndexMap:(NSInteger)arg0 ;
-(void)_setContentOffsetForCollectionViewIndex:(NSInteger)arg0 ;
-(void)_startAutoScrollTimer;
-(void)_startContinuousScroll;
-(void)_stopAutoScrollTimer;
-(void)_stopContinuousScroll;
-(void)_updateAutoScrollTimer;
-(void)_updateCarouselWithCenterIndex:(NSInteger)arg0 indexToRemove:(NSInteger)arg1 indexToAdd:(NSInteger)arg2 ;
-(void)_updateCollectionViewLayout;
-(void)_updateCollectionViewLayoutAnimated:(BOOL)arg0 ;
-(void)_updateContentOffsetForFocusedIndex:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)_updateIdleModeLayoutAttributes;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)displayLinkDidFire:(id)arg0 ;
-(void)layoutSubviews;
-(void)registerClass:(Class)arg0 forCellWithReuseIdentifier:(id)arg1 ;
-(void)reloadData;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;


@end


#endif
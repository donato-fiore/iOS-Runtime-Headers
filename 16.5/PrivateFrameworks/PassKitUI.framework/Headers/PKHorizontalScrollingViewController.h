// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKHORIZONTALSCROLLINGVIEWCONTROLLER_H
#define PKHORIZONTALSCROLLINGVIEWCONTROLLER_H

@class UIViewController, NSMutableDictionary, NSMutableSet, UIScrollView, NSString, NSIndexSet;
@protocol PKHorizontalScrollingViewControllerDelegate, UIScrollViewDelegate, PKHorizontalScrollingViewControllerDataSource, OS_dispatch_source;



@interface PKHorizontalScrollingViewController : UIViewController <PKHorizontalScrollingViewControllerDelegate, UIScrollViewDelegate, PKHorizontalScrollingViewControllerDataSource>

 {
    id<PKHorizontalScrollingViewControllerDataSource> *_dataSource;
    BOOL _isScrolling;
    BOOL _isDragging;
    BOOL _hasPrefetchedLeft;
    BOOL _hasPrefetchedRight;
    BOOL _isLowEndDevice;
    os_unfair_lock_s _lockUpdate;
    NSMutableDictionary *_pendingUpdates;
    NSMutableSet *_unusedViewControllers;
    NSMutableDictionary *_pendingDataCollectionViewUpdates;
    UIScrollView *_scrollView;
    CGRect _previousBounds;
    CGSize _currentSize;
    CGFloat _collectionViewVerticalOffset;
    NSObject<OS_dispatch_source> *_scrollTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *indicesToViewControllerMapping; // ivar: _indicesToViewControllerMapping
@property (readonly, nonatomic) NSMutableDictionary *nonVisibleIndicesToViewControllerMapping; // ivar: _nonVisibleIndicesToViewControllerMapping
@property (readonly, nonatomic) NSInteger primaryIndex; // ivar: _primaryIndex
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSIndexSet *visibleIndices; // ivar: _visibleIndices


-(BOOL)_canReloadViewControllers;
-(CGFloat)_endOfItemAtIndex:(NSUInteger)arg0 ;
-(CGFloat)_startOfItemAtIndex:(NSUInteger)arg0 ;
-(CGFloat)_transitionProgress;
-(CGFloat)_yPositionForNonPrimaryViewControllers;
-(CGFloat)footerViewContentHeight;
-(NSInteger)numberOfItems;
-(NSInteger)startingIndex;
-(NSUInteger)_indexAtContentOffset:(struct CGPoint )arg0 ;
-(NSUInteger)_primaryIndexAtOffset:(struct CGPoint )arg0 ;
-(id)_dequeueNonVisibleViewControllerForIndex:(NSUInteger)arg0 ;
-(id)_dequeueViewControllerForIndex:(NSUInteger)arg0 ;
-(id)_recoverUnusedViewController;
-(id)_visibileIndicesAtContentOffset:(struct CGPoint )arg0 ;
-(id)cachedDataAtIndex:(NSInteger)arg0 ;
-(id)emptyViewControllers;
-(id)footerView;
-(id)init;
-(id)loadingDataObjectWithCurrentData:(id)arg0 index:(NSInteger)arg1 swap:(BOOL)arg2 ;
-(void)_layoutCollectionViews;
-(void)_loadDataForContentOffset:(struct CGPoint )arg0 ;
-(void)_reloadDataForViewControllerAtIndex:(NSUInteger)arg0 swap:(BOOL)arg1 ;
-(void)_reloadPendingViewControllers;
-(void)_retireViewControllerForIndex:(NSUInteger)arg0 ;
-(void)_scrollViewStoppedScrolling;
-(void)_switchPrimaryIndexToIndex:(NSUInteger)arg0 ;
-(void)_updateAlphaDuringTransition;
-(void)_updatePrimaryIndex:(NSInteger)arg0 ;
-(void)_updatePrimaryViewScrolling;
-(void)_updateScrollViewContentSize;
-(void)clearPendingDataCollectionViewUpdates;
-(void)didDequeueViewController:(id)arg0 ;
-(void)didMoveToPrimaryIndex:(NSInteger)arg0 ;
-(void)enableScrollView:(BOOL)arg0 ;
-(void)fetchDataAtIndex:(NSInteger)arg0 completion:(id)arg1 ;
-(void)horizontalScrollingViewController:(id)arg0 scrollViewDidScroll:(id)arg1 ;
-(void)prefetchDataIfNecessary;
-(void)reloadDataForViewControllerAtIndex:(NSInteger)arg0 swap:(BOOL)arg1 ;
-(void)resetVisibleViewControllersWithNewPrimaryIndex:(NSInteger)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)updateScrollViewContentOffsetWithNewPrimaryIndex:(NSInteger)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif
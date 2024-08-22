// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUTILINGVIEW_H
#define PUTILINGVIEW_H

@class UIScrollView, NSMutableArray, NSMutableDictionary, NSMutableSet;
@protocol PUTilingCoordinateSystem, PUTilingViewScrollDelegate, PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, PUTilingViewTileUseDelegate;


#import "PUTileTree.h"
#import "PUTilingLayout.h"
#import "PUReuseQueue.h"
#import "PUTileTransitionCoordinator.h"
#import "PUTileAnimator.h"

@interface PUTilingView : UIScrollView {
    ? _tileTransitionDelegateFlags;
    ? _scrollDelegateFlags;
    ? _tileUseDelegateFlags;
}


@property (readonly, nonatomic) PUTileTree *_activeTileControllers; // ivar: __activeTileControllers
@property (readonly, nonatomic) PUTileTree *_detachedTileControllers; // ivar: __detachedTileControllers
@property (readonly, nonatomic) PUTileTree *_inactiveTileControllers; // ivar: __inactiveTileControllers
@property (nonatomic, setter=_setNeedsUpdateLayout:) BOOL _needsUpdateLayout; // ivar: __needsUpdateLayout
@property (nonatomic, setter=_setNeedsUpdateLayoutCoordinateSystem:) BOOL _needsUpdateLayoutCoordinateSystem; // ivar: __needsUpdateLayoutCoordinateSystem
@property (nonatomic, setter=_setNeedsUpdateLayoutVisibleRect:) BOOL _needsUpdateLayoutVisibleRect; // ivar: __needsUpdateLayoutVisibleRect
@property (nonatomic, setter=_setNeedsUpdateReferencedCoordinateSystems:) BOOL _needsUpdateReferencedCoordinateSystems; // ivar: __needsUpdateReferencedCoordinateSystems
@property (nonatomic, setter=_setNeedsUpdateReferencedDataSources:) BOOL _needsUpdateReferencedDataSources; // ivar: __needsUpdateReferencedDataSources
@property (nonatomic, setter=_setNeedsUpdateScrollViewProperties:) BOOL _needsUpdateScrollViewProperties; // ivar: __needsUpdateScrollViewProperties
@property (nonatomic, setter=_setNeedsUpdateTileControllers:) BOOL _needsUpdateTileControllers; // ivar: __needsUpdateTileControllers
@property (nonatomic, setter=_setNeedsUpdateTileControllersVisibleRect:) BOOL _needsUpdateTileControllersVisibleRect; // ivar: __needsUpdateTileControllersVisibleRect
@property (nonatomic, setter=_setPagingFrictionAdjustment:) CGFloat _pagingFrictionAdjustment; // ivar: __pagingFrictionAdjustment
@property (nonatomic, setter=_setPagingSpringPullAdjustment:) CGFloat _pagingSpringPullAdjustment; // ivar: __pagingSpringPullAdjustment
@property (retain, nonatomic, setter=_setPendingLayout:) PUTilingLayout *_pendingLayout; // ivar: __pendingLayout
@property (readonly, nonatomic) NSMutableArray *_pendingUpdateItems; // ivar: __pendingUpdateItems
@property (nonatomic, getter=_isPerformingBatchUpdates, setter=_setPerformingBatchUpdates:) BOOL _performingBatchUpdates; // ivar: __performingBatchUpdates
@property (readonly, nonatomic) NSMutableDictionary *_postLayoutBlocks; // ivar: __postLayoutBlocks
@property (nonatomic, setter=_setReasonForNextLayoutCoordinateSystemUpdate:) NSInteger _reasonForNextLayoutCoordinateSystemUpdate; // ivar: __reasonForNextLayoutCoordinateSystemUpdate
@property (readonly, nonatomic) NSMutableSet *_referencedCoordinateSystems; // ivar: __referencedCoordinateSystems
@property (readonly, nonatomic) NSMutableDictionary *_referencedDataSourcesByIdentifiers; // ivar: __referencedDataSourcesByIdentifiers
@property (readonly, nonatomic) PUReuseQueue *_tileControllerReuseQueue; // ivar: __tileControllerReuseQueue
@property (retain, nonatomic, setter=_setTileTransitionCoordinatorForNextLayout:) PUTileTransitionCoordinator *_tileTransitionCoordinatorForNextLayout; // ivar: __tileTransitionCoordinatorForNextLayout
@property (readonly, nonatomic) NSObject<PUTilingCoordinateSystem> *contentCoordinateSystem; // ivar: _contentCoordinateSystem
@property (readonly, nonatomic) NSObject<PUTilingCoordinateSystem> *fixedCoordinateSystem; // ivar: _fixedCoordinateSystem
@property (readonly, nonatomic) BOOL isAnyTileControllerAnimating;
@property (retain, nonatomic, setter=_setLayout:) PUTilingLayout *layout; // ivar: _layout
@property (nonatomic) UIEdgeInsets loadingInsets; // ivar: _loadingInsets
@property (copy, nonatomic) id *onNextTileControllersUpdateBlock; // ivar: _onNextTileControllersUpdateBlock
@property (weak, nonatomic) NSObject<PUTilingViewScrollDelegate> *scrollDelegate; // ivar: _scrollDelegate
@property (weak, nonatomic) PUTileAnimator *tileAnimator; // ivar: _tileAnimator
@property (weak, nonatomic) NSObject<PUTilingViewTileSource> *tileSource; // ivar: _tileSource
@property (weak, nonatomic) NSObject<PUTilingViewTileTransitionDelegate> *tileTransitionDelegate; // ivar: _tileTransitionDelegate
@property (weak, nonatomic) NSObject<PUTilingViewTileUseDelegate> *tileUseDelegate; // ivar: _tileUseDelegate


+(NSUInteger)_defaultEdgesScrollingContentIntoSafeArea;
-(id)_createTileControllerWithIndexPath:(id)arg0 kind:(id)arg1 dataSource:(id)arg2 tileSource:(id)arg3 ;
-(id)_dataSourceWithIdentifier:(id)arg0 ;
-(id)dequeueTileControllerWithReuseIdentifier:(id)arg0 ;
-(id)freezeTileController:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 layout:(id)arg1 ;
-(id)presentedTileControllerWithIndexPath:(id)arg0 kind:(id)arg1 dataSourceIdentifier:(id)arg2 ;
-(id)tileControllerWithIndexPath:(id)arg0 kind:(id)arg1 dataSourceIdentifier:(id)arg2 ;
-(void)_adjustScrollViewPagingDeceleration;
-(void)_applyPendingUpdates;
-(void)_enumerateActiveTileControllersUsingBlock:(id)arg0 ;
-(void)_enumerateAllTileControllersUsingBlock:(id)arg0 ;
-(void)_handleChangeFromBounds:(struct CGRect )arg0 fromFrame:(struct CGRect )arg1 ;
-(void)_invalidateLayout;
-(void)_invalidateLayoutCoordinateSystemWithReason:(NSInteger)arg0 ;
-(void)_invalidateLayoutVisibleRect;
-(void)_invalidateReferencedCoordinateSystems;
-(void)_invalidateReferencedDataSources;
-(void)_invalidateScrollViewProperties;
-(void)_invalidateTileControllers;
-(void)_invalidateTileControllersVisibleRect;
-(void)_invalidateTileControllersWithTileTransitionCoordinator:(id)arg0 ;
-(void)_registerDataSource:(id)arg0 ;
-(void)_runPostLayoutBlocks;
-(void)_setNeedsUpdate;
-(void)_transferTileControllersToDataSource:(id)arg0 usingDataSourceConverter:(id)arg1 ;
-(void)_updateIfNeeded;
-(void)_updateLayoutCoordinateSystemIfNeeded;
-(void)_updateLayoutIfNeeded;
-(void)_updateLayoutVisibleRectIfNeeded;
-(void)_updateReferencedCoordinateSystemsIfNeeded;
-(void)_updateReferencedDataSourcesIfNeeded;
-(void)_updateScrollViewPropertiesIfNeeded;
-(void)_updateScrollViewPropertiesWithLayout:(id)arg0 ;
-(void)_updateTileControllersIfNeeded;
-(void)_updateTileControllersVisibleRectIfNeeded;
// -(void)_updateTileControllersWithLayout:(id)arg0 reactivatability:(id)arg1 appearanceHandler:(unk)arg2 updateHandler:(id)arg3 disappearanceHandler:(unk)arg4 heartBeatHandler:(id)arg5  ;
-(void)_updateTileControllersWithLayout:(id)arg0 tileTransitionCoordinator:(id)arg1 ;
-(void)deleteItemAtIndexPath:(id)arg0 dataSource:(id)arg1 ;
-(void)detachTileControllers:(id)arg0 ;
-(void)enqueueTileControllerForReuse:(id)arg0 ;
-(void)enumerateAllTileControllersUsingBlock:(id)arg0 ;
-(void)enumeratePresentedTileControllersInRect:(struct CGRect )arg0 usingBlock:(id)arg1 ;
-(void)insertItemAtIndexPath:(id)arg0 dataSource:(id)arg1 ;
-(void)invalidateLayout:(id)arg0 withContext:(id)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg0 ;
-(void)moveItemFromIndexPath:(id)arg0 toIndexPath:(id)arg1 dataSource:(id)arg2 ;
-(void)performBatchUpdates:(id)arg0 ;
-(void)reattachTileControllers:(id)arg0 withContext:(id)arg1 ;
// -(void)registerPostLayoutBlock:(id)arg0 forIdentifier:(unk)arg1  ;
-(void)registerTileControllerClass:(Class)arg0 forReuseIdentifier:(id)arg1 ;
-(void)reloadItemAtIndexPath:(id)arg0 dataSource:(id)arg1 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)tileControllerDidEndAnimating:(id)arg0 ;
-(void)transitionToLayout:(id)arg0 ;
-(void)transitionToLayout:(id)arg0 withContext:(id)arg1 animationSetupCompletionHandler:(id)arg2 ;


@end


#endif
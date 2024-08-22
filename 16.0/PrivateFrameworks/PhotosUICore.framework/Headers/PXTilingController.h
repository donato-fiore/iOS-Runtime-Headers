// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXTILINGCONTROLLER_H
#define PXTILINGCONTROLLER_H

@class NSMutableIndexSet, NSMutableArray, NSArray, NSString;
@protocol PXTilingLayoutObserver, PXTilingDebugDelegate, PXTilingControllerObserver, PXTilingScrollController, PXTilingControllerScrollDelegate, PXTileAnimator, PXTileSource, PXTilingControllerTransitionDelegate;

#import <Foundation/Foundation.h>

#import "PXTilingCoordinateSpace.h"
#import "PXTilingCoordinateSpaceConverter.h"
#import "PXTilingChange.h"
#import "PXTilingLayout.h"
#import "PXTilingScrollInfo.h"
#import "PXTileStatePool.h"
#import "PXTilingControllerDebugInfo.h"

@interface PXTilingController : NSObject <PXTilingLayoutObserver>

 {
    BOOL _isPerformingUpdates;
    BOOL _hasScheduledUpdate;
    ? _needsUpdateFlags;
    ? _scrollDelegateFlags;
    ? _transitionDelegateFlags;
    BOOL _hasInitializedLayout;
    *PXTileIdentifier _identifierBuffer;
    *PXTileGeometry _geometryBuffer;
    NSUInteger _bufferCount;
}


@property (nonatomic, setter=_setActiveRect:) CGRect _activeRect; // ivar: __activeRect
@property (nonatomic, setter=_setCachedRect:) CGRect _cachedRect; // ivar: __cachedRect
@property (nonatomic, setter=_setContentInset:) UIEdgeInsets _contentInset; // ivar: __contentInset
@property (readonly, nonatomic) PXTilingCoordinateSpace *_coordinateSpace; // ivar: __coordinateSpace
@property (readonly, nonatomic) PXTilingCoordinateSpaceConverter *_coordinateSpaceConverter; // ivar: __coordinateSpaceConverter
@property (readonly, nonatomic) *void _coordinateSpaceIdentifier; // ivar: __coordinateSpaceIdentifier
@property (readonly, nonatomic) PXTilingChange *_currentChange; // ivar: __currentChange
@property (nonatomic, setter=_setDirtyRect:) CGRect _dirtyRect; // ivar: __dirtyRect
@property (readonly, nonatomic) NSMutableIndexSet *_dirtyTileIndexes; // ivar: __dirtyTileIndexes
@property (nonatomic, setter=_setLayoutDesiredOrigin:) CGPoint _layoutDesiredOrigin; // ivar: __layoutDesiredOrigin
@property (weak, nonatomic, setter=_setLayoutWithInitializedVisibleOrigin:) PXTilingLayout *_layoutWithInitializedVisibleOrigin; // ivar: __layoutWithInitializedVisibleOrigin
@property (nonatomic, setter=_setMaxPreheatPadding:) UIEdgeInsets _maxPreheatPadding; // ivar: __maxPreheatPadding
@property (nonatomic, setter=_setPagedRect:) CGRect _pagedRect; // ivar: __pagedRect
@property (readonly, nonatomic) NSMutableArray *_preheatRecords; // ivar: __preheatRecords
@property (nonatomic, setter=_setReferenceSize:) CGSize _referenceSize; // ivar: __referenceSize
@property (copy, nonatomic, setter=_setScrollInfo:) PXTilingScrollInfo *_scrollInfo; // ivar: __scrollInfo
@property (readonly, nonatomic) PXTileStatePool *_tileStates; // ivar: __tileStates
@property (nonatomic, setter=_setUpdatedPreferredVisibleOrigin:) CGPoint _updatedPreferredVisibleOrigin; // ivar: __updatedPreferredVisibleOrigin
@property (nonatomic, setter=_setVisibleRect:) CGRect _visibleRect; // ivar: __visibleRect
@property (copy, nonatomic) NSArray *compositionInvalidationContexts; // ivar: _compositionInvalidationContexts
@property (readonly, nonatomic) *void contentCoordinateSpaceIdentifier;
@property (retain, nonatomic, setter=_setCurrentLayout:) PXTilingLayout *currentLayout; // ivar: _currentLayout
@property (weak, nonatomic) NSObject<PXTilingDebugDelegate> *debugDelegate; // ivar: _debugDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PXTilingControllerDebugInfo *debugInfo;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGRect layoutContentBounds;
@property (readonly, nonatomic) CGPoint layoutOrigin;
@property (readonly, nonatomic) CGPoint layoutPreferredOrigin;
@property (readonly, nonatomic) CGRect layoutScrollBounds;
@property (weak, nonatomic) NSObject<PXTilingControllerObserver> *observer; // ivar: _observer
@property (weak, nonatomic) NSObject<PXTilingScrollController> *scrollController; // ivar: _scrollController
@property (weak, nonatomic) NSObject<PXTilingControllerScrollDelegate> *scrollDelegate; // ivar: _scrollDelegate
@property (readonly, nonatomic) PXTilingScrollInfo *scrollInfo;
@property (nonatomic) BOOL shouldAggressivelyEvictTileCaches; // ivar: _shouldAggressivelyEvictTileCaches
@property (readonly) Class superclass;
@property (retain, nonatomic, setter=_setTargetLayout:) PXTilingLayout *targetLayout; // ivar: _targetLayout
@property (weak, nonatomic) NSObject<PXTileAnimator> *tileAnimator; // ivar: _tileAnimator
@property (weak, nonatomic) NSObject<PXTileSource> *tileSource; // ivar: _tileSource
@property (weak, nonatomic) NSObject<PXTilingControllerTransitionDelegate> *transitionDelegate; // ivar: _transitionDelegate


-(BOOL)_needsUpdate;
-(BOOL)getTile:(**void)arg0 geometry:(struct PXTileGeometry *)arg1 group:(*NSUInteger)arg2 userData:(*id)arg3 forTileWithIdentifier:(struct PXTileIdentifier )arg4 ;
-(id)_indexesOfVisibleTilesInRect:(struct CGRect )arg0 withOptions:(id)arg1 ;
-(id)_preheatRecordForPreheatHandler:(id)arg0 context:(*void)arg1 createIfNeeded:(BOOL)arg2 ;
-(id)convertScrollInfoFromLayout:(id)arg0 ;
-(id)debugQuickLookObject;
-(id)imageTileWithIdentifier:(struct PXTileIdentifier )arg0 ;
-(id)init;
-(id)initWithLayout:(id)arg0 ;
-(id)titleSubtitleTileWithIdentifier:(struct PXTileIdentifier )arg0 ;
-(struct CGPoint )convertPointFromLayout:(struct CGPoint )arg0 ;
-(struct CGRect )convertRectFromLayout:(struct CGRect )arg0 ;
-(struct PXTileIdentifier )hitTestTileAtPoint:(struct CGPoint )arg0 padding:(struct UIEdgeInsets )arg1 passingTest:(id)arg2 ;
-(struct PXTileIdentifier )tileIdentifierForTile:(*void)arg0 ;
-(void)_discardCurrentChange;
-(void)_ensureCurrentChange;
-(void)_fillBuffersWithTileStatesAtIndexes:(id)arg0 ;
-(void)_handleTileAnimationCompletionWithIndex:(NSUInteger)arg0 ;
-(void)_invalidateAllCachedRects;
-(void)_invalidateCachesOutsideRect:(struct CGRect )arg0 ;
-(void)_invalidateLayoutMetrics;
-(void)_invalidateLayoutPosition;
-(void)_invalidateLayoutPreferredVisibleOrigin;
-(void)_invalidateLayoutPreparation;
-(void)_invalidateLayoutVisibleRect;
-(void)_invalidateMaxPreheatPadding;
-(void)_invalidatePagedRect;
-(void)_invalidatePreheating;
-(void)_invalidateRect:(struct CGRect )arg0 ;
-(void)_invalidateScrollControllerMetrics;
-(void)_invalidateScrollInfo;
-(void)_invalidateTiles;
-(void)_markRectAsCached:(struct CGRect )arg0 ;
-(void)_prepareBufferForCount:(NSUInteger)arg0 ;
-(void)_setNeedsUpdate;
-(void)_updateDebugDelegateIfNeeded;
-(void)_updateLayoutMetricsIfNeeded;
-(void)_updateLayoutPositionIfNeeded;
-(void)_updateLayoutPreferredVisibleOriginIfNeeded;
-(void)_updateLayoutPreparationIfNeeded;
-(void)_updateLayoutVisibleRectIfNeeded;
-(void)_updateMaxPreheatPaddingIfNeeded;
-(void)_updatePagedRectIfNeeded;
-(void)_updatePreheatingIfNeeded;
-(void)_updateScrollControllerMetricsIfNeeded;
-(void)_updateScrollInfoIfNeeded;
-(void)_updateTilesIfNeeded;
-(void)beginUpdate;
-(void)dealloc;
-(void)endUpdate;
-(void)enumerateTilesInRect:(struct CGRect )arg0 withOptions:(id)arg1 usingBlock:(id)arg2 ;
-(void)invalidateLayoutPreferredVisibleOrigin;
-(void)invalidateScrollControllerMetrics;
-(void)registerPreheatHandler:(id)arg0 withPadding:(struct UIEdgeInsets )arg1 tileGroup:(NSUInteger)arg2 context:(*void)arg3 ;
-(void)requestFocus;
-(void)setReferenceSize:(struct CGSize )arg0 contentInset:(struct UIEdgeInsets )arg1 ;
-(void)tilingLayout:(id)arg0 invalidatedWithContext:(id)arg1 ;
-(void)transitionToLayout:(id)arg0 ;
-(void)unregisterPreheatHandler:(id)arg0 context:(*void)arg1 ;
-(void)updateLayout;
-(void)updateMetrics;


@end


#endif
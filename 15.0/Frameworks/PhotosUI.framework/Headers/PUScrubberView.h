// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUSCRUBBERVIEW_H
#define PUSCRUBBERVIEW_H

@class UIView, NSString, NSMutableDictionary, NSIndexPath, UITapGestureRecognizer, PXVideoScrubberController, UIScrollView;
@protocol PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, PUTilingViewScrollDelegate, UIScrollViewDelegate, PUBrowsingViewModelChangeObserver, PUScrubberTilingLayoutDelegate, PXVideoScrubberControllerDelegate, PUPlaybackTimeIndicatorTileViewControllerDelegate, UIGestureRecognizerDelegate, PUScrubberViewDelegate;


#import "PUTouchingGestureRecognizer.h"
#import "PUScrubberTilingLayout.h"
#import "PUTilingView.h"
#import "PUBrowsingSession.h"

@interface PUScrubberView : UIView <PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, PUTilingViewScrollDelegate, UIScrollViewDelegate, PUBrowsingViewModelChangeObserver, PUScrubberTilingLayoutDelegate, PXVideoScrubberControllerDelegate, PUPlaybackTimeIndicatorTileViewControllerDelegate, UIGestureRecognizerDelegate>

 {
    NSString *_scrubbingIdentifier;
    NSString *_contentScrubbingIdentifier;
    NSString *_transitionLayoutIdentifier;
    BOOL _loupeEffectIsValid;
    BOOL _snapToExpandedIsValid;
    BOOL _scrubberLayoutIsValid;
    BOOL _scrubberLayoutNeedsTransition;
    PUTouchingGestureRecognizer *_touchingGestureRecognizer;
    NSMutableDictionary *_aspectRatioByIndexPath;
    ? _delegateFlags;
}


@property (nonatomic, setter=_setDecelerationDistance:) CGFloat _decelerationDistance; // ivar: __decelerationDistance
@property (retain, nonatomic, setter=_setDecelerationTargetIndexPath:) NSIndexPath *_decelerationTargetIndexPath; // ivar: __decelerationTargetIndexPath
@property (nonatomic, setter=_setDecelerationTargetOffset:) CGPoint _decelerationTargetOffset; // ivar: __decelerationTargetOffset
@property (nonatomic, setter=_setExpandedItemType:) NSInteger _expandedItemType; // ivar: __expandedItemType
@property (nonatomic, setter=_setHandlingScrollViewWillEndDragging:) BOOL _isHandlingScrollViewWillEndDragging; // ivar: __isHandlingScrollViewWillEndDragging
@property (nonatomic, setter=_setIsHandlingUserScroll:) BOOL _isHandlingUserScroll; // ivar: __isHandlingUserScroll
@property (nonatomic, setter=_setScrubbingAwayFromContentEdge:) BOOL _isScrubbingAwayFromContentEdge; // ivar: __isScrubbingAwayFromContentEdge
@property (readonly, nonatomic, getter=_areLayoutTransitionsDisabled) BOOL _layoutTransitionsDisabled;
@property (nonatomic, setter=_setLayoutTransitionsDisabledCount:) NSInteger _layoutTransitionsDisabledCount; // ivar: __layoutTransitionsDisabledCount
@property (nonatomic, setter=_setScrollViewSettled:) BOOL _scrollViewSettled; // ivar: __scrollViewSettled
@property (retain, nonatomic, setter=_setScrubberLayout:) PUScrubberTilingLayout *_scrubberLayout; // ivar: __scrubberLayout
@property (nonatomic, setter=_setScrubbingTransitionProgress:) CGFloat _scrubbingTransitionProgress; // ivar: __scrubbingTransitionProgress
@property (nonatomic, setter=_setSnapToExpandedItem:) BOOL _snapToExpandedItem; // ivar: __snapToExpandedItem
@property (readonly, nonatomic) UITapGestureRecognizer *_tapGestureRecognizer; // ivar: __tapGestureRecognizer
@property (nonatomic, setter=_setThinLoupe:) BOOL _thinLoupe; // ivar: __thinLoupe
@property (retain, nonatomic, setter=_setTilingView:) PUTilingView *_tilingView; // ivar: __tilingView
@property (nonatomic, setter=_setUseLoupe:) BOOL _useLoupe; // ivar: __useLoupe
@property (nonatomic, setter=_setUseSmoothingTransitionCoordinator:) BOOL _useSmoothingTransitionCoordinator; // ivar: __useSmoothingTransitionCoordinator
@property (retain, nonatomic, setter=_setVideoScrubberController:) PXVideoScrubberController *_videoScrubberController; // ivar: __videoScrubberController
@property (retain, nonatomic) PUBrowsingSession *browsingSession; // ivar: _browsingSession
@property (nonatomic) BOOL currentDragBeganOnContent; // ivar: _currentDragBeganOnContent
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUScrubberViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isForPreview; // ivar: _isForPreview
@property (readonly, nonatomic) UIScrollView *scrollViewForPreviewing;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat topOutset;
@property (nonatomic) NSInteger type; // ivar: _type


-(BOOL)_allowExitFromContentScrubbing;
-(BOOL)_isContentScrubbing;
-(BOOL)_isDrivingPlayheadProgress;
-(BOOL)_isLibraryScrubbing;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)layout:(id)arg0 shouldShowTimeIndicatorForExpandedItemAtIndexPath:(id)arg1 ;
-(BOOL)playbackTimeIndicatorTileViewControllerCanFlashIndicator:(id)arg0 ;
-(CGFloat)_expandedItemWidth;
-(CGFloat)_lengthForDuration:(CGFloat)arg0 ;
-(CGFloat)_playheadProgressForIrisAssetReference:(id)arg0 ;
-(CGFloat)videoScrubberController:(id)arg0 lengthForDuration:(CGFloat)arg1 ;
-(float)layout:(id)arg0 aspectRatioForItemAtIndexPath:(id)arg1 ;
-(id)_currentAssetsDataSource;
-(id)_expandedAssetReference;
-(id)_newScrubberLayout;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)tilingView:(id)arg0 dataSourceConverterForTransitionFromLayout:(id)arg1 toLayout:(id)arg2 ;
-(id)tilingView:(id)arg0 tileControllerWithIndexPath:(id)arg1 kind:(id)arg2 dataSource:(id)arg3 ;
-(id)tilingView:(id)arg0 tileTransitionCoordinatorForChangeFromFrame:(struct CGRect )arg1 toFrame:(struct CGRect )arg2 duration:(CGFloat)arg3 ;
-(id)tilingView:(id)arg0 tileTransitionCoordinatorForLayoutInvalidationContext:(id)arg1 ;
-(id)tilingView:(id)arg0 tileTransitionCoordinatorForTransitionFromLayout:(id)arg1 toLayout:(id)arg2 withContext:(id)arg3 ;
-(struct CGPoint )tilingView:(id)arg0 initialVisibleOriginWithLayout:(id)arg1 ;
-(struct CGPoint )tilingView:(id)arg0 targetVisibleOriginForProposedVisibleOrigin:(struct CGPoint )arg1 withLayout:(id)arg2 ;
-(void)_disableLayoutTransitionsForDuration:(CGFloat)arg0 ;
-(void)_endScrubbing;
-(void)_handleTap:(id)arg0 ;
-(void)_handleTapOnBrowsingIrisPlayer:(id)arg0 ;
-(void)_handleTapOnBrowsingVideoPlayer:(id)arg0 ;
-(void)_handleUserScrollWillBegin:(BOOL)arg0 ;
-(void)_invalidateLoupeEffect;
-(void)_invalidateScrubberLayout;
-(void)_invalidateScrubberLayoutEnsureTransition;
-(void)_invalidateSnapToExpandedItem;
-(void)_reenableLayoutTransitions;
-(void)_setNeedsUpdate;
-(void)_updateLoupeEffectIfNeeded;
-(void)_updateScrollPositionAnimated:(BOOL)arg0 ;
-(void)_updateScrubberLayoutIfNeeded;
-(void)_updateScrubbingAwayFromContentEdgeBeganDragging:(BOOL)arg0 ;
-(void)_updateSnapToExpandedItemIfNeeded;
-(void)_updateTilingViewIfNeeded;
-(void)beginPreviewing;
-(void)cancelDeceleration;
-(void)dealloc;
-(void)endPreviewing;
-(void)handleTouchGesture:(id)arg0 ;
-(void)layoutSubviews;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)updateIfNeeded;
-(void)videoScrubberController:(id)arg0 desiredSeekTime:(struct ? )arg1 ;
-(void)videoScrubberControllerDidUpdate:(id)arg0 ;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif
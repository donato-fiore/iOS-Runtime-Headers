// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUMEDIAVIEWRENDERER_H
#define NUMEDIAVIEWRENDERER_H

@class NUSurfaceRenderClient, NULivePhotoRenderClient, NUVideoRenderClient, NSString, UIView, NUCoalescer, NUObservatory, NUResponse, NUColorSpace, NUComposition, NSArray, NUPixelFormat;
@protocol NUMediaPlayer, OS_dispatch_group, OS_dispatch_queue, NURenderStatistics;

#import <Foundation/Foundation.h>

#import "NUMediaView.h"
#import "NUAVPlayerController.h"

@interface NUMediaViewRenderer : NSObject <NUMediaPlayer>

 {
    NUSurfaceRenderClient *_zoomClient;
    NUSurfaceRenderClient *_backfillClient;
    NULivePhotoRenderClient *_livePhotoClient;
    NUVideoRenderClient *_videoClient;
    NSString *_currentVideoSourceAssetIdentifier;
    UIView *_livePhotoView;
    NUCoalescer *_livePhotoUpdateCoalescer;
    NUCoalescer *_videoUpdateCoalescer;
    NUObservatory *_observatory;
    BOOL _canRenderLoopingVideoLive;
    NSInteger _playbackMode;
    BOOL _muted;
    BOOL _didReleaseAVObjects;
    uint8_t _videoRenderInFlightCount;
    NSObject<OS_dispatch_group> *_renderGroup;
    NSObject<OS_dispatch_queue> *_renderQueue;
    NUResponse *_zoomRenderResponse;
    NUResponse *_backfillRenderResponse;
    CGRect _lastZoomRect;
    CGFloat _lastZoomScale;
    CGFloat _lastZoomRenderTime;
    id<NURenderStatistics> *_lastZoomRenderStatistics;
    id<NURenderStatistics> *_lastBackfillRenderStatictics;
    BOOL _isPanning;
    BOOL _isZooming;
}


@property (nonatomic, getter=_isVideoEnabled, setter=_setVideoEnabled:) BOOL _videoEnabled; // ivar: __videoEnabled
@property (nonatomic) CGFloat backingScale; // ivar: _backingScale
@property (retain, nonatomic) NUColorSpace *colorSpace; // ivar: _colorSpace
@property (copy, nonatomic) NUComposition *composition; // ivar: _composition
@property (readonly, nonatomic) NSUInteger computedDisplayType; // ivar: _computedDisplayType
@property (readonly, nonatomic) ? currentSeekTime;
@property (readonly, nonatomic) ? currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger displayType; // ivar: _displayType
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isReady;
@property (readonly) NSArray *loadedTimeRanges;
@property (nonatomic) CGFloat maximumZoomScale; // ivar: _maximumZoomScale
@property (readonly, nonatomic) ? mediaDuration;
@property (readonly, weak, nonatomic) NUMediaView *mediaView; // ivar: _mediaView
@property (nonatomic, getter=isMuted) BOOL muted;
@property (readonly, nonatomic) NUAVPlayerController *nuAVPlayerController; // ivar: _nuAVPlayerController
@property (nonatomic) CGFloat overrideZoomScale; // ivar: _overrideZoomScale
@property (nonatomic) CGSize overrideZoomToFitSize; // ivar: _overrideZoomToFitSize
@property (copy, nonatomic) NSArray *pipelineFilters; // ivar: _pipelineFilters
@property (retain, nonatomic) NUPixelFormat *pixelFormat; // ivar: _pixelFormat
@property (nonatomic) NSInteger playbackMode;
@property (nonatomic) CGFloat playbackRate;
@property (readonly, nonatomic) NSInteger playbackState;
@property (readonly, copy, nonatomic) NSArray *previousPipelineFilters; // ivar: _previousPipelineFilters
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
@property (readonly, nonatomic, getter=isZoomedToFit) BOOL zoomedToFit;


+(BOOL)_forceUpdateForNewVideoComposition:(id)arg0 previousComposition:(id)arg1 newAsset:(id)arg2 previousAsset:(id)arg3 isPlaying:(BOOL)arg4 ;
-(BOOL)_didReleaseAVObjects;
-(BOOL)canRenderVideoLive;
-(BOOL)pipelineFilersHaveChanged;
-(CGFloat)_lastRenderDuration;
-(CGFloat)_targetZoomScale;
-(NSInteger)_playbackStateFromPlayerStatus:(NSInteger)arg0 rate:(float)arg1 ;
-(id)_backfillRenderRequestForComposition:(id)arg0 ;
-(id)_backfillRenderResponseHandler:(SEL)arg0 ;
-(id)_livePhotoFromResponse:(id)arg0 ;
-(id)_regionPolicyForZoomTargetRect:(struct CGRect )arg0 ;
-(id)_scalePolicyForVideoCompositionRender;
-(id)_updateImageLayer:(id)arg0 withRenderResponse:(id)arg1 ;
-(id)_videoFrameImageRenderResponseHandler:(SEL)arg0 ;
-(id)_zoomRenderRequestForComposition:(id)arg0 ;
-(id)_zoomRenderResponseHandler:(SEL)arg0 ;
-(id)addExternalPlaybackObserver:(id)arg0 ;
-(id)addPlaybackStateObserver:(id)arg0 ;
-(id)addPlaybackTimeObserver:(id)arg0 ;
-(id)cacheVideoRenderFilter;
-(id)init;
-(id)initWithMediaView:(id)arg0 ;
-(id)newRenderRequestForComposition:(id)arg0 scalePolicy:(id)arg1 regionPolicy:(id)arg2 ;
-(id)renderClient;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromImageToView:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toImageFromView:(id)arg1 ;
-(struct CGRect )_scrollBounds;
-(struct CGRect )_zoomTargetRect;
-(struct CGRect )convertRect:(struct CGRect )arg0 fromImageToView:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 toImageFromView:(id)arg1 ;
-(struct CGSize )targetSize;
-(void)_addFullExtentConstraintsForView:(id)arg0 ;
-(void)_beginAnimating;
-(void)_coalesceUpdateLivePhotoComposition:(id)arg0 ;
-(void)_coalesceUpdateVideoComposition:(id)arg0 ;
-(void)_endAnimating;
-(void)_notifyExternalPlaybackChange:(BOOL)arg0 ;
-(void)_notifyPlaybackStateChange:(NSInteger)arg0 ;
-(void)_notifyPlaybackTimeChange:(struct ? )arg0 ;
-(void)_playerStatusDidChange:(NSInteger)arg0 ;
-(void)_releaseAVObjects;
-(void)_renderFinishedWithGeometry:(id)arg0 layer:(id)arg1 ;
-(void)_setupAVPlayerController;
-(void)_tearDownAVPlayerController;
-(void)_updateBackfillLayerWithLatestRenderResponse;
-(void)_updateBackfillLayerWithRenderResponse:(id)arg0 ;
-(void)_updateDisplayForMediaType:(NSInteger)arg0 ;
-(void)_updateImageRenderForComposition:(id)arg0 ;
-(void)_updateLivePhotoComposition:(id)arg0 ;
-(void)_updateLivePhotoWithResponse:(id)arg0 ;
-(void)_updateROILayerWithLatestRenderResponse;
-(void)_updateROILayerWithRenderResponse:(id)arg0 ;
-(void)_updateVideoComposition:(id)arg0 ;
-(void)_updateVideoViewLayoutWithGeometry:(id)arg0 ;
-(void)_updateVideoWithResult:(id)arg0 sourceChanged:(BOOL)arg1 ;
-(void)_withComposition:(id)arg0 visitRenderClient:(id)arg1 ;
-(void)beginPanning;
-(void)beginZooming;
-(void)cancelPendingRenders;
-(void)endPanning;
-(void)endZooming;
-(void)livePhotoView:(id)arg0 didEndPlaybackWithStyle:(NSInteger)arg1 ;
-(void)livePhotoView:(id)arg0 willBeginPlaybackWithStyle:(NSInteger)arg1 ;
-(void)livePhotoViewDidBeginScrubbing:(id)arg0 ;
-(void)livePhotoViewDidEndScrubbing:(id)arg0 ;
-(void)pause;
-(void)play;
-(void)removeObserver:(id)arg0 ;
-(void)seekToTime:(struct ? )arg0 ;
-(void)seekToTime:(struct ? )arg0 exact:(BOOL)arg1 ;
-(void)seekToTime:(struct ? )arg0 exact:(BOOL)arg1 forceSeek:(BOOL)arg2 ;
-(void)seekToTime:(struct ? )arg0 toleranceBefore:(struct ? )arg1 toleranceAfter:(struct ? )arg2 ;
-(void)seekToTime:(struct ? )arg0 toleranceBefore:(struct ? )arg1 toleranceAfter:(struct ? )arg2 forceSeek:(BOOL)arg3 ;
-(void)stepByCount:(NSInteger)arg0 ;
-(void)updateComposition:(id)arg0 ;
-(void)wait;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGDISPLAYASSETVIDEOPRESENTATIONCONTROLLER_H
#define PXGDISPLAYASSETVIDEOPRESENTATIONCONTROLLER_H

@class NSString, NSMutableDictionary;
@protocol PXStoryVideoPresentationController, PXChangeObserver, PXGMutableDisplayAssetVideoPresentationController_Private, OS_dispatch_queue, PXGDisplayAssetVideoPresentationControllerDelegate, PXDisplayAsset;


#import "PXObservable.h"
#import "PXVideoSessionManagerDisplayAssetOptions.h"
#import "PXGVideoSessionPixelBufferSource.h"
#import "PXVideoSession.h"
#import "PXVideoSessionManager.h"

@interface PXGDisplayAssetVideoPresentationController : PXObservable <PXStoryVideoPresentationController, PXChangeObserver, PXGMutableDisplayAssetVideoPresentationController_Private>

 {
    *void _videoSessionPresenter;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (readonly, nonatomic) NSInteger actualPlayState; // ivar: _actualPlayState
@property (readonly, nonatomic) ? actualTime; // ivar: _actualTime
@property (readonly, nonatomic) NSString *audioSessionCategory; // ivar: _audioSessionCategory
@property (readonly, nonatomic) ? beginningTime;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGDisplayAssetVideoPresentationControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger desiredPlayState; // ivar: _desiredPlayState
@property (readonly, nonatomic) ? desiredTime; // ivar: _desiredTime
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *displayAsset;
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *displayAsset; // ivar: _displayAsset
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isAtEnd; // ivar: _isAtEnd
@property (readonly, nonatomic) BOOL isCleanApertureCompensationEnabled; // ivar: _isCleanApertureCompensationEnabled
@property (readonly, nonatomic) BOOL isCrossfadingFromStillToVideoEnabled; // ivar: _isCrossfadingFromStillToVideoEnabled
@property (readonly, nonatomic) BOOL isDuckingOtherAudioEnabled; // ivar: _isDuckingOtherAudioEnabled
@property (readonly, nonatomic) BOOL isLoopingEnabled; // ivar: _isLoopingEnabled
@property (readonly, nonatomic) BOOL isMixingAudioWithOthersEnabled; // ivar: _isMixingAudioWithOthersEnabled
@property (readonly, nonatomic) BOOL isReadyForImmediatePlayback; // ivar: _isReadyForImmediatePlayback
@property (readonly, nonatomic) BOOL isVisible; // ivar: _isVisible
@property (readonly, nonatomic) NSInteger loadingPriority; // ivar: _loadingPriority
@property (readonly, nonatomic) PXVideoSessionManagerDisplayAssetOptions *options; // ivar: _options
@property (nonatomic) float pendingPrerollRate; // ivar: _pendingPrerollRate
@property (nonatomic) ? pendingSeekTime; // ivar: _pendingSeekTime
@property (nonatomic) ? pendingSeekToleranceAfter; // ivar: _pendingSeekToleranceAfter
@property (nonatomic) ? pendingSeekToleranceBefore; // ivar: _pendingSeekToleranceBefore
@property (retain, nonatomic) PXGVideoSessionPixelBufferSource *pixelBufferSource; // ivar: _pixelBufferSource
@property (nonatomic) NSInteger pixelBufferSourceCounter; // ivar: _pixelBufferSourceCounter
@property (nonatomic) ? playbackStartTime; // ivar: _playbackStartTime
@property (readonly, nonatomic) ? playbackTimeRange; // ivar: _playbackTimeRange
@property (readonly, nonatomic) BOOL resetsDesiredPlayStateOnHide; // ivar: _resetsDesiredPlayStateOnHide
@property (readonly, nonatomic) BOOL shouldDisableAutomaticPixelBufferUpdates; // ivar: _shouldDisableAutomaticPixelBufferUpdates
@property (readonly, nonatomic) BOOL shouldDisplayPreviousNonnullPixelBuffer; // ivar: _shouldDisplayPreviousNonnullPixelBuffer
@property (nonatomic) BOOL shouldFadeVolumeChange; // ivar: _shouldFadeVolumeChange
@property (readonly, nonatomic) BOOL shouldRewindOnBackAction;
@property (readonly) Class superclass;
@property (nonatomic) CGSize targetSize; // ivar: _targetSize
@property (retain, nonatomic) NSMutableDictionary *timeObserversByTime; // ivar: _timeObserversByTime
@property (readonly, nonatomic) ? videoDuration; // ivar: _videoDuration
@property (retain, nonatomic) PXVideoSession *videoSession; // ivar: _videoSession
@property (readonly, nonatomic) PXVideoSessionManager *videoSessionManager; // ivar: _videoSessionManager
@property (nonatomic) float volume; // ivar: _volume


-(BOOL)_timeConversionNeeded;
-(BOOL)isPendingSeekScheduled;
-(id)init;
-(id)initWithDisplayAsset:(id)arg0 accessQueue:(id)arg1 ;
-(id)initWithDisplayAsset:(id)arg0 accessQueue:(id)arg1 videoSessionManager:(id)arg2 options:(id)arg3 loadingPriority:(NSInteger)arg4 ;
-(id)pixelBufferSourceWithMediaProvider:(id)arg0 ;
-(id)videoSessionWithMediaProvider:(id)arg0 ;
-(struct ? )_timeConvertedFromVideoSessionTime:(struct ? )arg0 ;
-(struct ? )_timeRangeConvertedFromVideoSessionTimeRange:(struct ? )arg0 ;
-(struct ? )_videoSessionTimeConvertedFromTime:(struct ? )arg0 ;
-(struct ? )_videoSessionTimeRangeConvertedFromTimeRange:(struct ? )arg0 ;
-(void)_invalidatePresentationControllerState;
-(void)_invalidateVideoSession;
-(void)_notifyReachedTime:(struct ? )arg0 ;
-(void)_performPendingPrerollIfNeeded;
-(void)_performPendingSeekIfNeeded;
-(void)_performPrerollAtRate:(float)arg0 ;
-(void)_performSeekToTime:(struct ? )arg0 toleranceBefore:(struct ? )arg1 toleranceAfter:(struct ? )arg2 ;
-(void)_prerollCompletedSuccessfully:(BOOL)arg0 ;
-(void)_setupPixelBufferSourceIfNeededWithMediaProvider:(id)arg0 ;
-(void)_setupVideoSessionIfNeededWithMediaProvider:(id)arg0 ;
-(void)_updatePresentationControllerState;
-(void)_updateVideoSession;
-(void)dealloc;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;
-(void)prerollForImmediatePlaybackAtRate:(float)arg0 withMediaProvider:(id)arg1 ;
-(void)recyclePixelBufferSource;
-(void)rewind;
-(void)seekToBeginning;
-(void)startObservingBoundaryTime:(struct ? )arg0 ;
-(void)stopObservingBoundaryTime:(struct ? )arg0 ;
-(void)synchronouslySeekToDesiredTime:(struct ? )arg0 updatePixelBufferSource:(BOOL)arg1 ;


@end


#endif
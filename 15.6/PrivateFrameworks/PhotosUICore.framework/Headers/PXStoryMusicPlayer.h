// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYMUSICPLAYER_H
#define PXSTORYMUSICPLAYER_H

@class NSString, NSTimer, NSDate;
@protocol PXStoryQueueParticipant, PXChangeObserver, PXStoryDiagnosticHUDContentProvider, PXMutableStoryMusicPlayer, PXSettingsKeyObserver, PXAudioPlayerAVAudioSessionDelegate, PXStoryPacingCueSource, PXAudioCueSource, PXAudioCueProvider, PXAudioAsset, PXStorySongResource, OS_dispatch_queue;


#import "PXObservable.h"
#import "PXNumberAnimator.h"
#import "PXStoryModel.h"
#import "PXAudioPlayer.h"
#import "PXUpdater.h"

@interface PXStoryMusicPlayer : PXObservable <PXStoryQueueParticipant, PXChangeObserver, PXStoryDiagnosticHUDContentProvider, PXMutableStoryMusicPlayer, PXSettingsKeyObserver, PXAudioPlayerAVAudioSessionDelegate, PXStoryPacingCueSource>



@property (nonatomic) NSInteger actionAtEnd; // ivar: _actionAtEnd
@property (readonly, nonatomic) NSObject<PXAudioCueSource> *audioCueSource;
@property (readonly, nonatomic) NSInteger audioDesiredPlayState; // ivar: _audioDesiredPlayState
@property (nonatomic) NSInteger bufferingEvents; // ivar: _bufferingEvents
@property (retain, nonatomic) NSObject<PXAudioCueProvider> *cueProvider; // ivar: _cueProvider
@property (nonatomic) NSInteger cueRequestID; // ivar: _cueRequestID
@property (retain, nonatomic) NSObject<PXAudioCueSource> *cueSource; // ivar: _cueSource
@property (nonatomic) NSInteger cuesVersion; // ivar: _cuesVersion
@property (retain, nonatomic) NSObject<PXAudioAsset> *currentAudioAsset; // ivar: _currentAudioAsset
@property (readonly, nonatomic) NSObject<PXStorySongResource> *currentSongResource; // ivar: _currentSongResource
@property (nonatomic) NSInteger currentSongResourceRequestID; // ivar: _currentSongResourceRequestID
@property (readonly, nonatomic) ? currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger desiredPlayState; // ivar: _desiredPlayState
@property (nonatomic) float duckedVolume; // ivar: _duckedVolume
@property (copy, nonatomic) NSString *duckingReason; // ivar: _duckingReason
@property (readonly, nonatomic) PXNumberAnimator *duckingVolumeAnimator; // ivar: _duckingVolumeAnimator
@property (readonly, nonatomic) PXNumberAnimator *fadeOutVolumeAnimator; // ivar: _fadeOutVolumeAnimator
@property (readonly, nonatomic) PXNumberAnimator *focusVolumeAnimator; // ivar: _focusVolumeAnimator
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isActive; // ivar: _isActive
@property (nonatomic) BOOL isDucked; // ivar: _isDucked
@property (readonly, nonatomic) PXStoryModel *model; // ivar: _model
@property (copy, nonatomic) NSString *pauseReason; // ivar: _pauseReason
@property (retain, nonatomic) NSTimer *playbackTimer; // ivar: _playbackTimer
@property (readonly, nonatomic) PXAudioPlayer *player; // ivar: _player
@property (nonatomic) NSInteger readinessStatus; // ivar: _readinessStatus
@property (nonatomic) BOOL shouldDuckForCurrentTouch; // ivar: _shouldDuckForCurrentTouch
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue; // ivar: _storyQueue
@property (readonly) Class superclass;
@property (nonatomic) ? targetDuration; // ivar: _targetDuration
@property (retain, nonatomic) NSDate *touchingBeganDate; // ivar: _touchingBeganDate
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater


-(id)AVAudioSessionForPlayer:(id)arg0 ;
-(id)diagnosticCueStringForSize:(struct CGSize )arg0 withIndicatorTime:(struct ? )arg1 rangeIndicatorTimeRange:(struct ? )arg2 ;
-(id)diagnosticErrorsByComponentForHUDType:(NSInteger)arg0 ;
-(id)diagnosticTextForHUDType:(NSInteger)arg0 ;
-(id)diagnosticTextForHUDType:(NSInteger)arg0 displaySize:(struct CGSize )arg1 ;
-(id)init;
-(id)initWithModel:(id)arg0 ;
-(struct ? )playbackStartTimeForIncomingSong:(id)arg0 ;
-(void)_handleAudioCues:(id)arg0 asset:(id)arg1 error:(id)arg2 requestID:(NSInteger)arg3 ;
-(void)_handleDuckingDelayPassedForTouchingBeganDate:(id)arg0 ;
-(void)_handlePlaybackFailureIfNeeded;
-(void)_handlePlaybackTimerFired:(id)arg0 ;
-(void)_handlePlayerChangedIsAtEnd;
-(void)_handleTargetDurationFlexAsset:(id)arg0 requestID:(NSInteger)arg1 ;
-(void)_invalidateCueSource;
-(void)_invalidateCurrentAudioAsset;
-(void)_invalidateCurrentSongResource;
-(void)_invalidateDesiredPlayState;
-(void)_invalidateDucked;
-(void)_invalidateDuckingVolumeAnimator;
-(void)_invalidateError;
-(void)_invalidateFadeOutVolumeAnimator;
-(void)_invalidateFocusVolumeAnimator;
-(void)_invalidateModelProprties;
-(void)_invalidatePlaybackTimer;
-(void)_invalidatePlayerCurrentAsset;
-(void)_invalidatePlayerDesiredPlayState;
-(void)_invalidatePlayerVolume;
-(void)_invalidateReadinessStatus;
-(void)_invalidateTargetDuration;
-(void)_invalidateTouchingBeganDate;
-(void)_replayIfNeeded;
-(void)_updateCueSource;
-(void)_updateCurrentAudioAsset;
-(void)_updateCurrentSongResource;
-(void)_updateDesiredPlayState;
-(void)_updateDucked;
-(void)_updateDuckingVolumeAnimator;
-(void)_updateError;
-(void)_updateFadeOutVolumeAnimator;
-(void)_updateFocusVolumeAnimator;
-(void)_updateModelProperties;
-(void)_updatePlaybackTimer;
-(void)_updatePlayerCurrentAsset;
-(void)_updatePlayerDesiredPlayState;
-(void)_updatePlayerVolume;
-(void)_updateReadinessStatus;
-(void)_updateTargetDuration;
-(void)_updateTouchingBeganDate;
-(void)didPerformChanges;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;
-(void)replay;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif
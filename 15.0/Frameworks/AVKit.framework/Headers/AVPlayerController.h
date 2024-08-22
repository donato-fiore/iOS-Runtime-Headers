// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVPLAYERCONTROLLER_H
#define AVPLAYERCONTROLLER_H

@class NSArray, AVMediaSelectionOption, NSString, NSNumber, BSSimpleAssertion, AVAsset, AVAssetTrack, NSDate, NSError, NSDictionary, AVPlayer, AVPlayerLayer, AVCoordinatedPlaybackSuspension;
@protocol OS_dispatch_queue, OS_dispatch_source, AVPlayerControllerDelegate;

#import <Foundation/Foundation.h>

#import "AVValueTiming.h"
#import "AVTimecodeController.h"
#import "AVObservationController.h"

@interface AVPlayerController : NSObject {
    NSArray *_audioMediaSelectionOptions;
    NSArray *_legibleMediaSelectionOptions;
    AVMediaSelectionOption *_cachedSelectedAudioMediaSelectionOption;
    AVMediaSelectionOption *_cachedSelectedLegibleMediaSelectionOption;
    AVMediaSelectionOption *_cachedSelectedLegibleMediaSelectionOptionAccordingToAVFoundation;
    NSString *_lastKnownPersistedExtendedLanguageTag;
    *void _observationInfo;
    BOOL _inspectionSuspended;
    id *_updateAtMinMaxTimePeriodicObserverToken;
    id *_timecodePeriodicObserverToken;
    BOOL _pictureInPictureInterrupted;
    BOOL _handlesAudioSessionInterruptions;
    BOOL _isDeallocating;
    BOOL _hasSetUpSeekableLiveStreamState;
    NSNumber *_rateToRestoreAfterAudioSessionInterruptionEnds;
    id *_retryPlayingImmediatelyBlock;
    BOOL _shouldPlayImmediately;
    BOOL _looping;
    NSInteger _actionAtItemEnd;
    float _rate;
    NSObject<OS_dispatch_queue> *_seekQueue;
    NSObject<OS_dispatch_source> *_seekTimer;
    CGFloat _timeOfLastUpdate;
    BOOL _ignoreRateKeyValueChanges;
    BOOL _ignoreNextRateKeyValueChange;
    BOOL _pendingSeek;
    BOOL _isResumed;
    ? _toleranceBefore;
    ? _toleranceAfter;
    BOOL _isScanningForward;
    BOOL _isScanningBackward;
    NSUInteger _scanningCount;
    CGFloat _preScanningRate;
    AVValueTiming *_liveStreamMinTiming;
    AVValueTiming *_liveStreamMaxTiming;
    BOOL _liveStreamEventModePossible;
    NSInteger _canUseNetworkResourcesForLiveStreamingWhilePausedCount;
    BOOL _previousValueOfCanUseNetworkResourcesForLiveStreamingWhilePaused;
    BOOL _shouldPlayWhenLikelyToKeepUp;
    BOOL _forceScanning;
    CGFloat _rateBeforeForceScanning;
    BOOL _playingOnSecondScreen;
    BOOL _didPreventSleepWhenStartingExternalPlayback;
    BSSimpleAssertion *_reduceResourceUsageAssertion;
    CGFloat _defaultPlaybackRate;
    BOOL _touchBarRequiresLinearPlayback;
    AVTimecodeController *_timecodeController;
    id<AVPlayerControllerDelegate> *_internalDelegate;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
}


@property (nonatomic) BOOL allowsPictureInPicturePlayback; // ivar: _allowsPictureInPicturePlayback
@property (retain, nonatomic) AVAsset *assetBeingPrepared; // ivar: _assetBeingPrepared
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *assetInspectionQueue; // ivar: _assetInspectionQueue
@property (nonatomic, getter=isAtMaxTime) BOOL atMaxTime; // ivar: _atMaxTime
@property (nonatomic, getter=isAtMinTime) BOOL atMinTime; // ivar: _atMinTime
@property (retain, nonatomic) NSArray *availableMetadataFormats; // ivar: _availableMetadataFormats
@property (nonatomic) BOOL canTogglePictureInPicture; // ivar: _canTogglePictureInPicture
@property (nonatomic, getter=isCompatibleWithAirPlayVideo) BOOL compatibleWithAirPlayVideo; // ivar: _compatibleWithAirPlayVideo
@property (nonatomic, getter=isComposable) BOOL composable; // ivar: _composable
@property (retain, nonatomic) NSArray *contentChapters; // ivar: _contentChapters
@property (nonatomic) BOOL coordinatedPlaybackActive; // ivar: _coordinatedPlaybackActive
@property (retain, nonatomic) AVAsset *currentAssetIfReady; // ivar: _currentAssetIfReady
@property (retain, nonatomic) AVAssetTrack *currentAudioTrack; // ivar: _currentAudioTrack
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) NSDate *currentOrEstimatedDate;
@property (retain, nonatomic) AVMediaSelectionOption *currentVideoMediaSelectionOption; // ivar: _currentVideoMediaSelectionOption
@property (retain, nonatomic) AVAssetTrack *currentVideoTrack; // ivar: _currentVideoTrack
@property (nonatomic, getter=isDisablingAutomaticTermination) BOOL disablingAutomaticTermination; // ivar: _disablingAutomaticTermination
@property (readonly, nonatomic) NSError *error;
@property (retain, nonatomic) NSString *externalPlaybackAirPlayDeviceLocalizedName; // ivar: _externalPlaybackAirPlayDeviceLocalizedName
@property (nonatomic) BOOL handlesAudioSessionInterruptions;
@property (nonatomic) BOOL hasBegunInspection; // ivar: _hasBegunInspection
@property (nonatomic) BOOL hasProtectedContent; // ivar: _hasProtectedContent
@property (readonly, nonatomic) BOOL hasReadableTimecodes;
@property (weak, nonatomic) NSObject<AVPlayerControllerDelegate> *internalDelegate;
@property (retain, nonatomic) AVValueTiming *maxTiming; // ivar: _maxTiming
@property (readonly, nonatomic) CGSize maximumVideoResolution;
@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (retain, nonatomic) AVValueTiming *minTiming; // ivar: _minTiming
@property (readonly, nonatomic) AVObservationController *observationController; // ivar: _observationController
@property (nonatomic, getter=isPictureInPictureActive) BOOL pictureInPictureActive; // ivar: _pictureInPictureActive
@property (nonatomic, getter=isPictureInPictureSupported) BOOL pictureInPictureSupported; // ivar: _pictureInPictureSupported
@property (copy, nonatomic) NSString *pipActivitySessionIdentifier; // ivar: _pipActivitySessionIdentifier
@property (nonatomic, getter=isPlaybackSuspended) BOOL playbackSuspended; // ivar: _playbackSuspended
@property (retain, nonatomic) AVPlayer *player; // ivar: _player
@property (weak, nonatomic) AVPlayerLayer *playerLayerForReducingResources; // ivar: _playerLayerForReducingResources
@property (readonly, nonatomic, getter=isPlayingOnMatchPointDevice) BOOL playingOnMatchPointDevice;
@property (nonatomic, getter=isPlayingOnMatchPointDevice) BOOL playingOnMatchPointDevice; // ivar: _playingOnMatchPointDevice
@property (nonatomic, getter=isPlayingOnSecondScreen) BOOL playingOnSecondScreen;
@property (nonatomic) CGSize presentationSize; // ivar: _presentationSize
@property (nonatomic, getter=isPreventingIdleDisplaySleep) BOOL preventingIdleDisplaySleep; // ivar: _preventingIdleDisplaySleep
@property (nonatomic, getter=isPreventingIdleSystemSleep) BOOL preventingIdleSystemSleep; // ivar: _preventingIdleSystemSleep
@property (nonatomic) CGFloat rateBeforeScrubBegan; // ivar: _rateBeforeScrubBegan
@property (readonly, nonatomic, getter=isReadyToPlay) BOOL readyToPlay;
@property (retain, nonatomic) BSSimpleAssertion *reduceResourceUsageAssertion;
@property (retain, nonatomic) AVCoordinatedPlaybackSuspension *scrubCoordinatorSuspension; // ivar: _scrubCoordinatorSuspension
@property (nonatomic, getter=isScrubbing) BOOL scrubbing; // ivar: _scrubbing
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *seekTimer;
@property (nonatomic) CGFloat seekToTime; // ivar: _seekToTime
@property ? seekToTimeInternal; // ivar: _seekToTimeInternal
@property (nonatomic, getter=isSeeking) BOOL seeking; // ivar: _seeking
@property (getter=isSeekingInternal) BOOL seekingInternal; // ivar: _seekingInternal
@property (readonly, nonatomic) NSInteger status;
@property (readonly, nonatomic) AVTimecodeController *timecodeController;
@property (retain, nonatomic) AVValueTiming *timing; // ivar: _timing
@property (nonatomic) BOOL touchBarRequiresLinearPlayback;
@property (readonly, nonatomic) BOOL usesExternalPlaybackWhileExternalScreenIsActive;
@property (readonly, nonatomic) NSArray *visualMediaSelectionOptions; // ivar: _visualMediaSelectionOptions


+(BOOL)cachedIsPictureInPictureSupported;
+(id)canonicalLanguageIdentifierFromString:(id)arg0 ;
+(id)keyPathsForValuesAffectingAllowsExternalPlayback;
+(id)keyPathsForValuesAffectingCanPause;
+(id)keyPathsForValuesAffectingCanPlay;
+(id)keyPathsForValuesAffectingCanScanBackward;
+(id)keyPathsForValuesAffectingCanScanForward;
+(id)keyPathsForValuesAffectingCanSeek;
+(id)keyPathsForValuesAffectingCanSeekChapterBackward;
+(id)keyPathsForValuesAffectingCanSeekChapterForward;
+(id)keyPathsForValuesAffectingCanSeekFrameBackward;
+(id)keyPathsForValuesAffectingCanSeekFrameForward;
+(id)keyPathsForValuesAffectingCanSeekToBeginning;
+(id)keyPathsForValuesAffectingCanSeekToEnd;
+(id)keyPathsForValuesAffectingCanTogglePlayback;
+(id)keyPathsForValuesAffectingCompletelySeekable;
+(id)keyPathsForValuesAffectingContentDimensions;
+(id)keyPathsForValuesAffectingContentDuration;
+(id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+(id)keyPathsForValuesAffectingCurrentTime;
+(id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+(id)keyPathsForValuesAffectingError;
+(id)keyPathsForValuesAffectingExternalPlaybackActive;
+(id)keyPathsForValuesAffectingExternalPlaybackType;
+(id)keyPathsForValuesAffectingForwardPlaybackEndTime;
+(id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+(id)keyPathsForValuesAffectingHasContent;
+(id)keyPathsForValuesAffectingHasContentChapters;
+(id)keyPathsForValuesAffectingHasEnabledAudio;
+(id)keyPathsForValuesAffectingHasEnabledVideo;
+(id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;
+(id)keyPathsForValuesAffectingHasLiveStreamingContent;
+(id)keyPathsForValuesAffectingHasMediaSelectionOptions;
+(id)keyPathsForValuesAffectingHasSeekableLiveStreamingContent;
+(id)keyPathsForValuesAffectingHasShareableContent;
+(id)keyPathsForValuesAffectingHasTrimmableContent;
+(id)keyPathsForValuesAffectingHasVideo;
+(id)keyPathsForValuesAffectingLoadedTimeRanges;
+(id)keyPathsForValuesAffectingMaxTime;
+(id)keyPathsForValuesAffectingMaximumVideoResolution;
+(id)keyPathsForValuesAffectingMinTime;
+(id)keyPathsForValuesAffectingMuted;
+(id)keyPathsForValuesAffectingPictureInPicturePossible;
+(id)keyPathsForValuesAffectingPlaying;
+(id)keyPathsForValuesAffectingPlayingOnExternalScreen;
+(id)keyPathsForValuesAffectingPreferredDisplayCriteria;
+(id)keyPathsForValuesAffectingReadyToPlay;
+(id)keyPathsForValuesAffectingReversePlaybackEndTime;
+(id)keyPathsForValuesAffectingSeekableTimeRanges;
+(id)keyPathsForValuesAffectingStatus;
+(id)keyPathsForValuesAffectingStreaming;
+(id)keyPathsForValuesAffectingTimeControlStatus;
+(id)keyPathsForValuesAffectingUsesExternalPlaybackWhileExternalScreenIsActive;
+(id)keyPathsForValuesAffectingVolume;
+(void)initialize;
+(void)setCachedIsPictureInPictureSupported:(BOOL)arg0 ;
-(*void)observationInfo;
-(BOOL)_assetContainsProResRaw:(id)arg0 ;
-(BOOL)_assetIsMarkedNotSerializable:(id)arg0 ;
-(BOOL)_assetIsRestrictedFromSaving:(id)arg0 ;
-(BOOL)_mediaSelectionCriteriaCanBeAppliedAutomaticallyToLegibleMediaSelectionGroup;
-(BOOL)allowsExternalPlayback;
-(BOOL)canPause;
-(BOOL)canPlay;
-(BOOL)canPlayImmediately;
-(BOOL)canScanBackward;
-(BOOL)canScanForward;
-(BOOL)canSeek;
-(BOOL)canSeekChapterBackward;
-(BOOL)canSeekChapterForward;
-(BOOL)canSeekFrameBackward;
-(BOOL)canSeekFrameForward;
-(BOOL)canSeekToBeginning;
-(BOOL)canSeekToEnd;
-(BOOL)canTogglePlayback;
-(BOOL)canUseNetworkResourcesForLiveStreamingWhilePaused;
-(BOOL)hasAudioMediaSelectionOptions;
-(BOOL)hasContent;
-(BOOL)hasContentChapters;
-(BOOL)hasEnabledAudio;
-(BOOL)hasEnabledVideo;
-(BOOL)hasLegibleMediaSelectionOptions;
-(BOOL)hasLiveStreamingContent;
-(BOOL)hasMediaSelectionOptions;
-(BOOL)hasSeekableLiveStreamingContent;
-(BOOL)hasShareableContent;
-(BOOL)hasTimecodes;
-(BOOL)hasTrimmableContent;
-(BOOL)hasVideo;
-(BOOL)isCompletelySeekable;
-(BOOL)isExternalPlaybackActive;
-(BOOL)isInspectionSuspended;
-(BOOL)isLooping;
-(BOOL)isMuted;
-(BOOL)isPictureInPictureInterrupted;
-(BOOL)isPictureInPicturePossible;
-(BOOL)isPlaying;
-(BOOL)isPlayingOnExternalScreen;
-(BOOL)isReducingResourcesForPictureInPicture;
-(BOOL)isStreaming;
-(BOOL)startGeneratingTimecodesUsingBlock:(id)arg0 ;
-(CGFloat)contentDuration;
-(CGFloat)contentDurationWithinEndTimes;
-(CGFloat)currentTime;
-(CGFloat)currentTimeWithinEndTimes;
-(CGFloat)defaultPlaybackRate;
-(CGFloat)maxTime;
-(CGFloat)minTime;
-(CGFloat)rate;
-(CGFloat)timecodeObservationInterval;
-(CGFloat)volume;
-(NSInteger)externalPlaybackType;
-(NSInteger)frameNumberForCurrentTime;
-(NSInteger)timeControlStatus;
-(float)nominalFrameRate;
-(id)_optionsForGroup:(id)arg0 ;
-(id)_outputContext;
-(id)_queuePlayer;
-(id)_selectedMediaOptionWithMediaCharacteristic:(id)arg0 ;
-(id)_timecodeTrack;
-(id)audioMediaSelectionOptions;
-(id)audioOptions;
-(id)audioWaveform;
-(id)currentAudioMediaSelectionOption;
-(id)currentEnabledAssetTrackForMediaType:(id)arg0 ;
-(id)currentLegibleMediaSelectionOption;
-(id)init;
-(id)initWithPlayer:(id)arg0 ;
-(id)keyPathsForValuesAffectingCurrentAudioMediaSelectionOption;
-(id)keyPathsForValuesAffectingCurrentLegibleMediaSelectionOption;
-(id)legibleMediaSelectionOptions;
-(id)legibleOptions;
-(id)loadTimecodeControllerIfNeeded;
-(id)loadedTimeRanges;
-(id)maxFrameCountString;
-(id)maxTimecode;
-(id)mediaSelectionGroupForMediaCharacteristic:(id)arg0 ;
-(id)preferredDisplayCriteria;
-(id)scanningDelays;
-(id)seekableTimeRanges;
-(id)timecodeForCurrentTime;
-(struct ? )forwardPlaybackEndTime;
-(struct ? )reversePlaybackEndTime;
-(struct CGSize )contentDimensions;
-(void)_cancelPendingSeeksIfNeeded;
-(void)_disableLegibleMediaSelectionOptions:(id)arg0 ;
-(void)_enableAutoMediaSelection:(id)arg0 ;
-(void)_ensureUserCaptionDisplayType:(NSInteger)arg0 ;
-(void)_handleSeekTimerEvent;
-(void)_observeValueForKeyPath:(id)arg0 oldValue:(id)arg1 newValue:(id)arg2 ;
-(void)_performAutomaticMediaSelectionForUserCaptionDisplayType:(NSInteger)arg0 ;
-(void)_prepareAssetForInspectionIfNeeded;
-(void)_retryPlayImmediatelyIfNeeded;
-(void)_setMediaOption:(id)arg0 mediaCharacteristic:(id)arg1 ;
-(void)_updateCoordinatedPlaybackActive;
-(void)_updateCurrentAudioTrackIfNeeded;
-(void)_updateCurrentVideoTrackIfNeeded;
-(void)_updateExternalPlaybackAirPlayDeviceLocalizedNameIfNeeded;
-(void)_updateMinMaxTimingIfNeeded;
-(void)_updatePlayingOnMatchPointDeviceIfNeeded;
-(void)_updateRateForScrubbingAndSeeking;
-(void)_updateScanningBackwardRate;
-(void)_updateScanningForwardRate;
-(void)acquireResourceReductionAssertion;
-(void)actuallySeekToTime;
-(void)autoplay:(id)arg0 ;
-(void)beginPlaybackSuspension;
-(void)beginReducingResourcesForPictureInPicturePlayerLayer:(id)arg0 ;
-(void)beginScanningBackward:(id)arg0 ;
-(void)beginScanningForward:(id)arg0 ;
-(void)beginScrubbing;
-(void)beginScrubbing:(id)arg0 ;
-(void)changeVolumeToMaximum:(id)arg0 ;
-(void)changeVolumeToMinimum:(id)arg0 ;
-(void)dealloc;
-(void)decreaseVolume:(id)arg0 ;
-(void)endPlaybackSuspension;
-(void)endReducingResourcesForPictureInPicturePlayerLayer:(id)arg0 ;
-(void)endScanningBackward:(id)arg0 ;
-(void)endScanningForward:(id)arg0 ;
-(void)endScrubbing;
-(void)endScrubbing:(id)arg0 ;
-(void)gotoEndOfSeekableRanges:(id)arg0 ;
-(void)increaseVolume:(id)arg0 ;
-(void)pause:(id)arg0 ;
-(void)pauseForAllCoordinatedPlaybackParticipants:(BOOL)arg0 ;
-(void)play:(id)arg0 ;
-(void)reloadAudioOptions;
-(void)reloadLegibleOptions;
-(void)reloadOptions;
-(void)reloadOptionsAndCurrentSelections;
-(void)reloadOptionsAssumingMediaOptionsMayHaveChanged:(BOOL)arg0 ;
-(void)resumePlaybackCoordinatorIfSuspended;
-(void)scanBackward:(id)arg0 ;
-(void)scanForward:(id)arg0 ;
-(void)seekByTimeInterval:(CGFloat)arg0 ;
-(void)seekByTimeInterval:(CGFloat)arg0 toleranceBefore:(CGFloat)arg1 toleranceAfter:(CGFloat)arg2 ;
-(void)seekChapterBackward:(id)arg0 ;
-(void)seekChapterForward:(id)arg0 ;
-(void)seekFrameBackward:(id)arg0 ;
-(void)seekFrameForward:(id)arg0 ;
-(void)seekOrStepByFrameCount:(NSInteger)arg0 ;
-(void)seekToBeginning:(id)arg0 ;
-(void)seekToCMTime:(struct ? )arg0 toleranceBefore:(struct ? )arg1 toleranceAfter:(struct ? )arg2 ;
-(void)seekToChapter:(id)arg0 ;
-(void)seekToEnd:(id)arg0 ;
-(void)seekToFrame:(NSInteger)arg0 ;
-(void)seekToTime:(CGFloat)arg0 ;
-(void)seekToTime:(CGFloat)arg0 toleranceBefore:(CGFloat)arg1 toleranceAfter:(CGFloat)arg2 ;
-(void)seekToTimecode:(id)arg0 ;
-(void)selectedMediaOptionMayHaveChanged;
-(void)selectedMediaOptionMayHaveChanged:(BOOL)arg0 ;
-(void)setAllowsExternalPlayback:(BOOL)arg0 ;
-(void)setAudioMediaSelectionOptions:(id)arg0 ;
-(void)setCanUseNetworkResourcesForLiveStreamingWhilePaused:(BOOL)arg0 ;
-(void)setCurrentAudioMediaSelectionOption:(id)arg0 ;
-(void)setCurrentLegibleMediaSelectionOption:(id)arg0 ;
-(void)setDefaultPlaybackRate:(CGFloat)arg0 ;
-(void)setForwardPlaybackEndTime:(struct ? )arg0 ;
-(void)setInspectionSuspended:(BOOL)arg0 ;
-(void)setLegibleMediaSelectionOptions:(id)arg0 ;
-(void)setLegibleMediaSelectionOptions:(id)arg0 audioMediaSelectionOptions:(id)arg1 assumeMediaOptionMayHaveChanged:(BOOL)arg2 ;
-(void)setLooping:(BOOL)arg0 ;
-(void)setMaxTime:(CGFloat)arg0 ;
-(void)setMinTime:(CGFloat)arg0 ;
-(void)setMuted:(BOOL)arg0 ;
-(void)setObservationInfo:(*void)arg0 ;
-(void)setPictureInPictureInterrupted:(BOOL)arg0 ;
-(void)setPlaying:(BOOL)arg0 ;
-(void)setRate:(CGFloat)arg0 ;
-(void)setRateWithForce:(CGFloat)arg0 ;
-(void)setReversePlaybackEndTime:(struct ? )arg0 ;
-(void)setVolume:(CGFloat)arg0 ;
-(void)skipBackwardThirtySeconds:(id)arg0 ;
-(void)startInspectionIfNeeded;
-(void)startKVO;
-(void)startUsingNetworkResourcesForLiveStreamingWhilePaused;
-(void)stopGeneratingTimecodes;
-(void)stopUsingNetworkResourcesForLiveStreamingWhilePaused;
-(void)suspendPlaybackCoordinatorWhileActivelySeekingIfNecessary;
-(void)throttledSeekToTime:(struct ? )arg0 toleranceBefore:(struct ? )arg1 toleranceAfter:(struct ? )arg2 ;
-(void)toggleMuted:(id)arg0 ;
-(void)togglePictureInPicture:(id)arg0 ;
-(void)togglePlayback:(id)arg0 ;
-(void)togglePlaybackEvenWhenInBackground:(id)arg0 ;
-(void)updateAtMinMaxTime;
-(void)updateMinMaxTiming;
-(void)updateTiming;


@end


#endif
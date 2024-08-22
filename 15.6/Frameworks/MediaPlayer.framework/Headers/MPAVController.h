// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPAVCONTROLLER_H
#define MPAVCONTROLLER_H

@class NSString, NSArray, NSMutableArray, NSMapTable, NSNotification, NSMutableSet;
@protocol MPAVRoutingControllerDelegate, MPAVQueueControllerDelegate, AVAudioSessionDelegateMediaPlayerOnly, OS_dispatch_source, MPAVQueueController, MPAVQueueCoordinating;

#import <Foundation/Foundation.h>

#import "MPAVRoutingController.h"
#import "MPAVRoute.h"
#import "MPAVItem.h"
#import "MPQueuePlayer.h"
#import "MPQueueFeeder.h"
#import "MPAVPolicyEnforcer.h"

@interface MPAVController : NSObject <MPAVRoutingControllerDelegate, MPAVQueueControllerDelegate, AVAudioSessionDelegateMediaPlayerOnly>

 {
    BOOL _didResolveError;
    BOOL _disableAirPlayMirroringDuringPlayback;
    BOOL _shouldPreventStateChangesForRateChange;
    NSUInteger _stallBackgroundTaskIdentifier;
    BOOL _usesAudioOnlyModeForExternalPlayback;
    BOOL _valid;
    BOOL _allowsItemErrorResolution;
    MPAVRoutingController *_routingController;
    MPAVRoute *_pickedRoute;
    id *_periodicTimeObserverToken;
    NSUInteger _tickTimerEnabled;
    *__CFRunLoopTimer _tickTimer;
    CGFloat _tickInterval;
    *__CFRunLoopTimer _currentItemBookkeepingTimer;
    NSInteger _indexChangeDirection;
    NSString *_contentItemIDAtDeath;
    NSInteger _lastDisconnectReason;
    CGFloat _lastKnownTimeBeforeDeath;
    CGFloat _lastPlaybackIndexChangeTime;
    CGFloat _lastSetTime;
    CGFloat _lastSetTimeChangeTime;
    BOOL _hasDelayedCurrentTimeToSet;
    BOOL _forceDelayedCurrentTimeToSet;
    CGFloat _delayedCurrentTimeToSet;
    ? _pendingCurrentTime;
    NSInteger _delayedCurrentTimeOptions;
    NSUInteger _lastSetTimeMarker;
    CGFloat _temporaryChapterTime;
    BOOL _autoPlayWhenLikelyToKeepUp;
    BOOL _autoplayDisabledForCurrentItem;
    BOOL _autoPlayBackgroundTaskAssertionEnabled;
    NSInteger _autoPlayBackgroundTaskCount;
    BOOL _appHasBeenSuspended;
    NSUInteger _deactivationReasons;
    NSUInteger _autoPlayBackgroundTaskIdentifier;
    NSObject<OS_dispatch_source> *_autoPlayTimeoutSource;
    BOOL _hasPendingRate;
    BOOL _hasSentTracePlaybackStartDidFinish;
    MPAVItem *_pendingRateItem;
    float _pendingRate;
    BOOL _pendingChangeForScanning;
    id *_boundaryTimeObserver;
    NSArray *_boundaryTimes;
    NSUInteger _boundaryTimeIndexLastPosted;
    NSMutableArray *_observerInfos;
    NSMapTable *_observerInfoToCoreMediaObserver;
    float _rateBeforeSeek;
    float _inflightSeekRate;
    NSUInteger _scanLevel;
    NSInteger _scanDirection;
    NSInteger _resetRateAfterSeekingUpdateDisabled;
    NSInteger _seeklessState;
    BOOL _isSeekingOrScrubbing;
    BOOL _resetRateAfterSeeking;
    BOOL _activeRewindHoldingAtStart;
    CGFloat _lastSeekableEnd;
    CGFloat _whenSawSeekableEnd;
    CGFloat _maxSeekableFwd;
    CGFloat _seekFwdSlop;
    CGFloat _lastSeekableStart;
    CGFloat _whenSawSeekableStart;
    CGFloat _maxSeekableRev;
    CGFloat _seekRevSlop;
    BOOL _canSeekRev;
    BOOL _canSeekFwd;
    BOOL _alwaysPlayWheneverPossible;
    BOOL _stopAtEnd;
    BOOL _didReachEnd;
    BOOL _pausedDuringInterruption;
    BOOL _resumePlaybackWhenActive;
    BOOL _useApplicationAudioSession;
    BOOL _playInBackgroundUserDefaultEnabled;
    BOOL _canPlayFastForward;
    BOOL _canPlayFastReverse;
    BOOL _shouldAutoclearDisplayOverride;
    NSNotification *_delayedPlaybackStateNotification;
    NSObject<OS_dispatch_source> *_stallTimerSource;
    BOOL _hasProvidedAudibleLikelyToKeepUp;
    BOOL _hasProvidedAudiblePlay;
    CGFloat _itemInitialBookmarkTime;
    float _rateBeforeResignActive;
    NSInteger _ubiquitousBookkeepingDisabledCount;
    CGFloat _secondsSinceUbiquitousCheckpoint;
    Class _videoViewClass;
    CGFloat _lastInterruptionEnd;
    NSMutableSet *_clientsWantingExternalPlayback;
    NSInteger _currentItemRevisionID;
}


@property (readonly, nonatomic) NSInteger _displayPlaybackState;
@property (nonatomic) NSInteger actionAfterQueueLoadOverride; // ivar: _actionAfterQueueLoadOverride
@property (nonatomic) BOOL alwaysPlayWheneverPossible;
@property (nonatomic) BOOL autoPlayWhenLikelyToKeepUp;
@property (readonly, nonatomic) MPQueuePlayer *avPlayer;
@property (readonly, nonatomic) NSUInteger bufferingState; // ivar: _bufferingState
@property (readonly, nonatomic) BOOL canAttemptErrorResolution; // ivar: _canAttemptErrorResolution
@property (readonly, nonatomic) MPAVItem *currentItem;
@property (readonly, nonatomic, getter=isCurrentItemReady) BOOL currentItemReady;
@property (nonatomic) CGFloat currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableAirPlayMirroringDuringPlayback;
@property (nonatomic) NSInteger displayOverridePlaybackState; // ivar: _displayOverridePlaybackState
@property (readonly, nonatomic) CGFloat durationOfCurrentItemIfAvailable;
@property (readonly, nonatomic, getter=isExternalPlaybackActive) BOOL externalPlaybackActive;
@property (readonly, nonatomic) NSInteger externalPlaybackType;
@property (copy, nonatomic) NSString *externalPlaybackVideoGravity;
@property (readonly, nonatomic) MPQueueFeeder *feeder;
@property (readonly, nonatomic) BOOL hasVolumeControl;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isReloadingForPlaybackContextChange; // ivar: _isReloadingForPlaybackContextChange
@property (readonly, nonatomic) NSInteger lastDirection; // ivar: _lastDirection
@property (nonatomic) BOOL managesAirPlayBehaviors; // ivar: _managesAirPlayBehaviors
@property (readonly, nonatomic) BOOL muted; // ivar: _muted
@property (nonatomic) CGFloat nextFadeOutDuration; // ivar: _nextFadeOutDuration
@property (readonly, nonatomic) CGFloat playableDurationOfCurrentItemIfAvailable;
@property (nonatomic) NSInteger playbackMode; // ivar: _playbackMode
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (retain, nonatomic) MPAVPolicyEnforcer *policyEnforcer; // ivar: _policyEnforcer
@property (readonly, nonatomic) NSObject<MPAVQueueController> *queueController; // ivar: _queueController
@property (retain, nonatomic) NSObject<MPAVQueueCoordinating> *queueCoordinator; // ivar: _queueCoordinator
@property (retain, nonatomic) MPQueuePlayer *queuePlayer; // ivar: _queuePlayer
@property (readonly, nonatomic) float rate;
@property (readonly, nonatomic) MPAVRoutingController *routingController;
@property (readonly, nonatomic) BOOL shouldDisplayAsPlaying;
@property (nonatomic) BOOL shouldEnforceHDCP; // ivar: _shouldEnforceHDCP
@property (nonatomic) BOOL shouldPostCompatibilityNotifications; // ivar: _shouldPostCompatibilityNotifications
@property (readonly, nonatomic) BOOL showPlaybackStateOverlaysOnTVOut;
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) NSInteger stateBeforeInterruption; // ivar: _stateBeforeInterruption
@property (nonatomic) BOOL stopAtEnd;
@property (readonly) Class superclass;
@property (nonatomic) BOOL ubiquitousBookkeepingEnabled;
@property (nonatomic) BOOL useAirPlayMusicMode; // ivar: _useAirPlayMusicMode
@property (nonatomic) BOOL useApplicationAudioSession;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (nonatomic) float volume;


+(BOOL)automaticallyNotifiesObserversOfPlaylistManager;
+(BOOL)outputSupportsAC3;
+(BOOL)prefersApplicationAudioSession;
+(id)_itemKeysToObserve;
+(id)_playerKeysToObserve;
+(id)keyPathsForValuesAffectingCurrentItem;
+(void)initialize;
-(BOOL)_canPlayItem:(id)arg0 ;
-(BOOL)_hasEnoughDataToPlay;
-(BOOL)_hasValidPlayerTime;
-(BOOL)_shouldPausePlaybackForDeactivationReasons:(NSUInteger)arg0 ;
-(BOOL)_shouldProvideAudiblePlaybackPerformance;
-(BOOL)_showsPlayingWhenInState:(NSInteger)arg0 ;
-(BOOL)allowsExternalPlayback;
-(BOOL)canPlayFastReverse;
-(BOOL)canSeekBackwards;
-(BOOL)canSeekForwards;
-(BOOL)canSkipToSeekableEnd;
-(BOOL)changePlaybackIndexBy:(NSInteger)arg0 deltaType:(NSInteger)arg1 ;
-(BOOL)changePlaybackIndexBy:(NSInteger)arg0 deltaType:(NSInteger)arg1 ignoreElapsedTime:(BOOL)arg2 ;
-(BOOL)changePlaybackIndexBy:(NSInteger)arg0 deltaType:(NSInteger)arg1 ignoreElapsedTime:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)changePlaybackIndexBy:(NSInteger)arg0 deltaType:(NSInteger)arg1 ignoreElapsedTime:(BOOL)arg2 force:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)forceRestartPlaybackIfNecessary;
-(BOOL)isLiveStreaming;
-(BOOL)isSeekingOrScrubbing;
-(BOOL)isTickTimerEnabled;
-(BOOL)shouldHaveNoActionAtEndForState:(NSInteger)arg0 ;
-(CGFloat)_currentTimeWithPreloadedPlayerTime:(BOOL)arg0 value:(struct ? )arg1 ;
-(CGFloat)timeOfPlayableEnd;
-(CGFloat)timeOfPlayableStart;
-(CGFloat)timeOfSeekableEnd;
-(CGFloat)timeOfSeekableStart;
-(NSInteger)_seeklessStateForState:(NSInteger)arg0 ;
-(NSUInteger)_currentIndexInBoundaryCMTimes:(id)arg0 ;
-(id)_expectedAssetTypesForPlaybackMode:(NSInteger)arg0 ;
-(id)_extractImageFromMetadata:(id)arg0 ;
-(id)_pickedRoute;
-(id)_playerAVAudioSession;
-(id)_playerFailedToQueueNotification:(id)arg0 ;
-(id)addPeriodicTimeObserverForInterval:(CGFloat)arg0 usingBlock:(id)arg1 ;
-(id)init;
-(void)_airPlayFailedUnsupportedVideoFormatForDeviceWithError:(id)arg0 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg0 ;
-(void)_applicationDidRemoveDeactivationReason:(id)arg0 ;
-(void)_applicationWillAddDeactivationReason:(id)arg0 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg0 ;
-(void)_applyAirPlayMusicMode;
-(void)_applyAirPlayMusicModeForItem:(id)arg0 shouldIgnorePlaybackQueueTransactions:(BOOL)arg1 ;
-(void)_attemptAutoPlay;
-(void)_audioSessionMediaServicesWereResetNotification:(id)arg0 ;
-(void)_canPlayFastForwardDidChange:(id)arg0 ;
-(void)_canPlayFastReverseDidChange:(id)arg0 ;
-(void)_cancelStallTimer;
-(void)_cancelUpdateCurrentItemBookkeepingTimer;
-(void)_clearLastSetTimeIfPlayerTimeIsValid;
-(void)_clearSeekingIntervalsForStreaming;
-(void)_configureAudioSession;
-(void)_configureUpdateCurrentItemBookkeepingTimer;
-(void)_connectAVPlayer;
-(void)_connectAVPlayerDeferringItemLoading:(BOOL)arg0 ;
-(void)_contentsChanged;
-(void)_delayedPlaybackIndexChange;
-(void)_delayedPostPlaybackStateChangedNotification;
-(void)_delayedSetCurrentTime;
-(void)_delayedUpdateScanningRate;
-(void)_disconnectAVPlayerWithReason:(NSInteger)arg0 ;
-(void)_durationDidChange:(id)arg0 ;
-(void)_endSeekAndChangeRate:(BOOL)arg0 ;
-(void)_enforcingPolicy:(BOOL)arg0 ;
-(void)_handlePlaybackErrorResolutionType:(NSInteger)arg0 forItem:(id)arg1 playbackError:(id)arg2 resolutionError:(id)arg3 ;
-(void)_isExternalPlaybackActiveDidChange:(id)arg0 ;
-(void)_itemAssetIsLoadedNotification:(id)arg0 ;
-(void)_itemBookmarkTimeDidChangeNotification:(id)arg0 ;
-(void)_itemDidChange:(id)arg0 ;
-(void)_itemDidSignificantlyChangeElapsedTime:(CGFloat)arg0 rate:(float)arg1 ;
-(void)_itemFailedToPlayToEnd:(id)arg0 ;
-(void)_itemFailedToPlayToEndNotification:(id)arg0 ;
-(void)_itemPlaybackDidEndNotification:(id)arg0 ;
-(void)_itemPlayerItemDidChangeNotification:(id)arg0 ;
-(void)_itemPlayerItemWillChangeNotification:(id)arg0 ;
-(void)_itemReadyToPlay:(id)arg0 ;
-(void)_itemTypeAvailableNotification:(id)arg0 ;
-(void)_itemWillChange:(id)arg0 ;
-(void)_pauseBookkeepingTimer;
-(void)_pausePlaybackIfNecessary;
-(void)_pausePlaybackIfNecessaryIgnoringVideoLayerAttachment:(BOOL)arg0 ;
-(void)_pauseTickTimer;
-(void)_pauseWithFadeout:(float)arg0 forScanning:(BOOL)arg1 ;
-(void)_playWithOptions:(NSUInteger)arg0 allowsEnablingAutoPlay:(BOOL)arg1 ;
-(void)_playbackFailedWithError:(id)arg0 canResolve:(BOOL)arg1 ;
-(void)_postPlaybackStateChangedNotificationWithOriginalState:(NSInteger)arg0 newState:(NSInteger)arg1 delayable:(BOOL)arg2 ;
-(void)_prepareToPlayItem:(id)arg0 ;
-(void)_queueDidEndWithReason:(id)arg0 lastItem:(id)arg1 ;
-(void)_rateDidChange:(id)arg0 ;
-(void)_registerForAVItemNotifications:(id)arg0 ;
-(void)_resetInternalState;
-(void)_resumeBookkeepingTimer;
-(void)_resumePlaybackIfNecessary;
-(void)_resumeTickTimer;
-(void)_scheduleUpdateCurrentItemBookkeepingTimer;
-(void)_sendTracePlaybackStartDidFinishIfNeededForItem:(id)arg0 ;
-(void)_serverConnectionDidDie:(id)arg0 ;
-(void)_setActionAtEndAttributeForState:(NSInteger)arg0 ;
-(void)_setAllowsItemErrorResolution:(BOOL)arg0 ;
-(void)_setAutoPlayBackgroundTaskAssertionEnabled:(BOOL)arg0 ;
-(void)_setLastSetTime:(CGFloat)arg0 ;
-(void)_streamBufferFull:(id)arg0 ;
-(void)_streamLikelyToKeepUp:(id)arg0 ;
-(void)_streamRanDry:(id)arg0 ;
-(void)_streamUnlikelyToKeepUp:(id)arg0 ;
-(void)_timeHasJumpedNotification:(id)arg0 ;
-(void)_tracksDidChange:(id)arg0 ;
-(void)_unregisterForAVItemNotifications:(id)arg0 ;
-(void)_unregisterForPlayer:(id)arg0 ;
-(void)_updateCurrentItemBookkeepingForTimerCallback;
-(void)_updateCurrentItemBookkeepingMarkedAsCheckpoint:(BOOL)arg0 ;
-(void)_updateCurrentItemDurationSnapshotWithPlayerTime:(struct ? )arg0 ;
-(void)_updateDirectionForChangeDelta:(NSInteger)arg0 ;
-(void)_updateHasProtectedContentForItem:(id)arg0 ;
-(void)_updateLastSetTimeForCurrentItemIfNeeded;
-(void)_updateProgress:(struct __CFRunLoopTimer *)arg0 ;
-(void)_updateScanningRate;
-(void)_updateSeekingIntervalsForStreaming;
-(void)_updateStateForPlaybackPrevention;
-(void)_updateTypeForItem:(id)arg0 ;
-(void)_verifyDisplayProtection;
-(void)airPlayFailedRentalDownloadRequired;
-(void)airPlayVideoEnded;
-(void)autoclearDisplayOverride;
-(void)becomeActiveWithCompletion:(id)arg0 ;
-(void)beginInterruption;
-(void)beginSeek:(int)arg0 ;
-(void)beginTickTimerWithInterval:(CGFloat)arg0 ;
-(void)dealloc;
-(void)disableAutoplayForCurrentItem;
-(void)enableAutoplayForCurrentItem;
-(void)endInterruptionFromInterruptor:(id)arg0 category:(id)arg1 flags:(NSUInteger)arg2 ;
-(void)endPlayback;
-(void)endSeek;
-(void)endTickTimer;
-(void)finalizeBookkeepingNow;
-(void)handlePlaybackErrorWithUserInfo:(id)arg0 ;
-(void)loadSessionWithQueueController:(id)arg0 completionHandler:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pause;
-(void)pauseWithFadeout:(float)arg0 ;
-(void)play;
-(void)playWithOptions:(NSUInteger)arg0 ;
-(void)playbackHasStartedForItem:(id)arg0 ;
-(void)queueController:(id)arg0 didChangeActionAtQueueEnd:(NSInteger)arg1 ;
-(void)queueController:(id)arg0 didChangeContentsWithReplacementPlaybackContext:(id)arg1 ;
-(void)queueController:(id)arg0 didChangeRepeatType:(NSInteger)arg1 ;
-(void)queueController:(id)arg0 didChangeShuffleType:(NSInteger)arg1 ;
-(void)queueController:(id)arg0 didIncrementVersionForSegment:(id)arg1 ;
-(void)queueController:(id)arg0 failedToLoadItem:(id)arg1 ;
-(void)queueControllerDidChangeContents:(id)arg0 ;
-(void)reloadWithPlaybackContext:(id)arg0 ;
-(void)reloadWithPlaybackContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeTimeObserver:(id)arg0 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg0 ;
-(void)routingControllerDidPauseFromActiveRouteChange:(id)arg0 ;
-(void)routingControllerExternalScreenTypeDidChange:(id)arg0 ;
-(void)setActive:(BOOL)arg0 ;
-(void)setAutoclearingDisplayOverridePlaybackState:(NSInteger)arg0 ;
-(void)setClient:(id)arg0 wantsToAllowExternalPlayback:(BOOL)arg1 ;
-(void)setClient:(id)arg0 wantsToAllowExternalPlayback:(BOOL)arg1 shouldIgnorePlaybackQueueTransactions:(BOOL)arg2 ;
-(void)setUsesAudioOnlyModeForExternalPlayback:(BOOL)arg0 ;
-(void)setUsesAudioOnlyModeForExternalPlayback:(BOOL)arg0 shouldIgnorePlaybackQueueTransactions:(BOOL)arg1 ;
-(void)skipToSeekableEnd;
-(void)skipToSeekableStart;
-(void)togglePlayback;
-(void)togglePlaybackWithOptions:(NSUInteger)arg0 ;
-(void)updateBookkeepingNow;


@end


#endif
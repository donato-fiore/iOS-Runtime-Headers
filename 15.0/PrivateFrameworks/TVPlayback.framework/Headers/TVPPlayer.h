// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVPPLAYER_H
#define TVPPLAYER_H

@class AVQueuePlayer, NSMutableArray, NSArray, AVPlayer, NSMutableDictionary, NSDate, NSString, NSMutableSet, NSNumber, AVPlayerItem, NSHashTable;
@protocol AVPlayerPlaybackCoordinatorDelegate, TVPAVFPlayback, TVPASyncPlaybackDelegate, TVPMediaItem, TVPPlaybackDelegate;

#import <Foundation/Foundation.h>

#import "TVPPlayerBookmarkMonitor.h"
#import "TVPTimeRange.h"
#import "TVPAudioOption.h"
#import "TVPChapter.h"
#import "TVPChapterCollection.h"
#import "TVPInterstitial.h"
#import "TVPInterstitialCollection.h"
#import "TVPMediaItemLoader.h"
#import "TVPPlayerItem.h"
#import "TVPExternalImagePlayer.h"
#import "TVPPlayerReporter.h"
#import "TVPPlaylist.h"
#import "TVPPlaybackState.h"
#import "TVPProgressiveJumpingScrubber.h"
#import "TVPDateRange.h"
#import "TVPSubtitleOption.h"
#import "TVPStateMachine.h"

@interface TVPPlayer : NSObject <AVPlayerPlaybackCoordinatorDelegate, TVPAVFPlayback>



@property (copy, nonatomic) id *AVKitExternalImageScanningUpdateBlock; // ivar: _AVKitExternalImageScanningUpdateBlock
@property (retain, nonatomic) AVQueuePlayer *AVQueuePlayer; // ivar: _AVQueuePlayer
@property (nonatomic) BOOL allowsCellularUsage; // ivar: _allowsCellularUsage
@property (nonatomic) BOOL allowsConstrainedNetworkUsage; // ivar: _allowsConstrainedNetworkUsage
@property (nonatomic) BOOL allowsExternalPlayback; // ivar: _allowsExternalPlayback
@property (weak, nonatomic) NSObject<TVPASyncPlaybackDelegate> *asyncDelegate; // ivar: _asyncDelegate
@property (nonatomic) BOOL asyncDelegateInProgress; // ivar: _asyncDelegateInProgress
@property (retain, nonatomic) NSMutableArray *asyncDelegateOperations; // ivar: _asyncDelegateOperations
@property (retain, nonatomic) NSArray *audioOptions; // ivar: _audioOptions
@property (readonly, nonatomic) AVPlayer *avPlayer;
@property (retain, nonatomic) TVPPlayerBookmarkMonitor *bookmarkMonitor; // ivar: _bookmarkMonitor
@property (retain, nonatomic) NSMutableDictionary *boundaryTimeObserverInfos; // ivar: _boundaryTimeObserverInfos
@property (readonly, nonatomic) TVPTimeRange *bufferedTimeRange;
@property (nonatomic) ? cachedDuration; // ivar: _cachedDuration
@property (nonatomic) ? cachedElapsedTime; // ivar: _cachedElapsedTime
@property (retain, nonatomic) NSArray *cachedLoadedTimeRanges; // ivar: _cachedLoadedTimeRanges
@property (retain, nonatomic) NSArray *cachedSeekableTimeRanges; // ivar: _cachedSeekableTimeRanges
@property (retain, nonatomic) TVPAudioOption *cachedSelectedAudioOption; // ivar: _cachedSelectedAudioOption
@property (retain, nonatomic) id *chapterBoundaryTimeObserverToken; // ivar: _chapterBoundaryTimeObserverToken
@property (retain, nonatomic) NSArray *chapterCollections; // ivar: _chapterCollections
@property (nonatomic) BOOL createsPlayerItemButDoesNotEnqueue; // ivar: _createsPlayerItemButDoesNotEnqueue
@property (retain, nonatomic) TVPChapter *currentChapter; // ivar: _currentChapter
@property (retain, nonatomic) TVPChapterCollection *currentChapterCollection; // ivar: _currentChapterCollection
@property (nonatomic) NSInteger currentDirectionOfPlaylistChange; // ivar: _currentDirectionOfPlaylistChange
@property (retain, nonatomic) TVPInterstitial *currentInterstitial; // ivar: _currentInterstitial
@property (retain, nonatomic) TVPInterstitialCollection *currentInterstitialCollection; // ivar: _currentInterstitialCollection
@property (retain, nonatomic) NSObject<TVPMediaItem> *currentMediaItem;
@property (nonatomic) NSInteger currentMediaItemAudioChannels; // ivar: _currentMediaItemAudioChannels
@property (nonatomic) NSInteger currentMediaItemAudioFormat; // ivar: _currentMediaItemAudioFormat
@property (nonatomic) BOOL currentMediaItemHasDates; // ivar: _currentMediaItemHasDates
@property (nonatomic) BOOL currentMediaItemHasVideoContent; // ivar: _currentMediaItemHasVideoContent
@property (nonatomic) BOOL currentMediaItemInitialLoadingComplete; // ivar: _currentMediaItemInitialLoadingComplete
@property (nonatomic) BOOL currentMediaItemIsStreaming; // ivar: _currentMediaItemIsStreaming
@property (retain, nonatomic) TVPMediaItemLoader *currentMediaItemLoader; // ivar: _currentMediaItemLoader
@property (readonly, nonatomic) BOOL currentMediaItemPreparedForLoading;
@property (nonatomic) CGSize currentMediaItemPresentationSize; // ivar: _currentMediaItemPresentationSize
@property (nonatomic) NSInteger currentMediaItemVideoRange; // ivar: _currentMediaItemVideoRange
@property (retain, nonatomic) TVPPlayerItem *currentPlayerItem; // ivar: _currentPlayerItem
@property (nonatomic) BOOL currentPlayerItemContainsDates; // ivar: _currentPlayerItemContainsDates
@property (nonatomic) BOOL currentPlayerItemContainsRealDates; // ivar: _currentPlayerItemContainsRealDates
@property (retain, nonatomic) NSDate *dateBeingSeekedTo; // ivar: _dateBeingSeekedTo
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TVPPlaybackDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration;
@property (retain, nonatomic) AVQueuePlayer *earlyAVQueuePlayer; // ivar: _earlyAVQueuePlayer
@property (readonly, nonatomic) CGFloat elapsedTime;
@property (retain, nonatomic) NSMutableDictionary *elapsedTimeObserverBlocks; // ivar: _elapsedTimeObserverBlocks
@property (nonatomic) NSInteger errorBehavior; // ivar: _errorBehavior
@property (retain, nonatomic) TVPExternalImagePlayer *externalImagePlayer; // ivar: _externalImagePlayer
@property (readonly, nonatomic) CGFloat forwardPlaybackEndTime;
@property (nonatomic) BOOL handleRemoteCommandsWithoutUpdatingMediaRemote; // ivar: _handleRemoteCommandsWithoutUpdatingMediaRemote
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL haveEverEnqueuedPlayerItem; // ivar: _haveEverEnqueuedPlayerItem
@property (copy, nonatomic) id *highFrequencyElapsedTimeObserverBlock; // ivar: _highFrequencyElapsedTimeObserverBlock
@property (retain, nonatomic) id *highFrequencyTimeObserverToken; // ivar: _highFrequencyTimeObserverToken
@property (nonatomic) CGSize iFramePrefetchMaxSize; // ivar: _iFramePrefetchMaxSize
@property (nonatomic) BOOL initialMediaItemHasCompletedInitialLoading; // ivar: _initialMediaItemHasCompletedInitialLoading
@property (nonatomic) BOOL interactive; // ivar: _interactive
@property (retain, nonatomic) id *interstitialBoundaryTimeObserverToken; // ivar: _interstitialBoundaryTimeObserverToken
@property (nonatomic) BOOL invalidated; // ivar: _invalidated
@property (nonatomic) BOOL isLive; // ivar: _isLive
@property (nonatomic) ? lastTimeSentToAVKitImageHandler; // ivar: _lastTimeSentToAVKitImageHandler
@property (nonatomic) BOOL limitReadAhead;
@property (nonatomic) BOOL limitsBandwidthForCellularAccess; // ivar: _limitsBandwidthForCellularAccess
@property (nonatomic) BOOL loadingInitialItemInPlaylist; // ivar: _loadingInitialItemInPlaylist
@property (nonatomic) CGFloat maximumBitRate; // ivar: _maximumBitRate
@property (retain, nonatomic) NSString *mediaItemChangeReason; // ivar: _mediaItemChangeReason
@property (nonatomic) NSInteger mediaItemEndAction; // ivar: _mediaItemEndAction
@property (retain, nonatomic) NSMutableSet *mediaItemLoaders; // ivar: _mediaItemLoaders
@property (nonatomic) BOOL mediaRemoteUpdatingEnabled; // ivar: _mediaRemoteUpdatingEnabled
@property (nonatomic) BOOL modifyingAVPlayerQueue; // ivar: _modifyingAVPlayerQueue
@property (nonatomic) BOOL modifyingAVPlayerRate; // ivar: _modifyingAVPlayerRate
@property (nonatomic) BOOL muted; // ivar: _muted
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger numOutstandingSeeks; // ivar: _numOutstandingSeeks
@property (nonatomic) BOOL outputObscuredDueToInsufficientExternalProtection; // ivar: _outputObscuredDueToInsufficientExternalProtection
@property (nonatomic) BOOL pausesOnHDCPProtectionDown; // ivar: _pausesOnHDCPProtectionDown
@property (nonatomic) BOOL pausesOnRouteChange; // ivar: _pausesOnRouteChange
@property (copy, nonatomic) NSArray *pendingSelectedMediaArray; // ivar: _pendingSelectedMediaArray
@property (retain, nonatomic) id *periodicTimeObserverToken; // ivar: _periodicTimeObserverToken
@property (copy, nonatomic) NSDate *playbackDate;
@property (retain, nonatomic) NSDate *playbackDateAtStartOfSeek; // ivar: _playbackDateAtStartOfSeek
@property (retain, nonatomic) NSArray *playbackEndTimeBoundaryObserverTokens; // ivar: _playbackEndTimeBoundaryObserverTokens
@property (nonatomic) BOOL playerItemChangeIsHappening; // ivar: _playerItemChangeIsHappening
@property (retain, nonatomic) TVPPlayerItem *playerItemFromCacheManager; // ivar: _playerItemFromCacheManager
@property (retain, nonatomic) TVPPlayerReporter *playerReporter; // ivar: _playerReporter
@property (retain, nonatomic) TVPPlaylist *playlist;
@property (retain, nonatomic) TVPPlaylist *playlistInternal; // ivar: _playlistInternal
@property (retain, nonatomic) TVPPlaybackState *postAVKitScanningState; // ivar: _postAVKitScanningState
@property (retain, nonatomic) TVPPlaybackState *postLoadingState; // ivar: _postLoadingState
@property (nonatomic) CGFloat preferredForwardBufferDuration; // ivar: _preferredForwardBufferDuration
@property (nonatomic) CGSize preferredMaximumResolution; // ivar: _preferredMaximumResolution
@property (nonatomic) CGSize preferredMaximumResolutionForExpensiveNetworks; // ivar: _preferredMaximumResolutionForExpensiveNetworks
@property (nonatomic) BOOL prefersSDRVideo; // ivar: _prefersSDRVideo
@property (nonatomic) BOOL preventsSleepDuringVideoPlayback; // ivar: _preventsSleepDuringVideoPlayback
@property (retain, nonatomic) TVPProgressiveJumpingScrubber *progressiveJumpingScrubber; // ivar: _progressiveJumpingScrubber
@property (readonly, nonatomic) CGFloat rate;
@property (nonatomic) CGFloat rateUsedForPlayback; // ivar: _rateUsedForPlayback
@property (nonatomic) BOOL remainLoadingWhenSeekCompletes; // ivar: _remainLoadingWhenSeekCompletes
@property (readonly, nonatomic) CGFloat reversePlaybackEndTime;
@property (nonatomic) BOOL sceneCompletelyBuffered; // ivar: _sceneCompletelyBuffered
@property (readonly, nonatomic) TVPDateRange *seekableDateRange;
@property (readonly, nonatomic) TVPTimeRange *seekableTimeRange;
@property (retain, nonatomic) TVPAudioOption *selectedAudioOption;
@property (retain, nonatomic) TVPSubtitleOption *selectedSubtitleOption;
@property (nonatomic) BOOL sendsPlayerReports; // ivar: _sendsPlayerReports
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (nonatomic) CGFloat startPosition; // ivar: _startPosition
@property (nonatomic) ? startTime; // ivar: _startTime
@property (nonatomic) ? startingSeekPrecision; // ivar: _startingSeekPrecision
@property (readonly, nonatomic) TVPPlaybackState *state; // ivar: _state
@property (retain, nonatomic) TVPStateMachine *stateMachine; // ivar: _stateMachine
@property (retain, nonatomic) NSArray *subtitleOptions; // ivar: _subtitleOptions
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *temporarySubtitleOverrideType; // ivar: _temporarySubtitleOverrideType
@property (nonatomic) ? timeAtStartOfSeek; // ivar: _timeAtStartOfSeek
@property (nonatomic) ? timeBeingSeekedTo; // ivar: _timeBeingSeekedTo
@property (retain, nonatomic) AVPlayerItem *unqueuedPlayerItem; // ivar: _unqueuedPlayerItem
@property (nonatomic) BOOL updatesBookmarks; // ivar: _updatesBookmarks
@property (nonatomic) BOOL updatesMediaRemoteInfoAutomatically; // ivar: _updatesMediaRemoteInfoAutomatically
@property (nonatomic) BOOL usesLegacyDelegateBehavior; // ivar: _usesLegacyDelegateBehavior
@property (retain, nonatomic) NSHashTable *videoViewWeakReferences; // ivar: _videoViewWeakReferences
@property (nonatomic) float volume; // ivar: _volume
@property (nonatomic) BOOL waitsAfterPreparingMediaItems; // ivar: _waitsAfterPreparingMediaItems
@property (nonatomic) BOOL wasMutedPriorToScreenRecording; // ivar: _wasMutedPriorToScreenRecording


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(BOOL)shouldDeactivateAVAudioSession;
+(NSInteger)_audioFormatForFormatDescription:(struct opaqueCMFormatDescription *)arg0 ;
+(NSInteger)tvpVideoRangeForVideoDynamicRange:(int)arg0 ;
+(id)_audioSelectionCriteriaForMediaItemLoader:(id)arg0 ;
+(id)_stringForAudioFormat:(NSInteger)arg0 ;
+(id)savedPreferredAudioLanguageCode;
+(void)_playerDidBecomeInactive:(id)arg0 ;
+(void)_playerWillBecomeActive:(id)arg0 ;
+(void)initialize;
+(void)removeTemporaryDownloadDirectory;
+(void)setSavedPreferredAudioLanguageCode:(id)arg0 ;
+(void)setShouldDeactivateAVAudioSession:(BOOL)arg0 ;
-(BOOL)_beingUsedForIFrameOnlyPlayback;
-(BOOL)_currentPlayerItemCanScanAtRate:(CGFloat)arg0 ;
-(BOOL)_getStringForTitleLabel:(*id)arg0 subtitleLabel:(*id)arg1 forMediaItem:(id)arg2 ;
-(BOOL)_hasDolbyAtmosForTracks:(id)arg0 ;
-(BOOL)_isPlaybackLikelyToKeepUp;
-(BOOL)_isScreenBeingRecorded;
-(BOOL)seeking;
-(NSInteger)currentScanMode;
-(NSInteger)externalPlaybackType;
-(id)AVQueuePlayerCreateIfNecessary:(BOOL)arg0 ;
-(id)_audioAssetTracksFromTracks:(id)arg0 ;
-(id)_bitRateString:(CGFloat)arg0 ;
-(id)_currentDateFromPlayerItem:(id)arg0 ;
-(id)_descriptionForVideoRange:(NSInteger)arg0 ;
-(id)_descriptionForVideoResolutionClass:(NSInteger)arg0 ;
-(id)_estimatedPlaybackDateForCMTime:(struct ? )arg0 ;
-(id)_soundCheckNormalizationForMediaItem:(id)arg0 ;
-(id)_videoAssetTracksFromTracks:(id)arg0 ;
-(id)accessLog;
-(id)addBoundaryTimeObserverForDates:(id)arg0 withHandler:(id)arg1 ;
-(id)addBoundaryTimeObserverForTimes:(id)arg0 withHandler:(id)arg1 ;
-(id)addElapsedTimeObserver:(id)arg0 ;
-(id)errorLog;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)playbackCoordinator:(id)arg0 identifierForPlayerItem:(id)arg1 ;
-(id)playbackErrorFromError:(id)arg0 forMediaItem:(id)arg1 ;
-(id)timedMetadata;
-(int)_videoTrackIDFromTracks:(id)arg0 ;
-(struct ? )_clampInfiniteTimeToSeekableRange:(struct ? )arg0 ;
-(struct ? )_clampedElapsedTimeForTime:(struct ? )arg0 duration:(struct ? )arg1 ;
-(struct ? )_clampedSceneTimeForPlayerTime:(struct ? )arg0 ;
-(struct ? )_estimatedCMTimeForPlaybackDate:(id)arg0 referenceTime:(struct ? )arg1 referenceDate:(id)arg2 ;
-(struct ? )elapsedCMTime;
-(void)_addBoundaryTimeObserversToAVQueuePlayer:(id)arg0 ;
-(void)_addHighFrequencyTimeObserverIfNecessary;
-(void)_addObserversForMediaItem:(id)arg0 ;
-(void)_addObserversForMediaItemLoader:(id)arg0 ;
-(void)_addObserversForPlayerItem:(id)arg0 ;
-(void)_addObserversForPlaylist:(id)arg0 ;
-(void)_addObserversToAVQueuePlayer:(id)arg0 ;
-(void)_addPeriodicTimeObserverToAVQueuePlayer:(id)arg0 ;
-(void)_addPlaybackEndTimeBoundaryObservers;
-(void)_audioRouteChanged:(id)arg0 ;
-(void)_avPlayerRateDidChange:(id)arg0 ;
-(void)_avPlayerRateDidChangeTo:(float)arg0 ;
-(void)_avPlayerTimeDidChangeTo:(struct ? )arg0 ;
-(void)_configureSoundCheckForPlayerItem:(id)arg0 tracks:(id)arg1 ;
-(void)_currentMediaItemMetadataDidChange:(id)arg0 ;
-(void)_currentPlayerItemAccessLogDidChange:(id)arg0 ;
-(void)_currentPlayerItemBufferEmptyDidChangeTo:(BOOL)arg0 ;
-(void)_currentPlayerItemBufferFullDidChangeTo:(BOOL)arg0 ;
-(void)_currentPlayerItemDidChangeTo:(id)arg0 ;
-(void)_currentPlayerItemDidFailToPlayToEnd:(id)arg0 ;
-(void)_currentPlayerItemDidHitBeginningOrEnd:(id)arg0 ;
-(void)_currentPlayerItemDidStall:(id)arg0 ;
-(void)_currentPlayerItemDurationDidChangeTo:(struct ? )arg0 ;
-(void)_currentPlayerItemErrorLogDidChange:(id)arg0 ;
-(void)_currentPlayerItemHasVideoDidChangeTo:(BOOL)arg0 ;
-(void)_currentPlayerItemLikelyToKeepUpDidChangeTo:(BOOL)arg0 ;
-(void)_currentPlayerItemLoadedTimeRangesDidChangeTo:(id)arg0 ;
-(void)_currentPlayerItemMediaSelectionDidChange:(id)arg0 ;
-(void)_currentPlayerItemPresentationSizeDidChangeTo:(struct CGSize )arg0 ;
-(void)_currentPlayerItemReachedTimeToPauseBuffering:(id)arg0 ;
-(void)_currentPlayerItemReachedTimeToPausePlayback:(id)arg0 ;
-(void)_currentPlayerItemSeekableTimeRangesDidChangeTo:(id)arg0 ;
-(void)_currentPlayerItemStatusDidChangeTo:(NSInteger)arg0 from:(NSInteger)arg1 ;
-(void)_currentPlayerItemTracksDidChangeTo:(id)arg0 from:(id)arg1 ;
-(void)_enqueueAsyncDelegateOperation:(id)arg0 ;
-(void)_externalPlaybackActiveDidChange;
-(void)_logAccessLogEvents;
-(void)_logExternalPlaybackType;
-(void)_mediaItemLoader:(id)arg0 stateDidChangeTo:(id)arg1 ;
-(void)_notifyListenersOfElapsedTimeChange:(struct ? )arg0 playbackDate:(id)arg1 dueToTimeJump:(BOOL)arg2 ;
-(void)_notifyOfBoundaryCrossingBetweenPreviousTime:(struct ? )arg0 updatedTime:(struct ? )arg1 ;
-(void)_outputObscuredDidChangeTo:(BOOL)arg0 ;
-(void)_playlistCurrentMediaItemDidChangeWithContext:(id)arg0 ;
-(void)_playlistCurrentMediaItemWillChangeWithContext:(id)arg0 ;
-(void)_playlistNextMediaItemDidChangeWithContext:(id)arg0 ;
-(void)_populateCurrentPlayerItemWithUpNextMetadata;
-(void)_populatePlayerItem:(id)arg0 withMetadataFromMediaItem:(id)arg1 ;
-(void)_postCurrentMediaItemDidChangeNotificationWithDirection:(id)arg0 reason:(id)arg1 didHitBeginningOfPlaylist:(BOOL)arg2 didHitEndOfPlaylist:(BOOL)arg3 ;
-(void)_postCurrentMediaItemWillChangeNotificationWithDirection:(id)arg0 reason:(id)arg1 didHitBeginningOfPlaylist:(BOOL)arg2 didHitEndOfPlaylist:(BOOL)arg3 ;
-(void)_preferVideoDescriptionsSettingDidChange;
-(void)_processNextAsyncDelegateOperation;
-(void)_registerStateMachineHandlers;
-(void)_removeBoundaryTimeObserversFromAVQueuePlayer:(id)arg0 ;
-(void)_removeHighFrequencyTimeObserverIfNecessary;
-(void)_removeObserversForMediaItem:(id)arg0 ;
-(void)_removeObserversForMediaItemLoader:(id)arg0 ;
-(void)_removeObserversForPlayerItem:(id)arg0 ;
-(void)_removeObserversForPlaylist:(id)arg0 ;
-(void)_removeObserversFromAVQueuePlayer:(id)arg0 ;
-(void)_removePeriodicTimeObserverFromAVQueuePlayer:(id)arg0 ;
-(void)_removePlaybackEndTimeBoundaryObservers;
-(void)_resetAndReselectAudioOptions;
-(void)_savePreferredAudioLanguageFromAudioOption:(id)arg0 ;
-(void)_screenRecordingStateDidChange:(id)arg0 ;
-(void)_selectMediaArray:(id)arg0 withItem:(id)arg1 ;
-(void)_setScrubPlayerItem:(id)arg0 onPlayerItem:(id)arg1 ;
-(void)_subtitleSettingsDidChange;
-(void)_timeControlStatusDidChangeTo:(NSInteger)arg0 oldStatusNum:(id)arg1 ;
-(void)_updateAVPlayerActionAtItemEnd;
-(void)_updateAudioSelectionCriteriaForMediaItemLoader:(id)arg0 ;
-(void)_updateCurrentMediaItemAudioInfoForPlayerItem:(id)arg0 tracks:(id)arg1 ;
-(void)_updateIsLiveForElapsedTime:(struct ? )arg0 ;
-(void)_updateMediaRemoteManager;
-(void)_updateMetadataWithVideoQualityColorRangeAndDolbyAtmosForPlayerItem:(id)arg0 tracks:(id)arg1 ;
-(void)_updateSelectedSubtitleForFilteredOptions:(id)arg0 ;
-(void)_updateVideoViewsWithAVQueuePlayer:(id)arg0 ;
-(void)addWeakReferenceToVideoView:(id)arg0 ;
-(void)avKitDidFinishScanning;
-(void)avKitSeekDidComplete;
-(void)changeMediaInDirection:(NSInteger)arg0 ;
-(void)changeMediaInDirection:(NSInteger)arg0 reason:(id)arg1 ;
-(void)changeMediaInDirection:(NSInteger)arg0 reason:(id)arg1 ignoreDelegate:(BOOL)arg2 ;
-(void)changeToMediaAtIndex:(NSUInteger)arg0 reason:(id)arg1 ;
-(void)changeToMediaAtIndex:(NSUInteger)arg0 reason:(id)arg1 ignoreDelegate:(BOOL)arg2 ;
-(void)continueLoadingCurrentItem;
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pause;
-(void)pauseIgnoringDelegate:(BOOL)arg0 ;
-(void)pauseWithAVKitCompletion:(id)arg0 ;
-(void)pauseWithVolumeRampDuration:(CGFloat)arg0 ;
-(void)play;
-(void)playIgnoringDelegate:(BOOL)arg0 ;
-(void)playWithAVKitCompletion:(id)arg0 ;
-(void)playerDidHitBeginningOrEnd;
-(void)removeBoundaryTimeObserverWithToken:(id)arg0 ;
-(void)removeElapsedTimeObserverWithToken:(id)arg0 ;
-(void)removeWeakReferenceToVideoView:(id)arg0 ;
-(void)restartPlaybackWithState:(id)arg0 ;
-(void)scanWithRate:(CGFloat)arg0 ;
-(void)scanWithRate:(CGFloat)arg0 withAVKitCompletion:(id)arg1 ;
-(void)selectMediaArray:(id)arg0 ;
-(void)setPlaybackHUDString:(id)arg0 ;
-(void)skipToNextChapterInDirection:(NSInteger)arg0 ;
-(void)stop;
-(void)stopWithVolumeRampDuration:(CGFloat)arg0 ;
-(void)togglePlayPause;
-(void)updateSubtitleOptions;
-(void)updateSubtitleOptionsAndSelection;


@end


#endif
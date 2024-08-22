// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPAVITEM_H
#define MPAVITEM_H

@class AVAsset, AVPlayerItem, NSArray, AVPlayerItemAccessLog, NSString, NSNumber, NSError, ICMusicSubscriptionLeaseStatus, NSDictionary;
@protocol OS_dispatch_queue, MPAVItemObserver, MPStartItemInfoProviding;

#import <Foundation/Foundation.h>

#import "MPNowPlayingContentItem.h"
#import "MPMediaLibraryPrivacyContext.h"
#import "MPQueueFeeder.h"
#import "MPMediaItem.h"
#import "MPModelGenericObject.h"
#import "MPModelPlayEvent.h"

@interface MPAVItem : NSObject {
    AVAsset *_asset;
    NSObject<OS_dispatch_queue> *_assetQueue;
    AVPlayerItem *_avPlayerItem;
    CGFloat _cachedDuration;
    CGFloat _cachedPlayableDuration;
    NSArray *_cachedSeekableTimeRanges;
    CGFloat _seekableTimeRangesCacheTime;
    NSInteger _type;
    MPNowPlayingContentItem *_contentItem;
    BOOL _advancedDuringPlayback;
    BOOL _handledFinishTime;
    BOOL _hasPlayedThisSession;
    BOOL _wasCountedAsSkipped;
    BOOL _isStreamable;
    BOOL _watchingAttributes;
    BOOL _userChangedItemsDuringPlayback;
    BOOL _lyricsAvailable;
    os_unfair_lock_s _lock;
    BOOL _hasLoadedHasProtectedContent;
    BOOL _hasLoadedPlaybackMode;
    BOOL _hasValidPlayerItemDuration;
    CGFloat _lastLoggedTotalDuration;
    NSInteger _likedState;
    ? _playerItemDuration;
    NSInteger _exportableArtworkRevision;
    MPMediaLibraryPrivacyContext *_privacyContext;
}


@property (nonatomic, getter=_currentPlaybackRate, setter=_setCurrentPlaybackRate:) float _currentPlaybackRate; // ivar: _currentPlaybackRate
@property (readonly, nonatomic) ? _playerItemDurationIfAvailable;
@property (readonly, nonatomic) AVPlayerItemAccessLog *accessLog;
@property (nonatomic, getter=isActiveItem) BOOL activeItem; // ivar: _activeItem
@property (readonly, nonatomic) NSString *album;
@property (readonly, nonatomic) NSString *albumArtist;
@property (readonly, nonatomic) NSUInteger albumArtistPersistentID;
@property (readonly, nonatomic) NSUInteger albumPersistentID;
@property (readonly, nonatomic) NSInteger albumStoreID; // ivar: _albumStoreID
@property (readonly, nonatomic) NSUInteger albumTrackCount;
@property (readonly, nonatomic) NSUInteger albumTrackNumber;
@property (readonly, nonatomic) BOOL allowsAirPlayFromCloud; // ivar: _allowsAirPlayFromCloud
@property (readonly, nonatomic) BOOL allowsEQ;
@property (readonly, nonatomic) BOOL allowsExternalPlayback; // ivar: _allowsExternalPlayback
@property (readonly, nonatomic, getter=isAlwaysLive) BOOL alwaysLive;
@property (readonly, nonatomic) NSString *artist;
@property (readonly, nonatomic) NSUInteger artistPersistentID;
@property (readonly, nonatomic) NSInteger artistStoreID;
@property (readonly, nonatomic, getter=isArtistUploadedContent) BOOL artistUploadedContent;
@property (readonly, nonatomic) NSArray *artworkTimeMarkers; // ivar: _artworkTimeMarkers
@property (readonly, nonatomic) AVAsset *asset;
@property (readonly, nonatomic, getter=isAssetLoaded) BOOL assetLoaded; // ivar: _assetLoaded
@property (readonly, nonatomic, getter=isAssetURLValid) BOOL assetURLValid;
@property (nonatomic, getter=isAutoPlayItem) BOOL autoPlayItem; // ivar: _autoPlayItem
@property (readonly, copy, nonatomic) NSNumber *bookmarkTime;
@property (readonly, nonatomic) BOOL canReusePlayerItem; // ivar: _canReusePlayerItem
@property (readonly, nonatomic) BOOL canUseLoadedAsset;
@property (readonly, nonatomic) NSArray *chapterTimeMarkers; // ivar: _chapterTimeMarkers
@property (retain, nonatomic) NSArray *closedCaptionTimeMarkers; // ivar: _closedCaptionTimeMarkers
@property (readonly, nonatomic) NSString *cloudAlbumID;
@property (readonly, nonatomic) NSUInteger cloudID;
@property (readonly, nonatomic) NSString *cloudUniversalLibraryID;
@property (readonly, nonatomic) NSString *composer;
@property (readonly, nonatomic) NSUInteger composerPersistentID;
@property (readonly, copy, nonatomic) NSString *containerUniqueID;
@property (readonly, nonatomic) MPNowPlayingContentItem *contentItem;
@property (copy, nonatomic) NSString *contentItemID; // ivar: _contentItemID
@property (readonly, copy, nonatomic) NSString *copyrightText; // ivar: _copyrightText
@property (readonly, nonatomic) CGFloat currentTimeDisplayOverride;
@property (readonly, nonatomic) NSInteger customAVEQPreset;
@property (readonly, nonatomic) NSString *databaseID;
@property (nonatomic) float defaultPlaybackRate; // ivar: _defaultPlaybackRate
@property (readonly, nonatomic) BOOL didAttemptToLoadAsset; // ivar: _didAttemptToLoadAsset
@property (readonly, nonatomic) BOOL didReachEnd; // ivar: _didReachEnd
@property (readonly, nonatomic) NSUInteger discCount;
@property (readonly, nonatomic) NSUInteger discNumber;
@property (readonly, nonatomic) NSString *displayableText;
@property (readonly, nonatomic) BOOL displayableTextLoaded;
@property (readonly, nonatomic) ? duration;
@property (readonly, nonatomic) CGFloat durationFromExternalMetadata;
@property (readonly, nonatomic) CGFloat durationIfAvailable;
@property (readonly, nonatomic) BOOL durationIsValid;
@property (copy, nonatomic) NSString *explicitBadge; // ivar: _explicitBadge
@property (nonatomic) NSInteger explicitContentState; // ivar: _explicitContentState
@property (readonly, nonatomic, getter=isExplicitTrack) BOOL explicitTrack;
@property (readonly, copy, nonatomic) NSString *externalContentIdentifier; // ivar: _externalContentIdentifier
@property (nonatomic, getter=hasExternalDisplay) BOOL externalDisplay; // ivar: _externalDisplay
@property (weak, nonatomic) MPQueueFeeder *feeder; // ivar: _feeder
@property (readonly, nonatomic) ? forwardPlaybackEndTime;
@property (readonly, nonatomic) NSString *genre;
@property (readonly, nonatomic) NSUInteger genrePersistentID;
@property (readonly, nonatomic) BOOL hasFinishedDownloading; // ivar: _hasFinishedDownloading
@property (nonatomic) BOOL hasPerformedErrorResolution; // ivar: _hasPerformedErrorResolution
@property (nonatomic) BOOL hasPlayedThisSession;
@property (readonly, nonatomic) BOOL hasProtectedContent; // ivar: _hasProtectedContent
@property (readonly, nonatomic) BOOL hasStoreLyrics;
@property (readonly, nonatomic) BOOL hasTimeSyncedLyrics;
@property (readonly, copy, nonatomic) NSNumber *initialPlaybackStartTime;
@property (copy, nonatomic) NSNumber *initialPlaybackStartTimeOverride; // ivar: _initialPlaybackStartTimeOverride
@property (nonatomic) BOOL isAssetLoaded; // ivar: _isAssetLoaded
@property (retain, nonatomic) NSError *itemError; // ivar: _itemError
@property (nonatomic) NSInteger lastChangeDirection; // ivar: _lastChangeDirection
@property (copy, nonatomic) NSNumber *lastMetadataChangeTime; // ivar: _lastMetadataChangeTime
@property (nonatomic) CGFloat lastPlayPerformanceTime; // ivar: _lastPlayPerformanceTime
@property (readonly, nonatomic) NSInteger leasePlaybackPreventionState; // ivar: _leasePlaybackPreventionState
@property (readonly, copy, nonatomic) ICMusicSubscriptionLeaseStatus *leaseStatus; // ivar: _leaseStatus
@property (readonly, nonatomic) NSString *libraryLyrics;
@property (nonatomic) NSInteger likedState;
@property (readonly, nonatomic, getter=isLikedStateEnabled) BOOL likedStateEnabled; // ivar: _likedStateEnabled
@property (nonatomic) float loudnessInfoVolumeNormalization; // ivar: _loudnessInfoVolumeNormalization
@property (readonly, nonatomic) NSString *lyrics;
@property (readonly, nonatomic) NSString *mainTitle;
@property (readonly, retain, nonatomic) MPMediaItem *mediaItem; // ivar: _mediaItem
@property (readonly, nonatomic) BOOL mediaItemNeedsLoading; // ivar: _mediaItemNeedsLoading
@property (readonly, nonatomic) NSUInteger mediaType;
@property (readonly, nonatomic) BOOL meetsPlaybackHistoryThreshold; // ivar: _meetsPlaybackHistoryThreshold
@property (readonly, nonatomic) MPModelGenericObject *modelGenericObject; // ivar: _modelGenericObject
@property (retain, nonatomic) MPModelPlayEvent *modelPlayEvent; // ivar: _modelPlayEvent
@property (readonly, nonatomic) CGSize naturalSize;
@property (weak, nonatomic) NSObject<MPAVItemObserver> *observer; // ivar: _observer
@property (readonly, nonatomic) NSUInteger persistentID;
@property (readonly, nonatomic) NSString *personID;
@property (readonly, nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (readonly, nonatomic) CGFloat playableDuration;
@property (readonly, nonatomic) CGFloat playableDurationIfAvailable;
@property (readonly, copy, nonatomic) NSError *playbackError;
@property (copy, nonatomic) NSDictionary *playbackInfo; // ivar: _playbackInfo
@property (readonly, copy, nonatomic) NSNumber *playbackInfoStartTime;
@property (readonly, nonatomic) NSInteger playbackMode; // ivar: _playbackMode
@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (readonly, nonatomic) BOOL prefersSeekOverSkip; // ivar: _prefersSeekOverSkip
@property (readonly, nonatomic) CGSize presentationSize;
@property (copy, nonatomic) NSString *previousContentItemID; // ivar: _previousContentItemID
@property (retain, nonatomic) NSString *queueIdentifier; // ivar: _queueIdentifier
@property (readonly, nonatomic, getter=isRadioItem) BOOL radioItem;
@property (nonatomic) NSInteger repeatIndex; // ivar: _repeatIndex
@property (readonly, nonatomic) BOOL requiresLoadedAssetForAirPlayProperties; // ivar: _requiresLoadedAssetForAirPlayProperties
@property (retain, nonatomic) id *rtcReportingParentHierarchyToken; // ivar: _rtcReportingParentHierarchyToken
@property (readonly, copy, nonatomic) NSString *rtcReportingServiceIdentifier; // ivar: _rtcReportingServiceIdentifier
@property (nonatomic, getter=isSharedListeningItem) BOOL sharedListeningItem; // ivar: _sharedListeningItem
@property (readonly, nonatomic) BOOL shouldPreventPlayback; // ivar: _shouldPreventPlayback
@property (readonly, nonatomic) BOOL shouldShowComposer;
@property (nonatomic) float soundCheckVolumeNormalization; // ivar: _soundCheckVolumeNormalization
@property (readonly, nonatomic, getter=isStartItem) BOOL startItem;
@property (weak, nonatomic) NSObject<MPStartItemInfoProviding> *startItemInfoProvider; // ivar: _startItemInfoProvider
@property (readonly, nonatomic) BOOL stationAllowsItemLiking;
@property (readonly, copy, nonatomic) NSString *stationHash;
@property (readonly, nonatomic) NSInteger stationID;
@property (readonly, copy, nonatomic) NSString *stationName;
@property (readonly, nonatomic) NSInteger stationProviderID;
@property (readonly, copy, nonatomic) NSString *stationStringID;
@property (readonly, nonatomic) NSInteger status;
@property (readonly, nonatomic) NSNumber *storeAccountID; // ivar: _storeAccountID
@property (readonly, copy, nonatomic) NSString *storeFrontIdentifier; // ivar: _storeFrontIdentifier
@property (readonly, nonatomic) NSString *storeItemID;
@property (readonly, nonatomic) NSInteger storeItemInt64ID; // ivar: _storeItemInt64ID
@property (readonly, nonatomic) NSInteger storePurchasedAdamID;
@property (readonly, nonatomic) NSInteger storeSubscriptionAdamID; // ivar: _storeSubscriptionAdamID
@property (readonly, nonatomic, getter=isStreamable) BOOL streamable;
@property (readonly, nonatomic) BOOL supportsFastForward;
@property (readonly, nonatomic) BOOL supportsLikedState; // ivar: _supportsLikedState
@property (readonly, nonatomic) BOOL supportsRateChange;
@property (readonly, nonatomic) BOOL supportsRating;
@property (readonly, nonatomic) BOOL supportsRewind;
@property (readonly, nonatomic, getter=isTailPlaceholder) BOOL tailPlaceholder; // ivar: _tailPlaceholder
@property (readonly, nonatomic) CGFloat timeOfSeekableEnd;
@property (readonly, nonatomic) CGFloat timeOfSeekableStart;
@property (readonly, nonatomic) *OpaqueCMTimebase timebase;
@property (readonly, nonatomic) NSArray *timedMetadataIfAvailable;
@property (readonly, nonatomic) NSInteger type;
@property (readonly, nonatomic) NSArray *urlTimeMarkers; // ivar: _urlTimeMarkers
@property (readonly, nonatomic) BOOL useEmbeddedChapterData; // ivar: _useEmbeddedChapterData
@property (readonly, nonatomic) NSNumber *useListeningHistory; // ivar: _useListeningHistory
@property (nonatomic) BOOL userAdvancedDuringPlayback;
@property (nonatomic) BOOL userChangedItemsDuringPlayback;
@property (readonly, nonatomic) float userRating;
@property (nonatomic) BOOL userSkippedPlayback;
@property (readonly, nonatomic) BOOL usesSubscriptionLease;


+(id)URLFromPath:(id)arg0 ;
-(BOOL)_shouldPublishArtworkURL;
-(BOOL)isAd;
-(BOOL)isSupportedDefaultPlaybackSpeed:(NSInteger)arg0 ;
-(BOOL)isValidPlayerSubstituteForItem:(id)arg0 ;
-(CGFloat)_expectedStartTimeWithPlaybackInfo:(id)arg0 ;
-(CGFloat)_expectedStopTimeWithPlaybackInfo:(id)arg0 ;
-(CGFloat)_playableDurationForLoadedTimeRanges:(id)arg0 ;
-(NSInteger)_persistedLikedState;
-(float)playbackRateForLevel:(NSUInteger)arg0 direction:(NSInteger)arg1 paused:(BOOL)arg2 ;
-(float)scanIntervalForLevel:(NSUInteger)arg0 paused:(BOOL)arg1 ;
-(id)_imageChapterTrackIDsForAsset:(id)arg0 ;
-(id)_initialPlaybackStartTimeForPlaybackInfo:(id)arg0 ;
-(id)_seekableTimeRanges;
-(id)analyticsContentType;
-(id)analyticsFormatType;
-(id)artworkCatalogBlock:(SEL)arg0 ;
-(id)artworkCatalogForPlaybackTime:(CGFloat)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAsset:(id)arg0 ;
-(id)initWithPlayerItem:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 options:(id)arg1 ;
-(id)path;
-(id)url;
-(int)subtitleTrackID;
-(void)_addObservationsForAVPlayerItem:(id)arg0 ;
-(void)_applyLoudnessInfo;
-(void)_clearAsset;
-(void)_clearAssetNow;
-(void)_currentPlaybackRateDidChange:(float)arg0 ;
-(void)_didBecomeActivePlayerItem;
-(void)_didResignActivePlayerItem;
-(void)_handleUpdatedLikedState:(NSInteger)arg0 forUserIdentity:(id)arg1 completion:(id)arg2 ;
-(void)_internalLikedStateDidChangeNotification:(id)arg0 ;
-(void)_itemAttributeAvailableKey:(id)arg0 ;
-(void)_loadAssetAndPlayerItem;
-(void)_loadAssetProperties;
-(void)_onAssetQueueClearAsset;
-(void)_performContentItemUpdate:(id)arg0 ;
-(void)_removeObservationsForAVPlayerItem:(id)arg0 ;
-(void)_setNeedsPersistedLikedStateUpdate;
-(void)_updateAudioFormatInfoForContentItem:(id)arg0 ;
-(void)_updateContentItem;
-(void)_updateDurationSnapshotWithElapsedTime:(CGFloat)arg0 playbackRate:(float)arg1 ;
-(void)_updateHasFinishedDownloading;
-(void)_updateSoundCheckVolumeNormalizationForPlayerItem;
-(void)_willBecomeActivePlayerItem;
-(void)_willResignActivePlayerItem;
-(void)applyVolumeNormalizationWithSoundCheckEnabled:(BOOL)arg0 ;
-(void)dealloc;
-(void)disableItemReuse;
-(void)invalidateContentItemAudioFormatInfo;
-(void)invalidateContentItemDeviceSpecificUserInfo;
-(void)invalidateContentItemUserInfo;
-(void)loadAssetAndPlayerItem;
-(void)notePlaybackFinishedByHittingEnd;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pauseContentKeySession;
-(void)prepareForRate:(float)arg0 completionHandler:(id)arg1 ;
-(void)reevaluateHasProtectedContent;
-(void)reevaluateType;
-(void)replacePlayerItemWithPlayerItem:(id)arg0 ;
-(void)resetBookkeeping;
-(void)resolvePlaybackError:(id)arg0 withCompletion:(id)arg1 ;
-(void)resumeContentKeySession;
-(void)setPlaybackCheckpointCurrentTime:(CGFloat)arg0 ;
-(void)setPlaybackFinishedTime:(CGFloat)arg0 ;
-(void)setPlaybackStoppedTime:(CGFloat)arg0 ;
-(void)setRating:(float)arg0 ;
-(void)setSubtitleTrackID:(int)arg0 ;
-(void)setupEQPresetWithDefaultPreset:(NSInteger)arg0 ;
-(void)setupWithPlaybackInfo;
-(void)updatePlayerItemMetadata;


@end


#endif
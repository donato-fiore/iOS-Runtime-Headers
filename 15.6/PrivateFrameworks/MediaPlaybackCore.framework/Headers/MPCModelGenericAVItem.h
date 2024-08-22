// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCMODELGENERICAVITEM_H
#define MPCMODELGENERICAVITEM_H

@class MPAVItem, NSNumber, ICMusicSubscriptionLeaseSession, MPSubscriptionStatusPlaybackInformation, NSArray, MPModelGenericObject, MPPropertySet, NSOperationQueue, NSString, ICStoreRequestContext, NSURL, ICContentKeySession, ICAVAssetDownloadURLSession, ICURLRequest, ICMusicSubscriptionLeaseStatus, NSDictionary, NSData, MPMediaLibrary;
@protocol MPRTCReportingItemSessionCreating, AVAssetResourceLoaderDelegate, AVPlayerItemMetadataOutputPushDelegate, ICEnvironmentMonitorObserver, OS_dispatch_queue, MPCReportingIdentityPropertiesLoading, MPCModelPlaybackAssetCacheProviding;


#import "MPCSuzeLeaseSession.h"
#import "MPCModelGenericAVItemTimedMetadataRequest.h"
#import "MPCModelGenericAVItemTimedMetadataResponse.h"
#import "MPCModelGenericAVItemUserIdentityPropertySet.h"
#import "MPCPlayerAudioFormat.h"
#import "MPCPlayerAudioRoute.h"
#import "MPCPlaybackEngineEventStream.h"
#import "MPCPlaybackRequestEnvironment.h"
#import "MPCAudioAssetTypeSelection.h"

@interface MPCModelGenericAVItem : MPAVItem <MPRTCReportingItemSessionCreating, AVAssetResourceLoaderDelegate, AVPlayerItemMetadataOutputPushDelegate, ICEnvironmentMonitorObserver>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _allowsAirPlayFromCloud;
    NSNumber *_bookmarkTime;
    BOOL _hasLoadedSubscriptionLeaseSession;
    NSObject<OS_dispatch_queue> *_subscriptionLeaseSessionLoadQueue;
    ICMusicSubscriptionLeaseSession *_subscriptionLeaseSession;
    BOOL _hasLoadedSubscriptionPlaybackInformation;
    MPSubscriptionStatusPlaybackInformation *_subscriptionPlaybackInformation;
    NSObject<OS_dispatch_queue> *_subscriptionPlaybackInformationLoadQueue;
    BOOL _shouldAutomaticallyRefreshSubscriptionLease;
    BOOL _isSubscriptionPolicyContent;
    BOOL _lastPreparedForNonZeroRate;
    NSInteger _subscriptionLeaseRequestCount;
    BOOL _didDeferPreventionStatusUpdate;
    MPCSuzeLeaseSession *_suzeLeaseSession;
    BOOL _isAutomaticallyRefreshingSuzeLeaseSession;
    id *_firstBecomeActivePlayerItemBlock;
    NSArray *_currentGlobalTimedMetadataGroups;
    MPModelGenericObject *_flattenedGenericObject;
    MPModelGenericObject *_flattenedMetadataGenericObject;
    MPModelGenericObject *_metadataGenericObject;
    MPPropertySet *_itemProperties;
    id<MPCReportingIdentityPropertiesLoading> *_identityPropertiesLoader;
    MPCModelGenericAVItemTimedMetadataRequest *_timedMetadataRequest;
    MPCModelGenericAVItemTimedMetadataResponse *_timedMetadataResponse;
    NSOperationQueue *_timedMetadataOperationQueue;
    BOOL _isMusicCellularStreamingAllowed;
    BOOL _didReceiveHLSTimedMetadata;
    NSString *_hlsStreamIdentifier;
    BOOL _isiTunesStoreStream;
    ICStoreRequestContext *_storeRequestContext;
    NSURL *_streamingKeyCertificateURL;
    NSURL *_streamingKeyServerURL;
    NSString *_rtcReportingServiceIdentifier;
    MPCModelGenericAVItemUserIdentityPropertySet *_identityPropertySet;
    ICContentKeySession *_contentKeySession;
    ICAVAssetDownloadURLSession *_hlsDownloadURLSession;
    ICURLRequest *_hlsDownloadURLRequest;
    os_unfair_lock_s _genericObjectLock;
    NSInteger _leasePlaybackPreventionState;
    ICMusicSubscriptionLeaseStatus *_leaseStatus;
}


@property (retain, nonatomic) MPCPlayerAudioFormat *activeFormat; // ivar: _activeFormat
@property (nonatomic) NSInteger activeFormatJustification; // ivar: _activeFormatJustification
@property (retain, nonatomic) NSArray *alternateFormats; // ivar: _alternateFormats
@property (retain, nonatomic) NSObject<MPCModelPlaybackAssetCacheProviding> *assetCacheProvider; // ivar: _assetCacheProvider
@property (copy, nonatomic) NSString *assetSourceStoreFrontID; // ivar: _assetSourceStoreFrontID
@property (copy, nonatomic) NSDictionary *audioFormatsDictionary; // ivar: _audioFormatsDictionary
@property (retain, nonatomic) MPCPlayerAudioRoute *audioRoute; // ivar: _audioRoute
@property (retain, nonatomic) NSArray *availableSortedFormats; // ivar: _availableSortedFormats
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDownloadedAsset) BOOL downloadedAsset; // ivar: _downloadedAsset
@property (nonatomic) NSInteger equivalencySourceAdamID; // ivar: _equivalencySourceAdamID
@property (weak, nonatomic) MPCPlaybackEngineEventStream *eventStream; // ivar: _eventStream
@property (retain, nonatomic) MPModelGenericObject *genericObject; // ivar: _genericObject
@property (readonly, nonatomic) BOOL hasVideo;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHLSAsset) BOOL hlsAsset; // ivar: _hlsAsset
@property (readonly, copy, nonatomic) NSData *jingleTimedMetadata; // ivar: _jingleTimedMetadata
@property (readonly, nonatomic) NSInteger loadedAudioAssetType; // ivar: _loadedAudioAssetType
@property (retain, nonatomic) MPMediaLibrary *mediaLibrary; // ivar: _mediaLibrary
@property (readonly, copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment; // ivar: _playbackRequestEnvironment
@property (readonly, nonatomic) NSInteger preferredAudioAssetType; // ivar: _preferredAudioAssetType
@property (readonly, nonatomic) MPCAudioAssetTypeSelection *preferredAudioAssetTypeSelection; // ivar: _preferredAudioAssetTypeSelection
@property (retain, nonatomic) MPCPlayerAudioFormat *preferredFormat; // ivar: _preferredFormat
@property (nonatomic, getter=isRadioPlayback) BOOL radioPlayback; // ivar: _radioPlayback
@property (nonatomic, getter=isRadioStreamPlayback) BOOL radioStreamPlayback; // ivar: _radioStreamPlayback
@property (readonly, nonatomic) NSInteger rtcReportingAssetType;
@property (readonly, nonatomic) BOOL shouldReportPlayEventsToStore;
@property (copy, nonatomic, getter=isSiriInitiated) NSNumber *siriInitiated; // ivar: _siriInitiated
@property (nonatomic) NSInteger stationItemLikedState; // ivar: _stationItemLikedState
@property (nonatomic, getter=isSubscriptionRequired) BOOL subscriptionRequired; // ivar: _subscriptionRequired
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *trackInfo; // ivar: _trackInfo
@property (readonly, nonatomic) NSData *trackInfoData;


+(BOOL)_prefersHighQualityAudioContentForNetworkType:(NSInteger)arg0 ;
+(BOOL)_prefersHighQualityVideoContentForNetworkType:(NSInteger)arg0 ;
+(NSInteger)_unwrapPlaybackError:(id)arg0 ;
+(id)_utilitySerialQueue;
-(BOOL)_allowsAssetCaching;
-(BOOL)_allowsStreamingPlayback;
-(BOOL)_prefersHighQualityContent;
-(BOOL)_shouldRememberBookmarkTime;
-(BOOL)allowsAirPlayFromCloud;
-(BOOL)allowsEQ;
-(BOOL)allowsExternalPlayback;
-(BOOL)canUseLoadedAsset;
-(BOOL)hasStoreLyrics;
-(BOOL)hasTimeSyncedLyrics;
-(BOOL)isAlwaysLive;
-(BOOL)isArtistUploadedContent;
-(BOOL)isAssetURLValid;
-(BOOL)isExplicitTrack;
-(BOOL)isLikedStateEnabled;
-(BOOL)isRadioItem;
-(BOOL)isStreamable;
-(BOOL)isValidPlayerSubstituteForItem:(id)arg0 ;
-(BOOL)mpcReporting_shouldUseRelativeTimePositions;
-(BOOL)prefersSeekOverSkip;
-(BOOL)requiresLoadedAssetForAirPlayProperties;
-(BOOL)resourceLoader:(id)arg0 shouldWaitForLoadingOfRequestedResource:(id)arg1 ;
-(BOOL)resourceLoader:(id)arg0 shouldWaitForRenewalOfRequestedResource:(id)arg1 ;
-(BOOL)shouldPreventPlayback;
-(BOOL)shouldShowComposer;
-(BOOL)supportsLikedState;
-(BOOL)updateActiveFormat:(id)arg0 justification:(NSInteger)arg1 ;
-(BOOL)updateAudioFormatsDictionary:(id)arg0 ;
-(BOOL)updatePreferredFormat:(id)arg0 ;
-(BOOL)useEmbeddedChapterData;
-(BOOL)usesSubscriptionLease;
-(CGFloat)_startTime;
-(CGFloat)durationFromExternalMetadata;
-(NSInteger)_keyServerAdamID;
-(NSInteger)_persistedLikedState;
-(NSInteger)_suzeLeaseMediaType;
-(NSInteger)albumStoreID;
-(NSInteger)albumYear;
-(NSInteger)artistStoreID;
-(NSInteger)leasePlaybackPreventionState;
-(NSInteger)stationID;
-(NSInteger)stationProviderID;
-(NSInteger)storeItemInt64ID;
-(NSInteger)storePurchasedAdamID;
-(NSInteger)storeSubscriptionAdamID;
-(NSInteger)type;
-(NSUInteger)_audioFormatPreference;
-(NSUInteger)albumArtistPersistentID;
-(NSUInteger)albumPersistentID;
-(NSUInteger)albumTrackCount;
-(NSUInteger)albumTrackNumber;
-(NSUInteger)artistPersistentID;
-(NSUInteger)cloudID;
-(NSUInteger)composerPersistentID;
-(NSUInteger)genrePersistentID;
-(NSUInteger)mediaType;
-(NSUInteger)mpcReporting_itemType;
-(NSUInteger)persistentID;
-(float)_volumeAdjustment;
-(float)userRating;
-(id)_assetLoadPropertiesWithUserIdentityProperties:(id)arg0 delegatedUserIdentityProperties:(id)arg1 ;
-(id)_bookmarkTime;
-(id)_delegatedUserIdentityProperties:(*id)arg0 ;
-(id)_gaplessInfo;
-(id)_iTunesStorePurchasedMediaKind;
-(id)_isPrivateListeningEnabled;
-(id)_loudnessInfoMediaKind;
-(id)_modelPlaybackPosition;
-(id)_radioStation;
-(id)_rtcReportingMediaIdentifierWithAssetLoadProperties:(id)arg0 ;
-(id)_rtcReportingServiceIdentifierWithAssetURL:(id)arg0 ;
-(id)_stopTime;
-(id)_storeRequestContext;
-(id)_storeUbiquitousIdentifier;
-(id)album;
-(id)albumArtist;
-(id)analyticsContentType;
-(id)analyticsFormatType;
-(id)artist;
-(id)artworkCatalogBlock:(SEL)arg0 ;
-(id)artworkTimeMarkers;
-(id)audioFormatForStableVariantID:(id)arg0 ;
-(id)bookmarkTime;
-(id)chapterTimeMarkers;
-(id)cloudAlbumID;
-(id)cloudUniversalLibraryID;
-(id)composer;
-(id)containerUniqueID;
-(id)copyrightText;
-(id)currentPlayerAudioFormat;
-(id)databaseID;
-(id)explicitBadge;
-(id)externalContentIdentifier;
-(id)genre;
-(id)initWithGenericObject:(id)arg0 itemProperties:(id)arg1 playbackRequestEnvironment:(id)arg2 identityPropertySet:(id)arg3 ;
-(id)leaseStatus;
-(id)libraryLyrics;
-(id)mainTitle;
-(id)mediaItem;
-(id)modelGenericObject;
-(id)mpcReporting_identityPropertiesLoader;
-(id)mpcReporting_privateListeningEnabled;
-(id)mpcReporting_requestingBundleIdentifier;
-(id)mpcReporting_requestingBundleVersion;
-(id)mpcReporting_siriInitiated;
-(id)personID;
-(id)playbackError;
-(id)playbackInfo;
-(id)rtcReportingServiceIdentifier;
-(id)stationHash;
-(id)stationName;
-(id)stationStringID;
-(id)storeAccountID;
-(id)storeFrontIdentifier;
-(id)urlTimeMarkers;
-(id)useListeningHistory;
-(struct ? )_timeoutValues;
-(void)_ageVerificationStateDidChangeNotification:(id)arg0 ;
-(void)_allowsHighQualityMusicStreamingOnCellularDidChangeNotification:(id)arg0 ;
-(void)_applyLoudnessInfo;
-(void)_applyPreferredPeakBitRateToPlayerItem:(id)arg0 withItemType:(NSInteger)arg1 ;
-(void)_contentTasteControllerDidChangeNotification:(id)arg0 ;
-(void)_currentPlaybackRateDidChange:(float)arg0 ;
-(void)_didBecomeActivePlayerItem;
-(void)_didResignActivePlayerItem;
-(void)_emitAudioAssetTypeSelection:(id)arg0 ;
-(void)_emitAudioFormatChangeEvent;
-(void)_getSubscriptionLeasePropertiesWithCompletion:(id)arg0 ;
-(void)_getUnverifiedSubscriptionLeaseSessionWithCompletion:(id)arg0 ;
-(void)_handlePlaybackFinishedTime:(CGFloat)arg0 didFinishByHittingEnd:(BOOL)arg1 ;
-(void)_handleUpdatedLikedState:(NSInteger)arg0 forUserIdentity:(id)arg1 completion:(id)arg2 ;
-(void)_invalidateContentItem;
-(void)_postInvalidationNotifications;
-(void)_reloadTimedMetadataRequest;
-(void)_subscriptionLeaseStatusDidChangeNotification:(id)arg0 ;
-(void)_suzeLeaseSessionRenewDidFailNotification:(id)arg0 ;
-(void)_timedMetadataResponseDidInvalidateNotification:(id)arg0 ;
-(void)_updateActiveFormatJustification:(NSInteger)arg0 ;
-(void)_updateAudioFormatInfoForContentItem:(id)arg0 ;
-(void)_updateAutomaticSubscriptionLeaseRefresh;
-(void)_updateBookmarkTime:(CGFloat)arg0 isCheckpoint:(BOOL)arg1 ;
-(void)_updateHasBeenPlayedWithElapsedTime:(CGFloat)arg0 completion:(id)arg1 ;
-(void)_updateJingleTimedMetadata;
-(void)_updatePreventionStatusWithLeaseSession:(id)arg0 ;
-(void)_willBecomeActivePlayerItem;
-(void)_willResignActivePlayerItem;
-(void)applyVolumeNormalizationWithSoundCheckEnabled:(BOOL)arg0 ;
-(void)configureAVPlayerItemWithAudioFormat:(id)arg0 forceSpatial:(BOOL)arg1 ;
-(void)dealloc;
-(void)environmentMonitorDidChangeNetworkType:(id)arg0 ;
-(void)loadAssetAndPlayerItem;
-(void)metadataOutput:(id)arg0 didOutputTimedMetadataGroups:(id)arg1 fromPlayerItemTrack:(id)arg2 ;
-(void)notePlaybackFinishedByHittingEnd;
-(void)nowPlayingInfoCenter:(id)arg0 lyricsForContentItem:(id)arg1 completion:(id)arg2 ;
-(void)pauseContentKeySession;
-(void)prepareForRate:(float)arg0 completionHandler:(id)arg1 ;
-(void)resolvePlaybackError:(id)arg0 withCompletion:(id)arg1 ;
-(void)resumeContentKeySession;
-(void)setPlaybackCheckpointCurrentTime:(CGFloat)arg0 ;
-(void)setPlaybackFinishedTime:(CGFloat)arg0 ;
-(void)setPlaybackStoppedTime:(CGFloat)arg0 ;
-(void)setRating:(float)arg0 ;
-(void)setupWithPlaybackInfo;
-(void)updatePlayerItemMetadata;


@end


#endif
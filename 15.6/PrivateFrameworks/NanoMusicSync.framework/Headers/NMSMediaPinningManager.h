// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMSMEDIAPINNINGMANAGER_H
#define NMSMEDIAPINNINGMANAGER_H

@class NSArray, NSString, NSOrderedSet, NSNumber;
@protocol ICEnvironmentMonitorObserver, NMSPodcastsDownloadableContentControllerDelegate, MTDBExtensionAccessObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NMSyncDefaults.h"
#import "NMSPodcastSizeCache.h"
#import "NMSMediaSyncInfo.h"
#import "NMSPodcastsDownloadableContentController.h"
#import "NMSMediaQuotaManager.h"
#import "NMSMediaDownloadInfo.h"

@interface NMSMediaPinningManager : NSObject <ICEnvironmentMonitorObserver, NMSPodcastsDownloadableContentControllerDelegate, MTDBExtensionAccessObserver>

 {
    NMSyncDefaults *_sharedDefaults;
    NMSPodcastSizeCache *_podcastSizeCache;
    NMSMediaSyncInfo *_podcastStationsSyncInfo;
    NMSPodcastsDownloadableContentController *_podcastsDownloadableContentObserver;
    NMSMediaQuotaManager *_addedItemsQuotaManager;
    NMSMediaQuotaManager *_downloadedItemsQuotaManager;
    NSUInteger _mediaQuota;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSArray *_cachedPlaylistIdentifiers;
    NSArray *_cachedAlbumIdentifiers;
    NSArray *_cachedPodcastFeedURLs;
    NSArray *_cachedPodcastStationUUIDs;
    BOOL _cachedSavedEpisodesEnabled;
    BOOL _cachedPinnedPodcastsAreUserSet;
    NSArray *_cachedAudiobookIdentifiers;
    BOOL _pinnedPlaylistsValidated;
    BOOL _workoutPlaylistValidated;
}


@property (readonly, nonatomic) NSArray *albumIdentifiers;
@property (nonatomic) CGFloat audiobookDownloadLimit;
@property (readonly, nonatomic) NSArray *audiobookIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NMSMediaDownloadInfo *downloadInfo;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *pinnedAlbums;
@property (readonly, nonatomic) NSOrderedSet *pinnedAudiobooks;
@property (readonly, nonatomic) NSArray *pinnedPlaylists;
@property (nonatomic) BOOL pinnedPodcastsAreUserSet;
@property (readonly, nonatomic) NSArray *playlistIdentifiers;
@property (readonly, nonatomic) NSArray *podcastFeedURLs;
@property (readonly, nonatomic) NSArray *podcastStationUUIDs;
@property (retain, nonatomic) NSOrderedSet *readingNowAudiobooks;
@property (nonatomic, getter=isReadingNowEnabled) BOOL readingNowEnabled;
@property (nonatomic) BOOL savedEpisodesEnabled;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSOrderedSet *wantToReadAudiobooks;
@property (nonatomic, getter=isWantToReadEnabled) BOOL wantToReadEnabled;
@property (retain, nonatomic) NSNumber *workoutPlaylistID;


+(BOOL)playlistPIDValidForPinning:(id)arg0 ;
+(NSUInteger)_mediaStorageSizeForCurrentDevice;
+(id)_cachedAlbumIdentifiersFilePath;
+(id)_cachedAudiobookIdentifiersFilePath;
+(id)_cachedIdentifiersDirectoryPath;
+(id)_cachedPlaylistIdentifiersFilePath;
+(id)_cachedPodcastFeedURLsFilePath;
+(id)_cachedPodcastStationUUIDsFilePath;
+(id)_fetchMusicRecommendations;
+(id)_tokenForInstance:(id)arg0 ;
+(id)sharedManager;
+(void)_persistNewClientToken;
-(BOOL)_isAlbumPinned:(id)arg0 ;
-(BOOL)_isAppDownloadingDormantForBundleIdentifier:(id)arg0 ;
-(BOOL)_isAudiobookPinned:(id)arg0 ;
-(BOOL)_isPlaylistPinned:(id)arg0 ;
-(BOOL)_requiresICEnvironmentMonitor;
-(BOOL)_shouldCalculateCachedIdentifiers;
-(BOOL)_shouldSkipQuotaManagerEvaluation;
-(BOOL)isAlbumPinned:(id)arg0 ;
-(BOOL)isAudiobookPinned:(id)arg0 ;
-(BOOL)isItemGroupWithinQuota:(id)arg0 ;
-(BOOL)isPlaylistPinned:(id)arg0 ;
-(BOOL)isPodcastStationWithUUIDPinned:(id)arg0 ;
-(BOOL)isPodcastWithFeedURLPinned:(id)arg0 ;
-(BOOL)nms_modelObjectIsManuallyPinned:(id)arg0 ;
-(NSUInteger)_mediaQuota;
-(NSUInteger)addedSongsSize;
-(NSUInteger)downloadOrderForPodcastWithFeedURL:(id)arg0 ;
-(NSUInteger)episodeLimitForPodcastWithFeedURL:(id)arg0 ;
-(NSUInteger)episodeLimitForPodcastsAreUserSet:(BOOL)arg0 ;
-(NSUInteger)nominatedSongsSize;
-(id)_legacy_newPodcastsGroupIteratorWithDownloadedItemsOnly:(BOOL)arg0 ;
-(id)_newAudiobooksGroupIteratorWithDownloadedItemsOnly:(BOOL)arg0 ;
-(id)_newGroupIteratorForBundleIdentifier:(id)arg0 downloadedItemsOnly:(BOOL)arg1 ;
-(id)_newMusicGroupIteratorWithDownloadedItemsOnly:(BOOL)arg0 ;
-(id)_newPodcastsGroupIteratorWithDownloadedItemsOnly:(BOOL)arg0 ;
-(id)_quotaManagerWithDownloadedItemsOnly:(BOOL)arg0 ;
-(id)addedPodcastsDownloadInfoItemsWithFeedURL:(id)arg0 ;
-(id)downloadInfoForBundleIdentifier:(id)arg0 ;
-(id)downloadInfoWithinAvailableSpace:(NSUInteger)arg0 ;
-(id)init;
-(void)_fetchAudiobooksIdentifiers;
-(void)_fetchMusicIdentifiers;
-(void)_fetchPodcastsIdentifiers;
-(void)_handleAudiobooksPinningSelectionsDidChangeNotification:(id)arg0 ;
-(void)_handleAudiobooksRecommendationsDidChangeNotification:(id)arg0 ;
-(void)_handleICAgeVerificationStateDidChangeNotification:(id)arg0 ;
-(void)_handleMediaLibraryEntitiesAddedOrRemovedNotification:(id)arg0 ;
-(void)_handleMediaPinningAudiobooksContentsInvalidatedNotification:(id)arg0 ;
-(void)_handleMediaPinningManagerAudiobooksIdentifiersDidChangeNotification:(id)arg0 ;
-(void)_handleMediaPinningManagerMusicIdentifiersDidChangeNotification:(id)arg0 ;
-(void)_handleMediaPinningManagerPodcastsIdentifiersDidChangeNotification:(id)arg0 ;
-(void)_handleMediaPinningMusicContentsInvalidatedNotification:(id)arg0 ;
-(void)_handleMediaPinningPodcastsContentsInvalidatedNotification:(id)arg0 ;
-(void)_handleMusicPinningSelectionsDidChangeNotification:(id)arg0 ;
-(void)_handlePairedDeviceDidBecomeActiveNotification:(id)arg0 ;
-(void)_handlePodcastSizeCacheDidUpdateNotification:(id)arg0 ;
-(void)_handlePodcastSizeInfoDidChangeNotification:(id)arg0 ;
-(void)_handlePodcastStationsDidChange:(id)arg0 ;
-(void)_handlePodcastsPinningSelectionsDidChangeNotification:(id)arg0 ;
-(void)_handlePodcastsSubscriptionMetadataDidChangeNotification:(id)arg0 ;
-(void)_handleRecommendationLibraryContentsDidChangeNotification:(id)arg0 ;
-(void)_handleRecommendationSelectionsDidChangeNotification:(id)arg0 ;
-(void)_handleRecommendationsDidUpdateNotification:(id)arg0 ;
-(void)_invalidateAddedItemsCache;
-(void)_invalidateMediaCacheForAppIdentifiers:(NSUInteger)arg0 ;
-(void)_notePinningSettingsChangedLocally;
-(void)_pinModelObject:(id)arg0 completionHandler:(id)arg1 ;
-(void)_refreshAudiobooksIdentifiers;
-(void)_refreshMusicIdentifiers;
-(void)_refreshPodcastsIdentifiers;
-(void)_unpinModelObject:(id)arg0 completionHandler:(id)arg1 ;
-(void)_updateWorkoutSettingsPlaylistPIDTo:(id)arg0 ;
-(void)dealloc;
-(void)extensionAccessDidChange;
-(void)invalidateAudiobooksCache;
-(void)invalidateMusicCache;
-(void)invalidatePodcastsCache;
-(void)nms_fetchPinningStatusForModelObject:(id)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
-(void)nms_pinModelObject:(id)arg0 completionHandler:(id)arg1 ;
-(void)nms_unpinModelObject:(id)arg0 completionHandler:(id)arg1 ;
-(void)pinAlbum:(id)arg0 completionHandler:(id)arg1 ;
-(void)pinAudiobook:(id)arg0 ;
-(void)pinPlaylist:(id)arg0 completionHandler:(id)arg1 ;
-(void)pinPodcastStationWithUUID:(id)arg0 ;
-(void)pinPodcastWithFeedURL:(id)arg0 ;
-(void)podcastsDownloadableContentControllerContentDidChange:(id)arg0 ;
-(void)removePodcastWithFeedURL:(id)arg0 ;
-(void)setAvailableSpace:(NSUInteger)arg0 ;
-(void)setGizmoDownloadOrder:(NSUInteger)arg0 forPodcastWithFeedURL:(id)arg1 ;
-(void)setGizmoEpisodeLimit:(NSUInteger)arg0 forPodcastWithFeedURL:(id)arg1 ;
-(void)setListenNowPodcastFeedURLs:(id)arg0 ;
-(void)unpinAlbum:(id)arg0 completionHandler:(id)arg1 ;
-(void)unpinAudiobook:(id)arg0 ;
-(void)unpinPlaylist:(id)arg0 completionHandler:(id)arg1 ;
-(void)unpinPodcastStationWithUUID:(id)arg0 ;
-(void)unpinPodcastWithFeedURL:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMSYNCDEFAULTS_H
#define NMSYNCDEFAULTS_H

@class NSString, NPSDomainAccessor, NSDictionary, NSNumber, MPMediaPlaylist, NSData, NSDate, NSArray;
@protocol NMSNotificationDispatcherDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NMSNotificationDispatcher.h"

@interface NMSyncDefaults : NSObject <NMSNotificationDispatcherDelegate>

 {
    BOOL _needsSync;
    NSString *_pairingID;
    NSObject<OS_dispatch_queue> *_domainAccessorQueue;
    NPSDomainAccessor *_domainAccessor;
    NSDictionary *_notifiersDict;
    NMSNotificationDispatcher *_settingsNotifier;
    NMSNotificationDispatcher *_musicPinningSelectionsNotifier;
    NMSNotificationDispatcher *_recoSelectionsNotifier;
    NMSNotificationDispatcher *_libraryRecoNotifier;
    NMSNotificationDispatcher *_storeRecoNotifier;
    NMSNotificationDispatcher *_podcastsPinningSelectionsNotifier;
    NMSNotificationDispatcher *_podcastsSubscriptionMetadataNotifier;
    NMSNotificationDispatcher *_podcastsSizeInfoNotifier;
    NMSNotificationDispatcher *_audiobooksPinningSelectionsNotifier;
    NMSNotificationDispatcher *_audiobooksRecommendationsNotifier;
    NMSNotificationDispatcher *_syncStateNotifier;
    NMSNotificationDispatcher *_syncInfoNotifier;
    NMSNotificationDispatcher *_syncInfoRequestDateNotifier;
}


@property (copy, nonatomic) NSNumber *assetSyncLimit; // ivar: _assetSyncLimit
@property (nonatomic) NSUInteger assetSyncLimitType; // ivar: _assetSyncLimitType
@property (retain, nonatomic) MPMediaPlaylist *assetSyncPlaylist;
@property (retain, nonatomic, setter=setAssetSyncPlaylistPersistentID:) NSNumber *assetSyncPlaylistPersistentID; // ivar: _assetSyncPlaylistPersistentID
@property (nonatomic) NSUInteger assetSyncType; // ivar: _assetSyncType
@property (copy, nonatomic) NSNumber *audiobookDownloadLimit;
@property (copy, nonatomic) NSDictionary *audiobooksSyncInfo; // ivar: _audiobooksSyncInfo
@property (copy, nonatomic) NSData *cachedRecommendationsData;
@property (copy, nonatomic) NSDate *catalogRecommendationsLastUpdateDate;
@property (copy, nonatomic) NSDictionary *clientPinningSettingsToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL debugSyncInfoEnabled;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *gizmoPodcastDownloadOrders;
@property (copy, nonatomic) NSDictionary *gizmoPodcastEpisodeLimits;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *lastFullySentAssetSyncPlaylistPersistentID; // ivar: _lastFullySentAssetSyncPlaylistPersistentID
@property (copy, nonatomic) NSNumber *lastFullySentAssetSyncPlaylistVersion; // ivar: _lastFullySentAssetSyncPlaylistVersion
@property (copy, nonatomic) NSArray *libraryRecommendationAlbums;
@property (copy, nonatomic) NSDate *libraryRecommendationExpirationDate;
@property (copy, nonatomic) NSArray *libraryRecommendationPlaylists;
@property (copy, nonatomic) NSArray *listenNowPodcastFeedURLs;
@property (copy, nonatomic) NSNumber *minimumNumberOfRecentMusicModelObjects;
@property (readonly, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (copy, nonatomic) NSDictionary *musicRecommendationDict;
@property (copy, nonatomic) NSDictionary *musicSyncInfo; // ivar: _musicSyncInfo
@property (copy, nonatomic) NSArray *pinnedAlbums;
@property (copy, nonatomic) NSArray *pinnedAudiobooks;
@property (copy, nonatomic) NSArray *pinnedPlaylists;
@property (copy, nonatomic) NSArray *pinnedPodcastFeedURLs;
@property (copy, nonatomic) NSArray *pinnedPodcastStationUUIDs;
@property (nonatomic) BOOL pinnedPodcastsAreUserSet;
@property (copy, nonatomic) NSDictionary *podcastsSyncInfo; // ivar: _podcastsSyncInfo
@property (copy, nonatomic) NSArray *readingNowAudiobooks;
@property (nonatomic) BOOL readingNowEnabled;
@property (nonatomic) BOOL savedEpisodesEnabled;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDictionary *syncStateDict;
@property (copy, nonatomic) NSArray *wantToReadAudiobooks;
@property (nonatomic) BOOL wantToReadEnabled;
@property (retain, nonatomic) NSNumber *workoutPlaylistID;


+(id)sharedDefaults;
-(BOOL)_boolForKey:(id)arg0 defaultValue:(BOOL)arg1 ;
-(BOOL)_continueUsingMusicRecommendationKey;
-(BOOL)_deviceHasCapability:(id)arg0 forCapabilitiesKey:(id)arg1 ;
-(BOOL)_phoneHasCapability:(id)arg0 ;
-(BOOL)_watchHasCapability:(id)arg0 ;
-(NSInteger)dormancyIntervalInHoursForBundleID:(id)arg0 ;
-(NSUInteger)_spaceQuotaForNumberOfSongs:(NSUInteger)arg0 ;
-(id)_associatedObject;
-(id)_companionSidePerDeviceDefaults;
-(id)_dateValueForKey:(id)arg0 bundleID:(id)arg1 ;
-(id)_defaultPlaylistPersistentID;
-(id)_defaultWithPrefix:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(id)_lastSyncInfoRequestDateWithPrefix:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(id)_objectForKey:(id)arg0 ;
-(id)_playlistPersistentIDForPlaylistName:(id)arg0 ;
-(id)init;
-(id)installDateForBundleID:(id)arg0 ;
-(id)lastContentUsedDateForBundleID:(id)arg0 ;
-(id)lastLocalPlaybackDateForBundleID:(id)arg0 ;
-(id)lastSyncInfoRequestDateForBundleIdentifier:(id)arg0 ;
-(id)lastUserLaunchDateForBundleID:(id)arg0 ;
-(id)lastUserPinningChangeDateForBundleID:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)podcastSizeEstimationData;
-(void)_addCapability:(id)arg0 forCapabilitiesKey:(id)arg1 ;
-(void)_addPhoneCapability:(id)arg0 ;
-(void)_addWatchCapability:(id)arg0 ;
-(void)_clearAssetSyncPlaylistDependentDefaults;
-(void)_migrateDataIfNecessary;
-(void)_notifyChangesForKey:(id)arg0 ;
-(void)_perDeviceSettingsDidResetNotification:(id)arg0 ;
-(void)_reloadPropertiesFromDefaults;
-(void)_reloadPropertiesFromDefaultsOnMainThread;
-(void)_removeObjectForKey:(id)arg0 ;
-(void)_removeOldMusicRecommendationsInfoIfPossible;
-(void)_resetDomainAccessor;
-(void)_setBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)_setLastSyncInfoRequestDate:(id)arg0 prefix:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_setLegacyObject:(id)arg0 forKey:(id)arg1 ifRemoteDeviceMissingCapability:(id)arg2 ;
-(void)_setNeedsSynchronize;
-(void)_setObject:(id)arg0 forKey:(id)arg1 ;
-(void)_setObject:(id)arg0 forKey:(id)arg1 shouldSynchronizeToPairedDevice:(BOOL)arg2 ;
-(void)_setupNotifiers;
-(void)_writeDate:(id)arg0 forKey:(id)arg1 bundleID:(id)arg2 ;
-(void)_writePropertiesToDefaults;
-(void)beginBatchUpdates;
-(void)clearAppActivityStatusDefaultsForBundleID:(id)arg0 ;
-(void)clearPodcastsDefaults;
-(void)dispatcherDidReceiveNotificationFromOtherProcess:(id)arg0 ;
-(void)dispatcherDidReceiveNotificationFromRemoteDevice:(id)arg0 ;
-(void)endBatchUpdates;
-(void)removeObjectforKey:(id)arg0 ;
-(void)setInstallDateForBundleID:(id)arg0 ;
-(void)setLastContentUsedDateForBundleID:(id)arg0 ;
-(void)setLastLocalPlaybackDateForBundleID:(id)arg0 ;
-(void)setLastSyncInfoRequestDate:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)setLastUserLaunchDateForBundleID:(id)arg0 ;
-(void)setLastUserPinningChangeDateForBundleID:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setPodcastSizeEstimationData:(id)arg0 ;


@end


#endif
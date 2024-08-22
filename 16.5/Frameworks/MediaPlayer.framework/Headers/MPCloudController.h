// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCLOUDCONTROLLER_H
#define MPCLOUDCONTROLLER_H

@class MSVDistributedNotificationObserver, ICCloudClient, ICConnectionConfiguration, ICUserIdentity;
@protocol ICCloudAvailability, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPCloudController : NSObject

@property (readonly, nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (nonatomic) NSInteger activeCount; // ivar: _activeCount
@property (readonly, nonatomic) MSVDistributedNotificationObserver *addToPlaylistBehaviorChangedObserver; // ivar: _addToPlaylistBehaviorChangedObserver
@property (nonatomic) BOOL canDefaultMediaLibraryShowCloudContent; // ivar: _canDefaultMediaLibraryShowCloudContent
@property (nonatomic) BOOL canShowCloudDownloadButtons; // ivar: _canShowCloudDownloadButtons
@property (nonatomic) BOOL canShowCloudMusic; // ivar: _canShowCloudMusic
@property (nonatomic) BOOL canShowCloudVideo; // ivar: _canShowCloudVideo
@property (readonly, nonatomic) NSObject<ICCloudAvailability> *cloudAvailabilityController; // ivar: _cloudAvailabilityController
@property (readonly, nonatomic) ICCloudClient *cloudClient; // ivar: _cloudClient
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cloudClientCallbackQueue; // ivar: _cloudClientCallbackQueue
@property (nonatomic, getter=isCloudEnabled) BOOL cloudEnabled; // ivar: _cloudEnabled
@property (nonatomic, getter=isCloudEnabledValid) BOOL cloudEnabledValid; // ivar: _cloudEnabledValid
@property (nonatomic, getter=isCloudLibraryInitialImport) BOOL cloudLibraryInitialImport; // ivar: _cloudLibraryInitialImport
@property (nonatomic, getter=isCloudLibraryUpdateInProgress) BOOL cloudLibraryUpdateInProgress; // ivar: _cloudLibraryUpdateInProgress
@property (nonatomic, getter=hasCloudLockerAccount) BOOL cloudLockerAccount; // ivar: _cloudLockerAccount
@property (readonly, nonatomic) ICConnectionConfiguration *configuration;
@property (readonly, nonatomic, getter=isEnablingCloudLibraryDestructive) BOOL enablingCloudLibraryDestructive;
@property (readonly, nonatomic, getter=isEnhancedAudioAvailable) BOOL enhancedAudioAvailable;
@property (nonatomic, getter=isInitialImport) BOOL initialImport; // ivar: _initialImport
@property (readonly, nonatomic) BOOL isGeniusEnabled;
@property (nonatomic, getter=isJaliscoInitialImport) BOOL jaliscoInitialImport; // ivar: _jaliscoInitialImport
@property (nonatomic, getter=isJaliscoUpdateInProgress) BOOL jaliscoUpdateInProgress; // ivar: _jaliscoUpdateInProgress
@property (nonatomic) int preferencesChangedNotifyToken; // ivar: _preferencesChangedNotifyToken
@property (nonatomic) BOOL preferencesChangedNotifyTokenIsValid; // ivar: _preferencesChangedNotifyTokenIsValid
@property (nonatomic, getter=hasPurchaseHistoryAccount) BOOL purchaseHistoryAccount; // ivar: _purchaseHistoryAccount
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (nonatomic, getter=isUpdateInProgress) BOOL updateInProgress; // ivar: _updateInProgress
@property (readonly, nonatomic) ICUserIdentity *userIdentity;


+(BOOL)isMediaApplication;
+(id)_controllerWithUserIdentity:(id)arg0 createIfRequired:(BOOL)arg1 ;
+(id)controllerWithUserIdentity:(id)arg0 ;
+(id)controllers;
+(id)globalSerialQueue;
+(id)sharedCloudController;
+(void)_postNotificationName:(id)arg0 controller:(id)arg1 ;
+(void)_postNotificationName:(id)arg0 controller:(id)arg1 userInfo:(id)arg2 ;
+(void)migrateCellularDataPreferencesIfNeeded;
-(BOOL)_handlesSameAccountAs:(id)arg0 ;
-(BOOL)canSetItemProperty:(id)arg0 ;
-(BOOL)canSetPlaylistProperty:(id)arg0 ;
-(BOOL)hasProperNetworkConditionsToPlayMedia;
-(BOOL)hasProperNetworkConditionsToShowCloudMedia;
-(BOOL)hasSetPreferenceForAutomaticDownloads;
-(BOOL)isAutomaticDownloadsEnabled;
-(BOOL)isCellularDataRestricted;
-(BOOL)isCellularDataRestrictedForMusic;
-(BOOL)isCellularDataRestrictedForStoreApps;
-(BOOL)isCellularDataRestrictedForVideos;
-(BOOL)isCloudLibraryEnabled;
-(BOOL)shouldProhibitActionsForCurrentNetworkConditions;
-(BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
-(BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
-(BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
-(NSInteger)_icFavoriteEntityTypeFromMPEntityType:(NSInteger)arg0 ;
-(NSInteger)cloudAddToPlaylistBehavior;
-(id)_initWithUserIdentity:(id)arg0 ;
-(id)_referralForModelObject:(id)arg0 ;
-(id)description;
-(id)init;
-(void)_becomeActiveAndWaitUntilDone:(BOOL)arg0 ;
-(void)_copyObservationStateFrom:(id)arg0 ;
-(void)_initializeUpdateInProgressState;
-(void)_loadIsSagaAuthenticatedWithCompletion:(id)arg0 ;
-(void)_performBlockOnControllerHandlingTheSameAccount:(id)arg0 ;
-(void)_resignActive;
-(void)_setDateModified:(id)arg0 forPlaylistPersistentID:(NSInteger)arg1 ;
-(void)activeUserDidChangeNotification:(id)arg0 ;
-(void)addGeniusPlaylistWithPersistentID:(NSUInteger)arg0 name:(id)arg1 seedItemSagaIDs:(id)arg2 itemSagaIDs:(id)arg3 completionHandler:(id)arg4 ;
-(void)addItemWithSagaID:(NSUInteger)arg0 toPlaylistWithPersistentID:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)addStoreItemWithAdamID:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)addStoreItemWithAdamID:(NSInteger)arg0 referralObject:(id)arg1 completionHandler:(id)arg2 ;
-(void)addStoreItemWithAdamID:(NSInteger)arg0 referralObject:(id)arg1 toPlaylistWithPersistentID:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)addStoreItemWithAdamID:(NSInteger)arg0 toPlaylistWithPersistentID:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)addStorePlaylistWithGlobalID:(id)arg0 completionHandler:(id)arg1 ;
-(void)authenticatedDidChangeNotification:(id)arg0 ;
-(void)becomeActive;
-(void)becomeActiveAndWaitUntilDone:(BOOL)arg0 ;
-(void)canShowCloudDownloadButtonsDidChangeNotification:(id)arg0 ;
-(void)canShowCloudTracksDidChangeNotification:(id)arg0 ;
-(void)createPlaylistWithPersistentID:(NSUInteger)arg0 properties:(id)arg1 trackList:(id)arg2 completionHandler:(id)arg3 ;
-(void)dealloc;
-(void)deprioritizeArtworkRequestForEntityPersistentID:(NSInteger)arg0 entityType:(NSInteger)arg1 artworkType:(NSInteger)arg2 artworkSourceType:(NSInteger)arg3 ;
-(void)disableAutomaticDownloadsWithCompletionHandler:(id)arg0 ;
-(void)disableCloudLibraryWithCompletionHandler:(id)arg0 ;
-(void)disableCloudLibraryWithReason:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)enableAutomaticDownloadsWithCompletionHandler:(id)arg0 ;
-(void)enableCloudLibraryWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)enableICMLErrorReasonChange:(id)arg0 ;
-(void)favoriteAlbumWithCloudLibraryID:(id)arg0 time:(id)arg1 completionHandler:(id)arg2 ;
-(void)favoriteArtistWithCloudLibraryID:(id)arg0 time:(id)arg1 completionHandler:(id)arg2 ;
-(void)favoriteEntityWithSagaID:(NSInteger)arg0 entityType:(NSInteger)arg1 time:(id)arg2 completionHandler:(id)arg3 ;
-(void)favoriteEntityWithStoreID:(NSInteger)arg0 entityType:(NSInteger)arg1 time:(id)arg2 completionHandler:(id)arg3 ;
-(void)favoritePlaylistWithGlobalID:(id)arg0 time:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchRecommendedContentWithSeedTrackID:(NSInteger)arg0 seedTrackIDType:(NSInteger)arg1 count:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)hasProperNetworkConditionsToShowCloudMediaDidChangeNotification:(id)arg0 ;
-(void)hideItemsWithPurchaseHistoryIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)isCellularDataRestrictedDidChangeNotification:(id)arg0 ;
-(void)loadArtworkForEntityPersistentID:(NSInteger)arg0 entityType:(NSInteger)arg1 artworkType:(NSInteger)arg2 artworkSourceType:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)loadArtworkInfoForEntityPersistentID:(NSInteger)arg0 entityType:(NSInteger)arg1 artworkType:(NSInteger)arg2 artworkSourceType:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)loadCloudMusicLibraryUpdateProgressWithCompletionHandler:(id)arg0 ;
-(void)loadGeniusItemsForSagaID:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)loadJaliscoLibraryUpdateProgressWithCompletionHandler:(id)arg0 ;
-(void)loadLastKnownEnableICMLErrorStatusWithCompletionHander:(id)arg0 ;
-(void)loadUpdateProgressWithCompletionHandler:(id)arg0 ;
-(void)processPendingKeyInvalidations;
-(void)publishPlaylistWithSagaID:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)removeItemsWithSagaIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)removePlaylistsWithSagaIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)resignActive;
-(void)sdk_addItemWithSagaID:(NSUInteger)arg0 toPlaylistWithPersistentID:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)sdk_addStoreItemWithOpaqueID:(id)arg0 completionHandler:(id)arg1 ;
-(void)sdk_addStoreItemWithOpaqueID:(id)arg0 toPlaylistWithPersistentID:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)sdk_createPlaylistWithPersistenID:(NSUInteger)arg0 properties:(id)arg1 tracklist:(id)arg2 completionHandler:(id)arg3 ;
-(void)sdk_setPlaylistProperties:(id)arg0 trackList:(id)arg1 forPlaylistWithPersistentID:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)setCloudAddToPlaylistBehavior:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)setCollectionProperties:(id)arg0 forCollectionWithPersistentID:(NSInteger)arg1 groupingType:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)setItemProperties:(id)arg0 forPurchaseHistoryID:(NSUInteger)arg1 ;
-(void)setItemProperties:(id)arg0 forSagaID:(NSUInteger)arg1 ;
-(void)setLikedState:(NSInteger)arg0 forAlbumWithStoreID:(NSInteger)arg1 ;
-(void)setLikedState:(NSInteger)arg0 forAlbumWithStoreID:(NSInteger)arg1 completion:(id)arg2 ;
-(void)setLikedState:(NSInteger)arg0 forEntityWithStoreID:(NSInteger)arg1 withMediaType:(NSUInteger)arg2 timeStamp:(id)arg3 ;
-(void)setLikedState:(NSInteger)arg0 forEntityWithStoreID:(NSInteger)arg1 withMediaType:(NSUInteger)arg2 timeStamp:(id)arg3 completion:(id)arg4 ;
-(void)setLikedState:(NSInteger)arg0 forPlaylistWithGlobalID:(id)arg1 ;
-(void)setLikedState:(NSInteger)arg0 forPlaylistWithGlobalID:(id)arg1 completion:(id)arg2 ;
-(void)setPlaylistProperties:(id)arg0 trackList:(id)arg1 forPlaylistWithPersistentID:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)unfavoriteAlbumWithCloudLibraryID:(id)arg0 time:(id)arg1 completionHandler:(id)arg2 ;
-(void)unfavoriteArtistWithCloudLibraryID:(id)arg0 time:(id)arg1 completionHandler:(id)arg2 ;
-(void)unfavoriteEntityWithSagaID:(NSInteger)arg0 entityType:(NSInteger)arg1 time:(id)arg2 completionHandler:(id)arg3 ;
-(void)unfavoriteEntityWithStoreID:(NSInteger)arg0 entityType:(NSInteger)arg1 time:(id)arg2 completionHandler:(id)arg3 ;
-(void)unfavoritePlaylistWithGlobalID:(id)arg0 time:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateJaliscoMediaLibraryWithReason:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)updateSubscribedPlaylistWithSagaID:(NSUInteger)arg0 ignoreMinRefreshInterval:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)uploadArtworkForPlaylist:(id)arg0 completionHandler:(id)arg1 ;
-(void)uploadCloudItemProperties;
-(void)uploadCloudPlaylistProperties;


@end


#endif
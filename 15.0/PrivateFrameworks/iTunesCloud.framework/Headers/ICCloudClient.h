// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICCLOUDCLIENT_H
#define ICCLOUDCLIENT_H

@class NSString, NSMutableArray, NSXPCConnection;
@protocol ICCloudAvailability, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ICCloudClientAvailabilityService.h"
#import "ICCloudClientCloudService.h"
#import "ICConnectionConfiguration.h"
#import "ICCloudServerListenerEndpointProvider.h"

@interface ICCloudClient : NSObject <ICCloudAvailability>



@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, nonatomic) ICCloudClientAvailabilityService *availabilityService; // ivar: _availabilityService
@property (readonly, nonatomic) ICCloudClientCloudService *cloudService; // ivar: _cloudService
@property (readonly, nonatomic) ICConnectionConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ICCloudServerListenerEndpointProvider *listenerEndpointProvider; // ivar: _listenerEndpointProvider
@property (retain, nonatomic) NSMutableArray *pendingServerSetupCompleteBlocks; // ivar: _pendingServerSetupCompleteBlocks
@property (nonatomic) NSInteger preferredVideoQuality; // ivar: _preferredVideoQuality
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialAccessQueue; // ivar: _serialAccessQueue
@property (nonatomic) BOOL serverIsSetup; // ivar: _serverIsSetup
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serverSetupBlockQueue; // ivar: _serverSetupBlockQueue
@property (readonly) Class superclass;
@property (copy, nonatomic) id *updateJaliscoInProgressChangedHandler; // ivar: _updateJaliscoInProgressChangedHandler
@property (copy, nonatomic) id *updateSagaInProgressChangedHandler; // ivar: _updateSagaInProgressChangedHandler
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;


-(BOOL)_isAuthenticated;
-(BOOL)canShowCloudDownloadButtons;
-(BOOL)canShowCloudMusic;
-(BOOL)canShowCloudVideo;
-(BOOL)createMusicNotificationFromAMSDialogRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)hasProperNetworkConditionsToPlayMedia;
-(BOOL)hasProperNetworkConditionsToShowCloudMedia;
-(BOOL)hasSetPreferenceForAutomaticDownloads;
-(BOOL)isAuthenticated;
-(BOOL)isAutomaticDownloadsEnabledForMediaKindMusic;
-(BOOL)isCellularDataRestricted;
-(BOOL)isCellularDataRestrictedForMusic;
-(BOOL)isCellularDataRestrictedForStoreApps;
-(BOOL)isCellularDataRestrictedForVideos;
-(BOOL)isMediaKindDisabledForJaliscoLibrary:(NSInteger)arg0 ;
-(BOOL)shouldProhibitActionsForCurrentNetworkConditions;
-(BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
-(BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
-(BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithUserIdentity:(id)arg0 ;
-(void)_enableCloudLibraryWithPolicy:(NSInteger)arg0 startinitialImport:(BOOL)arg1 isExplicitUserAction:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)_serverJaliscoUpdateInProgressDidChange;
-(void)_serverSagaUpdateInProgressDidChange;
-(void)_serverSetupDidComplete;
-(void)_setupNotifications;
-(void)_tearDownNotifications;
-(void)addGeniusPlaylistWithPersistentID:(NSInteger)arg0 name:(id)arg1 seedItemSagaIDs:(id)arg2 itemSagaIDs:(id)arg3 completionHandler:(id)arg4 ;
-(void)addItemWithSagaID:(NSInteger)arg0 toPlaylistWithPersistentID:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)addStoreItemWithAdamID:(NSInteger)arg0 referral:(id)arg1 completionHandler:(id)arg2 ;
-(void)addStoreItemWithAdamID:(NSInteger)arg0 referral:(id)arg1 toPlaylistWithPersistentID:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)addStorePlaylistWithGlobalID:(id)arg0 completionHandler:(id)arg1 ;
-(void)authenticateAndStartInitialImport:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)authenticateWithCompletionHandler:(id)arg0 ;
-(void)becomeActive;
-(void)cancelUpdateJaliscoGeniusDataInProgressWithCompletionHandler:(id)arg0 ;
-(void)createPlaylistWithPersistentID:(NSInteger)arg0 properties:(id)arg1 trackList:(id)arg2 completionHandler:(id)arg3 ;
-(void)dealloc;
-(void)deauthenticateWithCompletionHandler:(id)arg0 ;
-(void)deprioritizeAlbumArtistHeroImageForPersistentID:(NSInteger)arg0 ;
-(void)deprioritizeArtistHeroImageForPersistentID:(NSInteger)arg0 ;
-(void)deprioritizeContainerArtworkForSagaID:(NSUInteger)arg0 ;
-(void)deprioritizeItemArtworkForPurchaseHistoryID:(NSUInteger)arg0 ;
-(void)deprioritizeItemArtworkForSagaID:(NSUInteger)arg0 ;
-(void)deprioritizeScreenshotForPurchaseHistoryID:(NSUInteger)arg0 ;
-(void)deprioritizeScreenshotForSagaID:(NSUInteger)arg0 ;
-(void)deprioritizeSubscriptionContainerArtworkForPersistentID:(NSInteger)arg0 ;
-(void)deprioritizeSubscriptionItemArtworkForPersistentID:(NSInteger)arg0 ;
-(void)deprioritizeSubscriptionScreenshotForPersistentID:(NSInteger)arg0 ;
-(void)disableCloudLibraryWithCompletionHandler:(id)arg0 ;
-(void)disableCloudLibraryWithReason:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)disableJaliscoGeniusWithCompletionHandler:(id)arg0 ;
-(void)enableCloudLibraryWithPolicy:(NSInteger)arg0 startInitialImport:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)enableJaliscoGeniusWithCompletionHandler:(id)arg0 ;
-(void)handleAutomaticDownloadPreferenceChangedForMediaKindMusic:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)hideItemsWithPurchaseHistoryIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)importAlbumArtistHeroImageForPersistentID:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)importArtistHeroImageForPersistentID:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)importContainerArtworkForSagaID:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)importItemArtworkForPurchaseHistoryID:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)importItemArtworkForSagaID:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)importScreenshotForPurchaseHistoryID:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)importScreenshotForSagaID:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)importSubscriptionContainerArtworkForPersistentID:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)importSubscriptionItemArtworkForPersistentID:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)importSubscriptionScreenshotForPersistentID:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)isAuthenticatedWithCompletionHandler:(id)arg0 ;
-(void)isAuthenticatedWithQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)listCloudServerOperations;
-(void)loadArtworkInfoForContainerSagaID:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)loadArtworkInfoForContainerSagaIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadArtworkInfoForPurchaseHistoryID:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadArtworkInfoForSagaID:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)loadArtworkInfoForSagaIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadArtworkInfoForSubscriptionContainerPersistentID:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)loadArtworkInfoForSubscriptionContainerPersistentIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadArtworkInfoForSubscriptionItemPersistentID:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)loadArtworkInfoForSubscriptionItemPersistentIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadBooksForStoreIDs:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)loadGeniusItemsForSagaID:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)loadIsJaliscoGeniusSupportedWithCompletionHandler:(id)arg0 ;
-(void)loadIsJaliscoUpdateInProgressWithCompletionHandler:(id)arg0 ;
-(void)loadIsSagaUpdateInProgressWithCompletionHandler:(id)arg0 ;
-(void)loadIsUpdateInProgressWithCompletionHandler:(id)arg0 ;
-(void)loadJaliscoGeniusCUIDWithCompletionHandler:(id)arg0 ;
-(void)loadJaliscoGeniusLearnMoreURLWithCompletionHandler:(id)arg0 ;
-(void)loadJaliscoGeniusOperationStatusWithCompletionHandler:(id)arg0 ;
-(void)loadJaliscoUpdateProgressWithCompletionHandler:(id)arg0 ;
-(void)loadLastKnownEnableICMLErrorStatusWithCompletionHander:(id)arg0 ;
-(void)loadMissingArtwork;
-(void)loadSagaUpdateProgressWithCompletionHandler:(id)arg0 ;
-(void)loadScreenshotInfoForPurchaseHistoryID:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)loadScreenshotInfoForPurchaseHistoryIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadScreenshotInfoForSagaID:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)loadScreenshotInfoForSagaIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadScreenshotInfoForSubscriptionPersistentID:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)loadScreenshotInfoForSubscriptionPersistentIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadUpdateProgressWithCompletionHandler:(id)arg0 ;
-(void)performBlockAfterServerSetup:(id)arg0 ;
-(void)publishPlaylistWithSagaID:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)removeItemsWithSagaIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeJaliscoLibraryWithCompletionHander:(id)arg0 ;
-(void)removePlaylistsWithSagaIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)resignActive;
-(void)sdk_addStoreItemWithOpaqueID:(id)arg0 completionHandler:(id)arg1 ;
-(void)sdk_addStoreItemWithOpaqueID:(id)arg0 toPlaylistWithPersistentID:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)sdk_createPlaylistWithPersistentID:(NSInteger)arg0 properties:(id)arg1 tracklist:(id)arg2 completionHandler:(id)arg3 ;
-(void)setAlbumProperties:(id)arg0 forAlbumPersistentID:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)setCloudAddToPlaylistBehavior:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)setDaemonConfiguration:(NSUInteger)arg0 ;
-(void)setItemProperties:(id)arg0 forPurchaseHistoryID:(NSUInteger)arg1 ;
-(void)setItemProperties:(id)arg0 forSagaID:(NSUInteger)arg1 ;
-(void)setJaliscoGeniusCUID:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)setPlaylistProperties:(id)arg0 trackList:(id)arg1 forPlaylistPersistentID:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)updateArtistHeroImages;
-(void)updateJaliscoGeniusDataWithCompletionHandler:(id)arg0 ;
-(void)updateJaliscoLibraryWithCompletionHandler:(id)arg0 ;
-(void)updateJaliscoLibraryWithReason:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)updatePinnedSubscribedPlaylistsWithCompletion:(id)arg0 ;
-(void)updateSagaLibraryWithCompletionHandler:(id)arg0 ;
-(void)updateSagaLibraryWithReason:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)updateSubscribedPlaylistsWithSagaIDs:(id)arg0 ignoreMinRefreshInterval:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)uploadArtworkForPlaylistWithPersistentID:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)uploadCloudItemProperties;
-(void)uploadCloudPlaylistProperties;
-(void)uploadItemProperties;


@end


#endif
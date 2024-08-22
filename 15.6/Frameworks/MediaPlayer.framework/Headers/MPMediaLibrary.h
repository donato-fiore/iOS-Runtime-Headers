// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMEDIALIBRARY_H
#define MPMEDIALIBRARY_H

@class NSArray, NSMutableDictionary, NSMutableArray, NSPointerArray, NSString, NSDate, ML3MusicLibrary, NSURL, NSNumber, ICUserIdentity;
@protocol _MPActiveUserChangeMonitorDelegate, NSSecureCoding, MPMediaLibraryDataProviderPrivate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MPMediaLibraryPrivacyContext.h"
#import "QueryCriteriaResultsCache.h"
#import "_MPActiveUserChangeMonitor.h"

@interface MPMediaLibrary : NSObject <_MPActiveUserChangeMonitorDelegate, NSSecureCoding>

 {
    MPMediaLibraryPrivacyContext *_privacyContext;
    id<MPMediaLibraryDataProviderPrivate> *_libraryDataProvider;
    NSObject<OS_dispatch_queue> *_entityCacheQueue;
    NSObject<OS_dispatch_queue> *_fixedQueue;
    NSArray *_notificationObservers;
    QueryCriteriaResultsCache *_itemsForCriteriaCache;
    QueryCriteriaResultsCache *_hasItemsForCriteriaCache;
    QueryCriteriaResultsCache *_countOfItemsForCriteriaCache;
    QueryCriteriaResultsCache *_itemResultSetsForCriteriaCache;
    QueryCriteriaResultsCache *_collectionsForCriteriaCache;
    QueryCriteriaResultsCache *_hasCollectionsForCriteriaCache;
    QueryCriteriaResultsCache *_countOfCollectionsForCriteriaCache;
    QueryCriteriaResultsCache *_collectionsResultSetsForCriteriaCache;
    NSMutableDictionary *_hasItemsDidLoadForCriteria;
    NSMutableDictionary *_hasCollectionsDidLoadForCriteria;
    NSMutableDictionary *_countOfCollectionsDidLoadForCriteria;
    NSMutableDictionary *_countOfItemsDidLoadForCriteria;
    NSMutableArray *_additionalLibraryFilterPredicates;
    NSObject<OS_dispatch_queue> *_additionalLibraryFilterPredicatesAccessQueue;
    NSPointerArray *_connectionAssertions;
    NSObject<OS_dispatch_queue> *_connectionAssertionsQueue;
    BOOL _disconnectAfterReleasingAssertions;
    float _connectionProgress;
    NSInteger _removalReason;
    BOOL _determinedHasMedia;
    BOOL _hasMedia;
    BOOL _determinedHasSongs;
    BOOL _hasSongs;
    BOOL _determinedHasGeniusMixes;
    BOOL _hasGeniusMixes;
    BOOL _determinedHasPlaylists;
    BOOL _hasPlaylists;
    BOOL _determinedHasComposers;
    BOOL _hasComposers;
    BOOL _determinedHasPodcasts;
    BOOL _hasPodcasts;
    BOOL _determinedHasUbiquitousBookmarkableItems;
    BOOL _hasUbiquitousBookmarkableContent;
    BOOL _determinedHasAudiobooks;
    BOOL _hasAudiobooks;
    NSInteger _cloudFilteringType;
    BOOL _filteringDisabled;
    BOOL _hasVideos;
    BOOL _determinedHasVideos;
    BOOL _hasMusicVideos;
    BOOL _determinedHasMusicVideos;
    BOOL _hasAudibleAudioBooks;
    BOOL _determinedHasAudibleAudioBooks;
    BOOL _hasMovies;
    BOOL _determinedHasMovies;
    BOOL _hasCompilations;
    BOOL _determinedHasCompilations;
    BOOL _hasITunesU;
    BOOL _determinedHasITunesU;
    BOOL _hasVideoITunesU;
    BOOL _determinedHasVideoITunesU;
    BOOL _hasMovieRentals;
    BOOL _determinedHasMovieRentals;
    BOOL _hasTVShows;
    BOOL _determinedHasTVShows;
    BOOL _hasHomeVideos;
    BOOL _determinedHasHomeVideos;
    BOOL _hasVideoPodcasts;
    BOOL _determinedHasVideoPodcasts;
    unsigned char _originalCellNetworkFlags;
    unsigned char _originalWiFiNetworkFlags;
}


@property (retain, nonatomic, setter=_setMLCoreStorage:) id *_MLCoreStorage; // ivar: __MLCoreStorage
@property (readonly, nonatomic) os_unfair_lock_s _MLCoreStorageLock; // ivar: __MLCoreStorageLock
@property (readonly, nonatomic) *os_unfair_lock_s _MLCoreStorageLockPointer; // ivar: __MLCoreStorageLockPointer
@property (readonly, nonatomic) shared_ptr<mlcore::DeviceLibrary> _MediaLibrary_coreLibrary;
@property (readonly, nonatomic) NSString *_syncValidity;
@property (retain, nonatomic) _MPActiveUserChangeMonitor *activeUserChangeMonitor; // ivar: _activeUserChangeMonitor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) NSInteger libraryChangeObservers; // ivar: _libraryChangeObservers
@property (readonly, nonatomic) ML3MusicLibrary *ml3Library;
@property (readonly, nonatomic) NSURL *protectedContentSupportStorageURL;
@property (nonatomic) NSInteger removalReason;
@property (copy, nonatomic) NSNumber *sagaAccountID;
@property (nonatomic) NSInteger sagaDatabaseUserVersion;
@property (copy, nonatomic) NSDate *sagaLastItemPlayDataUploadDate;
@property (copy, nonatomic) NSDate *sagaLastLibraryUpdateTime;
@property (copy, nonatomic) NSDate *sagaLastPlaylistPlayDataUploadDate;
@property (copy, nonatomic) NSDate *sagaLastSubscribedContainersUpdateTime;
@property (nonatomic) NSInteger sagaOnDiskDatabaseRevision;
@property (copy, nonatomic) NSString *storefrontIdentifier;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) ICUserIdentity *userIdentity; // ivar: _userIdentity


+(BOOL)isLibraryServerDisabled;
+(BOOL)supportsSecureCoding;
+(NSInteger)_mediaLibraryAuthorizationStatusFromCloudServiceAuthorizationStatus:(NSInteger)arg0 ;
+(NSInteger)authorizationStatus;
+(id)_deviceMediaLibraryWithUserIdentity:(id)arg0 createIfRequired:(BOOL)arg1 ;
+(id)_libraryDataProviders;
+(id)_libraryForDataProvider:(id)arg0 ;
+(id)_mediaLibraries;
+(id)_mediaLibraryWithUniqueIdentifier:(id)arg0 userDSID:(id)arg1 ;
+(id)_sharedCloudServiceStatusMonitor;
+(id)defaultMediaLibrary;
+(id)deviceMediaLibrary;
+(id)deviceMediaLibraryWithUserIdentity:(id)arg0 ;
+(id)libraryDataProviders;
+(id)mediaLibraries;
+(id)mediaLibraryWithUniqueIdentifier:(id)arg0 ;
+(id)mediaLibraryWithUniqueIdentifier:(id)arg0 allowsLoadingFromDisk:(BOOL)arg1 ;
+(id)sharedMediaLibraries;
+(void)_endDiscoveringMediaLibrariesIfAllowed;
+(void)_postNotificationName:(id)arg0 library:(id)arg1 ;
+(void)_postNotificationName:(id)arg0 library:(id)arg1 userInfo:(id)arg2 ;
+(void)addLibraryDataProvider:(id)arg0 ;
+(void)beginDiscoveringMediaLibraries;
+(void)endDiscoveringMediaLibraries;
+(void)initialize;
+(void)libraryPathDidChangeForDataProvider:(id)arg0 ;
+(void)logDatabaseAccess;
+(void)postEntitiesAddedOrRemovedNotificationForLibraryDataProvider:(id)arg0 ;
+(void)reloadDisplayValuesForLibraryDataProvider:(id)arg0 ;
+(void)reloadDynamicPropertiesForLibraryDataProvider:(id)arg0 ;
+(void)reloadInvisiblePropertiesForLibraryDataProvider:(id)arg0 ;
+(void)reloadLibraryDataProvider:(id)arg0 ;
+(void)removeLibraryDataProvider:(id)arg0 removalReason:(NSInteger)arg1 ;
+(void)requestAuthorization:(id)arg0 ;
+(void)setDefaultMediaLibrary:(id)arg0 ;
+(void)setGlobalPrivacyClientWithAuditToken:(struct ? )arg0 ;
+(void)setLibraryServerDisabled:(BOOL)arg0 ;
+(void)setRunLoopForNotifications:(id)arg0 ;
+(void)syncGenerationDidChangeForLibraryDataProvider:(id)arg0 ;
+(void)uniqueIdentifierDidChangeForLibraryDataProvider:(id)arg0 ;
-(BOOL)_checkHasContent:(*BOOL)arg0 determined:(*BOOL)arg1 mediaType:(NSUInteger)arg2 queryHasEntitiesBlock:(id)arg3 ;
-(BOOL)_checkHasContent:(*BOOL)arg0 determined:(*BOOL)arg1 queryHasEntitiesBlock:(id)arg2 ;
-(BOOL)_handlesSameAccountAs:(id)arg0 ;
-(BOOL)_hasCollectionsForQueryCriteria:(id)arg0 ;
-(BOOL)_hasItemsForQueryCriteria:(id)arg0 ;
-(BOOL)collectionExistsContainedWithinPersistentIDs:(*NSUInteger)arg0 count:(NSUInteger)arg1 groupingType:(NSInteger)arg2 existentPID:(*NSUInteger)arg3 ;
-(BOOL)collectionExistsContainedWithinSyncIDs:(id)arg0 groupingType:(NSInteger)arg1 existentPID:(*NSUInteger)arg2 ;
-(BOOL)collectionExistsWithCloudUniversalLibraryID:(id)arg0 groupingType:(NSInteger)arg1 existentPID:(*NSUInteger)arg2 ;
-(BOOL)collectionExistsWithName:(id)arg0 groupingType:(NSInteger)arg1 existentPID:(*NSUInteger)arg2 ;
-(BOOL)collectionExistsWithPersistentID:(NSUInteger)arg0 groupingType:(NSInteger)arg1 ;
-(BOOL)collectionExistsWithSagaID:(NSInteger)arg0 groupingType:(NSInteger)arg1 existentPID:(*NSUInteger)arg2 ;
-(BOOL)collectionExistsWithStoreID:(NSInteger)arg0 groupingType:(NSInteger)arg1 existentPID:(*NSUInteger)arg2 ;
-(BOOL)deleteDatabaseProperty:(id)arg0 ;
-(BOOL)deleteItems:(id)arg0 ;
-(BOOL)hasAddedToLibraryAppleMusicContent;
-(BOOL)hasAlbums;
-(BOOL)hasArtists;
-(BOOL)hasAudibleAudioBooks;
-(BOOL)hasAudioITunesUContent;
-(BOOL)hasAudiobooks;
-(BOOL)hasCompilations;
-(BOOL)hasComposers;
-(BOOL)hasGeniusMixes;
-(BOOL)hasGenres;
-(BOOL)hasHomeVideos;
-(BOOL)hasITunesUContent;
-(BOOL)hasMedia;
-(BOOL)hasMediaOfType:(NSUInteger)arg0 ;
-(BOOL)hasMovieRentals;
-(BOOL)hasMovies;
-(BOOL)hasMusicVideos;
-(BOOL)hasPlaylists;
-(BOOL)hasPodcasts;
-(BOOL)hasSongs;
-(BOOL)hasTVShows;
-(BOOL)hasUbiquitousBookmarkableItems;
-(BOOL)hasUserPlaylists;
-(BOOL)hasUserPlaylistsContainingAppleMusicContent;
-(BOOL)hasVideoITunesUContent;
-(BOOL)hasVideoPodcasts;
-(BOOL)hasVideos;
-(BOOL)importOriginalArtworkFromImageData:(id)arg0 withArtworkToken:(id)arg1 artworkType:(NSInteger)arg2 sourceType:(NSInteger)arg3 mediaType:(NSUInteger)arg4 ;
-(BOOL)isCurrentThreadInTransaction;
-(BOOL)isDeviceLibrary;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isGeniusEnabled;
-(BOOL)isHomeSharingLibrary;
-(BOOL)isValidAssetURL:(id)arg0 ;
-(BOOL)itemExistsInDatabaseWithPersistentID:(NSUInteger)arg0 ;
-(BOOL)itemExistsWithPersistentID:(NSUInteger)arg0 ;
-(BOOL)performTransactionWithBlock:(id)arg0 ;
-(BOOL)playlistExistsWithPersistentID:(NSUInteger)arg0 ;
-(BOOL)recordPlayEventForAlbumPersistentID:(NSInteger)arg0 ;
-(BOOL)recordPlayEventForPlaylistPersistentID:(NSInteger)arg0 ;
-(BOOL)removeItems:(id)arg0 ;
-(BOOL)removePlaylist:(id)arg0 ;
-(BOOL)requiresAuthentication;
-(BOOL)setValue:(id)arg0 forDatabaseProperty:(id)arg1 ;
-(BOOL)writable;
-(NSInteger)cloudFilteringType;
-(NSInteger)playlistGeneration;
-(NSInteger)status;
-(NSUInteger)_countOfCollectionsForQueryCriteria:(id)arg0 ;
-(NSUInteger)_countOfItemsForQueryCriteria:(id)arg0 ;
-(NSUInteger)_persistentIDForAssetURL:(id)arg0 ;
-(NSUInteger)currentEntityRevision;
-(NSUInteger)filterAvailableContentGroups:(NSUInteger)arg0 withOptions:(NSUInteger)arg1 ;
-(NSUInteger)syncGenerationID;
-(NSUInteger)syncPlaylistId;
-(float)connectionProgress;
-(id)URLForHomeSharingRequest:(id)arg0 ;
-(id)_collectionPersistentIdentifiersForQueryCriteria:(id)arg0 ;
-(id)_collectionsForQueryCriteria:(id)arg0 ;
// -(id)_getCachedValueForQueryCritiera:(id)arg0 valueCriteriaCache:(id)arg1 entitiesForCriteriaCache:(id)arg2 didLoadBlocksByQueryCriteria:(id)arg3 valueLoadedFromEntitiesArrayBlock:(id)arg4 loadValueFromDataProviderBlock:(unk)arg5  ;
-(id)_initWithLibraryDataProvider:(id)arg0 ;
-(id)_initWithUserIdentity:(id)arg0 ;
-(id)_itemPersistentIdentifiersForQueryCriteria:(id)arg0 ;
-(id)_itemsForQueryCriteria:(id)arg0 ;
-(id)addPlaylistWithName:(id)arg0 ;
-(id)addPlaylistWithName:(id)arg0 activeGeniusPlaylist:(BOOL)arg1 ;
-(id)additionalLibraryFilterPredicates;
-(id)artworkDataSource;
-(id)collectionWithPersistentID:(NSUInteger)arg0 groupingType:(NSInteger)arg1 ;
-(id)collectionWithPersistentID:(NSUInteger)arg0 groupingType:(NSInteger)arg1 verifyExistence:(BOOL)arg2 ;
-(id)connectionAssertionWithIdentifier:(id)arg0 ;
-(id)databasePath;
-(id)decodeItemWithCoder:(id)arg0 ;
-(id)entityCache;
-(id)entityWithLibraryURL:(id)arg0 ;
-(id)entityWithMultiverseIdentifier:(id)arg0 ;
-(id)entityWithPersistentID:(NSInteger)arg0 entityType:(NSInteger)arg1 ;
-(id)entityWithSpotlightIdentifier:(id)arg0 ;
-(id)errorResolverForItem:(id)arg0 ;
-(id)init;
-(id)initWithClientIdentity:(id)arg0 userIdentity:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)itemWithPersistentID:(NSUInteger)arg0 ;
-(id)itemWithPersistentID:(NSUInteger)arg0 verifyExistence:(BOOL)arg1 ;
-(id)itemWithStoreID:(NSUInteger)arg0 ;
-(id)libraryDataProvider;
-(id)localizedSectionHeaderForSectionIndex:(NSUInteger)arg0 ;
-(id)localizedSectionIndexTitles;
-(id)multiverseIdentifierForCollectionWithPersistentID:(NSInteger)arg0 groupingType:(NSInteger)arg1 ;
-(id)multiverseIdentifierForTrackWithPersistentID:(NSInteger)arg0 ;
-(id)name;
-(id)newPlaylistWithPersistentID:(NSUInteger)arg0 ;
-(id)pathForAssetURL:(id)arg0 ;
-(id)photosMemoriesPlaylist;
-(id)playbackHistoryPlaylist;
-(id)playlistWithPersistentID:(NSUInteger)arg0 ;
-(id)preferredAudioLanguages;
-(id)preferredSubtitleLanguages;
-(id)syncValidity;
-(id)uniqueIdentifier;
-(id)valueForDatabaseProperty:(id)arg0 ;
-(unsigned int)homeSharingDatabaseID;
-(void)_activeUserDidChangeNotification:(id)arg0 ;
-(void)_canShowCloudTracksDidChangeNotification:(id)arg0 ;
-(void)_clearCachedContentDataAndResultSets:(BOOL)arg0 ;
-(void)_clearCachedEntitiesIncludingResultSets:(BOOL)arg0 ;
-(void)_clearPendingDisconnection;
-(void)_didReceiveMemoryWarning:(id)arg0 ;
-(void)_disconnect;
-(void)_displayValuesDidChangeNotification:(id)arg0 ;
-(void)_performBlockOnLibraryHandlingTheSameAccount:(id)arg0 ;
-(void)_reloadLibraryForContentsChangeWithNotificationInfo:(id)arg0 ;
-(void)_reloadLibraryForDynamicPropertyChangeWithNotificationInfo:(id)arg0 ;
-(void)_reloadLibraryForInvisiblePropertyChangeWithNotificationInfo:(id)arg0 ;
-(void)_reloadLibraryForPathChange;
-(void)_reloadLibraryForRestrictionsChange;
-(void)_removeConnectionAssertion:(id)arg0 ;
-(void)_scheduleLibraryChangeNotificationPostingBlock:(id)arg0 ;
-(void)_setLibraryFilterPredicates;
-(void)_setupNotifications;
-(void)_tearDownNotifications;
-(void)activeUserChangeDidFinish;
-(void)addGlobalPlaylistWithID:(id)arg0 andAddToCloudLibrary:(BOOL)arg1 completion:(id)arg2 ;
-(void)addItemWithProductID:(id)arg0 completionHandler:(id)arg1 ;
-(void)addLibraryFilterPredicate:(id)arg0 ;
-(void)addNonLibraryOwnedPlaylistWithGlobalID:(id)arg0 completion:(id)arg1 ;
-(void)addNonLibraryOwnedPlaylistsWithGlobalIDs:(id)arg0 completion:(id)arg1 ;
-(void)addPlaylistStoreItemsWithMetadata:(id)arg0 completion:(id)arg1 ;
-(void)addStoreItem:(NSInteger)arg0 andAddTracksToCloudLibrary:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)addStoreItemIDs:(id)arg0 andAddTracksToCloudLibrary:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)addStoreItemIDs:(id)arg0 referralObject:(id)arg1 andAddTracksToCloudLibrary:(BOOL)arg2 withCompletion:(id)arg3 ;
-(void)addTracksToMyLibrary:(id)arg0 ;
-(void)beginGeneratingLibraryChangeNotifications;
-(void)clearLocationPropertiesOfItem:(id)arg0 ;
-(void)clearSagaCloudAccountID;
-(void)clearSagaLastItemPlayDataUploadDate;
-(void)clearSagaLastPlaylistPlayDataUploadDate;
-(void)connectWithAuthenticationData:(id)arg0 completionBlock:(id)arg1 ;
-(void)connectWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)disconnect;
-(void)downloadAsset:(id)arg0 completionHandler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endGeneratingLibraryChangeNotifications;
-(void)enumerateEntityChangesAfterSyncAnchor:(id)arg0 maximumRevisionType:(NSInteger)arg1 inUsersLibrary:(BOOL)arg2 usingBlock:(id)arg3 ;
-(void)enumerateEntityChangesAfterSyncAnchor:(id)arg0 maximumRevisionType:(NSInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumerateEntityChangesAfterSyncAnchor:(id)arg0 usingBlock:(id)arg1 ;
-(void)geniusItemsForSeedItem:(id)arg0 completion:(id)arg1 ;
-(void)getPlaylistWithUUID:(id)arg0 creationMetadata:(id)arg1 completionHandler:(id)arg2 ;
-(void)importArtworkTokenForEntityPersistentID:(NSUInteger)arg0 entityType:(NSInteger)arg1 artworkToken:(id)arg2 artworkType:(NSInteger)arg3 sourceType:(NSInteger)arg4 ;
-(void)logDatabaseAccess;
-(void)performReadTransactionWithBlock:(id)arg0 ;
-(void)performStoreItemLibraryImport:(id)arg0 withCompletion:(id)arg1 ;
-(void)populateLocationPropertiesOfItem:(id)arg0 withPath:(id)arg1 assetProtectionType:(NSInteger)arg2 ;
-(void)populateLocationPropertiesOfItem:(id)arg0 withPath:(id)arg1 assetProtectionType:(NSInteger)arg2 completionBlock:(id)arg3 ;
-(void)removeLibraryFilterPredicate:(id)arg0 ;
-(void)setClientIdentity:(id)arg0 ;
-(void)setCloudFilteringType:(NSInteger)arg0 ;
-(void)setSyncPlaylistId:(NSUInteger)arg0 ;
-(void)setValues:(id)arg0 forProperties:(id)arg1 forItemPersistentIDs:(id)arg2 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ML3MUSICLIBRARY_H
#define ML3MUSICLIBRARY_H

@class NSString, NSLock, NSMapTable, NSNumber, NSArray, NSDate;
@protocol ML3DatabaseConnectionDelegate, ML3DatabaseConnectionPoolDelegate, NSSecureCoding, _MSVAccountInformationProviding, ML3MusicLibraryDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ML3AccountCacheDatabase.h"
#import "ML3DatabasePrivacyContext.h"
#import "ML3DatabaseConnectionPool.h"
#import "ML3Container.h"
#import "ML3DatabaseMetadata.h"
#import "ML3LibraryNotificationManager.h"
#import "ML3MusicLibraryResourcesManager.h"

@interface ML3MusicLibrary : NSObject <ML3DatabaseConnectionDelegate, ML3DatabaseConnectionPoolDelegate, NSSecureCoding, _MSVAccountInformationProviding>

 {
    NSString *_libraryUID;
    NSLock *_libraryUIDLock;
    NSString *_syncLibraryUID;
    ML3AccountCacheDatabase *_accountCacheDatabase;
    ML3DatabasePrivacyContext *_privacyContext;
    NSMapTable *_optimizedLibraryEntityFilterPredicatesByEntityClass;
    NSMapTable *_optimizedLibraryContainerFilterPredicatesByContainerClass;
    NSMapTable *_optimizedLibraryPublicEntityFilterPredicatesByEntityClass;
    NSMapTable *_optimizedLibraryPublicContainerFilterPredicatesByContainerClass;
    BOOL _isHomeSharingLibraryLoaded;
    BOOL _isHomeSharingLibrary;
}


@property (readonly, copy, nonatomic) NSString *accountDSID; // ivar: _accountDSID
@property (readonly, copy, nonatomic) NSString *artworkDirectory;
@property (readonly, nonatomic) NSInteger autoFilledTracksTotalSize;
@property (readonly, nonatomic) ML3DatabaseConnectionPool *connectionPool; // ivar: _connectionPool
@property (readonly, nonatomic) NSInteger currentContentRevision;
@property (readonly, nonatomic) ML3Container *currentDevicePhotosMemoriesPlaylist;
@property (readonly, nonatomic) ML3Container *currentDevicePlaybackHistoryPlaylist;
@property (readonly, nonatomic) ML3Container *currentDevicePurchasesPlaylist;
@property (readonly, nonatomic) NSInteger currentRevision;
@property (readonly, nonatomic) ML3DatabaseMetadata *databaseInfo;
@property (readonly, nonatomic) NSString *databasePath; // ivar: _databasePath
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ML3MusicLibraryDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL downloadOnAddToLibrary;
@property (readonly, nonatomic) BOOL hasAddedToLibraryAppleMusicContent;
@property (readonly, nonatomic) BOOL hasUserPlaylists;
@property (readonly, nonatomic) BOOL hasUserPlaylistsContainingAppleMusicContent;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isHomeSharingLibrary;
@property (copy, nonatomic) NSNumber *jaliscoAccountID;
@property (nonatomic) BOOL jaliscoHasCloudGeniusData;
@property (nonatomic) BOOL jaliscoIsMusicGeniusUserEnabled;
@property (readonly, nonatomic) NSArray *jaliscoLastExcludedMediaKinds;
@property (copy, nonatomic) NSDate *jaliscoLastGeniusUpdateDate;
@property (copy, nonatomic) NSDate *jaliscoLastLibraryUpdateTime;
@property (copy, nonatomic) NSString *jaliscoLastSupportedMediaKinds;
@property (nonatomic) BOOL jaliscoNeedsUpdateForTokens;
@property (nonatomic) NSInteger jaliscoOnDiskDatabaseRevision;
@property (retain, nonatomic) NSArray *libraryContainerFilterPredicates; // ivar: _libraryContainerFilterPredicates
@property (readonly, nonatomic, getter=isLibraryEmpty) BOOL libraryEmpty;
@property (retain, nonatomic) NSArray *libraryEntityFilterPredicates; // ivar: _libraryEntityFilterPredicates
@property (retain, nonatomic) NSArray *libraryPublicContainerFilterPredicates; // ivar: _libraryPublicContainerFilterPredicates
@property (retain, nonatomic) NSArray *libraryPublicEntityFilterPredicates; // ivar: _libraryPublicEntityFilterPredicates
@property (readonly, nonatomic) NSString *libraryUID;
@property (readonly, nonatomic) NSArray *localizedSectionIndexTitles;
@property (readonly, nonatomic) BOOL mediaRestrictionEnabled;
@property (retain, nonatomic) ML3LibraryNotificationManager *notificationManager; // ivar: _notificationManager
@property (readonly, copy, nonatomic) NSString *originalArtworkDirectory;
@property (readonly, nonatomic) NSArray *preferredAudioTracks;
@property (readonly, nonatomic) NSArray *preferredSubtitleTracks;
@property (nonatomic) NSInteger preferredVideoQuality;
@property (readonly, nonatomic) ML3DatabasePrivacyContext *privacyContext;
@property (nonatomic, getter=isReadOnly) BOOL readOnly; // ivar: _readOnly
@property (readonly, nonatomic) ML3MusicLibraryResourcesManager *resourcesManager; // ivar: _resourcesManager
@property (readonly, copy, nonatomic) NSString *rootArtworkCacheDirectory;
@property (copy, nonatomic) NSNumber *sagaAccountID;
@property (nonatomic) NSInteger sagaCloudAddToPlaylistBehavior;
@property (copy, nonatomic) NSString *sagaCloudLibraryCUID;
@property (copy, nonatomic) NSString *sagaCloudLibraryTroveID;
@property (nonatomic) NSInteger sagaDatabaseUserVersion;
@property (copy, nonatomic) NSDate *sagaLastGeniusUpdateDate;
@property (copy, nonatomic) NSDate *sagaLastItemPlayDataUploadDate;
@property (copy, nonatomic) NSNumber *sagaLastKnownActiveLockerAccountDSID;
@property (copy, nonatomic) NSDate *sagaLastLibraryUpdateTime;
@property (copy, nonatomic) NSDate *sagaLastPlaylistPlayDataUploadDate;
@property (copy, nonatomic) NSDate *sagaLastSubscribedContainersUpdateTime;
@property (nonatomic) BOOL sagaNeedsFullUpdateAfterNextUpdate;
@property (nonatomic) NSInteger sagaOnDiskDatabaseRevision;
@property (nonatomic) BOOL sagaPrefersToMergeWithCloudLibrary;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly, nonatomic) *iPhoneSortKeyBuilder sortKeyBuilder; // ivar: _sortKeyBuilder
@property (copy, nonatomic) NSString *storefrontIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsUbiquitousPlaybackPositions;
@property (nonatomic) NSInteger syncGenerationID;
@property (nonatomic) NSString *syncLibraryID;
@property (nonatomic, getter=isUsingSharedLibraryPath) BOOL usingSharedLibraryPath; // ivar: _usingSharedLibraryPath


+(BOOL)deviceSupportsASTC;
+(BOOL)deviceSupportsMultipleLibraries;
+(BOOL)dropIndexesUsingConnection:(id)arg0 tableNames:(char *)arg1 ;
+(BOOL)orderingLanguageMatchesSystemUsingConnection:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(BOOL)updateTrackIntegrityOnConnection:(id)arg0 ;
+(BOOL)userVersionMatchesSystemUsingConnection:(id)arg0 ;
+(NSInteger)artworkSourceTypeForTrackSource:(int)arg0 ;
+(NSInteger)devicePreferredImageFormat;
+(id)_onGlobalQueue_shareableMusicLibraryWithResourcesManager:(id)arg0 ;
+(id)allLibraries;
+(id)allLibraryContainerPaths;
+(id)allPragmaSQL;
+(id)allSchemaSQL;
+(id)allTables;
+(id)allTriggersSQL;
+(id)artworkRelativePathFromToken:(id)arg0 ;
+(id)artworkTokenForArtistHeroURL:(id)arg0 ;
+(id)artworkTokenForChapterWithItemPID:(NSInteger)arg0 retrievalTime:(CGFloat)arg1 ;
+(id)assistantSyncDataChangedNotificationName;
+(id)autoupdatingSharedLibrary;
+(id)autoupdatingSharedLibraryPath;
+(id)cloudAssetsSharedCacheFolderPath;
+(id)databasePathForUnitTest:(id)arg0 withBasePath:(id)arg1 ;
+(id)distributedToLocalNotificationMapping;
+(id)globalSerialQueue;
+(id)indexSchemaSQL;
+(id)itemIndexSchemaSQL;
+(id)itemNewSchemaSQL;
+(id)itemSchemaSQL;
+(id)jaliscoGetSortedMediaKinds:(id)arg0 ;
+(id)libraryContainerPath;
+(id)libraryContainerPathByAppendingPathComponent:(id)arg0 ;
+(id)libraryContainerRelativePath:(id)arg0 ;
+(id)libraryPathForContainerPath:(id)arg0 ;
+(id)localizedSectionHeaderForSectionHeader:(id)arg0 ;
+(id)localizedSectionIndexTitleForSectionHeader:(id)arg0 ;
+(id)mediaFolderPath;
+(id)mediaFolderPathByAppendingPathComponent:(id)arg0 ;
+(id)musicLibraryForUserAccount:(id)arg0 ;
+(id)musicLibraryPerUserDSID;
+(id)pathForBaseLocationPath:(NSInteger)arg0 ;
+(id)pathForResourceFileOrFolder:(int)arg0 ;
+(id)pathForResourceFileOrFolder:(int)arg0 basePath:(id)arg1 relativeToBase:(BOOL)arg2 createParentFolderIfNecessary:(BOOL)arg3 ;
+(id)registeredLibraries;
+(id)sectionIndexTitleForSectionHeader:(id)arg0 ;
+(id)sectionIndexTitles;
+(id)sharedLibrary;
+(id)sharedLibraryDatabasePath;
+(id)sortMapNewSchemaSQL;
+(id)sortMapSchemaSQL;
+(id)storeLinkSchemaSQL;
+(id)unitTestableLibraryForTest:(id)arg0 basePath:(id)arg1 setupSQLFilenames:(id)arg2 ;
+(id)widthLimitedSetValuesQueue;
+(int)userVersionUsingConnection:(id)arg0 ;
+(void)clearCloudAssetSharedCache;
+(void)disableAutomaticDatabaseValidation;
+(void)disableSharedLibrary;
+(void)enableAutomaticDatabaseValidation;
+(void)enumerateSortMapTablesUsingBlock:(id)arg0 ;
+(void)removeOrphanedTracks;
+(void)setAutoupdatingSharedLibraryPath:(id)arg0 ;
+(void)setGlobalPrivacyContextWithAuditToken:(struct ? )arg0 ;
+(void)setSharedLibraryDatabasePath:(id)arg0 ;
-(BOOL)_canConfigureMediaLibraryDatabaseConnection:(id)arg0 ;
-(BOOL)_clearAllRowsFromTables:(id)arg0 ;
-(BOOL)_coalesceMismatchedCollectionClass:(Class)arg0 usingConnection:(id)arg1 ;
-(BOOL)_determineAndUpdateBestArtworkTokensForEntityPersistentID:(NSInteger)arg0 entityType:(NSInteger)arg1 artworkType:(NSInteger)arg2 retrievalTime:(CGFloat)arg3 preserveExistingAvailableToken:(BOOL)arg4 usingConnection:(id)arg5 ;
-(BOOL)_insertArtworkRowWithArtworkToken:(id)arg0 artworkType:(NSInteger)arg1 sourceType:(NSInteger)arg2 relativePath:(id)arg3 ;
-(BOOL)_insertArtworkRowWithArtworkToken:(id)arg0 artworkType:(NSInteger)arg1 sourceType:(NSInteger)arg2 relativePath:(id)arg3 usingConnection:(id)arg4 ;
-(BOOL)_prepareForAccountChange:(*id)arg0 ;
-(BOOL)_removeInvalidAvailableArtworkTokensUsingConnection:(id)arg0 ;
-(BOOL)_removeOrphanedArtworkAssetsUsingConnection:(id)arg0 ;
-(BOOL)_removeOrphanedArtworkMetadataUsingConnection:(id)arg0 ;
-(BOOL)_removeOrphanedArtworkTokensUsingConnection:(id)arg0 ;
-(BOOL)_shouldProcessAccountChanges;
-(BOOL)_shouldPurgeAllArtworkAtUrgency:(NSUInteger)arg0 ;
-(BOOL)_shouldPurgeKeepLocalTracksForUrgency:(NSUInteger)arg0 ;
-(BOOL)_updateBestArtworkTokensForArtworkToken:(id)arg0 artworkType:(NSInteger)arg1 sourceType:(NSInteger)arg2 preserveExistingAvailableToken:(BOOL)arg3 usingConnection:(id)arg4 ;
-(BOOL)_validateDatabaseUsingConnection:(id)arg0 error:(*id)arg1 ;
-(BOOL)autoFilledTracksArePurgeable;
-(BOOL)automaticDatabaseValidationDisabled;
-(BOOL)cleanupArtworkWithOptions:(NSUInteger)arg0 ;
-(BOOL)cleanupArtworkWithOptions:(NSUInteger)arg0 usingConnection:(id)arg1 ;
-(BOOL)clearAllCloudKVSData;
-(BOOL)clearAllGeniusData;
-(BOOL)coalesceMismatchedCollectionsUsingConnection:(id)arg0 ;
-(BOOL)coerceValidDatabaseWithError:(*id)arg0 ;
-(BOOL)createIndexes;
-(BOOL)deleteArtworkToken:(id)arg0 ;
-(BOOL)deleteDatabaseProperty:(id)arg0 ;
-(BOOL)emptyAllTables;
-(BOOL)hasOriginalArtworkForRelativePath:(id)arg0 ;
-(BOOL)hasPresignedValidity;
-(BOOL)importExistingOriginalArtworkWithArtworkToken:(id)arg0 artworkType:(NSInteger)arg1 sourceType:(NSInteger)arg2 mediaType:(unsigned int)arg3 ;
-(BOOL)importOriginalArtworkFromFileURL:(id)arg0 withArtworkToken:(id)arg1 artworkType:(NSInteger)arg2 sourceType:(NSInteger)arg3 mediaType:(unsigned int)arg4 ;
-(BOOL)importOriginalArtworkFromImageData:(id)arg0 withArtworkToken:(id)arg1 artworkType:(NSInteger)arg2 sourceType:(NSInteger)arg3 mediaType:(unsigned int)arg4 ;
-(BOOL)inTransactionUpdateSearchMapOnConnection:(id)arg0 ;
-(BOOL)inTransactionUpdateSortMapOnConnection:(id)arg0 forceRebuild:(BOOL)arg1 forceUpdateOriginals:(BOOL)arg2 ;
-(BOOL)inTransactionUpdateSortMapOnConnection:(id)arg0 forceUpdateOriginals:(BOOL)arg1 ;
-(BOOL)isArtworkFetchableForPersistentID:(NSInteger)arg0 entityType:(NSInteger)arg1 artworkType:(NSInteger)arg2 artworkSourceType:(NSInteger)arg3 ;
-(BOOL)isArtworkTokenAvailable:(id)arg0 ;
-(BOOL)isCurrentThreadInTransaction;
-(BOOL)persistentID:(NSInteger)arg0 changedAfterRevision:(NSInteger)arg1 revisionTrackingCode:(NSInteger)arg2 ;
-(BOOL)prepareUnitTestDatabaseWithSQLFromContentsOfFile:(id)arg0 error:(*id)arg1 ;
-(BOOL)recordPlayEventForAlbumPersistentID:(NSInteger)arg0 ;
-(BOOL)recordPlayEventForContainerPersistentID:(NSInteger)arg0 ;
-(BOOL)removeArtworkAssetWithToken:(id)arg0 ;
-(BOOL)repairAlbumArtistRelationshipsWithConnection:(id)arg0 ;
-(BOOL)requiresNonSchemaUpdatesOnConnection:(id)arg0 ;
-(BOOL)requiresSchemaOnlyUpdatesOnConnection:(id)arg0 ;
-(BOOL)setValue:(id)arg0 forDatabaseProperty:(id)arg1 ;
-(BOOL)shouldOptimizeStorage;
-(BOOL)updateSortMap;
-(BOOL)updateSortMapOnConnection:(id)arg0 ;
-(BOOL)updateSortMapOnConnection:(id)arg0 forceUpdateOriginals:(BOOL)arg1 ;
-(BOOL)updateSystemPlaylistNamesForCurrentLanguageUsingConnection:(id)arg0 ;
-(BOOL)validateDatabase;
-(BOOL)validateSortMapUnicodeVersionOnConnection:(id)arg0 ;
-(BOOL)verifyPresignedValidity;
-(NSInteger)_clearAllCloudAssets;
-(NSInteger)_clearDatabaseFileFreeSpace;
-(NSInteger)_clearOrphanedAssetsOfAmount:(NSInteger)arg0 withUrgency:(NSUInteger)arg1 ;
-(NSInteger)_clearPurgeableTracksOfAmount:(NSInteger)arg0 withUrgency:(NSUInteger)arg1 includeAutoFilledTracks:(BOOL)arg2 ;
-(NSInteger)_clearPurgeableTracksOfAmount:(NSInteger)arg0 withUrgency:(NSUInteger)arg1 includeCloudAssets:(BOOL)arg2 includeAutoFilledTracks:(BOOL)arg3 ;
-(NSInteger)_cloudAssetsTotalSize;
-(NSInteger)_databaseFileFreeSpace;
-(NSInteger)_purgeableTracksTotalSizeWithUrgency:(NSUInteger)arg0 includeAutoFilledTracks:(BOOL)arg1 ;
-(NSInteger)autoFilledTracksTotalSizeWithUrgency:(NSUInteger)arg0 ;
-(NSInteger)clearAllRemovedTracks;
-(NSInteger)clearPurgeableStorageAmount:(NSInteger)arg0 withUrgency:(NSUInteger)arg1 ;
-(NSInteger)clearPurgeableStorageAmount:(NSInteger)arg0 withUrgency:(NSUInteger)arg1 includeAutoFilledTracks:(BOOL)arg2 ;
-(NSInteger)deleteAutoFilledTracksOfAtLeastTotalSize:(NSInteger)arg0 ;
-(NSInteger)deleteAutoFilledTracksOfAtLeastTotalSize:(NSInteger)arg0 urgency:(NSUInteger)arg1 ;
-(NSInteger)deleteAutoFilledTracksOfAtLeastTotalSize:(NSInteger)arg0 urgency:(NSUInteger)arg1 respectSongMattress:(BOOL)arg2 ;
-(NSInteger)insertStringIntoSortMapNoTransaction:(id)arg0 ;
-(NSInteger)minimumPurgeableStorage;
-(NSInteger)purgeableStorageSizeWithUrgency:(NSUInteger)arg0 ;
-(NSInteger)purgeableStorageSizeWithUrgency:(NSUInteger)arg0 includeAutoFilledTracks:(BOOL)arg1 ;
-(NSInteger)syncIdFromMultiverseId:(id)arg0 ;
-(NSUInteger)_artworkTotalSize;
-(NSUInteger)_clearPurgeableArtworkOfAmount:(NSInteger)arg0 withUrgency:(NSUInteger)arg1 ;
-(NSUInteger)_managedClearPurgeableTracksOfAmount:(NSUInteger)arg0 urgency:(NSUInteger)arg1 ;
-(NSUInteger)_managedPurgeableTracksTotalSizeWithUrgency:(NSUInteger)arg0 ;
-(NSUInteger)_purgeAllArtwork;
-(NSUInteger)_purgeableArtworkTotalSizeWithUrgency:(NSUInteger)arg0 ;
-(NSUInteger)_totalSizeForAllNonCacheTracks;
-(NSUInteger)countOfChangedPersistentIdsAfterRevision:(NSInteger)arg0 revisionTrackingCode:(NSUInteger)arg1 maximumRevisionType:(int)arg2 ;
-(NSUInteger)sectionIndexTitleIndexForSectionIndex:(NSUInteger)arg0 ;
-(NSUInteger)unknownSectionIndex;
-(id)_allArtworkVariantDirectories;
-(id)_allKeepLocalPlaylistTracks;
-(id)_newGeniusDBConnectionAtPath:(id)arg0 ;
-(id)_nonPurgeableAlbumsQuerySQLWithUrgency:(NSUInteger)arg0 ;
-(id)_notInKeepLocalCollectionPredicate;
-(id)_purgeableAlbumsQuerySQLWithUrgency:(NSUInteger)arg0 ;
-(id)_purgeableItemsPredicateSQLWithUrgency:(NSUInteger)arg0 ;
-(id)_purgeableTrackPredicateWithUrgency:(NSUInteger)arg0 includeAutoFilledTracks:(BOOL)arg1 includeCloudAssets:(BOOL)arg2 ;
-(id)_systemUnicodeVersionData;
-(id)accountCacheDatabase;
-(id)albumArtistForEffectiveAlbumArtistName:(id)arg0 ;
-(id)albumForAlbumArtistPersistentID:(NSInteger)arg0 albumName:(id)arg1 feedURL:(id)arg2 seasonNumber:(id)arg3 compilation:(BOOL)arg4 ;
-(id)artistForArtistName:(id)arg0 seriesName:(id)arg1 ;
-(id)artistGroupingKeyForArtistName:(id)arg0 seriesName:(id)arg1 ;
-(id)artworkCacheDirectoryForEffect:(id)arg0 ;
-(id)artworkCacheDirectoryForSize:(struct CGSize )arg0 ;
-(id)checkoutReaderConnection;
-(id)checkoutWriterConnection;
-(id)composerForComposerName:(id)arg0 ;
-(id)genreForGenre:(id)arg0 ;
-(id)groupingKeyForString:(id)arg0 ;
-(id)groupingKeysForStrings:(id)arg0 ;
-(id)initWithClientIdentity:(id)arg0 forUserAccount:(id)arg1 ;
-(id)initWithClientIdentity:(id)arg0 path:(id)arg1 ;
-(id)initWithClientIdentity:(id)arg0 path:(id)arg1 readOnly:(BOOL)arg2 populateUnitTestTablesBlock:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(id)initWithPath:(id)arg0 readOnly:(BOOL)arg1 populateUnitTestTablesBlock:(id)arg2 ;
-(id)initWithResourcesManager:(id)arg0 ;
-(id)insertStringsIntoSortMap:(id)arg0 ;
-(id)insertStringsIntoSortMap:(id)arg0 didReSortMap:(*BOOL)arg1 ;
-(id)libraryContainerPath;
-(id)libraryContainerPathByAppendingPathComponent:(id)arg0 ;
-(id)libraryContainerRelativePath:(id)arg0 ;
-(id)libraryEntityFilterPredicatesForContainerClass:(Class)arg0 ;
-(id)libraryEntityFilterPredicatesForEntityClass:(Class)arg0 ;
-(id)localizedSectionHeaderForSectionIndex:(NSUInteger)arg0 ;
-(id)pathForBaseLocationPath:(NSInteger)arg0 ;
-(id)pathForResourceFileOrFolder:(int)arg0 ;
-(id)pathForResourceFileOrFolder:(int)arg0 basePath:(id)arg1 relativeToBase:(BOOL)arg2 createParentFolderIfNecessary:(BOOL)arg3 ;
-(id)uppService;
-(id)valueForDatabaseProperty:(id)arg0 ;
-(int)currentDatabaseVersion;
-(struct ? )nameOrderForString:(id)arg0 ;
-(void)_autogenerateArtworkForRelativePath:(id)arg0 artworkType:(NSInteger)arg1 mediaType:(unsigned int)arg2 completionHandler:(id)arg3 ;
-(void)_closeAndLockCurrentDatabaseConnections;
-(void)_completeAccountChangeWithPath:(id)arg0 ;
-(void)_configureMediaLibraryDatabaseConnection:(id)arg0 ;
-(void)_convertOriginalArtworkToDevicePreferredFormatFromSourceURL:(id)arg0 toDestinationURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)_deleteAllArtworkVariantsAtRelativePaths:(id)arg0 ;
-(void)_effectiveSettingsDidChangeNotification:(id)arg0 ;
-(void)_enumeratePurgeableAlbumTracksForUrgency:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)_enumeratePurgeablePodcastEpisodesForUrgency:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)_enumeratePurgeableStreamedTracksForUrgency:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)_enumeratePurgeableTracksForUrgency:(NSUInteger)arg0 includeAutoFilledTracks:(BOOL)arg1 includeCloudAssets:(BOOL)arg2 usingBlock:(id)arg3 ;
-(void)_libraryPathDidChangeNotification:(id)arg0 ;
-(void)_logDatabaseAccess;
-(void)_postClientNotificationWithDistributedName:(id)arg0 localName:(id)arg1 ;
-(void)_setupNotificationManager;
-(void)_tearDownNotificationManager;
-(void)_teardownMediaLibraryDatabaseConnection:(id)arg0 ;
-(void)_updateSystemPlaylist:(id)arg0 withName:(id)arg1 usingConnection:(id)arg2 ;
-(void)accessSortKeyBuilder:(id)arg0 ;
-(void)autogenerateSupportedSizesForAllOriginalArtworkWithConnection:(id)arg0 completionHandler:(id)arg1 ;
-(void)checkInDatabaseConnection:(id)arg0 ;
-(void)clearJaliscoAccountID;
-(void)clearJaliscoLastExcludedMediaKinds;
-(void)clearJaliscoLastGeniusUpdateDate;
-(void)clearSagaCloudAccountID;
-(void)clearSagaCloudAddToPlaylistBehavior;
-(void)clearSagaCloudLibraryCUID;
-(void)clearSagaCloudLibraryTroveID;
-(void)clearSagaLastGeniusUpdateDate;
-(void)clearSagaLastItemPlayDataUploadDate;
-(void)clearSagaLastPlaylistPlayDataUploadDate;
-(void)clearSagaPrefersToMergeWithCloudLibrary;
-(void)connection:(id)arg0 didEndDatabaseTransactionAndCommit:(BOOL)arg1 ;
-(void)connectionDidAccessDatabase:(id)arg0 ;
-(void)connectionDidBeginDatabaseTransaction:(id)arg0 ;
-(void)connectionDidOpenDatabase:(id)arg0 ;
-(void)connectionPool:(id)arg0 createdNewConnection:(id)arg1 ;
-(void)connectionWillCloseDatabase:(id)arg0 ;
-(void)connectionWillOpenDatabase:(id)arg0 ;
-(void)databaseConnectionAllowingWrites:(BOOL)arg0 withBlock:(id)arg1 ;
-(void)dealloc;
-(void)deletePresignedValidity;
-(void)emergencyDisconnectWithCompletion:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateArtworkTokensForEntityPersistentID:(NSInteger)arg0 entityType:(NSInteger)arg1 artworkType:(NSInteger)arg2 usingBlock:(id)arg3 ;
-(void)enumeratePersistentIDsAfterRevision:(NSInteger)arg0 revisionTrackingCode:(NSUInteger)arg1 maximumRevisionType:(int)arg2 forMediaTypes:(id)arg3 inUsersLibrary:(BOOL)arg4 usingBlock:(id)arg5 ;
-(void)enumeratePersistentIDsAfterRevision:(NSInteger)arg0 revisionTrackingCode:(NSUInteger)arg1 maximumRevisionType:(int)arg2 usingBlock:(id)arg3 ;
-(void)enumeratePurgeableAlbumTracksForUrgency:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)getChangedPersistentIDsAfterRevision:(NSInteger)arg0 revisionTrackingCode:(NSInteger)arg1 maximumRevisionType:(int)arg2 usingBlock:(id)arg3 ;
-(void)importArtworkTokenForEntityPersistentID:(NSInteger)arg0 entityType:(NSInteger)arg1 artworkToken:(id)arg2 artworkType:(NSInteger)arg3 sourceType:(NSInteger)arg4 ;
-(void)importArtworkTokenForEntityPersistentID:(NSInteger)arg0 entityType:(NSInteger)arg1 artworkToken:(id)arg2 artworkType:(NSInteger)arg3 sourceType:(NSInteger)arg4 usingConnection:(id)arg5 ;
-(void)migrateExistingArtworkToken:(id)arg0 newArtworkToken:(id)arg1 newSourceType:(NSInteger)arg2 ;
-(void)migratePresignedValidity;
-(void)notifyAssistantContentsDidChange;
-(void)notifyCloudLibraryAvailabilityDidChange;
-(void)notifyContentsDidChange;
-(void)notifyDisplayValuesPropertyDidChange;
-(void)notifyEntitiesAddedOrRemoved;
-(void)notifyInvisiblePropertyDidChange;
-(void)notifyKeepLocalStateDidChange;
-(void)notifyLibraryImportDidFinish;
-(void)notifyNonContentsPropertyDidChange;
-(void)notifySectionsDidChange;
// -(void)performAsyncDatabaseWriteTransactionWithBlock:(id)arg0 completionBlock:(unk)arg1  ;
-(void)performDatabasePathChange:(id)arg0 completion:(id)arg1 ;
-(void)performDatabaseTransactionWithBlock:(id)arg0 ;
-(void)performReadOnlyDatabaseTransactionWithBlock:(id)arg0 ;
-(void)reconnectToDatabase;
-(void)removeArtworkTokenForEntityPersistentID:(NSInteger)arg0 entityType:(NSInteger)arg1 artworkType:(NSInteger)arg2 sourceType:(NSInteger)arg3 ;
-(void)removeArtworkTokenForEntityPersistentID:(NSInteger)arg0 entityType:(NSInteger)arg1 artworkType:(NSInteger)arg2 sourceType:(NSInteger)arg3 usingConnection:(id)arg4 ;
-(void)removeItemsWithFamilyAccountID:(NSUInteger)arg0 purchaserAccountID:(NSUInteger)arg1 downloaderAccountID:(NSUInteger)arg2 ;
-(void)removeOrphanedTracksOnlyInCaches:(BOOL)arg0 ;
-(void)removePlaylistsWithPersistentIDs:(id)arg0 fromSource:(int)arg1 usingConnection:(id)arg2 withCompletionHandler:(id)arg3 ;
-(void)removeSource:(int)arg0 usingConnection:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)removeSource:(int)arg0 withCompletionHandler:(id)arg1 ;
-(void)removeTombstonesForDeletedItems;
-(void)removeTracksWithPersistentIDs:(id)arg0 fromSource:(int)arg1 usingConnection:(id)arg2 withCompletionHandler:(id)arg3 ;
-(void)removeTracksWithPersistentIDs:(id)arg0 fromSource:(int)arg1 withCompletionHandler:(id)arg2 ;
-(void)retrieveBestArtworkTokensForEntityPersistentID:(NSInteger)arg0 entityType:(NSInteger)arg1 artworkType:(NSInteger)arg2 retrievalTime:(CGFloat)arg3 completionHandler:(id)arg4 ;
-(void)savePlaylists;
-(void)savePlaylistsSinceRevision:(NSInteger)arg0 withGrappaID:(unsigned int)arg1 ;
-(void)saveTrackMetadata;
-(void)saveTrackMetadataSinceRevision:(NSInteger)arg0 withGrappaID:(unsigned int)arg1 ;
-(void)setAutoFilledTracksArePurgeable:(BOOL)arg0 ;
-(void)setClientIdentity:(id)arg0 ;
-(void)setMinimumPurgeableStorage:(NSInteger)arg0 ;
-(void)setShouldOptimizeStorage:(BOOL)arg0 ;
-(void)sortJaliscoLastSupportedMediaKinds;
-(void)terminateForFailureToPerformDatabasePathChange;
-(void)updateBestArtworkTokenForEntityPersistentID:(NSInteger)arg0 entityType:(NSInteger)arg1 artworkType:(NSInteger)arg2 retrievalTime:(CGFloat)arg3 preserveExistingAvailableToken:(BOOL)arg4 usingConnection:(id)arg5 ;
-(void)updateBestArtworkTokenForEntityPersistentID:(NSInteger)arg0 entityType:(NSInteger)arg1 artworkType:(NSInteger)arg2 retrievalTime:(CGFloat)arg3 usingConnection:(id)arg4 ;
-(void)updateJaliscoExcludedMediaKindsWith:(id)arg0 excludingMediaKindsInSet:(BOOL)arg1 ;
-(void)updateMusicLibraryByApplyingUbiquitousBookmarkMetadataToTrackWithPersistentID:(NSInteger)arg0 ;
-(void)updateOrderingLanguagesForCurrentLanguage;
-(void)updateTrackIntegrity;
-(void)updateUbiquitousDatabaseByRemovingUbiquitousMetadataFromTrackWithPersistentID:(NSInteger)arg0 ;


@end


#endif
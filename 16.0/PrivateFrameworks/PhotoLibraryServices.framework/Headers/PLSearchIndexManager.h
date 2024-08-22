// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLSEARCHINDEXMANAGER_H
#define PLSEARCHINDEXMANAGER_H

@class PLPhotoLibraryPathManager, NSDictionary, NSMutableDictionary, NSHashTable, NSCountedSet, NSDate;
@protocol OS_dispatch_queue, PLSearchIndexManagerDatabaseConnectionDelegate;

#import <Foundation/Foundation.h>

#import "PLSearchIndexDateFormatter.h"
#import "PLPhotoLibrary.h"
#import "PSIDatabase.h"
#import "PLZeroKeywordStore.h"
#import "PLSearchMetadataStore.h"
#import "PLThrottleTimer.h"
#import "PLClientServerTransaction.h"
#import "PLSearchIndexSceneTaxonomyProvider.h"
#import "PLSpotlightDonationManager.h"

@interface PLSearchIndexManager : NSObject {
    PLSearchIndexDateFormatter *_dateFormatter;
    PLPhotoLibraryPathManager *_pathManager;
    PLPhotoLibrary *_photoLibrary;
    PSIDatabase *_db;
    PLZeroKeywordStore *_zeroKeywordStore;
    PLSearchMetadataStore *_searchMetadataStore;
    PLThrottleTimer *_throttleTimer;
    PLClientServerTransaction *_serverTransaction;
    CGFloat _serverTransactionStartTime;
    PLSearchIndexSceneTaxonomyProvider *_sceneTaxonomyProvider;
    NSDictionary *_searchSystemInfo;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_inqUUIDsToProcess;
    NSMutableDictionary *_inqGraphDataByUUID;
    NSMutableDictionary *_inqSynonymsByIndexCategoryMask;
    BOOL _receivedUpdatesWhileIndexing;
    BOOL _hasScheduledCloseIndex;
    BOOL _hasValidSearchIndex;
    BOOL _hasValidSearchSupportingData;
    BOOL _shouldCheckLookupTableIsOutOfSync;
    BOOL _shouldCheckDatabaseIntegrity;
    BOOL _isTrackingRebuild;
    NSInteger _rebuildReason;
    NSInteger _updateState;
    CGFloat _lastIndexingStartTime;
    BOOL _startedIndexing;
    os_unfair_lock_s _stateLock;
    BOOL _searchIndexInvalidated;
    NSHashTable *_blocksOnQueueAfterDelay;
}


@property (getter=_isIndexing, setter=_setIndexing:) BOOL _indexing; // ivar: __indexing
@property (copy, nonatomic, setter=_setInqAfterIndexingDidIterate:) id *_inqAfterIndexingDidIterate; // ivar: __inqAfterIndexingDidIterate
@property (readonly, copy, nonatomic) NSCountedSet *_pauseReasons; // ivar: __pauseReasons
@property (readonly) PSIDatabase *database;
@property (weak) NSObject<PLSearchIndexManagerDatabaseConnectionDelegate> *databaseConnectionDelegate; // ivar: _databaseConnectionDelegate
@property (retain, nonatomic) NSDate *dateOfLastSearchIndexRebuild; // ivar: _dateOfLastSearchIndexRebuild
@property (readonly, getter=isIndexingPaused) BOOL indexingPaused;
@property (nonatomic) CGFloat lastKnownElapsedIndexingTime; // ivar: _lastKnownElapsedIndexingTime
@property (nonatomic) NSInteger lastKnownSearchIndexVersion; // ivar: _lastKnownSearchIndexVersion
@property (readonly, nonatomic) PLSpotlightDonationManager *spotlightDonationManager; // ivar: _spotlightDonationManager


+(BOOL)featuredContentAllowed;
+(BOOL)shouldIndexFilenames;
+(id)_defaultDatabaseDirectoryWithPathManager:(id)arg0 ;
+(id)fetchAlbumUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg0 error:(*id)arg1 ;
+(id)fetchAlbumsWithUUIDs:(id)arg0 managedObjectContext:(id)arg1 error:(*id)arg2 ;
+(id)fetchAssetUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg0 error:(*id)arg1 ;
+(id)fetchAssetsWithUUIDs:(id)arg0 managedObjectContext:(id)arg1 error:(*id)arg2 ;
+(id)fetchHighlightUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg0 error:(*id)arg1 ;
+(id)fetchHighlightsWithUUIDs:(id)arg0 managedObjectContext:(id)arg1 error:(*id)arg2 ;
+(id)fetchMemoriesWithUUIDs:(id)arg0 managedObjectContext:(id)arg1 error:(*id)arg2 ;
+(id)fetchMemoryUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg0 error:(*id)arg1 ;
+(id)fetchMomentUUIDsToPopulateAssetSearchIndexWithManagedObjectContext:(id)arg0 error:(*id)arg1 ;
+(id)fetchMomentsWithUUIDs:(id)arg0 managedObjectContext:(id)arg1 error:(*id)arg2 ;
+(id)localeForSearchIndex;
+(int)currentSearchIndexVersion;
+(void)setShouldIndexFilenames:(BOOL)arg0 ;
-(BOOL)_inqIsIndexingPaused;
-(BOOL)_inqUpdateFeatureFlags;
-(BOOL)_inqUpdateFeaturedContentAllowed:(BOOL)arg0 ;
-(BOOL)_inqUpdateLocale;
-(BOOL)_inqUpdateSceneTaxonomySHA:(id)arg0 ;
-(BOOL)_inqUpdateSearchSystemInfo:(id)arg0 forKey:(id)arg1 logMessage:(id)arg2 ;
-(BOOL)_inqUpdateVersion;
-(BOOL)_inqUpdateWordEmbeddingVersion:(id)arg0 ;
-(BOOL)_onQueueAsync:(id)arg0 ;
-(BOOL)_onQueueAsyncWithDelay:(CGFloat)arg0 perform:(id)arg1 ;
-(BOOL)_onQueueSync:(id)arg0 ;
-(BOOL)_removeFileAtPath:(id)arg0 description:(id)arg1 ;
-(NSInteger)_inqRebuildReasonIfSearchIndexIsValid;
-(NSInteger)_inqRebuildReasonIfSearchSupportingDataIsValid;
-(NSInteger)_inqSpotlightRequestedRebuild;
-(NSUInteger)_inqEnqueuedUUIDsCountForceLoad:(BOOL)arg0 ;
-(id)_assetUUIDsToRemoveFromUUIDsToProcess:(id)arg0 ;
-(id)_assetUUIDsWithGraphDataInSpotlight;
-(id)_collectionUUIDsToRemoveFromUUIDsToProcess:(id)arg0 ;
-(id)_cxindexProgressPath;
-(id)_dbPath;
-(id)_dbSearchSystemInfoPath;
-(id)_defaultDatabaseDirectory;
-(id)_featuredPersonLocalIdentifiersFromPhotosGraphData:(id)arg0 photosGraphVersion:(NSInteger)arg1 ;
-(id)_graphDataProcessPath;
-(id)_inqKeywordsByCategoryMaskByAssetUUIDFromAssetSearchKeywords:(id)arg0 ;
-(id)_inqKeywordsByCategoryMaskByAssetUUIDFromAssetSearchKeywords:(id)arg0 andAssetUUIDsBySocialGroup:(id)arg1 ;
-(id)_inqKeywordsByCategoryMaskByAssetUUIDFromAssetUUIDsBySocialGroup:(id)arg0 ;
-(id)_inqPhotoLibrary;
-(id)_inqRequestGraphDataForHighlightUUIDs:(id)arg0 momentUUIDs:(id)arg1 photoLibrary:(id)arg2 singleAssetOnly:(BOOL)arg3 error:(*id)arg4 ;
-(id)_oldDbPath;
-(id)_searchMetadataStorePath;
-(id)_synonymsProcessPath;
-(id)_updatesAfterConvertingDetectedFacesToAssetsInUpdates:(id)arg0 ;
-(id)_updatesAfterConvertingPersonsToAssetsInUpdates:(id)arg0 ;
-(id)_updatesEnsuringMutableArraysFromUpdates:(id)arg0 ;
-(id)defaultDatabasePath;
-(id)defaultSearchMetadataStorePath;
-(id)initWithPathManager:(id)arg0 ;
-(id)searchIndexManagerSignpostLog;
-(void)_beginObservingPhotosPreferences;
-(void)_fetchMemoriesToIndexWithUUIDs:(id)arg0 managedObjectContext:(id)arg1 result:(id)arg2 ;
-(void)_inqAddUpdatesWithUUIDs:(id)arg0 forKey:(id)arg1 ;
-(void)_inqCloseIndexIfAbleOrForce:(BOOL)arg0 isDelete:(BOOL)arg1 ;
-(void)_inqCloseSearchIndexAndDelete:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)_inqDropClientServerTransactionIfNeeded;
-(void)_inqEndTrackingRebuildIfNeeded;
-(void)_inqEndTrackingUpdateIfNeeded;
-(void)_inqEnsurePhotoLibraryExists;
-(void)_inqEnsureSceneTaxonomyProxyExists;
-(void)_inqEnsureSearchIndexExists;
-(void)_inqEnsureSearchProgressExists;
-(void)_inqEnsureSearchSystemInfoExists;
-(void)_inqEnsureSpotlightDonationManagerExists;
-(void)_inqIndexPhotoLibrary;
-(void)_inqResetSearchIndexWithReason:(NSInteger)arg0 dropCompletion:(id)arg1 ;
-(void)_inqResumeIndexingIfNeeded;
-(void)_inqScheduleCloseIndexIfNeeded;
-(void)_inqSetIndexingPaused:(BOOL)arg0 reason:(id)arg1 ;
-(void)_inqStartTrackingRebuildWithReason:(NSInteger)arg0 ;
-(void)_inqStartTrackingUpdateIfAble;
-(void)_inqTakeClientServerTransactionIfNeeded;
-(void)_inqTrackTransitionFromUpdateScheduledToUpdatingIfAble;
-(void)_inqUpdateFeaturedContentForSearch:(BOOL)arg0 ;
-(void)_inqUpdateUUIDsToProcessWithSpotlightProgress;
-(void)_inqValidateSearchIndexWithCompletionHandler:(id)arg0 ;
-(void)_preferencesDidChange;
-(void)_stopObservingPhotosPreferences;
-(void)_throttleTimerFire:(id)arg0 ;
-(void)applyGraphUpdates:(id)arg0 supportingData:(id)arg1 completion:(id)arg2 ;
-(void)applyUpdates:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)dropSearchIndexWithCompletion:(id)arg0 ;
-(void)enqueuedUUIDsCountWithCompletionHandler:(id)arg0 ;
-(void)ensureSearchIndexExistsWithCompletionHandler:(id)arg0 ;
-(void)indexSingleAssetWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pauseIndexingWithReason:(id)arg0 ;
-(void)resetSearchIndexWithReason:(NSInteger)arg0 dropCompletion:(id)arg1 ;
-(void)unpauseIndexingWithReason:(id)arg0 ;


@end


#endif
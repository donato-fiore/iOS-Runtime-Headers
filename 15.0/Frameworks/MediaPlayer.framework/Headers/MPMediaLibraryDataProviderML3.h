// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMEDIALIBRARYDATAPROVIDERML3_H
#define MPMEDIALIBRARYDATAPROVIDERML3_H

@class NSString, NSOperationQueue, ML3MusicLibrary, NSArray, NSSet, ICUserIdentity;
@protocol MPMediaLibraryDataProviderPrivate, MPUserIdentityConsuming, OS_dispatch_queue, OS_dispatch_source, MPArtworkDataSource;

#import <Foundation/Foundation.h>

#import "MPMediaEntityCache.h"
#import "MPMediaLibrary.h"

@interface MPMediaLibraryDataProviderML3 : NSObject <MPMediaLibraryDataProviderPrivate, MPUserIdentityConsuming>

 {
    NSObject<OS_dispatch_queue> *_backgroundTaskQueue;
    NSObject<OS_dispatch_queue> *_cloudUpdateQueue;
    NSUInteger _backgroundTask;
    NSUInteger _backgroundTaskCount;
    BOOL _hasScheduledEventPosting;
    NSInteger _refreshState;
    NSString *_uniqueIdentifier;
    NSOperationQueue *_setValuesWidthLimitedQueue;
    NSObject<OS_dispatch_queue> *_entitiesAddedOrRemovedNotificationQueue;
    NSObject<OS_dispatch_source> *_entitiesAddedOrRemovedCoalescingTimer;
}


@property (readonly, copy, nonatomic) NSString *accountDSID;
@property (readonly, nonatomic) NSObject<MPArtworkDataSource> *artworkDataSource; // ivar: _artworkDataSource
@property (readonly, nonatomic) NSString *databasePath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MPMediaEntityCache *entityCache; // ivar: _entityCache
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isGeniusEnabled;
@property (retain, nonatomic) ML3MusicLibrary *library; // ivar: _library
@property (readonly, nonatomic) NSArray *localizedSectionIndexTitles;
@property (weak, nonatomic) MPMediaLibrary *mediaLibrary; // ivar: _mediaLibrary
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSInteger photosMemoriesPlaylistPersistentID;
@property (readonly, nonatomic) NSInteger playbackHistoryPlaylistPersistentID;
@property (readonly, nonatomic) NSArray *preferredAudioLanguages;
@property (readonly, nonatomic) NSArray *preferredSubtitleLanguages;
@property (readonly, nonatomic) NSSet *propertiesToCache;
@property (readonly, nonatomic) BOOL requiresAuthentication;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *syncValidity;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) ICUserIdentity *userIdentity; // ivar: _userIdentity


+(id)_unadjustedValueForItemDateWithDefaultValue:(id)arg0 ;
+(id)_unadjustedValueForItemPropertyRatingWithDefaultValue:(id)arg0 ;
+(id)_unadjustedValueForItemPropertyVolumeAdjustmentWithDefaultValue:(id)arg0 ;
+(id)_unadjustedValueForItemPropertyVolumeNormalizationWithDefaultValue:(id)arg0 ;
+(id)_unadjustedValueForItemTimeWithDefaultValue:(id)arg0 ;
+(id)_unadjustedValueForMPProperty:(id)arg0 withDefaultValue:(id)arg1 ;
+(id)onDiskProviders;
+(id)uniqueIdentifierForLibrary:(id)arg0 ;
-(BOOL)_dataProviderSupportsEntityChangeTracking;
-(BOOL)_removeEntitiesWithIdentifiers:(*NSInteger)arg0 count:(NSUInteger)arg1 entityClass:(Class)arg2 ;
-(BOOL)collectionExistsContainedWithinPersistentIDs:(*NSUInteger)arg0 count:(NSUInteger)arg1 groupingType:(NSInteger)arg2 existentPID:(*NSUInteger)arg3 ;
-(BOOL)collectionExistsContainedWithinSyncIDs:(id)arg0 groupingType:(NSInteger)arg1 existentPID:(*NSUInteger)arg2 ;
-(BOOL)collectionExistsWithCloudUniversalLibraryID:(id)arg0 groupingType:(NSInteger)arg1 existentPID:(*NSUInteger)arg2 ;
-(BOOL)collectionExistsWithName:(id)arg0 groupingType:(NSInteger)arg1 existentPID:(*NSUInteger)arg2 ;
-(BOOL)collectionExistsWithPersistentID:(NSUInteger)arg0 groupingType:(NSInteger)arg1 ;
-(BOOL)collectionExistsWithSagaID:(NSInteger)arg0 groupingType:(NSInteger)arg1 existentPID:(*NSUInteger)arg2 ;
-(BOOL)collectionExistsWithStoreID:(NSInteger)arg0 groupingType:(NSInteger)arg1 existentPID:(*NSUInteger)arg2 ;
-(BOOL)deleteDatabaseProperty:(id)arg0 ;
-(BOOL)deleteItemsWithIdentifiers:(*NSInteger)arg0 count:(NSUInteger)arg1 ;
-(BOOL)hasGeniusMixes;
-(BOOL)hasMediaOfType:(NSUInteger)arg0 ;
-(BOOL)hasUbiquitousBookmarkableItems;
-(BOOL)importOriginalArtworkFromImageData:(id)arg0 withArtworkToken:(id)arg1 artworkType:(NSInteger)arg2 sourceType:(NSInteger)arg3 mediaType:(NSUInteger)arg4 ;
-(BOOL)isCurrentThreadInTransaction;
-(BOOL)itemExistsWithPersistentID:(NSUInteger)arg0 ;
-(BOOL)performTransactionWithBlock:(id)arg0 ;
-(BOOL)playlistExistsWithPersistentID:(NSUInteger)arg0 ;
-(BOOL)recordPlayEventForAlbumPersistentID:(NSInteger)arg0 ;
-(BOOL)recordPlayEventForPlaylistPersistentID:(NSInteger)arg0 ;
-(BOOL)removeItemsWithIdentifiers:(*NSInteger)arg0 count:(NSUInteger)arg1 ;
-(BOOL)removePlaylistWithIdentifier:(NSInteger)arg0 ;
-(BOOL)setValue:(id)arg0 forDatabaseProperty:(id)arg1 ;
-(BOOL)writable;
-(NSInteger)addPlaylistWithValuesForProperties:(id)arg0 ;
-(NSInteger)itemPersistentIDForStoreID:(NSInteger)arg0 ;
-(NSInteger)playlistGeneration;
-(NSInteger)sdk_addPlaylistWithValuesForProperties:(id)arg0 ;
-(NSUInteger)currentEntityRevision;
-(NSUInteger)syncGenerationID;
-(id)ML3SystemFilterPredicatesWithGroupingType:(NSInteger)arg0 cloudTrackFilteringType:(NSInteger)arg1 subscriptionFilteringOptions:(NSInteger)arg2 additionalFilterPredicates:(id)arg3 ;
-(id)_adjustedItemDateOfEntity:(id)arg0 withDefaultValue:(id)arg1 ;
-(id)_adjustedItemNonnullDateOfEntity:(id)arg0 withDefaultValue:(id)arg1 ;
-(id)_adjustedItemPropertyAssetURLOfEntity:(id)arg0 withDefaultValue:(id)arg1 ;
-(id)_adjustedItemPropertyChapterArtworkTimesOfEntity:(id)arg0 withDefaultValue:(id)arg1 ;
-(id)_adjustedItemPropertyChaptersOfEntity:(id)arg0 withDefaultValue:(id)arg1 ;
-(id)_adjustedItemPropertyContentRatingOfEntity:(id)arg0 withDefaultValue:(id)arg1 ;
-(id)_adjustedItemPropertyEQPresetOfEntity:(id)arg0 withDefaultValue:(id)arg1 ;
-(id)_adjustedItemPropertyEpisodeNumberOfEntity:(id)arg0 withDefaultValue:(id)arg1 ;
-(id)_adjustedItemPropertyFilePathOfEntity:(id)arg0 withDefaultValue:(id)arg1 ;
-(id)_adjustedItemPropertyMovieInfoOfEntity:(id)arg0 withDefaultValue:(id)arg1 ;
-(id)_adjustedItemPropertyRatingOfEntity:(id)arg0 withDefaultValue:(id)arg1 ;
-(id)_adjustedItemPropertySeasonNameOfEntity:(id)arg0 withDefaultValue:(id)arg1 ;
-(id)_adjustedItemPropertySeasonNumberOfEntity:(id)arg0 withDefaultValue:(id)arg1 ;
-(id)_adjustedItemPropertyVerifiedIntegrityOfEntity:(id)arg0 withDefaultValue:(id)arg1 ;
-(id)_adjustedItemPropertyVolumeAdjustmentOfEntity:(id)arg0 withDefaultValue:(id)arg1 ;
-(id)_adjustedItemPropertyVolumeNormalizationOfEntity:(id)arg0 withDefaultValue:(id)arg1 ;
-(id)_adjustedItemTimeOfEntity:(id)arg0 withDefaultValue:(id)arg1 ;
-(id)_adjustedPlaylistPropertySeedItemsOfEntity:(id)arg0 withDefaultValue:(id)arg1 ;
-(id)_adjustedPropertyMediaTypeOfEntity:(id)arg0 withDefaultValue:(id)arg1 ;
-(id)_storePlatformRequestContext;
-(id)adjustedValueForMPProperty:(id)arg0 ofEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)collectionResultSetForQueryCriteria:(id)arg0 ;
-(id)initWithLibrary:(id)arg0 ;
-(id)itemResultSetForQueryCriteria:(id)arg0 ;
-(id)lastModifiedDate;
-(id)localizedSectionHeaderForSectionIndex:(NSUInteger)arg0 ;
-(id)multiverseIdentifierForCollectionWithPersistentID:(NSInteger)arg0 groupingType:(NSInteger)arg1 ;
-(id)multiverseIdentifierForTrackWithPersistentID:(NSInteger)arg0 ;
-(id)systemFilterPredicatesWithGroupingType:(NSInteger)arg0 cloudTrackFilteringType:(NSInteger)arg1 subscriptionFilteringOptions:(NSInteger)arg2 ;
-(id)valueForDatabaseProperty:(id)arg0 ;
-(void)_addGlobalPlaylistsToLibraryDatabase:(id)arg0 asLibraryOwned:(BOOL)arg1 completion:(id)arg2 ;
-(void)_coalesceEvents;
-(void)_displayValuesDidChange:(id)arg0 ;
-(void)_dynamicPropertiesDidChange:(id)arg0 ;
-(void)_importStoreItemElements:(id)arg0 withReferralObject:(id)arg1 andAddTracksToCloudLibrary:(BOOL)arg2 usingCloudAdamID:(NSInteger)arg3 withCompletion:(id)arg4 ;
-(void)_invisiblePropertiesDidChange:(id)arg0 ;
-(void)_libraryCloudLibraryAvailabilityDidChange:(id)arg0 ;
-(void)_libraryContentsDidChange:(id)arg0 ;
-(void)_libraryEntitiesAddedOrRemoved:(id)arg0 ;
-(void)_libraryPathDidChange:(id)arg0 ;
-(void)_libraryUIDDidChange:(id)arg0 ;
-(void)_loadProperties:(id)arg0 ofEntityWithIdentifier:(NSInteger)arg1 ML3EntityClass:(Class)arg2 completionBlock:(id)arg3 ;
-(void)_loadValueForAggregateFunction:(id)arg0 entityClass:(Class)arg1 property:(id)arg2 query:(id)arg3 completionBlock:(id)arg4 ;
-(void)_postEvents;
-(void)_syncGenerationDidChange:(id)arg0 ;
-(void)_updateArtworkDataSourceMediaLibraryUniqueIdentifier;
-(void)addGlobalPlaylistWithID:(id)arg0 andAddToCloudLibrary:(BOOL)arg1 completion:(id)arg2 ;
-(void)addItemWithIdentifier:(NSInteger)arg0 toPlaylistWithIdentifier:(NSInteger)arg1 completionBlock:(id)arg2 ;
-(void)addItemsWithIdentifiers:(id)arg0 toPlaylistWithIdentifier:(NSInteger)arg1 completionBlock:(id)arg2 ;
-(void)addNonLibraryOwnedPlaylistsWithGlobalIDs:(id)arg0 completion:(id)arg1 ;
-(void)addPlaylistStoreItemsForLookupItems:(id)arg0 withCompletion:(id)arg1 ;
-(void)addTracksToMyLibrary:(id)arg0 ;
-(void)clearLocationPropertiesOfItemWithIdentifier:(NSInteger)arg0 ;
-(void)dealloc;
// -(void)enumerateCollectionIdentifiersForQueryCriteria:(id)arg0 ordered:(BOOL)arg1 cancelBlock:(id)arg2 usingBlock:(unk)arg3  ;
// -(void)enumerateEntityChangesAfterSyncAnchor:(id)arg0 maximumRevisionType:(NSInteger)arg1 inUsersLibrary:(BOOL)arg2 itemBlock:(id)arg3 collectionBlock:(unk)arg4  ;
// -(void)enumerateItemIdentifiersForQueryCriteria:(id)arg0 ordered:(BOOL)arg1 cancelBlock:(id)arg2 usingBlock:(unk)arg3  ;
-(void)importArtworkTokenForEntityPersistentID:(NSUInteger)arg0 entityType:(NSInteger)arg1 artworkToken:(id)arg2 artworkType:(NSInteger)arg3 sourceType:(NSInteger)arg4 ;
-(void)loadProperties:(id)arg0 ofCollectionWithIdentifier:(NSInteger)arg1 groupingType:(NSInteger)arg2 completionBlock:(id)arg3 ;
-(void)loadProperties:(id)arg0 ofItemWithIdentifier:(NSInteger)arg1 completionBlock:(id)arg2 ;
-(void)loadQueryCriteria:(id)arg0 countOfCollectionsWithCompletionBlock:(id)arg1 ;
-(void)loadQueryCriteria:(id)arg0 countOfItemsWithCompletionBlock:(id)arg1 ;
-(void)loadQueryCriteria:(id)arg0 hasCollectionsWithCompletionBlock:(id)arg1 ;
-(void)loadQueryCriteria:(id)arg0 hasItemsWithCompletionBlock:(id)arg1 ;
-(void)loadValueForAggregateFunction:(id)arg0 onCollectionsForProperty:(id)arg1 queryCriteria:(id)arg2 completionBlock:(id)arg3 ;
-(void)loadValueForAggregateFunction:(id)arg0 onItemsForProperty:(id)arg1 queryCriteria:(id)arg2 completionBlock:(id)arg3 ;
-(void)moveItemFromIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 inPlaylistWithIdentifier:(NSInteger)arg2 completionBlock:(id)arg3 ;
-(void)performBackgroundTaskWithBlock:(id)arg0 ;
-(void)performReadTransactionWithBlock:(id)arg0 ;
-(void)performStoreItemLibraryImport:(id)arg0 withCompletion:(id)arg1 ;
-(void)populateLocationPropertiesOfItemWithIdentifier:(NSInteger)arg0 withPath:(id)arg1 assetProtectionType:(NSInteger)arg2 ;
-(void)populateLocationPropertiesOfItemWithIdentifier:(NSInteger)arg0 withPath:(id)arg1 assetProtectionType:(NSInteger)arg2 completionBlock:(id)arg3 ;
-(void)removeAllItemsInPlaylistWithIdentifier:(NSInteger)arg0 ;
-(void)removeFirstItemFromPlaylistWithIdentifier:(NSInteger)arg0 ;
-(void)removeItemsAtIndexes:(id)arg0 inPlaylistWithIdentifier:(NSInteger)arg1 completionBlock:(id)arg2 ;
-(void)sdk_addItemWithOpaqueID:(id)arg0 withCompletion:(id)arg1 ;
-(void)sdk_addItemWithOpaqueIdentifier:(id)arg0 toPlaylistWithIdentifier:(NSInteger)arg1 completionBlock:(id)arg2 ;
-(void)setItemsWithIdentifiers:(id)arg0 forPlaylistWithIdentifier:(NSInteger)arg1 completionBlock:(id)arg2 ;
-(void)setValue:(id)arg0 forProperty:(id)arg1 ofCollectionWithIdentifier:(NSInteger)arg2 groupingType:(NSInteger)arg3 completionBlock:(id)arg4 ;
-(void)setValue:(id)arg0 forProperty:(id)arg1 ofItemWithIdentifier:(NSInteger)arg2 completionBlock:(id)arg3 ;
-(void)setValue:(id)arg0 forProperty:(id)arg1 ofPlaylistWithIdentifier:(NSInteger)arg2 completionBlock:(id)arg3 ;
-(void)setValues:(id)arg0 forProperties:(id)arg1 forItemPersistentIDs:(id)arg2 ;


@end


#endif
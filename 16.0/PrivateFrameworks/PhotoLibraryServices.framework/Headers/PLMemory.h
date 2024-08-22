// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLMEMORY_H
#define PLMEMORY_H

@class NSData, NSString, NSDate, NSSet, NSOrderedSet, NSDictionary;
@protocol PLSearchableAssetCollection, PLCloudDeletable, PLFileSystemMetadataPersistence, PLUserFeedbackSupporting, PLBackgroundUpdatesSharingComposition;


#import "PLManagedObject.h"
#import "PLManagedAsset.h"

@interface PLMemory : PLManagedObject <PLSearchableAssetCollection, PLCloudDeletable, PLFileSystemMetadataPersistence, PLUserFeedbackSupporting, PLBackgroundUpdatesSharingComposition>



@property (retain, nonatomic) NSData *assetListPredicate;
@property (readonly, nonatomic) NSUInteger assetsCountPrivate;
@property (readonly, nonatomic) NSUInteger assetsCountShared;
@property (retain, nonatomic) NSData *blacklistedFeature;
@property (nonatomic) short category;
@property (nonatomic) short cloudDeleteState;
@property (readonly) NSInteger cloudDeletionType;
@property (nonatomic) short cloudLocalState;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSSet *curatedAssets;
@property (retain, nonatomic) NSOrderedSet *customUserAssets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSSet *extendedCuratedAssets;
@property (nonatomic) BOOL favorite;
@property (nonatomic) short featuredState;
@property (retain, nonatomic) NSString *graphMemoryIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PLManagedAsset *keyAsset;
@property (readonly, nonatomic) NSDate *keyAssetCreationDatePrivate;
@property (readonly, nonatomic) NSDate *keyAssetCreationDateShared;
@property (readonly, nonatomic) NSString *keyAssetUUIDPrivate;
@property (readonly, nonatomic) NSString *keyAssetUUIDShared;
@property (retain, nonatomic) NSDate *lastEnrichmentDate;
@property (retain, nonatomic) NSDate *lastMoviePlayedDate;
@property (retain, nonatomic) NSDate *lastViewedDate;
@property (retain, nonatomic) NSDictionary *movieAssetState;
@property (retain, nonatomic) NSSet *movieCuratedAssets;
@property (retain, nonatomic) NSData *movieData;
@property (nonatomic) BOOL needsPersistenceUpdate; // ivar: _needsPersistenceUpdate
@property (nonatomic) short notificationState;
@property (nonatomic) NSInteger pendingPlayCount;
@property (nonatomic) NSInteger pendingShareCount;
@property (nonatomic) unsigned short pendingState;
@property (nonatomic) NSInteger pendingViewCount;
@property (retain, nonatomic) NSData *photosGraphData;
@property (nonatomic) NSInteger photosGraphVersion;
@property (nonatomic) NSInteger playCount;
@property (nonatomic) BOOL rejected;
@property (retain, nonatomic) NSSet *representativeAssets;
@property (nonatomic) CGFloat score;
@property (nonatomic) short searchIndexRebuildState;
@property (readonly, nonatomic) NSDate *searchableEndDate;
@property (readonly, nonatomic) NSDate *searchableStartDate;
@property (nonatomic) NSInteger shareCount;
@property (nonatomic) short sharingComposition;
@property (nonatomic) short storyColorGradeKind;
@property (nonatomic) short storySerializedTitleCategory;
@property (nonatomic) short subcategory;
@property (readonly, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) unsigned short syndicatedContentState;
@property (readonly, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned short userActionOptions;
@property (retain, nonatomic) NSSet *userCuratedAssets;
@property (retain, nonatomic) NSSet *userFeedbacks;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) NSInteger viewCount;


+(BOOL)_shouldPrefetchMemoryMovieCuratedAssetsInPhotoLibrary:(id)arg0 prefetchConfiguration:(id)arg1 ;
+(BOOL)indexTitleForMemoryCategory:(NSUInteger)arg0 ;
+(BOOL)isUserCreatedMemoryWithUserActionOptions:(unsigned short)arg0 ;
+(NSInteger)cloudDeletionTypeForTombstone:(id)arg0 ;
+(NSUInteger)_deleteMemoriesMatchingPredicate:(id)arg0 inManagedObjectContext:(id)arg1 ;
+(NSUInteger)countOfMemoriesCreatedTodayWithNotificationStateRequestedOrSeenInPhotoLibrary:(id)arg0 excludingMemory:(id)arg1 error:(*id)arg2 ;
+(id)_memoriesMatchingPredicate:(id)arg0 sortDescriptors:(id)arg1 limit:(NSInteger)arg2 inPhotoLibrary:(id)arg3 ;
+(id)baseSearchIndexPredicate;
+(id)cloudUUIDKeyForDeletion;
+(id)entityName;
+(id)insertIntoPhotoLibrary:(id)arg0 withUUID:(id)arg1 title:(id)arg2 subtitle:(id)arg3 creationDate:(id)arg4 ;
+(id)isEligibleForSearchIndexingPredicate;
+(id)keyPathsForMemoriesBeingAssets;
+(id)memoriesContainingAsset:(id)arg0 ;
+(id)memoriesToPrefetchForWidgetInManagedObjectContext:(id)arg0 ;
+(id)memoriesToPrefetchInPhotoLibrary:(id)arg0 prefetchConfiguration:(id)arg1 ;
+(id)memoriesToUploadInPhotoLibrary:(id)arg0 limit:(NSInteger)arg1 ;
+(id)memoriesWithUUIDs:(id)arg0 inPhotoLibrary:(id)arg1 ;
+(id)memoryObjectIDsContainingAsset:(id)arg0 ;
+(id)memoryWithUUID:(id)arg0 inPhotoLibrary:(id)arg1 ;
+(id)needsSearchIndexingForRebuildPredicate;
+(id)predicateForPrivateOnlyCollectionsWithinSubset:(id)arg0 ;
+(id)predicateForSharedOnlyCollectionsWithinSubset:(id)arg0 ;
+(short)_calculateSharingCompositionForMemory:(id)arg0 ;
+(void)deleteAllMemoriesInPhotoLibrary:(id)arg0 ;
+(void)deleteMemoriesWithObjectIDs:(id)arg0 inManagedObjectContext:(id)arg1 ;
+(void)deletePendingMemoriesCreatedBefore:(id)arg0 inPhotoLibrary:(id)arg1 ;
+(void)resetCloudStateInPhotoLibrary:(id)arg0 ;
-(BOOL)_isGoldilocksEnabled;
-(BOOL)hasAnyAssets;
-(BOOL)isEligibleForSearchIndexing;
-(BOOL)isSyncableChange;
-(BOOL)isUserCreatedMemory;
-(BOOL)isValidForPersistence;
-(BOOL)supportsCloudUpload;
-(BOOL)updateWithCPLMemoryChange:(id)arg0 inPhotoLibrary:(id)arg1 ;
-(BOOL)validForPersistenceChangedForChangedKeys:(id)arg0 ;
-(id)allAvailableAssets;
-(id)calculateKeyAsset;
-(id)cplFullRecord;
-(id)cplMemoryChange;
-(id)payloadForChangedKeys:(id)arg0 ;
-(id)payloadID;
-(id)payloadIDForTombstone:(id)arg0 ;
-(id)searchIndexContents;
-(void)_appendLibraryScopeToCollection:(id)arg0 ;
-(void)_cacheMemoryPropertiesForUIPerformanceWithPhotosGraphData:(id)arg0 ;
-(void)_recalculateSharingCompositionIfNeeded;
-(void)_updateUserFeedbackSetByUserState;
-(void)addSearchIndexContentsToCollection:(id)arg0 ;
-(void)calculateSyndicatedContentState;
-(void)delete;
-(void)didSave;
-(void)persistMetadataToFileSystemWithPathManager:(id)arg0 ;
-(void)prepareForDeletion;
-(void)removePersistedFileSystemDataWithPathManager:(id)arg0 ;
-(void)willSave;


@end


#endif
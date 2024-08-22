// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLFETCHINGALBUM_H
#define PLFETCHINGALBUM_H

@class NSArray, NSPredicate, NSString, NSData, NSFetchRequest, NSOrderedSet;
@protocol PLCloudDeletable, PLFileSystemAlbumMetadataPersistence;


#import "PLFetchingAlbum.h"

@interface PLFetchingAlbum : PLFetchingAlbum <PLCloudDeletable, PLFileSystemAlbumMetadataPersistence>

 {
    NSUInteger _countForDisplay;
    NSUInteger _photosCount;
    NSUInteger _videosCount;
    int _emptyState;
    NSArray *_cachedKeyAssets;
}


@property (retain, nonatomic) NSPredicate *ALAssetsGroupFilterPredicate; // ivar: _ALAssetsGroupFilterPredicate
@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (nonatomic) short cloudDeleteState;
@property (readonly) NSInteger cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (retain, nonatomic) NSData *customQueryParameters;
@property (retain, nonatomic) NSString *customQueryType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSPredicate *extraFilterPredicate;
@property (retain, nonatomic) NSFetchRequest *fetchRequest;
@property (retain, nonatomic) NSOrderedSet *fetchedAssets;
@property (readonly, nonatomic) BOOL hasAssetsCache;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL needsPersistenceUpdate; // ivar: _needsPersistenceUpdate
@property (nonatomic) short searchIndexRebuildState;
@property (readonly) Class superclass;


+(BOOL)contextShouldIgnoreChangesForFetchRequest;
+(BOOL)contextShouldIgnoreChangesForFetchedAssets;
+(NSInteger)cloudDeletionTypeForTombstone:(id)arg0 ;
+(id)_predicateForAssetSubtype:(short)arg0 ;
+(id)_predicateForVisibleAsset;
+(id)cloudUUIDKeyForDeletion;
+(id)predicateForAlbumKind:(int)arg0 ;
+(id)predicateForAlbumKind:(int)arg0 includeGuest:(BOOL)arg1 ;
+(id)sortDescriptorsForAlbumKind:(int)arg0 ;
+(id)validKindsForPersistence;
-(BOOL)canPerformDeleteOperation;
-(BOOL)canPerformEditOperation:(NSUInteger)arg0 ;
-(BOOL)isEmpty;
-(BOOL)isValidForPersistence;
-(BOOL)mayHaveAssetsInCommon:(id)arg0 ;
-(NSUInteger)_fetchedCountForAssetsOfKind:(short)arg0 ;
-(NSUInteger)approximateCount;
-(NSUInteger)count;
-(NSUInteger)countForAssetsOfKind:(short)arg0 ;
-(id)_cachedKeyAssets;
-(id)_performFetchWithRequest:(id)arg0 ;
-(id)assets;
-(id)fastPointerAccessSetForAssets:(id)arg0 ;
-(id)filteredIndexesForPredicate:(id)arg0 ;
-(id)keyAsset;
-(id)mutableAssets;
-(id)payloadForChangedKeys:(id)arg0 ;
-(id)primitiveAssets;
-(id)secondaryKeyAsset;
-(id)tertiaryKeyAsset;
-(void)awakeFromFetch;
-(void)awakeFromInsert;
-(void)batchFetchAssets:(id)arg0 ;
-(void)didSave;
-(void)didTurnIntoFault;
-(void)persistMetadataToFileSystemWithPathManager:(id)arg0 ;
-(void)prepareForDeletion;
-(void)removePersistedFileSystemDataWithPathManager:(id)arg0 ;
-(void)setAssets:(id)arg0 ;
-(void)setKeyAsset:(id)arg0 ;
-(void)setSecondaryKeyAsset:(id)arg0 ;
-(void)setTertiaryKeyAsset:(id)arg0 ;
-(void)setupFetchRequest;
-(void)updateSnapshotAndClearCaches:(id)arg0 ;
-(void)willSave;


@end


#endif
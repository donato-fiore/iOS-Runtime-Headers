// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLMANAGEDALBUM_H
#define PLMANAGEDALBUM_H

@class NSSet, NSOrderedSet, NSString, NSDate, NSURL, NSNumber, NSArray, NSMutableOrderedSet;
@protocol PLUserEditableAlbumProtocol, PLCloudDeletable, PLFileSystemAlbumMetadataPersistence, PLDeletableManagedObject;

#import <Foundation/Foundation.h>

#import "PLManagedAlbum.h"
#import "PLManagedAsset.h"
#import "PLPhotoLibrary.h"

@interface PLManagedAlbum : PLManagedAlbum <PLUserEditableAlbumProtocol, PLCloudDeletable, PLFileSystemAlbumMetadataPersistence, PLDeletableManagedObject>



@property (nonatomic) BOOL albumShouldBeAutomaticallyDeleted; // ivar: _albumShouldBeAutomaticallyDeleted
@property (readonly, nonatomic) NSUInteger approximateCount;
@property (retain, nonatomic) NSSet *assetOrders;
@property (retain, nonatomic) NSOrderedSet *assets;
@property (readonly, nonatomic) NSUInteger assetsCount;
@property (nonatomic) NSUInteger batchSize;
@property (readonly, nonatomic) BOOL canContributeToCloudSharedAlbum;
@property (readonly, nonatomic) BOOL canShowAvalancheStacks;
@property (readonly, nonatomic) BOOL canShowComments;
@property (nonatomic) short cloudDeleteState;
@property (readonly) NSInteger cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, retain, nonatomic) NSDate *endDate;
@property (readonly, retain, nonatomic) NSURL *groupURL;
@property (nonatomic) BOOL hasUnseenContentBoolValue;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *importSessionID;
@property (readonly, nonatomic) BOOL isCameraAlbum;
@property (readonly, nonatomic) BOOL isCloudSharedAlbum;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isFamilyCloudSharedAlbum;
@property (readonly, nonatomic) BOOL isFolder;
@property (readonly, nonatomic) BOOL isInTrash;
@property (readonly, nonatomic) BOOL isLibrary;
@property (readonly, nonatomic) BOOL isMultipleContributorCloudSharedAlbum;
@property (readonly, nonatomic) BOOL isOwnedCloudSharedAlbum;
@property (readonly, nonatomic) BOOL isPanoramasAlbum;
@property (readonly, nonatomic) BOOL isPendingPhotoStreamAlbum;
@property (readonly, nonatomic) BOOL isPhotoStreamAlbum;
@property (readonly, nonatomic) BOOL isProjectAlbum;
@property (readonly, nonatomic) BOOL isRecentlyAddedAlbum;
@property (readonly, nonatomic) BOOL isStandInAlbum;
@property (readonly, nonatomic) BOOL isUserLibraryAlbum;
@property (retain, nonatomic) PLManagedAsset *keyAsset;
@property (readonly, retain, nonatomic) NSNumber *kind;
@property (readonly, nonatomic) int kindValue;
@property (readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, retain, nonatomic) NSMutableOrderedSet *mutableAssets;
@property (readonly, copy, nonatomic) NSString *name;
@property (nonatomic) BOOL needsPersistenceUpdate; // ivar: _needsPersistenceUpdate
@property (nonatomic) int pendingItemsCount;
@property (nonatomic) int pendingItemsType;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) NSUInteger photosCount;
@property (readonly, retain, nonatomic) NSObject *posterImage;
@property (nonatomic) short searchIndexRebuildState;
@property (retain, nonatomic) PLManagedAsset *secondaryKeyAsset;
@property (readonly, nonatomic) BOOL shouldDeleteWhenEmpty;
@property (readonly, copy, nonatomic) id *sortingComparator;
@property (readonly, retain, nonatomic) NSDate *startDate;
@property (readonly) Class superclass;
@property (retain, nonatomic) PLManagedAsset *tertiaryKeyAsset;
@property (readonly, retain, nonatomic) NSString *title;
@property (readonly, retain, nonatomic) NSMutableOrderedSet *userEditableAssets;
@property (readonly, retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSUInteger videosCount;


+(NSInteger)cloudDeletionTypeForTombstone:(id)arg0 ;
+(id)albumSupportsAssetOrderKeysPredicate;
+(id)childKeyForOrdering;
+(id)cloudUUIDKeyForDeletion;
+(id)keyPathsForValuesAffectingApproximateCount;
+(id)keyPathsForValuesAffectingPhotosCount;
+(id)keyPathsForValuesAffectingVideosCount;
+(id)validKindsForPersistence;
+(void)clearAssetOrderByAbumUUIDs;
-(BOOL)_shouldCopyAssetToCameraRollBeforeAdding:(id)arg0 ;
-(BOOL)canPerformDeleteOperation;
-(BOOL)canPerformEditOperation:(NSUInteger)arg0 ;
-(BOOL)isValidForPersistence;
-(BOOL)supportsAssetOrderKeys;
-(NSUInteger)_albumStandInCount;
-(NSUInteger)countOfInternalUserEditableAssets;
-(NSUInteger)indexInInternalUserEditableAssetsOfObject:(id)arg0 ;
-(id)_assetOrderByAssetUUID;
-(id)_expectedKeyAssets:(id)arg0 ;
-(id)_keysToBeObserved;
-(id)_orderComparisonValueForAsset:(id)arg0 iTunesLookupOrder:(id)arg1 ;
-(id)assetOrderByAbumUUIDs;
-(id)childKeyForOrdering;
-(id)filteredIndexesForPredicate:(id)arg0 ;
-(id)internalUserEditableAssetsAtIndexes:(id)arg0 ;
-(id)objectInInternalUserEditableAssetsAtIndex:(NSUInteger)arg0 ;
-(id)payloadForChangedKeys:(id)arg0 ;
-(void)_updateKeyAssetsIfNeeded:(id)arg0 ;
-(void)addAssetUsingiTunesAlbumOrder:(id)arg0 ;
-(void)didSave;
-(void)insertAssets:(id)arg0 atIndexes:(id)arg1 ;
-(void)insertInternalUserEditableAssets:(id)arg0 atIndexes:(id)arg1 ;
-(void)insertInternalUserEditableAssets:(id)arg0 atIndexes:(id)arg1 customExportsInfo:(id)arg2 trimmedVideoPathInfo:(id)arg3 commentText:(id)arg4 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)persistMetadataToFileSystemWithPathManager:(id)arg0 ;
-(void)prepareForDeletion;
-(void)recalculateCachedCounts;
-(void)registerForChanges;
-(void)removeAssetsAtIndexes:(id)arg0 ;
-(void)removeInternalUserEditableAssetsAtIndexes:(id)arg0 ;
-(void)removePersistedFileSystemDataWithPathManager:(id)arg0 ;
-(void)replaceAssetsAtIndexes:(id)arg0 withAssets:(id)arg1 ;
-(void)sortAssetsUsingiTunesAlbumOrder;
-(void)unregisterForChanges;
-(void)updateKeyAssetsIfNeeded;
-(void)willSave;


@end


#endif
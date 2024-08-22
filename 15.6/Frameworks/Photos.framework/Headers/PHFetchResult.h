// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHFETCHRESULT_H
#define PHFETCHRESULT_H

@class NSNumber, NSError, NSArray, NSDictionary, NSSet, NSFetchRequest, NSString;
@protocol NSCopying, NSFastEnumeration, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_PHFetchRequestWrapper.h"
#import "PHBatchFetchingArray.h"
#import "PHFetchOptions.h"
#import "PHPhotoLibrary.h"
#import "PHQuery.h"

@interface PHFetchResult : NSObject <NSCopying, NSFastEnumeration>

 {
    NSUInteger _albumsCount;
    NSUInteger _sharedAlbumsCount;
    NSUInteger _foldersCount;
    NSUInteger _photosCount;
    NSUInteger _videosCount;
    NSUInteger _audiosCount;
    NSNumber *_prefetchCount;
    _PHFetchRequestWrapper *_fetchRequestWrapper;
    NSError *_fetchError;
    PHBatchFetchingArray *_fetchedObjects;
    NSArray *_thumbnailAssets;
    NSDictionary *_fetchedPropertySetsCache;
    NSArray *_seedOIDs;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    BOOL _registeredForChangeNotificationDeltas;
}


@property NSInteger chunkSizeForFetch; // ivar: _chunkSizeForFetch
@property (readonly) NSUInteger count;
@property (readonly) NSError *fetchError;
@property (readonly, nonatomic) PHFetchOptions *fetchOptions;
@property (readonly) NSSet *fetchPropertySets; // ivar: _fetchPropertySets
@property (readonly) NSFetchRequest *fetchRequest;
@property (readonly) NSArray *fetchSortDescriptors;
@property (readonly) NSString *fetchType; // ivar: _fetchType
@property (readonly) NSArray *fetchedObjectIDs;
@property (readonly) NSSet *fetchedObjectIDsSet;
@property (readonly) NSArray *fetchedObjects;
@property (readonly, nonatomic) id *firstObject;
@property (readonly, nonatomic) id *lastObject;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic) BOOL preventsClearingOIDCache; // ivar: _preventsClearingOIDCache
@property (readonly) PHQuery *query; // ivar: _query
@property (nonatomic, getter=isRegisteredForChangeNotificationDeltas) BOOL registeredForChangeNotificationDeltas;
@property (readonly) NSArray *thumbnailAssets;


+(id)_batchFetchingArrayForObjectIDs:(id)arg0 fetchResult:(id)arg1 ;
+(id)_typesToCountForAssetCollections;
+(id)_typesToCountForListCollections;
+(id)cleanedAndSortedOIDsFrom:(id)arg0 usingFetchOptions:(id)arg1 ;
+(id)fetchObjectCount:(id)arg0 inManagedObjectContext:(id)arg1 ;
+(id)fetchObjectIDs:(id)arg0 inManagedObjectContext:(id)arg1 ;
+(id)fetchObjectIDsForCombinableFetchResults:(id)arg0 inManagedObjectContext:(id)arg1 ;
+(id)filteredOIDsFrom:(id)arg0 usingEntityName:(id)arg1 withPhotoLibrary:(id)arg2 ;
+(id)pl_fetchResultContainingAssetContainer:(id)arg0 photoLibrary:(id)arg1 ;
+(id)pl_fetchResultContainingAssetContainer:(id)arg0 photoLibrary:(id)arg1 includeTrash:(BOOL)arg2 ;
+(id)pl_fetchResultForAssetContainerList:(id)arg0 photoLibrary:(id)arg1 ;
+(id)pl_fetchResultForStandInAssetCollection:(id)arg0 ;
+(id)pl_filterPredicateForAssetContainer:(id)arg0 ;
+(id)pointerComparableIdentifiersFromIdentifiers:(id)arg0 ;
-(BOOL)_canCreateFetchedPropertyObjectsWithClass:(Class)arg0 ;
-(BOOL)containsObject:(id)arg0 ;
-(BOOL)isFullyBackedByObjectIDs;
-(NSInteger)collectionFetchType;
-(NSUInteger)_possibleChangesFromDetectionCriteriaForChange:(id)arg0 ;
-(NSUInteger)cachedCountOfAssetsWithMediaType:(NSInteger)arg0 ;
-(NSUInteger)cachedCountOfCollectionsWithCollectionTypes:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)countOfAssetsWithMediaType:(NSInteger)arg0 ;
-(NSUInteger)indexOfObject:(id)arg0 ;
-(NSUInteger)indexOfObject:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(NSUInteger)possibleChangesForChange:(id)arg0 ;
-(id)_createFetchedPropertyObjectsWithClass:(Class)arg0 fetchedObjectIDs:(id)arg1 ;
-(id)additionalChangedIdentifiersFromPreviousIdentifiers:(id)arg0 currentIdentifiers:(id)arg1 inFetchResultBeforeChanges:(id)arg2 ;
-(id)changeHandlingKey;
-(id)changeHandlingValueUsingSeedOids:(id)arg0 withChange:(id)arg1 usingManagedObjectContext:(id)arg2 ;
-(id)containerIdentifier;
-(id)copyWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)fetchPropertiesForPropertySetClass:(Class)arg0 forObjectsAtIndexes:(id)arg1 ;
-(id)fetchResultWithChangeHandlingValue:(id)arg0 ;
-(id)fetchedObjectsUsingManagedObjectContext:(id)arg0 ;
-(id)fetchedPropertiesForPropertySetClass:(Class)arg0 ;
-(id)init;
-(id)initWithExistingFetchResult:(id)arg0 filteredObjectIDs:(id)arg1 ;
-(id)initWithQuery:(id)arg0 ;
-(id)initWithQuery:(id)arg0 oids:(id)arg1 registerIfNeeded:(BOOL)arg2 usingManagedObjectContext:(id)arg3 ;
-(id)localIdentifiers;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)objectIDAtIndex:(NSUInteger)arg0 ;
-(id)objectIDs;
-(id)objectsAtIndexes:(id)arg0 ;
-(void)dealloc;
-(void)enumerateObjectsAtIndexes:(id)arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;
-(void)enumerateObjectsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)getCountOfCollectionsWithCollectionTypes:(id)arg0 ;
-(void)getMediaTypeCounts;
-(void)prefetchObjectsAtIndexes:(id)arg0 ;
-(void)prefetchThumbnailAssetsAtIndexes:(id)arg0 ;
-(void)updateRegistrationForChangeNotificationDeltas;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHCHANGE_H
#define PHCHANGE_H

@class NSSet, NSDictionary, NSMutableDictionary, PLSortedChangedObjects, NSMapTable, NSManagedObjectContext;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PHPersistentChangeToken.h"
#import "PHPersistentChangeEnumerationContext.h"
#import "PHPersistentChangeFetchOptions.h"
#import "PHPhotoLibrary.h"

@interface PHChange : NSObject {
    NSSet *_insertedObjectIDs;
    NSSet *_changedObjectIDs;
    NSSet *_deletedObjectIDs;
    NSDictionary *_changedAttributesByOID;
    NSDictionary *_changedRelationshipsByOID;
    NSMutableDictionary *_updatedObjectsChangedAttributesByEntityName;
    NSMutableDictionary *_updatedObjectsChangedRelationshipsByEntityName;
    PLSortedChangedObjects *_sortedChangedObjectIDs;
    NSMutableDictionary *_changeDetailsForObjects;
    NSMutableDictionary *_collectionChangeDetailsForObjects;
    NSObject<OS_dispatch_queue> *_changeDetailIsolation;
    NSMapTable *_changeHandlingMap;
    BOOL _unknownMergeEvent;
    NSMutableDictionary *_objectIDsByLocalIdentifier;
}


@property (readonly, nonatomic) PHPersistentChangeToken *changeToken; // ivar: _changeToken
@property (readonly, nonatomic) NSManagedObjectContext *context; // ivar: _context
@property (readonly, nonatomic) NSDictionary *deletedUuidsByObjectId; // ivar: _deletedUuidsByObjectId
@property (readonly, nonatomic) PHPersistentChangeEnumerationContext *enumerationContext; // ivar: _enumerationContext
@property (readonly, nonatomic) PHPersistentChangeFetchOptions *fetchOptions; // ivar: _fetchOptions
@property (readonly, nonatomic) BOOL hasIncrementalChanges;
@property (readonly, nonatomic) PHPhotoLibrary *library; // ivar: _library
@property (readonly, nonatomic) NSUInteger totalChangeCount;


+(BOOL)isPublicPHObjectChangeClass:(Class)arg0 ;
+(id)handlerQueue;
+(id)mergePersistedChanges:(id)arg0 ;
+(id)publicPHObjectChangeClasses;
+(void)pl_simulateChangeWithAssetContainerList:(id)arg0 photoLibrary:(id)arg1 handler:(id)arg2 ;
-(BOOL)anyUpdatedObjectsWithChangedAttributes:(NSUInteger)arg0 ofEntity:(id)arg1 ;
-(BOOL)anyUpdatedObjectsWithChangedRelationships:(NSUInteger)arg0 ofEntity:(id)arg1 ;
-(BOOL)assetCloudLocalStateChangedForAsset:(id)arg0 ;
-(BOOL)containsChangesForEntityClass:(Class)arg0 ;
-(BOOL)contentOrThumbnailChangedForAsset:(id)arg0 ;
-(BOOL)contentOrThumbnailChangedForPHAssetOID:(id)arg0 ;
-(BOOL)faceRelationshipChangedForPersonWithLocalIdentifier:(id)arg0 ;
-(BOOL)favoriteStateChangedForPHAssetOID:(id)arg0 ;
-(BOOL)hasRelationshipChangesForLocalIdentifier:(id)arg0 ;
-(BOOL)hiddenStateChangedForPHAssetOID:(id)arg0 ;
-(BOOL)highlightGroupRelationshipChangedForPhotosHighlightWithIdentifier:(id)arg0 ;
-(BOOL)intersectsWithDetectionCriteria:(id)arg0 managedObjectContext:(id)arg1 ;
-(BOOL)keyAssetsChangedForPHAssetCollectionOID:(id)arg0 ;
-(BOOL)keyFaceChangedForPersonOID:(id)arg0 ;
-(BOOL)momentRelationshipChangedForPhotosHighlightWithIdentifier:(id)arg0 ;
-(BOOL)packedBadgeAttributesChangedForPHAssetOID:(id)arg0 ;
-(BOOL)personRelationshipChangedForFaceWithLocalIdentifier:(id)arg0 ;
-(BOOL)trashedStateChangedForPHAssetOID:(id)arg0 ;
-(BOOL)userCuratedAssetsChangedForPHMemoryOID:(id)arg0 ;
-(BOOL)userFeedbackRelationshipChangedForObject:(id)arg0 ;
-(id)_changedLocalIdentifiersForEntityClass:(Class)arg0 context:(id)arg1 ;
-(id)_changedLocalIdentifiersWithPublicChangesForEntityClass:(Class)arg0 context:(id)arg1 ;
-(id)_deletedLocalIdentifiersForEntityClass:(Class)arg0 context:(id)arg1 ;
-(id)_fetchCombinedPublicResultsMapForEntityClass:(Class)arg0 predicate:(id)arg1 context:(id)arg2 ;
-(id)_fetchUUIDMapForObjectIDs:(id)arg0 entityClass:(Class)arg1 context:(id)arg2 ;
-(id)_formatEncodedDictionary:(id)arg0 withDecodeBlock:(id)arg1 ;
-(id)_formatedDeletedUUidsByObjectId;
-(id)_pl_prettyDescriptionWithIndent:(NSInteger)arg0 ;
-(id)_predicateForPublicResultsWithEntityClass:(Class)arg0 objectIDs:(id)arg1 ;
-(id)_preloadChangeDetailsWithClearCacheForFetchResults:(id)arg0 inManagedObjectContext:(id)arg1 ;
-(id)_preloadChangeDetailsWithRefetchForFetchResults:(id)arg0 inManagedObjectContext:(id)arg1 ;
-(id)_relationshipNamesForObjectID:(id)arg0 entityClass:(Class)arg1 ;
-(id)_retrieveLockingRestrictedUUIDsForUnresolvedAssetObjectIDsFrom:(id)arg0 minusResolved:(id)arg1 ;
-(id)changeDetailsForFetchResult:(id)arg0 ;
-(id)changeDetailsForObject:(id)arg0 ;
-(id)changedAttributesByOID;
-(id)changedLocalIdentifiersForEntityClass:(Class)arg0 ;
-(id)changedLocalIdentifiersForEntityClass:(Class)arg0 context:(id)arg1 ;
-(id)changedPropertyNamesForLocalIdentifier:(id)arg0 entityClass:(Class)arg1 ;
-(id)changedPropertyNamesForObject:(id)arg0 ;
-(id)changedPropertyNamesForObjectID:(id)arg0 entityClass:(Class)arg1 ;
-(id)changedRelationshipNamesForLocalIdentifier:(id)arg0 entityClass:(Class)arg1 ;
-(id)changedRelationshipNamesForObject:(id)arg0 ;
-(id)changedRelationshipsByOID;
-(id)deletedLocalIdentifiersForEntityClass:(Class)arg0 ;
-(id)deletedObjectIDs;
-(id)description;
-(id)init;
-(id)initWithChangedIdentifiers:(id)arg0 unknownMergeEvent:(BOOL)arg1 changeToken:(id)arg2 library:(id)arg3 ;
-(id)initWithChangedIdentifiers:(id)arg0 unknownMergeEvent:(BOOL)arg1 library:(id)arg2 ;
-(id)initWithInsertedObjectIDs:(id)arg0 updatedObjectIDs:(id)arg1 deletedObjectIDs:(id)arg2 deletedUuidsByObjectId:(id)arg3 changedAttributesByOID:(id)arg4 changedRelationshipsByOID:(id)arg5 unknownMergeEvent:(BOOL)arg6 changeToken:(id)arg7 fetchOptions:(id)arg8 library:(id)arg9 managedObjectContext:(id)arg10 enumerationContext:(id)arg11 ;
-(id)insertedObjectIDs;
-(id)retrieveUUIDsForAssetObjectIDs:(id)arg0 filterPredicate:(id)arg1 ;
-(id)updatedObjectIDs;
-(void)_prepareCachedValuesForEntity:(id)arg0 ;
-(void)preloadChangeDetailsForFetchResults:(id)arg0 inManagedObjectContext:(id)arg1 handler:(id)arg2 ;
-(void)preloadSimulatedChangeDetailsForManualFetchResults:(id)arg0 handler:(id)arg1 ;


@end


#endif
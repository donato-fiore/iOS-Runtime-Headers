// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHCHANGE_H
#define PHCHANGE_H

@class NSSet, NSDictionary, NSMutableDictionary, NSArray, NSMapTable, NSManagedObjectContext;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PHPersistentChangeToken.h"

@interface PHChange : NSObject {
    NSSet *_insertedObjectIDs;
    NSSet *_changedObjectIDs;
    NSSet *_deletedObjectIDs;
    NSDictionary *_changedAttributesByOID;
    NSDictionary *_changedRelationshipsByOID;
    NSMutableDictionary *_updatedObjectsChangedAttributesByEntityName;
    NSMutableDictionary *_updatedObjectsChangedRelationshipsByEntityName;
    NSArray *_changedObjectIDsArray;
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
@property (readonly, nonatomic) BOOL hasIncrementalChanges;
@property (readonly, nonatomic) NSUInteger totalChangeCount;


+(id)handlerQueue;
+(id)mergePersistedChanges:(id)arg0 ;
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
-(id)_formatEncodedDictionary:(id)arg0 withDecodeBlock:(id)arg1 ;
-(id)_formatedDeletedUUidsByObjectId;
-(id)_pl_prettyDescriptionWithIndent:(NSInteger)arg0 ;
-(id)_preloadChangeDetailsWithClearCacheForFetchResults:(id)arg0 inManagedObjectContext:(id)arg1 ;
-(id)_preloadChangeDetailsWithRefetchForFetchResults:(id)arg0 inManagedObjectContext:(id)arg1 ;
-(id)_propertyNamesForObjectID:(id)arg0 entityClass:(Class)arg1 ;
-(id)_relationshipNamesForObjectID:(id)arg0 entityClass:(Class)arg1 ;
-(id)changeDetailsForFetchResult:(id)arg0 ;
-(id)changeDetailsForObject:(id)arg0 ;
-(id)changedAttributesByOID;
-(id)changedLocalIdentifiersForEntityClass:(Class)arg0 ;
-(id)changedLocalIdentifiersForEntityClass:(Class)arg0 context:(id)arg1 ;
-(id)changedPropertyNamesForLocalIdentifier:(id)arg0 entityClass:(Class)arg1 ;
-(id)changedPropertyNamesForObject:(id)arg0 ;
-(id)changedRelationshipNamesForLocalIdentifier:(id)arg0 entityClass:(Class)arg1 ;
-(id)changedRelationshipNamesForObject:(id)arg0 ;
-(id)changedRelationshipsByOID;
-(id)deletedObjectIDs;
-(id)description;
-(id)fetchUUIDMapForObjectIDs:(id)arg0 entityClass:(Class)arg1 context:(id)arg2 ;
-(id)init;
-(id)initWithChangedIdentifiers:(id)arg0 unknownMergeEvent:(BOOL)arg1 ;
-(id)initWithChangedIdentifiers:(id)arg0 unknownMergeEvent:(BOOL)arg1 changeToken:(id)arg2 ;
-(id)initWithInsertedObjectIDs:(id)arg0 updatedObjectIDs:(id)arg1 deletedObjectIDs:(id)arg2 deletedUuidsByObjectId:(id)arg3 changedAttributesByOID:(id)arg4 changedRelationshipsByOID:(id)arg5 unknownMergeEvent:(BOOL)arg6 changeToken:(id)arg7 managedObjectContext:(id)arg8 ;
-(id)insertedObjectIDs;
-(id)updatedObjectIDs;
-(void)_prepareCachedValuesForEntity:(id)arg0 ;
-(void)preloadChangeDetailsForFetchResults:(id)arg0 inManagedObjectContext:(id)arg1 handler:(id)arg2 ;
-(void)preloadSimulatedChangeDetailsForManualFetchResults:(id)arg0 handler:(id)arg1 ;


@end


#endif
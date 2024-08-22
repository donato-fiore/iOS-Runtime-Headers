// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSATOMICSTORE_H
#define NSATOMICSTORE_H

@class NSMutableDictionary;


#import "NSPersistentStore.h"

@interface NSAtomicStore : NSPersistentStore {
    NSMutableDictionary *_nodeCache;
    NSMutableDictionary *_entityCache;
    NSMutableDictionary *_storeMetadata;
    NSInteger _nextReference;
    *void _reserved4;
    *void _reserved5;
}




+(id)metadataForPersistentStoreWithURL:(id)arg0 error:(*id)arg1 ;
+(void)initialize;
-(BOOL)load:(*id)arg0 ;
-(BOOL)save:(*id)arg0 ;
-(id)_rawMetadata__;
-(id)cacheNodeForObjectID:(id)arg0 ;
-(id)cacheNodes;
-(id)executeRequest:(id)arg0 withContext:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithPersistentStoreCoordinator:(id)arg0 configurationName:(id)arg1 URL:(id)arg2 options:(id)arg3 ;
-(id)metadata;
-(id)newCacheNodeForManagedObject:(id)arg0 ;
-(id)newReferenceObjectForManagedObject:(id)arg0 ;
-(id)newValueForRelationship:(id)arg0 forObjectWithID:(id)arg1 withContext:(id)arg2 error:(*id)arg3 ;
-(id)newValuesForObjectWithID:(id)arg0 withContext:(id)arg1 error:(*id)arg2 ;
-(id)objectIDForEntity:(id)arg0 referenceObject:(id)arg1 ;
-(id)obtainPermanentIDsForObjects:(id)arg0 error:(*id)arg1 ;
-(id)referenceObjectForObjectID:(id)arg0 ;
-(void)_didLoadMetadata;
-(void)_preflightCrossCheck;
-(void)addCacheNodes:(id)arg0 ;
-(void)dealloc;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg0 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg0 ;
-(void)setMetadata:(id)arg0 ;
-(void)updateCacheNode:(id)arg0 fromManagedObject:(id)arg1 ;
-(void)willRemoveCacheNodes:(id)arg0 ;


@end


#endif
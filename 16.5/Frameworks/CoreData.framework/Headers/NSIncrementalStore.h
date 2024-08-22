// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSINCREMENTALSTORE_H
#define NSINCREMENTALSTORE_H

@class NSDictionary;


#import "NSPersistentStore.h"

@interface NSIncrementalStore : NSPersistentStore {
    NSDictionary *_storeMetadata;
    NSUInteger _lastIdentifier;
    *void _reserveda;
    *void _reservedb;
}




+(BOOL)setMetadata:(id)arg0 forPersistentStoreWithURL:(id)arg1 error:(*id)arg2 ;
+(id)identifierForNewStoreAtURL:(id)arg0 ;
+(id)metadataForPersistentStoreWithURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)_prepareForExecuteRequest:(id)arg0 withContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)load:(*id)arg0 ;
-(BOOL)loadMetadata:(*id)arg0 ;
-(id)_newObjectIDForEntityDescription:(id)arg0 pk:(NSInteger)arg1 ;
-(id)_rawMetadata__;
-(id)executeRequest:(id)arg0 withContext:(id)arg1 error:(*id)arg2 ;
-(id)metadata;
-(id)newObjectIDForEntity:(id)arg0 referenceObject:(id)arg1 ;
-(id)newValueForRelationship:(id)arg0 forObjectWithID:(id)arg1 withContext:(id)arg2 error:(*id)arg3 ;
-(id)newValuesForObjectWithID:(id)arg0 withContext:(id)arg1 error:(*id)arg2 ;
-(id)obtainPermanentIDsForObjects:(id)arg0 error:(*id)arg1 ;
-(id)referenceObjectForObjectID:(id)arg0 ;
-(void)_preflightCrossCheck;
-(void)_setMetadata:(id)arg0 includeVersioning:(BOOL)arg1 ;
-(void)dealloc;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg0 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg0 ;
-(void)setMetadata:(id)arg0 ;


@end


#endif
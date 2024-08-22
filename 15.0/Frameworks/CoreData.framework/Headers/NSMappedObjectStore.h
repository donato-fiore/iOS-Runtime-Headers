// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSMAPPEDOBJECTSTORE_H
#define NSMAPPEDOBJECTSTORE_H

@class NSSet;


#import "NSPersistentStore.h"
#import "NSPersistentStoreMap.h"

@interface NSMappedObjectStore : NSPersistentStore {
    NSPersistentStoreMap *_theMap;
    NSSet *_entitiesToFetch;
}




+(BOOL)setMetadata:(id)arg0 forPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
+(id)metadataForPersistentStoreWithURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)_rawMetadata__;
-(id)executeRequest:(id)arg0 withContext:(id)arg1 error:(*id)arg2 ;
-(id)identifier;
-(id)init;
-(id)initWithPersistentStoreCoordinator:(id)arg0 configurationName:(id)arg1 URL:(id)arg2 options:(id)arg3 ;
-(id)metadata;
-(id)newValueForRelationship:(id)arg0 forObjectWithID:(id)arg1 withContext:(id)arg2 error:(*id)arg3 ;
-(id)newValuesForObjectWithID:(id)arg0 withContext:(id)arg1 error:(*id)arg2 ;
-(id)obtainPermanentIDsForObjects:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg0 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg0 ;
-(void)saveDocumentToPath:(id)arg0 ;
-(void)setMetadata:(id)arg0 ;


@end


#endif
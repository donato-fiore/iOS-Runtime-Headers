// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPERSISTENTSTORECOORDINATOR_H
#define NSPERSISTENTSTORECOORDINATOR_H

@class NSArray, NSString, NSMutableArray, NSError;
@protocol NSLocking;

#import <Foundation/Foundation.h>

#import "NSManagedObjectModel.h"
#import "_PFModelMap.h"

@interface NSPersistentStoreCoordinator : NSObject <NSLocking>

 {
    id *_queueOwner;
    *void _dispatchQueue;
    _persistentStoreCoordinatorFlags _flags;
    int _cd_rc;
    os_unfair_lock_s _miniLock;
    NSManagedObjectModel *_managedObjectModel;
    NSArray *_persistentStores;
    NSString *_queueLabel;
    NSMutableArray *_extendedStoreURLs;
    NSError *_lastOpenError;
    id *_xpcBundleID;
    NSString *_xpcProcessName;
    _PFModelMap *_modelMap;
}


@property (readonly) NSManagedObjectModel *managedObjectModel;
@property (copy) NSString *name;
@property (readonly) NSArray *persistentStores;


+(BOOL)accessInstanceVariablesDirectly;
+(BOOL)removePersistentHistoryFromPersistentStoreAtURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(BOOL)removeUbiquitousContentAndPersistentStoreAtURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(BOOL)setMetadata:(id)arg0 forPersistentStoreOfType:(id)arg1 URL:(id)arg2 error:(*id)arg3 ;
+(BOOL)setMetadata:(id)arg0 forPersistentStoreOfType:(id)arg1 URL:(id)arg2 options:(id)arg3 error:(*id)arg4 ;
+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)metadataForPersistentStoreOfType:(id)arg0 URL:(id)arg1 error:(*id)arg2 ;
+(id)metadataForPersistentStoreOfType:(id)arg0 URL:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
+(id)registeredStoreTypes;
+(id)ubiquityStoreURLForStoreURL:(id)arg0 ubiquityIdentityToken:(id)arg1 ubiquityName:(id)arg2 ;
+(void)_registerCoreDataStoreClass:(Class)arg0 forStoreType:(id)arg1 ;
+(void)initialize;
+(void)registerStoreClass:(Class)arg0 forStoreType:(id)arg1 ;
-(BOOL)_destroyPersistentStoreAtURL:(id)arg0 withType:(id)arg1 error:(*id)arg2 ;
-(BOOL)_destroyPersistentStoreAtURL:(id)arg0 withType:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(BOOL)_isDeallocating;
-(BOOL)_refreshTriggerValuesInStore:(id)arg0 error:(*id)arg1 ;
-(BOOL)_rekeyPersistentStoreAtURL:(id)arg0 type:(id)arg1 options:(id)arg2 withKey:(id)arg3 error:(*id)arg4 ;
-(BOOL)_removeAllPersistentStores:(*id)arg0 ;
-(BOOL)_replacePersistentStoreAtURL:(id)arg0 destinationOptions:(id)arg1 withPersistentStoreFromURL:(id)arg2 sourceOptions:(id)arg3 storeType:(id)arg4 error:(*id)arg5 ;
-(BOOL)_tryRetain;
-(BOOL)_validateQueryGeneration:(id)arg0 error:(*id)arg1 ;
-(BOOL)destroyPersistentStoreAtURL:(id)arg0 withType:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(BOOL)finishDeferredLightweightMigration:(*id)arg0 ;
-(BOOL)finishDeferredLightweightMigrationTask:(*id)arg0 ;
-(BOOL)obtainPermanentIDsForObjects:(id)arg0 error:(*id)arg1 ;
-(BOOL)removePersistentStore:(id)arg0 error:(*id)arg1 ;
-(BOOL)replacePersistentStoreAtURL:(id)arg0 destinationOptions:(id)arg1 withPersistentStoreFromURL:(id)arg2 sourceOptions:(id)arg3 storeType:(id)arg4 error:(*id)arg5 ;
-(BOOL)setURL:(id)arg0 forPersistentStore:(id)arg1 ;
-(BOOL)tryLock;
-(NSUInteger)retainCount;
-(id)URLForPersistentStore:(id)arg0 ;
-(id)_allOrderKeysForDestination:(id)arg0 inRelationship:(id)arg1 error:(*id)arg2 ;
-(id)_exceptionNoStoreSaveFailureForError:(id)arg0 recommendedFrame:(*int)arg1 ;
-(id)_newOrderedRelationshipInformationForRelationship:(id)arg0 forObjectWithID:(id)arg1 withContext:(id)arg2 error:(*id)arg3 ;
-(id)_retainedCurrentQueryGeneration:(id)arg0 ;
-(id)addPersistentStoreWithType:(id)arg0 configuration:(id)arg1 URL:(id)arg2 options:(id)arg3 error:(*id)arg4 ;
-(id)currentPersistentHistoryTokenFromStores:(id)arg0 ;
-(id)currentQueryGenerationTokenFromStores:(id)arg0 ;
-(id)executeRequest:(id)arg0 withContext:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithManagedObjectModel:(id)arg0 ;
-(id)managedObjectIDForURIRepresentation:(id)arg0 ;
-(id)managedObjectIDFromUTF8String:(char *)arg0 length:(NSUInteger)arg1 ;
-(id)metadataForPersistentStore:(id)arg0 ;
-(id)migratePersistentStore:(id)arg0 toURL:(id)arg1 options:(id)arg2 withType:(id)arg3 error:(*id)arg4 ;
-(id)newValueForRelationship:(id)arg0 forObjectWithID:(id)arg1 withContext:(id)arg2 error:(*id)arg3 ;
-(id)newValuesForObjectWithID:(id)arg0 withContext:(id)arg1 error:(*id)arg2 ;
-(id)persistentStoreCoordinator;
-(id)persistentStoreForIdentifier:(id)arg0 ;
-(id)persistentStoreForURL:(id)arg0 ;
-(id)retain;
-(void)addPersistentStoreWithDescription:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)lock;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg0 generation:(id)arg1 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg0 generation:(id)arg1 ;
-(void)performBlock:(id)arg0 ;
-(void)performBlockAndWait:(id)arg0 ;
-(void)release;
-(void)setMetadata:(id)arg0 forPersistentStore:(id)arg1 ;
-(void)unlock;


@end


#endif
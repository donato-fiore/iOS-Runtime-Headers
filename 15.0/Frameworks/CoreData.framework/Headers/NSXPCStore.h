// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSXPCSTORE_H
#define NSXPCSTORE_H

@class NSDictionary, NSString;
@protocol NSSQLModelProvider, NSCoreDataKeyedArchivingDelegate;


#import "NSIncrementalStore.h"
#import "NSGenerationalRowCache.h"
#import "NSXPCStoreConnectionManager.h"
#import "NSSQLModel.h"
#import "NSSQLCore.h"
#import "NSXPCStoreNotificationObserver.h"

@interface NSXPCStore : NSIncrementalStore <NSSQLModelProvider, NSCoreDataKeyedArchivingDelegate>

 {
    NSDictionary *_metadata;
    NSGenerationalRowCache *_cache;
    NSString *_fileBackedFuturesDirectory;
    NSXPCStoreConnectionManager *_connectionManager;
    NSSQLModel *_model;
    NSSQLCore *_core;
    NSString *_sanityCheckToken;
    NSXPCStoreNotificationObserver *_observer;
    os_unfair_lock_s _stateLock;
}


@property (readonly, copy) NSString *remoteStoreChangedNotificationName; // ivar: _remoteStoreChangedNotificationName


+(BOOL)_allowCoreDataFutures;
+(BOOL)_isOnExtendedTimeout;
+(id)archiver:(id)arg0 willEncodeObject:(id)arg1 ;
+(id)replacementObjectForXPCConnection:(id)arg0 encoder:(id)arg1 object:(id)arg2 ;
+(int)debugDefault;
+(void)initialize;
+(void)setDebugDefault:(int)arg0 ;
-(BOOL)_allowCoreDataFutures;
-(BOOL)_hasActiveGenerations;
-(BOOL)load:(*id)arg0 ;
-(BOOL)loadMetadata:(*id)arg0 ;
-(BOOL)supportsConcurrentRequestHandling;
-(BOOL)supportsGenerationalQuerying;
-(Class)_objectIDClass;
-(Class)objectIDFactoryForSQLEntity:(id)arg0 ;
-(id)_newObjectIDForEntityDescription:(id)arg0 pk:(NSInteger)arg1 ;
-(id)_rawMetadata__;
-(id)_storeInfoForEntityDescription:(id)arg0 ;
-(id)ancillaryModels;
-(id)ancillarySQLModels;
-(id)connectionManager;
-(id)currentChangeToken;
-(id)currentQueryGeneration;
-(id)executeRequest:(id)arg0 withContext:(id)arg1 error:(*id)arg2 ;
-(id)fileBackedFuturesDirectory;
-(id)initWithPersistentStoreCoordinator:(id)arg0 configurationName:(id)arg1 URL:(id)arg2 options:(id)arg3 ;
-(id)metadata;
-(id)model;
-(id)newForeignKeyID:(NSInteger)arg0 entity:(id)arg1 ;
-(id)newValueForRelationship:(id)arg0 forObjectWithID:(id)arg1 withContext:(id)arg2 error:(*id)arg3 ;
-(id)newValuesForObjectWithID:(id)arg0 withContext:(id)arg1 error:(*id)arg2 ;
-(id)objectIDFactoryForEntity:(id)arg0 ;
-(id)obtainPermanentIDsForObjects:(id)arg0 error:(*id)arg1 ;
-(id)reopenQueryGenerationWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)replacementObjectForXPCConnection:(id)arg0 encoder:(id)arg1 object:(id)arg2 ;
-(id)sqlCore;
-(id)type;
-(void)_setMetadata:(id)arg0 includeVersioning:(BOOL)arg1 ;
-(void)dealloc;
-(void)freeQueryGenerationWithIdentifier:(id)arg0 ;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg0 generation:(id)arg1 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg0 generation:(id)arg1 ;
-(void)setIdentifier:(id)arg0 ;
-(void)setMetadata:(id)arg0 ;
-(void)setURL:(id)arg0 ;
-(void)willRemoveFromPersistentStoreCoordinator:(id)arg0 ;


@end


#endif
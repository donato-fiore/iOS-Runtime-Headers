// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCOREDATA_H
#define HMDCOREDATA_H

@class HMFObject, NSPersistentStore, NSHashTable, NSMapTable, HMFPromise, NSSet, NSPersistentCloudKitContainer, NSPersistentStoreCoordinator, NSString, HMFFuture;
@protocol HMFLogging, OS_os_log, HMDCoreDataNotificationCenter;


#import "HMCContext.h"

@interface HMDCoreData : HMFObject <HMFLogging>

 {
    NSObject<OS_os_log> *_logger;
    os_unfair_lock_s _lock;
    NSUInteger _setupSignpostID;
    BOOL _firstCloudKitImportComplete;
    BOOL _usingLiveCloudKit;
    NSPersistentStore *_workingStore;
    NSPersistentStore *_cloudPrivateStore;
    NSPersistentStore *_cloudSharedStore;
    NSPersistentStore *_localStore;
    NSHashTable *_listeners;
    NSMapTable *_contexts;
    HMFPromise *_firstCloudKitImportPromise;
}


@property (readonly, copy, nonatomic) NSSet *allContexts;
@property (readonly, nonatomic) NSPersistentStore *cloudPrivateStore;
@property (readonly, nonatomic) NSPersistentStore *cloudSharedStore;
@property (readonly, nonatomic) NSPersistentCloudKitContainer *container; // ivar: _container
@property (readonly, nonatomic) HMCContext *contextWithRootPartition;
@property (readonly, nonatomic) NSPersistentStoreCoordinator *coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HMFFuture *firstCloudKitImportFuture; // ivar: _firstCloudKitImportFuture
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSPersistentStore *localStore;
@property (readonly, nonatomic) NSObject<HMDCoreDataNotificationCenter> *notificationCenter; // ivar: _notificationCenter
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSPersistentStore *workingStore;


+(id)createWithDefaultPersistentStoresWithoutLiveCloudKit;
+(id)createWithPersistentStoreDescriptions:(id)arg0 ;
+(id)createWithPersistentStoreDescriptions:(id)arg0 notificationCenter:(id)arg1 ;
+(id)defaultPersistentStoreDescriptions;
+(id)logCategory;
+(id)managedObjectModel;
+(id)sharedInstance;
+(void)cleanUpSharedInstance;
-(BOOL)isRelatedContext:(id)arg0 ;
-(id)contextWithHomeUUID:(id)arg0 ;
-(id)dumpCloudKitConfiguration:(BOOL)arg0 localConfiguration:(BOOL)arg1 workingConfiguration:(BOOL)arg2 includeFakeModels:(BOOL)arg3 context:(id)arg4 error:(*id)arg5 ;
-(id)dumpConfiguration:(id)arg0 includeFakeModels:(BOOL)arg1 context:(id)arg2 error:(*id)arg3 ;
-(id)initWithCloudKitContainer:(id)arg0 notificationCenter:(id)arg1 ;
-(id)initWithPersistentStoreDescriptions:(id)arg0 notificationCenter:(id)arg1 ;
-(id)newManagedObjectContext;
-(void)_handleChangeNotification:(id)arg0 ;
-(void)_handleDidResetSyncNotification:(id)arg0 ;
-(void)_handlePersistentCloudKitContainerEventChangedNotification:(id)arg0 ;
-(void)_handleWillResetSyncNotification:(id)arg0 ;
-(void)addNotificationListener:(id)arg0 ;
-(void)removeNotificationListener:(id)arg0 ;
-(void)startWatchingManagedObjectChanges;
-(void)stopWatchingManagedObjectChanges;


@end


#endif
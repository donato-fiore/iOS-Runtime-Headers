// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCOREDATA_H
#define HMDCOREDATA_H

@class HMFObject, NSMutableArray, NSMapTable, HMFPromise, NSSet, NSPersistentStore, NSPersistentCloudKitContainer, NSPersistentStoreCoordinator, NSString, HMFFuture;
@protocol HMFLogging, HMDCoreDataNotificationCenter;



@interface HMDCoreData : HMFObject <HMFLogging>

 {
    os_unfair_lock_s _lock;
    id<HMDCoreDataNotificationCenter> *_notificationCenter;
    NSMutableArray *_listeners;
    NSMapTable *_contexts;
    HMFPromise *_firstCloudKitImportPromise;
}


@property (readonly, copy, nonatomic) NSSet *allContexts;
@property (readonly, nonatomic) NSPersistentStore *cloudPrivateStore; // ivar: _cloudPrivateStore
@property (readonly, nonatomic) NSPersistentStore *cloudSharedStore; // ivar: _cloudSharedStore
@property (readonly, nonatomic) NSPersistentCloudKitContainer *container; // ivar: _container
@property (readonly, nonatomic) NSPersistentStoreCoordinator *coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL firstCloudKitImportComplete; // ivar: _firstCloudKitImportComplete
@property (readonly, nonatomic) HMFFuture *firstCloudKitImportFuture; // ivar: _firstCloudKitImportFuture
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSPersistentStore *localStore; // ivar: _localStore
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSPersistentStore *workingStore; // ivar: _workingStore


+(id)createWithPersistentStoreDescriptions:(id)arg0 ;
+(id)createWithPersistentStoreDescriptions:(id)arg0 notificationCenter:(id)arg1 ;
+(id)defaultPersistentStoreDescriptions;
+(id)logCategory;
+(id)managedObjectModel;
+(id)sharedInstance;
-(id)contextWithHomeUUID:(id)arg0 ;
-(id)contextWithRootPartition;
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
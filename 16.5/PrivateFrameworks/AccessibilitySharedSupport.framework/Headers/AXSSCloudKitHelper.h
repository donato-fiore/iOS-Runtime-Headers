// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSSCLOUDKITHELPER_H
#define AXSSCLOUDKITHELPER_H

@class NSMutableArray, APSConnection, CKContainer, NSString, CKDatabase, NSURL, NSError, NSManagedObjectContext, NSPersistentStoreCoordinator, NSPersistentStore, CKRecordZone, CKRecordZoneSubscription;
@protocol APSConnectionDelegate, OS_dispatch_semaphore, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AXSSCloudKitHelper : NSObject <APSConnectionDelegate>

 {
    NSMutableArray *_accumulatedQueuedData;
}


@property (readonly, nonatomic) APSConnection *apsConnection; // ivar: _apsConnection
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *cloudKitQueueSemaphore; // ivar: _cloudKitQueueSemaphore
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cloudkitQueue; // ivar: _cloudkitQueue
@property (readonly, nonatomic) CKContainer *container; // ivar: _container
@property (readonly, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (readonly, nonatomic) CKDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isProtectedDataAvailable; // ivar: _isProtectedDataAvailable
@property (readonly, nonatomic) NSURL *largeBlobDirectoryURL; // ivar: _largeBlobDirectoryURL
@property (readonly, nonatomic) NSError *lastInitializationError; // ivar: _lastInitializationError
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // ivar: _managedObjectContext
@property (nonatomic) BOOL observeLocalDatabaseChanges; // ivar: _observeLocalDatabaseChanges
@property (readonly, nonatomic) NSPersistentStoreCoordinator *observedCoordinator; // ivar: _observedCoordinator
@property (readonly, weak, nonatomic) NSPersistentStore *observedStore; // ivar: _observedStore
@property (readonly, nonatomic) CKRecordZone *recordZone; // ivar: _recordZone
@property (readonly) Class superclass;
@property (readonly, nonatomic) CKRecordZoneSubscription *zoneSubscription; // ivar: _zoneSubscription


-(BOOL)_checkAccountStatus:(*id)arg0 ;
-(BOOL)_createSchemaIfNecessary:(*id)arg0 ;
-(BOOL)_createZoneIfNecessary:(*id)arg0 ;
-(BOOL)_setupPushConnection:(*id)arg0 ;
-(BOOL)_setupZoneSubscriptionIfNecessary:(*id)arg0 ;
-(BOOL)shouldExportManagedObject:(id)arg0 ;
-(Class)managedObjectClass;
-(id)apsEnvironment;
-(id)cloudKitPushTopic;
-(id)createCKRecordFromObject:(id)arg0 ;
-(id)initWithContainerIdentifier:(id)arg0 zoneName:(id)arg1 ;
-(id)recordType;
-(id)serverChangeTokenMetadataKey;
-(id)testRecordForSchemaCreation:(id)arg0 ;
-(id)zoneCreatedKey;
-(void)_initializeCloudkitForObservedStore;
-(void)_processAccumulatedQueueData;
-(void)beginWatchingForChanges;
-(void)clearRecordsForPurging:(id)arg0 ;
-(void)connection:(id)arg0 didReceiveMessageForTopic:(id)arg1 userInfo:(id)arg2 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3 ;
-(void)dealloc;
-(void)fetchChangesAndUpdateObservedStore;
-(void)logMessage:(id)arg0 ;
-(void)managedObjectContextDidSave:(id)arg0 ;
-(void)observeChangesForManagedContext:(id)arg0 ;
-(void)openTransactionWithLabel:(id)arg0 andExecuteWorkBlock:(id)arg1 ;
-(void)processAccumulatedChangesForServerChangeToken:(id)arg0 withAccumulatedUpdates:(id)arg1 andDeletes:(id)arg2 inTransaction:(id)arg3 ;
-(void)processLocalChangesAndPush;
-(void)processRecordDeletionsFromServer:(id)arg0 ;
-(void)processServerUpdateChanges:(id)arg0 moc:(id)arg1 recordNameToManagedObject:(id)arg2 ;
-(void)retrieveLocalChangesForCloud:(id)arg0 ;


@end


#endif
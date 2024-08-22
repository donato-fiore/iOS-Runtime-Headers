// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKKNOWLEDGESTORAGE_H
#define _DKKNOWLEDGESTORAGE_H

@class NSString, NSURL, NSHashTable, NSUUID;
@protocol _DKCoreDataStorageDelegate, _DKKnowledgeEventStreamDeleting, _DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeQuerying, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_DKCoreDataStorage.h"
#import "_DKTombstonePolicy.h"

@interface _DKKnowledgeStorage : NSObject <_DKCoreDataStorageDelegate, _DKKnowledgeEventStreamDeleting, _DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeQuerying>

 {
    NSObject<OS_dispatch_queue> *_defaultResponseQueue;
    NSString *_directory;
    NSURL *_modelURL;
    NSHashTable *_knowledgeStorageEventNotificationDelegates;
    NSUInteger _insertsAndDeletesObserverCount;
    NSString *_clientID;
    NSObject<OS_dispatch_queue> *_executionQueue;
}


@property (readonly, nonatomic) NSUUID *deviceUUID; // ivar: _deviceUUID
@property (nonatomic) BOOL enableBiomeMigrationDeletion; // ivar: _enableBiomeMigrationDeletion
@property (readonly, nonatomic) BOOL localOnly; // ivar: _localOnly
@property (readonly, nonatomic) _DKCoreDataStorage *storage; // ivar: _storage
@property (readonly, nonatomic) _DKCoreDataStorage *syncStorage; // ivar: _syncStorage
@property (retain) _DKTombstonePolicy *tombstonePolicy; // ivar: _tombstonePolicy


+(id)sourceDeviceIdentityFromObject:(id)arg0 ;
+(id)storageWithDirectory:(id)arg0 readOnly:(BOOL)arg1 ;
+(id)storageWithDirectory:(id)arg0 readOnly:(BOOL)arg1 localOnly:(BOOL)arg2 ;
+(id)storageWithShallowCopyFromStorage:(id)arg0 clientIdentifier:(id)arg1 ;
+(id)storeWithDirectory:(id)arg0 readOnly:(BOOL)arg1 ;
-(BOOL)coreDataStorage:(id)arg0 didAutoMigratePersistentStore:(id)arg1 toManagedObjectModel:(id)arg2 havingVersion:(NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)coreDataStorage:(id)arg0 shouldCallDelegateAfterAutoMigrationToManagedObjectModelHavingVersion:(NSUInteger)arg1 ;
-(BOOL)coreDataStorage:(id)arg0 shouldCallDelegateBeforeAutoMigrationFromManagedObjectModelHavingVersion:(NSUInteger)arg1 ;
-(BOOL)coreDataStorage:(id)arg0 willAutoMigrateStoreAtURL:(id)arg1 fromManagedObjectModel:(id)arg2 havingVersion:(NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)deleteObjects:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteStorage;
-(BOOL)deleteSyncStorage;
-(BOOL)migrateDataToBiomeWithManagedObjectContext:(id)arg0 ;
-(BOOL)saveChangeSetsForSync:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveObjects:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveSyncPeer:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)deleteAllEventsInEventStream:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)deleteAllEventsMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)deleteEventsMatchingPredicate:(id)arg0 limit:(NSUInteger)arg1 ;
-(NSUInteger)deleteEventsStartingEarlierThanDate:(id)arg0 limit:(NSUInteger)arg1 ;
-(NSUInteger)deleteHistogram:(id)arg0 ;
-(NSUInteger)deleteObjectsInEventStream:(id)arg0 ifNeededToLimitEventCount:(NSUInteger)arg1 batchLimit:(NSUInteger)arg2 ;
-(NSUInteger)deleteObjectsInEventStreams:(id)arg0 olderThanDate:(id)arg1 limit:(NSUInteger)arg2 ;
-(NSUInteger)deleteObjectsOlderThanDate:(id)arg0 excludingPredicate:(id)arg1 limit:(NSUInteger)arg2 ;
-(NSUInteger)deleteOldObjectsIfNeededToLimitTotalNumber:(NSUInteger)arg0 excludingPredicate:(id)arg1 limit:(NSUInteger)arg2 ;
-(NSUInteger)deleteOrphanedEntities;
-(NSUInteger)eventCount;
-(NSUInteger)lastSequenceNumberForChangeSetWithEntityName:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)totalEventCountForStreams:(id)arg0 ;
-(id)coreDataStorage:(id)arg0 needsManagedObjectModelNameForVersion:(NSUInteger)arg1 ;
-(id)eventCountPerStreamName;
-(id)eventCountsForStreams:(id)arg0 ;
-(id)executeQuery:(id)arg0 error:(*id)arg1 ;
-(id)fetchLocalChangesSinceDate:(id)arg0 error:(*id)arg1 ;
-(id)fetchSyncChangesSinceDate:(id)arg0 error:(*id)arg1 ;
-(id)keyValueStoreForDomain:(id)arg0 ;
-(id)lastChangeSetWithEntityName:(id)arg0 error:(*id)arg1 ;
-(id)sourceDeviceIdentity;
-(id)syncPeersWithError:(*id)arg0 ;
-(void)_databaseChangedWithNotification:(id)arg0 ;
-(void)addKnowledgeStorageEventNotificationDelegate:(id)arg0 ;
-(void)closeStorage;
-(void)closeSyncStorage;
-(void)dealloc;
-(void)decrementInsertsAndDeletesObserverCount;
-(void)deleteAllEventsInEventStream:(id)arg0 responseQueue:(id)arg1 withCompletion:(id)arg2 ;
-(void)deleteAllEventsMatchingPredicate:(id)arg0 responseQueue:(id)arg1 withCompletion:(id)arg2 ;
-(void)deleteObjects:(id)arg0 responseQueue:(id)arg1 withCompletion:(id)arg2 ;
-(void)executeQuery:(id)arg0 responseQueue:(id)arg1 ;
-(void)executeQuery:(id)arg0 responseQueue:(id)arg1 withCompletion:(id)arg2 ;
-(void)incrementInsertsAndDeletesObserverCount;
-(void)removeKnowledgeStorageEventNotificationDelegate:(id)arg0 ;
-(void)removeSyncPeer:(id)arg0 ;
-(void)saveHistogram:(id)arg0 responseQueue:(id)arg1 withCompletion:(id)arg2 ;
-(void)saveObjects:(id)arg0 responseQueue:(id)arg1 withCompletion:(id)arg2 ;
// -(void)saveObjects:(id)arg0 tracker:(id)arg1 responseQueue:(unk)arg2 withCompletion:(id)arg3  ;
-(void)startSyncDownFromCloudWithResponseQueue:(id)arg0 withCompletion:(id)arg1 ;
-(void)startSyncUpToCloudWithResponseQueue:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif
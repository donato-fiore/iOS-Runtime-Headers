// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSPCLOUDCONTAINER_H
#define MSPCLOUDCONTAINER_H

@class NSError, CKContainer, NSHashTable, NSMutableDictionary;
@protocol MSPCloudNotificationReceiver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MSPCloudKitAccountAccess.h"
#import "MSPCloudContainerCache.h"
#import "MSPContainer.h"
#import "MSPJournal.h"

@interface MSPCloudContainer : NSObject <MSPCloudNotificationReceiver>

 {
    BOOL _requiresRemoteFetch;
}


@property (retain, nonatomic) MSPCloudKitAccountAccess *access; // ivar: _access
@property (retain, nonatomic) MSPCloudContainerCache *cache; // ivar: _cache
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (copy, nonatomic) NSError *cancelError; // ivar: _cancelError
@property (nonatomic) BOOL canceled; // ivar: _canceled
@property (readonly, nonatomic) CKContainer *ckContainer;
@property (retain, nonatomic) MSPContainer *container; // ivar: _container
@property (nonatomic) BOOL hasActiveSubscription; // ivar: _hasActiveSubscription
@property (retain, nonatomic) MSPJournal *journal; // ivar: _journal
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // ivar: _observerQueue
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (nonatomic) NSUInteger operationBatchSize; // ivar: _operationBatchSize
@property (retain, nonatomic) NSMutableDictionary *pendingOperations; // ivar: _pendingOperations
@property (nonatomic) BOOL useSecureContainer; // ivar: _useSecureContainer


-(BOOL)isCanceled;
-(BOOL)useZoneWidePCS;
-(Class)replicaRecordClass;
-(id)_modifyRecordsOperationWithRecordsToSave:(id)arg0 toDelete:(id)arg1 group:(id)arg2 modifyRecordsCompletion:(id)arg3 ;
-(id)batchedOperationsFromRecords:(id)arg0 toDelete:(id)arg1 group:(id)arg2 batchSize:(NSUInteger)arg3 modifyRecordsCompletionBlock:(id)arg4 ;
-(id)description;
-(id)initWithContainer:(id)arg0 accountID:(id)arg1 ;
-(id)initWithContainer:(id)arg0 cache:(id)arg1 ;
-(id)initWithContainer:(id)arg0 cache:(id)arg1 access:(id)arg2 ;
-(id)mergeOptionsForEarliestKnownSyncDate:(id)arg0 ;
-(id)zoneID;
-(id)zoneName;
-(id)zoneSubscriptionName;
-(void)_forEachObserver:(id)arg0 ;
-(void)addCKOperation:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)cancelMergeWithError:(id)arg0 ;
-(void)cancelPendingOperationsWithError:(id)arg0 ;
-(void)configureCKOperation:(id)arg0 withGroup:(id)arg1 ;
-(void)didReceiveRemoteNotification:(id)arg0 ;
-(void)fetchChangesWithGroup:(id)arg0 completion:(id)arg1 ;
-(void)handleMergeError:(id)arg0 completion:(id)arg1 ;
-(void)mergeLocalChangesFromReplica:(id)arg0 withAppliedRemoteChanges:(id)arg1 group:(id)arg2 completion:(id)arg3 ;
-(void)mergeRemoteChanges:(id)arg0 withGroup:(id)arg1 completion:(id)arg2 ;
-(void)mergeWithGroup:(id)arg0 completion:(id)arg1 ;
-(void)pushChanges:(id)arg0 withGroup:(id)arg1 completion:(id)arg2 ;
-(void)removeCloudContainerWithGroup:(id)arg0 completion:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)removePendingOperationWithID:(id)arg0 ;
-(void)setupCloudContainerWithGroup:(id)arg0 completion:(id)arg1 ;
-(void)subscribeToChangesWithCompletion:(id)arg0 ;


@end


#endif
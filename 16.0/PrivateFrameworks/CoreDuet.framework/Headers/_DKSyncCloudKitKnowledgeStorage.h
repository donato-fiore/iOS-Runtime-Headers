// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKSYNCCLOUDKITKNOWLEDGESTORAGE_H
#define _DKSYNCCLOUDKITKNOWLEDGESTORAGE_H

@class CKContainer, APSConnection, NSMutableDictionary, NSMutableSet, CKServerChangeToken, NSOperation, NSHashTable, NSString;
@protocol APSConnectionDelegate, _DKKeyValueStore, _DKSyncRemoteKnowledgeStorageFetchDelegate;

#import <Foundation/Foundation.h>

#import "_DKThrottledActivity.h"
#import "_DKSyncPeerStatusTracker.h"
#import "_CDPeriodicSchedulerJob.h"

@interface _DKSyncCloudKitKnowledgeStorage : NSObject <APSConnectionDelegate>

 {
    BOOL _started;
    id<_DKKeyValueStore> *_keyValueStore;
    _DKThrottledActivity *_activityThrottler;
    _DKSyncPeerStatusTracker *_tracker;
    _CDPeriodicSchedulerJob *_updateSourceDeviceIdentifiersPeriodicJob;
    BOOL _cloudSyncAvailablityObserverRegistered;
    CKContainer *_container;
    APSConnection *_connection;
    CGFloat _updateSourceDeviceIdentifiersBackoffTimeInterval;
    NSMutableDictionary *_zoneIDsBySourceDeviceID;
    NSMutableDictionary *_recordZonesByZoneID;
    BOOL _databaseChangesExist;
    BOOL _isPrewarmed;
    NSMutableSet *_zoneIDsWithAdditionChanges;
    NSMutableSet *_zoneIDsWithDeletionChanges;
    NSMutableSet *_zoneIDsWithUnrecoverableDecryptionErrors;
    CKServerChangeToken *_fetchDatabaseChangesServerChangeToken;
    NSOperation *_previousDependentOperation;
    NSHashTable *_outstandingOperations;
    BOOL _available;
    id<_DKSyncRemoteKnowledgeStorageFetchDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)deviceIDFromZoneID:(id)arg0 ;
+(id)mySyncZoneID;
+(id)zoneIDWithDeviceID:(id)arg0 ;
-(BOOL)hasAdditionsFlagForPeer:(id)arg0 ;
-(BOOL)hasDeletionsFlagForPeer:(id)arg0 ;
-(NSInteger)transportType;
-(id)init;
-(id)name;
-(void)_cloudSyncAvailabilityDidChange:(id)arg0 ;
-(void)cancelOutstandingOperations;
-(void)clearPrewarmedFlag;
-(void)connection:(id)arg0 didReceiveIncomingMessage:(id)arg1 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)dealloc;
-(void)fetchAdditionsHighWaterMarkWithPeer:(id)arg0 highPriority:(BOOL)arg1 completion:(id)arg2 ;
-(void)fetchDeletedEventIDsFromPeer:(id)arg0 sinceDate:(id)arg1 streamNames:(id)arg2 limit:(NSUInteger)arg3 highPriority:(BOOL)arg4 completion:(id)arg5 ;
-(void)fetchDeletionsHighWaterMarkWithPeer:(id)arg0 highPriority:(BOOL)arg1 completion:(id)arg2 ;
-(void)fetchEventsFromPeer:(id)arg0 windows:(id)arg1 streamNames:(id)arg2 limit:(NSUInteger)arg3 fetchOrder:(NSInteger)arg4 highPriority:(BOOL)arg5 completion:(id)arg6 ;
-(void)fetchSourceDeviceIDFromPeer:(id)arg0 highPriority:(BOOL)arg1 completion:(id)arg2 ;
-(void)prewarmFetchWithCompletion:(id)arg0 ;
-(void)setFetchDelegate:(id)arg0 ;
-(void)setHasAdditionsFlag:(BOOL)arg0 forPeer:(id)arg1 ;
-(void)setHasDeletionsFlag:(BOOL)arg0 forPeer:(id)arg1 ;
-(void)start;
-(void)updateStorageWithAddedEvents:(id)arg0 deletedEventIDs:(id)arg1 highPriority:(BOOL)arg2 completion:(id)arg3 ;


@end


#endif
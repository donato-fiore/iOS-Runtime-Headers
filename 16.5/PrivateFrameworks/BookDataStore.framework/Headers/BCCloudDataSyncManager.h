// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCCLOUDDATASYNCMANAGER_H
#define BCCLOUDDATASYNCMANAGER_H

@class NSString;
@protocol BCCloudKitDatabaseObserver, BCCloudDataMapper, BCCloudDataSyncManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BCCloudKitController.h"

@interface BCCloudDataSyncManager : NSObject <BCCloudKitDatabaseObserver>



@property (nonatomic) CGFloat backOffInterval; // ivar: _backOffInterval
@property (retain, nonatomic) BCCloudKitController *cloudKitController; // ivar: _cloudKitController
@property (retain, nonatomic) NSObject<BCCloudDataMapper> *dataMapper; // ivar: _dataMapper
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BCCloudDataSyncManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL processingCloudData; // ivar: _processingCloudData
@property (nonatomic) BOOL serverPushPostponed; // ivar: _serverPushPostponed
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue
@property (nonatomic) NSUInteger tooBigBatch; // ivar: _tooBigBatch


-(NSUInteger)_maxCloudDataPerBatch;
-(id)_batchFromCloudData:(id)arg0 ;
-(id)_modifyRecordsCompletionBlockWithDispatchGroup:(SEL)arg0 cloudDataMap:(id)arg1 recordCount:(id)arg2 operation:(NSUInteger)arg3 ;
-(id)initWithCloudKitController:(id)arg0 ;
-(id)initWithCloudKitController:(id)arg0 dataMapper:(id)arg1 ;
-(void)_enterDispatchGroup:(id)arg0 times:(NSUInteger)arg1 ;
-(void)_fromBatch:(id)arg0 getRecordsToSave:(*id)arg1 recordIDsToDelete:(*id)arg2 buildingMap:(*id)arg3 ;
-(void)_leaveDispatchGroup:(id)arg0 times:(NSUInteger)arg1 ;
-(void)_syncQueueSyncForCloudData:(id)arg0 completion:(id)arg1 ;
-(void)_updateRetryParametersFromModifyRecordsOperationError:(id)arg0 batchSize:(NSUInteger)arg1 ;
-(void)databaseController:(id)arg0 attachmentChanged:(BOOL)arg1 ;
-(void)databaseController:(id)arg0 fetchedAllRecordsInZone:(id)arg1 ;
-(void)databaseController:(id)arg0 reachabilityChanged:(BOOL)arg1 ;
-(void)databaseController:(id)arg0 recordWithIDWasDeleted:(id)arg1 recordType:(id)arg2 ;
-(void)databaseController:(id)arg0 recordsChanged:(id)arg1 ;
-(void)fetchRecordForRecordID:(id)arg0 completion:(id)arg1 ;
-(void)signalSyncToCK;
-(void)startSyncToCKWithCompletion:(id)arg0 ;
-(void)syncCloudData:(id)arg0 completion:(id)arg1 ;


@end


#endif
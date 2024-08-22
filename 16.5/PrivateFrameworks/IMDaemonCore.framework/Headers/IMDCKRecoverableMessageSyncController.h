// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDCKRECOVERABLEMESSAGESYNCCONTROLLER_H
#define IMDCKRECOVERABLEMESSAGESYNCCONTROLLER_H

@class CKServerChangeToken;
@protocol OS_dispatch_queue, IMDCKSyncTokenStore;


#import "IMDCKAbstractSyncController.h"
#import "IMDCKMessageSyncCKOperationFactory.h"
#import "IMDRecordZoneManager.h"

@interface IMDCKRecoverableMessageSyncController : IMDCKAbstractSyncController

@property (retain, nonatomic) IMDCKMessageSyncCKOperationFactory *CKOperationFactory; // ivar: _CKOperationFactory
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ckQueue; // ivar: _ckQueue
@property (retain, nonatomic) CKServerChangeToken *latestSyncToken; // ivar: _latestSyncToken
@property (retain, nonatomic) IMDRecordZoneManager *recordZoneManager; // ivar: _recordZoneManager
@property (retain, nonatomic) NSObject<IMDCKSyncTokenStore> *syncTokenStore; // ivar: _syncTokenStore


+(id)_fetchOperationFactory:(id)arg0 token:(id)arg1 batchSize:(NSUInteger)arg2 activity:(id)arg3 ;
+(id)_fetchRecoverableMessagesCKConfiguration:(id)arg0 ;
+(id)_zoneChangesOptionsDictionaryUsingToken:(id)arg0 zoneID:(id)arg1 resultsLimit:(NSUInteger)arg2 ;
+(id)sharedInstance;
-(BOOL)_zoneCreated;
-(NSInteger)syncControllerRecordType;
-(NSUInteger)_deleteBatchSize;
-(id)_constructRecoverableMessageRecordIDUsingTombStoneDictionary:(id)arg0 ;
-(id)_copyRecordIDsToDeleteWithLimit:(NSUInteger)arg0 ;
-(id)_fetchRecordsOperationWithActivity:(id)arg0 ;
-(id)_saveRecordsOperationWithMap:(id)arg0 activity:(id)arg1 ;
-(id)_saveRecoverableMessagesOperationFactory:(id)arg0 token:(id)arg1 batchSize:(NSUInteger)arg2 recordNameToPartIndexAndRowID:(id)arg3 activity:(id)arg4 ;
-(id)_writeRecoverableMessagesCKConfiguration:(id)arg0 ;
-(id)createCKRecordforRecoverableMessageMetadata:(id)arg0 zoneID:(id)arg1 recordNameToPartIndexAndRowID:(id)arg2 ;
-(id)init;
-(id)initWithSyncTokenStore:(id)arg0 ;
-(id)recoverableGUIDFromMessageGUID:(id)arg0 chatGUID:(id)arg1 partIndex:(NSInteger)arg2 ;
-(void)_deleteRecoverableMessagesWithRecordIDs:(id)arg0 completion:(id)arg1 ;
-(void)_onChangeTokenUpdated:(id)arg0 token:(id)arg1 data:(id)arg2 ;
-(void)_onReadComplete:(NSInteger)arg0 error:(id)arg1 activity:(id)arg2 completion:(id)arg3 ;
-(void)_onRecordDeleted:(id)arg0 type:(id)arg1 ;
-(void)_onRecordRead:(id)arg0 ;
-(void)_onRecordWrite:(id)arg0 error:(id)arg1 recordNameToPartIndexAndRowID:(id)arg2 ;
-(void)_onRecordZoneFetchComplete:(id)arg0 token:(id)arg1 tokenData:(id)arg2 moreComing:(BOOL)arg3 error:(id)arg4 ;
-(void)_onRecoverableMessagePartRecordReadWithDeleteDate:(id)arg0 messageGUID:(id)arg1 partBody:(id)arg2 ;
-(void)_onWriteComplete:(NSInteger)arg0 error:(id)arg1 shouldWriteMore:(BOOL)arg2 activity:(id)arg3 completion:(id)arg4 ;
-(void)_processRecordDeletionCompletion:(id)arg0 error:(id)arg1 completionBlock:(id)arg2 ;
-(void)_readRecordsWithType:(NSInteger)arg0 attemptCount:(NSUInteger)arg1 activity:(id)arg2 completion:(id)arg3 ;
-(void)_scheduleOperation:(id)arg0 ;
-(void)_writeRecordsWithType:(NSInteger)arg0 activity:(id)arg1 completion:(id)arg2 ;
-(void)clearLocalSyncState:(NSUInteger)arg0 ;
-(void)deleteRecoverableMessageZone;
-(void)syncRemovedRecoverableMessagesToCloudKitWithCompletion:(id)arg0 ;
-(void)syncWithType:(NSInteger)arg0 withActivity:(id)arg1 withCompletion:(id)arg2 ;


@end


#endif
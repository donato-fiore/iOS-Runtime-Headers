// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDCKUPDATESYNCCONTROLLER_H
#define IMDCKUPDATESYNCCONTROLLER_H

@class CKServerChangeToken, NSMutableDictionary;
@protocol OS_dispatch_queue, IMDCKSyncTokenStore;


#import "IMDCKAbstractSyncController.h"
#import "IMDRecordZoneManager.h"

@interface IMDCKUpdateSyncController : IMDCKAbstractSyncController

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ckQueue; // ivar: _ckQueue
@property (nonatomic) BOOL fetchedChatsDuringLastSync; // ivar: _fetchedChatsDuringLastSync
@property (retain, nonatomic) CKServerChangeToken *latestSyncToken; // ivar: _latestSyncToken
@property (retain, nonatomic) IMDRecordZoneManager *recordZoneManager; // ivar: _recordZoneManager
@property (retain, nonatomic) NSObject<IMDCKSyncTokenStore> *syncTokenStore; // ivar: _syncTokenStore
@property (retain, nonatomic) NSMutableDictionary *writeMsgIDToRowIDMap; // ivar: _writeMsgIDToRowIDMap


+(NSInteger)stepAfter:(NSInteger)arg0 ;
+(id)_fetchUpdatesCKConfiguration:(id)arg0 ;
+(id)_zoneChangesOptionsDictionaryUsingToken:(id)arg0 zoneID:(id)arg1 resultsLimit:(NSUInteger)arg2 ;
+(id)fetchOperationFactory:(id)arg0 token:(id)arg1 batchSize:(NSUInteger)arg2 activity:(id)arg3 ;
+(id)messageUpdateV1RecordType;
+(id)sharedInstance;
-(BOOL)_zoneCreated;
-(NSUInteger)_numberOfRecordsToFetchPerBatch;
-(id)_changeTokenKey;
-(id)_fetchRecordsOperationWithActivity:(id)arg0 ;
-(id)_saveRecordsT1OperationWithMap:(id)arg0 activity:(id)arg1 ;
-(id)_saveRecordsT2OperationWithMap:(id)arg0 activity:(id)arg1 ;
-(id)_writeUpdatesCKConfiguration:(id)arg0 ;
-(id)init;
-(id)initWithSyncTokenStore:(id)arg0 ;
-(id)saveT1UpdatesOperationFactory:(id)arg0 token:(id)arg1 batchSize:(NSUInteger)arg2 recordNameToRowIDMap:(id)arg3 activity:(id)arg4 ;
-(id)saveT2UpdatesOperationFactory:(id)arg0 token:(id)arg1 batchSize:(NSUInteger)arg2 recordNameToRowIDMap:(id)arg3 activity:(id)arg4 ;
-(void)_onChangeTokenUpdated:(id)arg0 token:(id)arg1 data:(id)arg2 ;
-(void)_onReadComplete:(NSInteger)arg0 error:(id)arg1 activity:(id)arg2 completion:(id)arg3 ;
-(void)_onRecordDeleted:(id)arg0 type:(id)arg1 ;
-(void)_onRecordRead:(id)arg0 ;
-(void)_onRecordT1Write:(id)arg0 error:(id)arg1 recordNameToRowIDMap:(id)arg2 ;
-(void)_onRecordT2Write:(id)arg0 error:(id)arg1 recordNameToItemMap:(id)arg2 ;
-(void)_onRecordZoneFetchComplete:(id)arg0 token:(id)arg1 tokenData:(id)arg2 moreComing:(BOOL)arg3 error:(id)arg4 ;
-(void)_onWriteT1Complete:(NSInteger)arg0 error:(id)arg1 shouldWriteMore:(BOOL)arg2 activity:(id)arg3 completion:(id)arg4 ;
-(void)_onWriteT2Complete:(NSInteger)arg0 error:(id)arg1 shouldWriteMore:(BOOL)arg2 activity:(id)arg3 completion:(id)arg4 ;
-(void)_readRecordsWithType:(NSInteger)arg0 attemptCount:(NSUInteger)arg1 activity:(id)arg2 completion:(id)arg3 ;
-(void)_scheduleOperation:(id)arg0 ;
-(void)_writeRecordsWithType:(NSInteger)arg0 activity:(id)arg1 completion:(id)arg2 ;
-(void)_writeT1RecordUpdatesWithType:(NSInteger)arg0 activity:(id)arg1 completion:(id)arg2 ;
-(void)_writeT2RecordUpdatesWithType:(NSInteger)arg0 activity:(id)arg1 completion:(id)arg2 ;
-(void)_writeUpdatesWithType:(NSInteger)arg0 updateStep:(NSInteger)arg1 activity:(id)arg2 completion:(id)arg3 ;
-(void)clearLocalSyncState:(NSUInteger)arg0 ;
-(void)deleteUpdateSyncToken;
-(void)syncWithType:(NSInteger)arg0 withActivity:(id)arg1 withCompletion:(id)arg2 ;


@end


#endif
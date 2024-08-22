// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKFETCHARCHIVEDRECORDSOPERATION_H
#define CKFETCHARCHIVEDRECORDSOPERATION_H

@class NSDictionary, NSMutableDictionary, NSArray;
@protocol CKFetchArchivedRecordsOperationCallbacks;


#import "CKDatabaseOperation.h"
#import "CKFetchArchivedRecordsOperationInfo.h"

@interface CKFetchArchivedRecordsOperation : CKDatabaseOperation <CKFetchArchivedRecordsOperationCallbacks>



@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // ivar: _assetTransferOptionsByRecordTypeAndKey
@property (readonly, nonatomic) NSObject<CKFetchArchivedRecordsOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) NSDictionary *configurationsByRecordZoneID; // ivar: _configurationsByRecordZoneID
@property (nonatomic) BOOL fetchAllChanges; // ivar: _fetchAllChanges
@property (copy, nonatomic) id *fetchArchivedRecordsCompletionBlock; // ivar: _fetchArchivedRecordsCompletionBlock
@property (readonly, nonatomic) CKFetchArchivedRecordsOperationInfo *operationInfo;
@property (retain, nonatomic) NSMutableDictionary *perItemErrors; // ivar: _perItemErrors
@property (copy, nonatomic) id *recordFetchedBlock; // ivar: _recordFetchedBlock
@property (copy, nonatomic) id *recordZoneChangeTokensUpdatedBlock; // ivar: _recordZoneChangeTokensUpdatedBlock
@property (copy, nonatomic) id *recordZoneFetchCompletionBlock; // ivar: _recordZoneFetchCompletionBlock
@property (copy, nonatomic) NSArray *recordZoneIDs; // ivar: _recordZoneIDs
@property (nonatomic) BOOL shouldFetchAssetContents; // ivar: _shouldFetchAssetContents
@property (retain, nonatomic) NSMutableDictionary *statusByZoneID; // ivar: _statusByZoneID


+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)init;
-(id)initWithRecordZoneIDs:(id)arg0 configurationsByRecordZoneID:(id)arg1 ;
-(id)recordZoneArchivesStatusByZoneID;
-(id)relevantZoneIDs;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleChangeSetCompletionForRecordZoneID:(id)arg0 serverChangeToken:(id)arg1 archivedRecordStatus:(NSInteger)arg2 error:(id)arg3 reply:(id)arg4 ;
-(void)handleFetchForRecordID:(id)arg0 record:(id)arg1 error:(id)arg2 ;
-(void)performCKOperation;


@end


#endif
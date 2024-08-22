// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKFETCHRECORDZONECHANGESOPERATION_H
#define CKFETCHRECORDZONECHANGESOPERATION_H

@class NSDictionary, NSMutableDictionary, NSArray, NSMutableSet;
@protocol CKFetchRecordZoneChangesOperationCallbacks;


#import "CKDatabaseOperation.h"
#import "CKFetchRecordZoneChangesOperationInfo.h"

@interface CKFetchRecordZoneChangesOperation : CKDatabaseOperation <CKFetchRecordZoneChangesOperationCallbacks>

 {
    NSUInteger _mergeableValueCount;
    NSUInteger _mergeableDeltaCount;
    NSUInteger _assetBackedMergeableDeltaCount;
}


@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // ivar: _assetTransferOptionsByRecordTypeAndKey
@property (readonly, nonatomic) NSObject<CKFetchRecordZoneChangesOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) NSDictionary *configurationsByRecordZoneID; // ivar: _configurationsByRecordZoneID
@property (nonatomic) NSInteger errorReportingStyle; // ivar: _errorReportingStyle
@property (nonatomic) BOOL fetchAllChanges; // ivar: _fetchAllChanges
@property (copy, nonatomic) id *fetchRecordZoneChangesCompletionBlock; // ivar: _fetchRecordZoneChangesCompletionBlock
@property (readonly, nonatomic) CKFetchRecordZoneChangesOperationInfo *operationInfo;
@property (copy, nonatomic) NSDictionary *optionsByRecordZoneID;
@property (retain, nonatomic) NSMutableDictionary *perItemErrors; // ivar: _perItemErrors
@property (copy, nonatomic) id *perRecordChangeCompletionBlock; // ivar: _perRecordChangeCompletionBlock
@property (copy, nonatomic) id *recordChangedBlock; // ivar: _recordChangedBlock
@property (copy, nonatomic) id *recordWasChangedBlock; // ivar: _recordWasChangedBlock
@property (copy, nonatomic) id *recordWithIDWasDeletedBlock; // ivar: _recordWithIDWasDeletedBlock
@property (copy, nonatomic) id *recordZoneChangeTokensUpdatedBlock; // ivar: _recordZoneChangeTokensUpdatedBlock
@property (copy, nonatomic) id *recordZoneFetchCompletionBlock; // ivar: _recordZoneFetchCompletionBlock
@property (copy, nonatomic) NSArray *recordZoneIDs; // ivar: _recordZoneIDs
@property (nonatomic) BOOL shouldFetchAssetContents; // ivar: _shouldFetchAssetContents
@property (nonatomic) BOOL shouldReportAllPerItemFailures; // ivar: _shouldReportAllPerItemFailures
@property (retain, nonatomic) NSMutableDictionary *statusByZoneID; // ivar: _statusByZoneID
@property (copy, nonatomic) NSDictionary *supplementalChangeTokenByZoneID; // ivar: _supplementalChangeTokenByZoneID
@property (retain, nonatomic) NSMutableSet *zoneIDsWithPendingArchivedRecords; // ivar: _zoneIDsWithPendingArchivedRecords
@property (retain, nonatomic) NSMutableSet *zoneIDsWithSyncObligations; // ivar: _zoneIDsWithSyncObligations


+(SEL)daemonInvocationSelector;
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(NSInteger)changeTypesFromSetCallbacks;
-(id)activityCreate;
-(id)init;
-(id)initWithRecordZoneIDs:(id)arg0 configurationsByRecordZoneID:(id)arg1 ;
-(id)initWithRecordZoneIDs:(id)arg0 optionsByRecordZoneID:(id)arg1 ;
-(id)partialFailureForItemsInZone:(id)arg0 ;
-(id)recordZoneChangesStatusByZoneID;
-(id)relevantZoneIDs;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)ckSignpostBegin;
-(void)ckSignpostEndWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleChangeForRecordID:(id)arg0 record:(id)arg1 error:(id)arg2 ;
-(void)handleChangeSetCompletionForRecordZoneID:(id)arg0 serverChangeToken:(id)arg1 clientChangeTokenData:(id)arg2 recordChangesStatus:(NSInteger)arg3 hasPendingArchivedRecords:(BOOL)arg4 syncObligationZoneIDs:(id)arg5 error:(id)arg6 reply:(id)arg7 ;
-(void)handleDeleteForRecordID:(id)arg0 recordType:(id)arg1 ;
-(void)performCKOperation;


@end


#endif
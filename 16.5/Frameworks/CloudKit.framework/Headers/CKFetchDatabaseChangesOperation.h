// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKFETCHDATABASECHANGESOPERATION_H
#define CKFETCHDATABASECHANGESOPERATION_H

@class NSMutableSet;
@protocol CKFetchDatabaseChangesOperationCallbacks;


#import "CKDatabaseOperation.h"
#import "CKFetchDatabaseChangesOperationInfo.h"
#import "CKServerChangeToken.h"

@interface CKFetchDatabaseChangesOperation : CKDatabaseOperation <CKFetchDatabaseChangesOperationCallbacks>



@property (copy, nonatomic) id *changeTokenUpdatedBlock; // ivar: _changeTokenUpdatedBlock
@property (readonly, nonatomic) NSObject<CKFetchDatabaseChangesOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic) BOOL fetchAllChanges; // ivar: _fetchAllChanges
@property (copy, nonatomic) id *fetchDatabaseChangesCompletionBlock; // ivar: _fetchDatabaseChangesCompletionBlock
@property (readonly, nonatomic) CKFetchDatabaseChangesOperationInfo *operationInfo;
@property (copy, nonatomic) CKServerChangeToken *previousServerChangeToken; // ivar: _previousServerChangeToken
@property (copy, nonatomic) id *recordZoneWithIDChangedBlock; // ivar: _recordZoneWithIDChangedBlock
@property (copy, nonatomic) id *recordZoneWithIDWasDeletedBlock; // ivar: _recordZoneWithIDWasDeletedBlock
@property (copy, nonatomic) id *recordZoneWithIDWasDeletedDueToUserEncryptedDataResetBlock; // ivar: _recordZoneWithIDWasDeletedDueToUserEncryptedDataResetBlock
@property (copy, nonatomic) id *recordZoneWithIDWasPurgedBlock; // ivar: _recordZoneWithIDWasPurgedBlock
@property (nonatomic) NSUInteger resultsLimit; // ivar: _resultsLimit
@property (retain, nonatomic) CKServerChangeToken *serverChangeToken; // ivar: _serverChangeToken
@property (nonatomic) NSInteger status; // ivar: _status
@property (retain, nonatomic) NSMutableSet *zoneIDsForMetrics; // ivar: _zoneIDsForMetrics


+(SEL)daemonInvocationSelector;
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)init;
-(id)initWithPreviousServerChangeToken:(id)arg0 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)ckSignpostBegin;
-(void)ckSignpostEndWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleChangeForRecordZoneID:(id)arg0 ;
-(void)handleChangeSetCompletionWithServerChangeToken:(id)arg0 databaseChangesStatus:(NSInteger)arg1 error:(id)arg2 reply:(id)arg3 ;
-(void)handleDeleteForRecordZoneID:(id)arg0 ;
-(void)handleEncryptedDataResetForRecordZoneID:(id)arg0 ;
-(void)handlePurgeForRecordZoneID:(id)arg0 ;
-(void)performCKOperation;


@end


#endif
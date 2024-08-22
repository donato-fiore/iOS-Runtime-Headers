// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKFETCHRECORDCHANGESOPERATION_H
#define CKFETCHRECORDCHANGESOPERATION_H

@class NSArray, NSMutableDictionary, NSData;
@protocol CKFetchRecordChangesOperationCallbacks;


#import "CKDatabaseOperation.h"
#import "CKFetchRecordZoneChangesOperationInfo.h"
#import "CKServerChangeToken.h"
#import "CKRecordZoneID.h"

@interface CKFetchRecordChangesOperation : CKDatabaseOperation <CKFetchRecordChangesOperationCallbacks>



@property (copy, nonatomic) id *changeTokensUpdatedBlock; // ivar: _changeTokensUpdatedBlock
@property (readonly, nonatomic) NSObject<CKFetchRecordChangesOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) NSArray *desiredKeys; // ivar: _desiredKeys
@property (nonatomic) BOOL fetchAllChanges; // ivar: _fetchAllChanges
@property (copy, nonatomic) id *fetchRecordChangesCompletionBlock; // ivar: _fetchRecordChangesCompletionBlock
@property (readonly, nonatomic) BOOL moreComing;
@property (readonly, nonatomic) CKFetchRecordZoneChangesOperationInfo *operationInfo;
@property (copy, nonatomic) CKServerChangeToken *previousServerChangeToken; // ivar: _previousServerChangeToken
@property (copy, nonatomic) id *recordChangedBlock; // ivar: _recordChangedBlock
@property (retain, nonatomic) NSMutableDictionary *recordErrors; // ivar: _recordErrors
@property (copy, nonatomic) id *recordWithIDWasDeletedBlock; // ivar: _recordWithIDWasDeletedBlock
@property (copy, nonatomic) CKRecordZoneID *recordZoneID; // ivar: _recordZoneID
@property (retain, nonatomic) NSData *resultClientChangeTokenData; // ivar: _resultClientChangeTokenData
@property (retain, nonatomic) CKServerChangeToken *resultServerChangeToken; // ivar: _resultServerChangeToken
@property (nonatomic) NSUInteger resultsLimit; // ivar: _resultsLimit
@property (copy, nonatomic) id *serverChangeTokenFetchedBlock; // ivar: _serverChangeTokenFetchedBlock
@property (nonatomic) BOOL shouldFetchAssetContents; // ivar: _shouldFetchAssetContents
@property (nonatomic) NSInteger status; // ivar: _status


+(SEL)daemonCallbackCompletionSelector;
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(NSInteger)changeTypesFromSetCallbacks;
-(id)activityCreate;
-(id)init;
-(id)initWithRecordZoneID:(id)arg0 previousServerChangeToken:(id)arg1 ;
-(id)relevantZoneIDs;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleChangeForRecordID:(id)arg0 record:(id)arg1 error:(id)arg2 ;
-(void)handleChangeSetCompletionWithServerChangeToken:(id)arg0 clientChangeTokenData:(id)arg1 recordChangesStatus:(NSInteger)arg2 reply:(id)arg3 ;
-(void)handleDeleteForRecordID:(id)arg0 ;
-(void)handleOperationDidCompleteWithServerChangeToken:(id)arg0 clientChangeTokenData:(id)arg1 recordChangesStatus:(NSInteger)arg2 metrics:(id)arg3 error:(id)arg4 ;
-(void)performCKOperation;


@end


#endif
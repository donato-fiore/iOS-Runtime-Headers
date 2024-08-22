// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKMODIFYRECORDACCESSOPERATION_H
#define CKMODIFYRECORDACCESSOPERATION_H

@class NSMutableArray, NSMutableDictionary, NSArray;
@protocol CKModifyRecordAccessOperationCallbacks;


#import "CKDatabaseOperation.h"
#import "CKModifyRecordAccessOperationInfo.h"

@interface CKModifyRecordAccessOperation : CKDatabaseOperation <CKModifyRecordAccessOperationCallbacks>



@property (readonly, nonatomic) NSObject<CKModifyRecordAccessOperationCallbacks> *clientOperationCallbackProxy;
@property (retain, nonatomic) NSMutableArray *grantedRecordIDs; // ivar: _grantedRecordIDs
@property (readonly, nonatomic) CKModifyRecordAccessOperationInfo *operationInfo;
@property (copy, nonatomic) id *recordAccessCompletionBlock; // ivar: _recordAccessCompletionBlock
@property (copy, nonatomic) id *recordAccessGrantedBlock; // ivar: _recordAccessGrantedBlock
@property (copy, nonatomic) id *recordAccessRevokedBlock; // ivar: _recordAccessRevokedBlock
@property (retain, nonatomic) NSMutableDictionary *recordErrors; // ivar: _recordErrors
@property (retain, nonatomic) NSArray *recordIDsToGrant; // ivar: _recordIDsToGrant
@property (retain, nonatomic) NSArray *recordIDsToRevoke; // ivar: _recordIDsToRevoke
@property (retain, nonatomic) NSMutableArray *revokedRecordIDs; // ivar: _revokedRecordIDs


+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)initWithRecordIDsToGrantAccess:(id)arg0 recordIDsToRevokeAccess:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleRecordAccessInitiationForRecordID:(id)arg0 accessToken:(id)arg1 referenceIdentifier:(id)arg2 error:(id)arg3 ;
-(void)handleRecordAccessRevocationForRecordID:(id)arg0 error:(id)arg1 ;
-(void)performCKOperation;


@end


#endif
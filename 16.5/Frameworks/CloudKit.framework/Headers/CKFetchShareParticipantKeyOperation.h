// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKFETCHSHAREPARTICIPANTKEYOPERATION_H
#define CKFETCHSHAREPARTICIPANTKEYOPERATION_H

@class NSDictionary, NSMutableDictionary, NSArray;
@protocol CKFetchShareParticipantKeyOperationCallbacks;


#import "CKDatabaseOperation.h"
#import "CKFetchShareParticipantKeyOperationInfo.h"

@interface CKFetchShareParticipantKeyOperation : CKDatabaseOperation <CKFetchShareParticipantKeyOperationCallbacks>



@property (copy, nonatomic) NSDictionary *baseTokensByShareID; // ivar: _baseTokensByShareID
@property (copy, nonatomic) NSDictionary *childRecordIDsByShareID; // ivar: _childRecordIDsByShareID
@property (readonly, nonatomic) NSObject<CKFetchShareParticipantKeyOperationCallbacks> *clientOperationCallbackProxy;
@property (retain, nonatomic) NSMutableDictionary *errorsByShareID; // ivar: _errorsByShareID
@property (readonly, nonatomic) CKFetchShareParticipantKeyOperationInfo *operationInfo;
@property (copy, nonatomic) NSArray *shareIDs; // ivar: _shareIDs
@property (copy, nonatomic) id *shareParticipantKeyCompletionBlock; // ivar: _shareParticipantKeyCompletionBlock
@property (copy, nonatomic) id *shareParticipantKeyFetchedBlock; // ivar: _shareParticipantKeyFetchedBlock


+(SEL)daemonInvocationSelector;
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)initWithShareIDs:(id)arg0 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)ckSignpostBegin;
-(void)ckSignpostEndWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleParticipantKeyFetchForRecordID:(id)arg0 participantKey:(id)arg1 error:(id)arg2 ;


@end


#endif
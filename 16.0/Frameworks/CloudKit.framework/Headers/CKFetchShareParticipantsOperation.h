// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKFETCHSHAREPARTICIPANTSOPERATION_H
#define CKFETCHSHAREPARTICIPANTSOPERATION_H

@class NSMutableSet, NSMutableDictionary, NSArray;
@protocol CKFetchShareParticipantsOperationCallbacks;


#import "CKOperation.h"
#import "CKFetchShareParticipantsOperationInfo.h"

@interface CKFetchShareParticipantsOperation : CKOperation <CKFetchShareParticipantsOperationCallbacks>



@property (readonly, nonatomic) NSObject<CKFetchShareParticipantsOperationCallbacks> *clientOperationCallbackProxy;
@property (retain, nonatomic) NSMutableSet *discoveredUserIdentities; // ivar: _discoveredUserIdentities
@property (copy, nonatomic) id *fetchShareParticipantsCompletionBlock; // ivar: _fetchShareParticipantsCompletionBlock
@property (retain, nonatomic) NSMutableDictionary *lookupErrors; // ivar: _lookupErrors
@property (readonly, nonatomic) CKFetchShareParticipantsOperationInfo *operationInfo;
@property (copy, nonatomic) id *perShareParticipantCompletionBlock; // ivar: _perShareParticipantCompletionBlock
@property (copy, nonatomic) id *shareParticipantFetchedBlock; // ivar: _shareParticipantFetchedBlock
@property (copy, nonatomic) NSArray *userIdentityLookupInfos; // ivar: _userIdentityLookupInfos


+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)init;
-(id)initWithUserIdentityLookupInfos:(id)arg0 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleShareParticipantFetchForLookupInfo:(id)arg0 shareParticipant:(id)arg1 error:(id)arg2 ;
-(void)performCKOperation;


@end


#endif
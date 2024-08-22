// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDFETCHSHAREPARTICIPANTSOPERATION_H
#define CKDFETCHSHAREPARTICIPANTSOPERATION_H

@class NSArray;
@protocol CKFetchShareParticipantsOperationCallbacks;


#import "CKDOperation.h"
#import "CKDPublicIdentityLookupRequest.h"

@interface CKDFetchShareParticipantsOperation : CKDOperation

@property (retain, nonatomic) NSObject<CKFetchShareParticipantsOperationCallbacks> *clientOperationCallbackProxy;
@property (retain, nonatomic) CKDPublicIdentityLookupRequest *pendingRequest; // ivar: _pendingRequest
@property (copy, nonatomic) id *shareParticipantFetchedBlock; // ivar: _shareParticipantFetchedBlock
@property (retain, nonatomic) NSArray *userIdentityLookupInfos; // ivar: _userIdentityLookupInfos


-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(int)operationType;
-(void)_fetchIdentities;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_handleFetchedInfo:(id)arg0 withIdentity:(id)arg1 error:(id)arg2 ;
-(void)finishWithError:(id)arg0 ;
-(void)main;


@end


#endif
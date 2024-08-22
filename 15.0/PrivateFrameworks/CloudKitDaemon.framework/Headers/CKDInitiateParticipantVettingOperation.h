// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDINITIATEPARTICIPANTVETTINGOPERATION_H
#define CKDINITIATEPARTICIPANTVETTINGOPERATION_H

@class NSString, NSData, CKShareMetadata;
@protocol CKInitiateParticipantVettingOperationCallbacks;


#import "CKDOperation.h"

@interface CKDInitiateParticipantVettingOperation : CKDOperation

@property (retain, nonatomic) NSString *address; // ivar: _address
@property (retain, nonatomic) NSObject<CKInitiateParticipantVettingOperationCallbacks> *clientOperationCallbackProxy;
@property (retain, nonatomic) NSData *encryptedKey; // ivar: _encryptedKey
@property (retain, nonatomic) NSString *participantID; // ivar: _participantID
@property (copy, nonatomic) id *participantVettingProgressBlock; // ivar: _participantVettingProgressBlock
@property (retain, nonatomic) CKShareMetadata *shareMetadata; // ivar: _shareMetadata


-(id)_addSelfIdentityToShareMetadataPublicPCS:(id)arg0 forShareWithURL:(id)arg1 error:(*id)arg2 ;
-(id)_encryptedKeyDataWithShareMetadata:(id)arg0 error:(*id)arg1 ;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(int)operationType;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_handleVettingInitiationProgress:(id)arg0 ;
-(void)_sendRequest:(BOOL)arg0 ;
-(void)main;


@end


#endif
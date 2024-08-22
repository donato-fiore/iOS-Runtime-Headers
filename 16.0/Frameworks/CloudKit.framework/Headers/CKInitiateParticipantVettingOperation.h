// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKINITIATEPARTICIPANTVETTINGOPERATION_H
#define CKINITIATEPARTICIPANTVETTINGOPERATION_H

@class NSString;
@protocol CKInitiateParticipantVettingOperationCallbacks;


#import "CKOperation.h"
#import "CKInitiateParticipantVettingOperationInfo.h"
#import "CKShareMetadata.h"

@interface CKInitiateParticipantVettingOperation : CKOperation <CKInitiateParticipantVettingOperationCallbacks>



@property (copy, nonatomic) NSString *address; // ivar: _address
@property (readonly, nonatomic) NSObject<CKInitiateParticipantVettingOperationCallbacks> *clientOperationCallbackProxy;
@property (readonly, nonatomic) CKInitiateParticipantVettingOperationInfo *operationInfo;
@property (copy, nonatomic) NSString *participantID; // ivar: _participantID
@property (copy, nonatomic) id *participantVettingInitiatedBlock; // ivar: _participantVettingInitiatedBlock
@property (copy, nonatomic) id *participantVettingInitiationCompletionBlock; // ivar: _participantVettingInitiationCompletionBlock
@property (copy, nonatomic) CKShareMetadata *shareMetadata; // ivar: _shareMetadata


+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(id)initWithShareMetadata:(id)arg0 participantID:(id)arg1 address:(id)arg2 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleParticipantVettingProgressWithError:(id)arg0 ;
-(void)performCKOperation;
// -(void)retryTimes:(NSUInteger)arg0 container:(id)arg1 participantVettingInitiatedBlock:(id)arg2 participantVettingInitiationCompletionBlock:(unk)arg3  ;


@end


#endif
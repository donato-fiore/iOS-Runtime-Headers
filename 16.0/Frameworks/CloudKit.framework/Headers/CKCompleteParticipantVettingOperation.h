// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKCOMPLETEPARTICIPANTVETTINGOPERATION_H
#define CKCOMPLETEPARTICIPANTVETTINGOPERATION_H

@class NSString, NSData, NSURL;
@protocol CKCompleteParticipantVettingOperationCallbacks;


#import "CKOperation.h"
#import "CKCompleteParticipantVettingOperationInfo.h"
#import "CKShareMetadata.h"

@interface CKCompleteParticipantVettingOperation : CKOperation <CKCompleteParticipantVettingOperationCallbacks>



@property (copy, nonatomic) NSString *baseToken; // ivar: _baseToken
@property (readonly, nonatomic) NSObject<CKCompleteParticipantVettingOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) id *completeParticipantVettingCompletionBlock; // ivar: _completeParticipantVettingCompletionBlock
@property (copy, nonatomic) NSString *displayedHostname; // ivar: _displayedHostname
@property (copy, nonatomic) NSData *encryptedKey; // ivar: _encryptedKey
@property (readonly, nonatomic) CKCompleteParticipantVettingOperationInfo *operationInfo;
@property (copy, nonatomic) NSURL *reconstructedShareURL; // ivar: _reconstructedShareURL
@property (copy, nonatomic) NSString *routingKey; // ivar: _routingKey
@property (retain, nonatomic) CKShareMetadata *shareMetadata; // ivar: _shareMetadata
@property (copy, nonatomic) NSString *vettingEmail; // ivar: _vettingEmail
@property (copy, nonatomic) NSString *vettingPhone; // ivar: _vettingPhone
@property (copy, nonatomic) NSString *vettingToken; // ivar: _vettingToken


-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(id)activityCreate;
-(id)init;
-(id)initWithVettingToken:(id)arg0 vettingRecord:(id)arg1 displayedHostname:(id)arg2 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleFetchedShareMetadata:(id)arg0 ;
-(void)handleReconstructedShareURL:(id)arg0 ;
-(void)performCKOperation;


@end


#endif
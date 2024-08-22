// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPAUTHSESSION_H
#define HAPAUTHSESSION_H

@class HMFObject, NSString, NSNumber, NSUUID, NSData;
@protocol HMFLogging, HAPAuthSessionDelegate, OS_dispatch_queue;



@interface HAPAuthSession : HMFObject <HMFLogging>



@property (nonatomic) NSUInteger currentState; // ivar: _currentState
@property (nonatomic) unsigned char currentTID; // ivar: _currentTID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) NSObject<HAPAuthSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *instanceId; // ivar: _instanceId
@property (retain, nonatomic) NSUUID *provisionUUID; // ivar: _provisionUUID
@property (readonly, nonatomic) NSInteger role; // ivar: _role
@property (readonly) Class superclass;
@property (retain, nonatomic) NSData *token1; // ivar: _token1
@property (retain, nonatomic) NSData *token2; // ivar: _token2
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)getToken:(*id)arg0 uuid:(*id)arg1 ;
-(id)initWithRole:(NSInteger)arg0 instanceId:(id)arg1 delegate:(id)arg2 ;
-(void)_handleAuthExchangeData:(id)arg0 withHeader:(BOOL)arg1 ;
-(void)_handleTokenResponse:(id)arg0 withHeader:(BOOL)arg1 ;
-(void)_handleTokenUpdateResponse:(id)arg0 withHeader:(BOOL)arg1 ;
-(void)_reportAuthFailure;
-(void)_resetSession;
-(void)_sendTokenRequest;
-(void)_sendTokenUpdateRequest:(id)arg0 ;
-(void)continueAuthAfterValidation:(BOOL)arg0 ;
-(void)handleAuthExchangeData:(id)arg0 withHeader:(BOOL)arg1 ;
-(void)resetSession;
-(void)sendTokenUpdateRequest:(id)arg0 ;


@end


#endif
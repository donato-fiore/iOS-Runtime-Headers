// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSPHONECERTIFICATEVENDOR_H
#define IDSPHONECERTIFICATEVENDOR_H

@class NSString;
@protocol IDSDaemonListenerProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "IDSDaemonRequestTimer.h"
#import "IDSPhoneCertificateVendor.h"

@interface IDSPhoneCertificateVendor : NSObject <IDSDaemonListenerProtocol>



@property (readonly, nonatomic) IDSDaemonRequestTimer *daemonRequestTimer; // ivar: _daemonRequestTimer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) IDSPhoneCertificateVendor *strongSelfReference; // ivar: _strongSelfReference
@property (readonly) Class superclass;


-(BOOL)_isPhoneCertificateVendorSupported;
-(NSInteger)_subscriptionSourceForContext:(id)arg0 ;
-(NSInteger)_subscriptionSourceFromIntegerValue:(NSInteger)arg0 ;
-(NSInteger)currentPhoneUserSubscriptionSourceWithError:(*id)arg0 ;
-(id)_clientErrorForCode:(NSInteger)arg0 underlyingError:(id)arg1 ;
-(id)_debugDescriptionForErrorCode:(NSInteger)arg0 ;
-(id)_scheduleTimeoutForCarrierTokenCompletionBlock:(id)arg0 ;
-(id)_scheduleTimeoutForPhoneAuthenticationCertificateRequestCompletionBlock:(id)arg0 ;
-(id)_scheduleTimeoutForPhoneAuthenticationSignatureRequestCompletionBlock:(id)arg0 ;
-(id)_scheduleTimeoutForPhoneSubscriptionSourceCompletionBlock:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(void)_updateSelfRetentionBasedOnInFlightRequestCount;
-(void)authenticatePhoneWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)didAuthenticatePhoneWithAuthenticationCertificateData:(id)arg0 requestUUID:(id)arg1 error:(id)arg2 ;
-(void)didFetchPhoneUserSubscriptionSource:(id)arg0 requestUUID:(id)arg1 error:(id)arg2 ;
-(void)didGeneratePhoneAuthenticationSignature:(id)arg0 nonce:(id)arg1 certificates:(id)arg2 labelIDs:(id)arg3 inputData:(id)arg4 requestUUID:(id)arg5 error:(id)arg6 ;
-(void)didRequestCarrierTokenString:(id)arg0 requestUUID:(id)arg1 error:(id)arg2 ;
-(void)didSetPhoneUserSubscriptionSource:(id)arg0 requestUUID:(id)arg1 error:(id)arg2 ;
-(void)generatePhoneAuthenticationSignatureOverData:(id)arg0 withCompletion:(id)arg1 ;
-(void)requestCarrierTokenWithMessageBody:(id)arg0 completion:(id)arg1 ;
-(void)requestCarrierTokenWithParameters:(id)arg0 completion:(id)arg1 ;
-(void)requestCurrentPhoneUserSubscriptionSourceWithCompletion:(id)arg0 ;
-(void)setCurrentPhoneUserSubscriptionSource:(NSInteger)arg0 completion:(id)arg1 ;


@end


#endif
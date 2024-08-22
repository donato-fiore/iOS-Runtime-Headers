// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSCARDAUTHORIZATIONTASK_H
#define AMSCARDAUTHORIZATIONTASK_H

@class NSString, PKPayment, NSDictionary, NSMutableArray;
@protocol PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate;


#import "AMSTask.h"
#import "AMSBinaryPromise.h"
#import "AMSMetricsEvent.h"

@interface AMSCardAuthorizationTask : AMSTask <PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate>



@property (retain, nonatomic) AMSBinaryPromise *authorizationPromise; // ivar: _authorizationPromise
@property (nonatomic) NSInteger confirmationStyle; // ivar: _confirmationStyle
@property (retain, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (retain, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didBiometricsLockout; // ivar: _didBiometricsLockout
@property (nonatomic) BOOL didCancelHomeButton; // ivar: _didCancelHomeButton
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) AMSMetricsEvent *metricsEvent; // ivar: _metricsEvent
@property (retain, nonatomic) NSString *passSerialNumber; // ivar: _passSerialNumber
@property (retain, nonatomic) NSString *passTypeIdentifier; // ivar: _passTypeIdentifier
@property (retain, nonatomic) PKPayment *payment; // ivar: _payment
@property (readonly, nonatomic) NSDictionary *paymentSession; // ivar: _paymentSession
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *userActions; // ivar: _userActions


-(id)_metricsTimestamp;
-(id)_metricsUserActionDictionary;
-(id)_presentPaymentRequest:(id)arg0 ;
-(id)initWithPaymentSession:(id)arg0 ;
-(id)performCardAuthorization;
-(void)_metricsPost;
-(void)paymentAuthorizationController:(id)arg0 didAuthorizePayment:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationController:(id)arg0 didEncounterAuthorizationEvent:(NSUInteger)arg1 ;
-(void)paymentAuthorizationController:(id)arg0 willFinishWithError:(id)arg1 ;
-(void)paymentAuthorizationControllerDidFinish:(id)arg0 ;


@end


#endif
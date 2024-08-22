// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PAYMENTHANDLER_H
#define PAYMENTHANDLER_H

@class NFLoyaltyAndPaymentSession, NSString;
@protocol NFLoyaltyAndPaymentSessionDelegate;


#import "STSTransactionHandler.h"

@interface PaymentHandler : STSTransactionHandler <NFLoyaltyAndPaymentSessionDelegate>

 {
    NFLoyaltyAndPaymentSession *_nfSession;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)activateWithDelegate:(id)arg0 handoffToken:(id)arg1 ;
-(id)setActiveCredential:(id)arg0 ;
-(id)startTransactionWithAuthorization:(id)arg0 options:(NSUInteger)arg1 ;
-(id)stopTransaction;
-(unsigned char)supportedCredentialType;
-(void)loyaltyAndPaymentSession:(id)arg0 didDetectField:(BOOL)arg1 ;
-(void)loyaltyAndPaymentSession:(id)arg0 didEndTransaction:(id)arg1 ;
-(void)loyaltyAndPaymentSession:(id)arg0 didEnterFieldWithNotification:(id)arg1 ;
-(void)loyaltyAndPaymentSession:(id)arg0 didExpireTransactionForApplet:(id)arg1 ;
-(void)loyaltyAndPaymentSession:(id)arg0 didExpressModeStateChange:(unsigned int)arg1 withObject:(id)arg2 ;
-(void)loyaltyAndPaymentSession:(id)arg0 didFailDeferredAuthorization:(BOOL)arg1 ;
-(void)loyaltyAndPaymentSession:(id)arg0 didFelicaStateChange:(id)arg1 ;
-(void)loyaltyAndPaymentSession:(id)arg0 didPerformValueAddedServiceTransactions:(id)arg1 ;
-(void)loyaltyAndPaymentSession:(id)arg0 didSelectApplet:(id)arg1 ;
-(void)loyaltyAndPaymentSession:(id)arg0 didSelectValueAddedService:(BOOL)arg1 ;
-(void)loyaltyAndPaymentSession:(id)arg0 didStartTransaction:(id)arg1 ;
-(void)loyaltyAndPaymentSessionDidEndUnexpectedly:(id)arg0 ;
-(void)loyaltyAndPaymentSessionDidReceiveActivityTimeout:(id)arg0 result:(id)arg1 ;
-(void)loyaltyAndPaymentSessionHasPendingServerRequest:(id)arg0 ;
-(void)tearDownWithCompletion:(id)arg0 ;


@end


#endif
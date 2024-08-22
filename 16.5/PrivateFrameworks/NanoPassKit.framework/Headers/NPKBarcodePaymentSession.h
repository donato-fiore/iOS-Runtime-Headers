// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKBARCODEPAYMENTSESSION_H
#define NPKBARCODEPAYMENTSESSION_H

@class NSData, PKPaymentTransaction, NSString, PKAssertion, PKPaymentPass, PKPaymentService;
@protocol PKPaymentServiceDelegate, NPKBarcodePaymentSessionDelegate, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "NPKPaymentBarcode.h"

@interface NPKBarcodePaymentSession : NSObject <PKPaymentServiceDelegate>



@property (retain, nonatomic) NSData *authorizationCredential; // ivar: _authorizationCredential
@property (retain, nonatomic) NPKPaymentBarcode *currentPaymentBarcode; // ivar: _currentPaymentBarcode
@property (retain, nonatomic) PKPaymentTransaction *currentTransaction; // ivar: _currentTransaction
@property (nonatomic) NSUInteger currentTransactionStatus; // ivar: _currentTransactionStatus
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NPKBarcodePaymentSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKAssertion *expressTransactionSuppressionAssertion; // ivar: _expressTransactionSuppressionAssertion
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKAssertion *notificationSuppressionAssertion; // ivar: _notificationSuppressionAssertion
@property (readonly, nonatomic) PKPaymentPass *paymentPass; // ivar: _paymentPass
@property (retain, nonatomic) PKPaymentService *paymentService; // ivar: _paymentService
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (nonatomic) BOOL sessionStarted; // ivar: _sessionStarted
@property (retain, nonatomic) NSObject<OS_dispatch_source> *sessionTimeoutTimer; // ivar: _sessionTimeoutTimer
@property (nonatomic) BOOL submittingAuthenticationResult; // ivar: _submittingAuthenticationResult
@property (readonly) Class superclass;


-(id)initWithPaymentPass:(id)arg0 authorizationCredential:(id)arg1 ;
-(void)_acquireExpressTransactionSuppressAssertion;
-(void)_acquireNotificationSuppressionAssertion;
-(void)_completedAuthenticationForTransaction:(id)arg0 ;
-(void)_extendSessionTimeoutTimer;
-(void)_fetchDecryptedBarcodeWithCredential:(id)arg0 ;
-(void)_handleSessionTimeout;
-(void)_handleUpdatedPaymentTransaction:(id)arg0 ;
-(void)_handleUpdatedTransactionStatus:(NSUInteger)arg0 ;
-(void)_insertPaymentTransactionForActiveBarcode;
-(void)_invokeExtensionToCollectPaymentInformation;
-(void)_processedAuthenticationMechanismForTransaction:(id)arg0 ;
-(void)_releaseExpressTransactionSuppressionAssertion;
-(void)_releaseNotificationSuppressionAssertion;
-(void)_startSessionTimeoutTimer;
-(void)_stopSessionTimeoutTimer;
-(void)_updateCurrentPaymentBarcodeWithBarcodeIdentifier:(id)arg0 decryptedBarcodeCredential:(id)arg1 error:(id)arg2 ;
-(void)_updateCurrentTransactionStatus:(NSUInteger)arg0 transaction:(id)arg1 ;
-(void)invalidateSession;
-(void)retryFetchingBarcode;
-(void)startSession;
-(void)submitPinCode:(id)arg0 ;
-(void)submitUserIntentionConfirmation:(BOOL)arg0 ;
-(void)transactionSourceIdentifier:(id)arg0 didReceiveTransaction:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCV9PASSKITUI32ACCOUNTTRANSFERAUTHORIZATIONVIEW11COORDINATOR_H
#define _TTCV9PASSKITUI32ACCOUNTTRANSFERAUTHORIZATIONVIEW11COORDINATOR_H

@protocol PKPaymentAuthorizationViewControllerDelegate, PKPaymentAuthorizationViewControllerPrivateDelegate, PKAccountServiceObserver, PKDashboardTransactionFetcherDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV9PassKitUI32AccountTransferAuthorizationView11Coordinator : NSObject <PKPaymentAuthorizationViewControllerDelegate, PKPaymentAuthorizationViewControllerPrivateDelegate, PKAccountServiceObserver, PKDashboardTransactionFetcherDelegate>

 {
    ? paymentRequest;
    ? accountModel;
    ? _isPresented;
    ? stepUpAction;
    ? dismissAction;
    ? paymentWebService;
    ? scheduleTransferModel;
    ? scheduleTransferRequest;
    ? authorized;
    ? presentFraudStepUp;
    ? hasReceivedTransaction;
    ? hasReceivedAccountUpdate;
    ? waitingForData;
    ? accountService;
    ? transactionFetcher;
    ? dismissalTimer;
    ? pastUpdateLeeway;
}




-(id)init;
-(void)accountChanged:(id)arg0 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didAuthorizeApplePayTrustSignature:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didUpdateAccountServicePaymentMethod:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationViewController:(id)arg0 didAuthorizePayment:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationViewController:(id)arg0 willFinishWithError:(id)arg1 ;
-(void)paymentAuthorizationViewControllerDidFinish:(id)arg0 ;
-(void)transactionsChanged:(id)arg0 ;


@end


#endif
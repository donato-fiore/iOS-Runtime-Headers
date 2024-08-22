// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTBILLPAYMENTCONTROLLER_H
#define PKACCOUNTBILLPAYMENTCONTROLLER_H

@class NSError, NSDecimalNumber, NSMutableSet, NSString, NSArray;
@protocol PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKAccountBillPaymentControllerDelegate;

#import <Foundation/Foundation.h>

#import "PKPaymentWebService.h"
#import "PKPaymentService.h"
#import "PKAccountWebServiceSchedulePaymentRequest.h"
#import "PKPaymentAuthorizationCoordinator.h"
#import "PKPaymentPass.h"
#import "PKAccountService.h"
#import "PKAccountServiceTransferRequest.h"
#import "PKAccountEvent.h"
#import "PKAccount.h"

@interface PKAccountBillPaymentController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate>

 {
    PKPaymentWebService *_webService;
    PKPaymentService *_paymentService;
    PKAccountWebServiceSchedulePaymentRequest *_schedulePaymentRequest;
    PKPaymentAuthorizationCoordinator *_schedulePaymentAuthorizationCoordinator;
    NSError *_applePayTrustResponseError;
    PKPaymentPass *_pass;
    PKAccountService *_accountService;
    NSDecimalNumber *_totalPaymentAmount;
    NSDecimalNumber *_peerPaymentBalance;
    PKAccountServiceTransferRequest *_paymentRequest;
    PKAccountEvent *_billPaymentSuggestedAmountDataEvent;
    BOOL _performingAction;
    BOOL _completedBillPayment;
    BOOL _fetchingData;
    NSError *_fetchingDataError;
    NSMutableSet *_dataFetchingCompletionHandlers;
}


@property (retain, nonatomic) PKAccount *account; // ivar: _account
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKAccountBillPaymentControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *fundingSources; // ivar: _fundingSources
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *payments; // ivar: _payments
@property (readonly) Class superclass;


-(id)_achPaymentWithAmount:(id)arg0 bankInformation:(id)arg1 ;
-(id)_apcPaymentWithAmount:(id)arg0 ;
-(id)_bankAccountsForFundingSources:(id)arg0 ;
-(id)_buildTransferRequestForDate:(id)arg0 ;
-(id)_createSchedulePaymentRequestWithSelectedMethods:(NSUInteger)arg0 bankInformation:(id)arg1 ;
-(id)_paymentSummaryItemsForPaymentAmountACH:(id)arg0 apc:(id)arg1 bankInformation:(id)arg2 ;
-(id)init;
-(id)initWithAccount:(id)arg0 ;
-(id)initWithAccount:(id)arg0 paymentPass:(id)arg1 ;
-(id)presentationSceneIdentifierForPaymentAuthorizationCoordinator:(id)arg0 ;
-(void)_accountDidChange:(id)arg0 ;
-(void)_addNewBankAccountIfNecessary:(id)arg0 ;
-(void)_billPaymentHasCompletedWithState:(NSUInteger)arg0 error:(id)arg1 ;
-(void)_completeFetchingFundingSources;
-(void)_fetchFundingSources;
-(void)_performApplePayTrustSignatureRequestWithSignature:(id)arg0 completion:(id)arg1 ;
-(void)_presentPaymentAuthorizationWithPaymentRequest:(id)arg0 completion:(id)arg1 ;
-(void)_updateUseApplePayCashSetting:(BOOL)arg0 ;
-(void)canPerformBillPaymentWithAmount:(id)arg0 scheduledDate:(id)arg1 completion:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didAuthorizeApplePayTrustSignature:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didAuthorizePayment:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didUpdateAccountServicePaymentMethod:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinatorDidFinish:(id)arg0 ;
-(void)performBillPaymentActionWithAmount:(id)arg0 ;
-(void)performBillPaymentActionWithAmount:(id)arg0 billPaymentSuggestedAmountDataEvent:(id)arg1 ;
-(void)performBillPaymentActionWithAmount:(id)arg0 scheduledDate:(id)arg1 billPaymentSuggestedAmountDataEvent:(id)arg2 ;


@end


#endif
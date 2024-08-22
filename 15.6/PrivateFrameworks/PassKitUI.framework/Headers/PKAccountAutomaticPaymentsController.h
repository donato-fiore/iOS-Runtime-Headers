// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTAUTOMATICPAYMENTSCONTROLLER_H
#define PKACCOUNTAUTOMATICPAYMENTSCONTROLLER_H

@class PKAccountService, PKPaymentWebService, NSCalendar, NSTimeZone, PKAccountWebServiceSchedulePaymentRequest, PKBankAccountInformation, PKApplePayTrustSignatureRequest, NSError, UIViewController, PKPaymentAuthorizationCoordinator, PKAccount, PKCurrencyAmount, NSArray, NSString, NSDate;
@protocol PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKAccountAutomaticPaymentsControllerDelegate;

#import <Foundation/Foundation.h>

#import "PKAccountAutomaticPaymentsHeroViewController.h"
#import "PKAccountAutomaticPaymentsPresetViewController.h"
#import "PKAccountAutomaticPaymentsDateViewController.h"
#import "PKAccountAutomaticPaymentsConfigurationViewController.h"
#import "PKAccountAutomaticPaymentsSetupCompleteViewController.h"
#import "PKAccountAutomaticPaymentsMinimumPaymentDisclosureViewController.h"

@interface PKAccountAutomaticPaymentsController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate>

 {
    PKAccountService *_accountService;
    PKPaymentWebService *_paymentWebService;
    NSCalendar *_productCalendar;
    NSTimeZone *_productTimeZone;
    PKAccountWebServiceSchedulePaymentRequest *_schedulePaymentRequest;
    PKBankAccountInformation *_bankInformation;
    PKApplePayTrustSignatureRequest *_applePayTrustSignatureRequest;
    NSError *_performScheduleAutomaticPaymentsError;
    UIViewController *_viewPaymentController;
    PKAccountAutomaticPaymentsHeroViewController *_heroViewController;
    PKAccountAutomaticPaymentsPresetViewController *_presetViewController;
    PKAccountAutomaticPaymentsDateViewController *_dateViewController;
    PKAccountAutomaticPaymentsConfigurationViewController *_configurationViewController;
    PKAccountAutomaticPaymentsSetupCompleteViewController *_setupCompleteViewController;
    PKAccountAutomaticPaymentsMinimumPaymentDisclosureViewController *_minimumPaymentDisclosureViewController;
    id *_performScheduleAutomaticPaymentsCompletion;
    PKPaymentAuthorizationCoordinator *_paymentAuthorizationCoordinator;
    BOOL _authorized;
}


@property (readonly, nonatomic) PKAccount *account; // ivar: _account
@property (retain, nonatomic) PKCurrencyAmount *amount; // ivar: _amount
@property (retain, nonatomic) NSArray *automaticPayments; // ivar: _automaticPayments
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKAccountAutomaticPaymentsControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger featureIdentifier; // ivar: _featureIdentifier
@property (retain, nonatomic) NSArray *fundingSources; // ivar: _fundingSources
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *paymentDate; // ivar: _paymentDate
@property (nonatomic) NSInteger paymentFrequency; // ivar: _paymentFrequency
@property (nonatomic) NSInteger paymentPreset; // ivar: _paymentPreset
@property (readonly, nonatomic) NSInteger paymentSetupContext; // ivar: _paymentSetupContext
@property (nonatomic) NSInteger scheduledDay; // ivar: _scheduledDay
@property (readonly) Class superclass;


-(BOOL)canPerformScheduleAutomaticPaymentsWithPreset:(NSInteger)arg0 frequency:(NSInteger)arg1 amount:(id)arg2 paymentDate:(id)arg3 ;
-(NSInteger)minimumPaymentDayForPreset:(NSInteger)arg0 ;
-(id)_bankAccountsForFundingSources:(id)arg0 ;
-(id)_paymentRequest;
-(id)_paymentSummaryItems;
-(id)_schedulePaymentRequest;
-(id)alertControllerForScheduledDate:(id)arg0 ;
-(id)initWithAccountService:(id)arg0 paymentWebService:(id)arg1 account:(id)arg2 context:(NSInteger)arg3 ;
-(void)_performApplePayTrustSignatureRequestWithSignature:(id)arg0 completion:(id)arg1 ;
-(void)_performPaymentRequest:(id)arg0 ;
-(void)_resetPaymentConfiguration;
-(void)nextViewControllerFromViewController:(id)arg0 withCompletion:(id)arg1 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didAuthorizeApplePayTrustSignature:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didAuthorizePayment:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didUpdateAccountServicePaymentMethod:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinatorDidFinish:(id)arg0 ;
-(void)performScheduleAutomaticPayments:(id)arg0 ;
-(void)performScheduleAutomaticPaymentsFromViewController:(id)arg0 ;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)presentNextViewControllerFromViewController:(id)arg0 ;


@end


#endif
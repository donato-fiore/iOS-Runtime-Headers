// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPEERPAYMENTACTIONCONTROLLER_H
#define PKPEERPAYMENTACTIONCONTROLLER_H

@class PKPaymentPass, PKPeerPaymentWebService, PKPeerPaymentAccount, PKBankAccountInformation, NSString;
@protocol PKPaymentSetupViewControllerDelegate, PKAddBankAccountInformationViewControllerDelegate, PKExplanationViewControllerDelegate, PKPassLibraryDataProvider, PKPeerPaymentActionControllerDelegate;

#import <Foundation/Foundation.h>

#import "PKPeerPaymentTermsController.h"

@interface PKPeerPaymentActionController : NSObject <PKPaymentSetupViewControllerDelegate, PKAddBankAccountInformationViewControllerDelegate, PKExplanationViewControllerDelegate>

 {
    PKPaymentPass *_pass;
    PKPeerPaymentWebService *_peerPaymentWebService;
    PKPeerPaymentAccount *_account;
    NSInteger _context;
    PKPeerPaymentTermsController *_termsController;
    id<PKPassLibraryDataProvider> *_passLibraryDataProvider;
    BOOL _performingAction;
}


@property (readonly, nonatomic) PKBankAccountInformation *bankInformation; // ivar: _bankInformation
@property (nonatomic) NSUInteger controllerAction; // ivar: _controllerAction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<PKPeerPaymentActionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canPerformPeerPaymentAction:(NSUInteger)arg0 account:(id)arg1 unableReason:(*NSUInteger)arg2 displayableError:(*id)arg3 ;
+(id)alertControllerForPeerPaymentActionUnableReason:(NSUInteger)arg0 displayableError:(id)arg1 addCardActionHandler:(id)arg2 ;
+(id)displayableErrorForPeerPaymentAction:(NSUInteger)arg0 andReason:(NSUInteger)arg1 ;
-(NSUInteger)_peerPaymentControllerModeForAction;
-(id)initWithPaymentPass:(id)arg0 webService:(id)arg1 context:(NSInteger)arg2 passLibraryDataProvider:(id)arg3 delegate:(id)arg4 ;
-(void)_handleError:(id)arg0 ;
-(void)_handlePeerPaymentAccountDidChangeNotification:(id)arg0 ;
-(void)_peerPaymentActionHasCompletedWithState:(NSUInteger)arg0 ;
-(void)_presentIdentityVerificationWithError:(id)arg0 ;
-(void)_presentTermsAndConditionsWithError:(id)arg0 ;
-(void)_updateAccountWithCompletion:(id)arg0 ;
-(void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg0 ;
-(void)explanationViewControllerDidSelectCancel:(id)arg0 ;
-(void)performActionWithCurrencyAmount:(id)arg0 ;
-(void)presentAddBankAccountViewController;
-(void)presentAddDebitCardViewController;
-(void)viewControllerDidCancelSetupFlow:(id)arg0 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg0 ;


@end


#endif
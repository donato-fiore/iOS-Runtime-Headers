// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTSETUPFLOWCONTROLLER_H
#define PKPEERPAYMENTSETUPFLOWCONTROLLER_H

@class PKPaymentPass, NSString, PKDeviceSharingCapabilitiesManager, UIViewController<PKPeerPaymentSetupFlowControllerDataSource>, UIImage, PKPaymentWebService, PKPeerPaymentAccount, PKPeerPaymentCredential, PKPeerPaymentService, PKPeerPaymentWebService, PKPaymentProvisioningController;
@protocol PKPaymentSelectPassesViewControllerDelegate, PKPaymentSetupViewControllerDelegate, PKPeerPaymentConfirmNameViewControllerDelegate, PKPassLibraryDataProvider, PKPeerPaymentSetupFlowControllerConfiguration;

#import <Foundation/Foundation.h>

#import "PKPeerPaymentTermsController.h"
#import "PKSecurityCapabilitiesController.h"
#import "PKPeerPaymentConfirmNameViewController.h"

@interface PKPeerPaymentSetupFlowController : NSObject <PKPaymentSelectPassesViewControllerDelegate, PKPaymentSetupViewControllerDelegate, PKPeerPaymentConfirmNameViewControllerDelegate>

 {
    PKPaymentPass *_peerPaymentPass;
    PKPeerPaymentTermsController *_termsController;
    PKSecurityCapabilitiesController *_securityCapabiltiesController;
    BOOL _hasPresentedDeviceToDeviceEncryptionFlow;
    id<PKPassLibraryDataProvider> *_passLibraryDataProvider;
    PKPeerPaymentConfirmNameViewController *_confirmNameViewControllerBeingPresented;
    NSUInteger _operations;
    NSUInteger _completedOperations;
    id *_nextViewControllerCompletion;
}


@property (readonly, nonatomic) NSObject<PKPeerPaymentSetupFlowControllerConfiguration> *configuration; // ivar: _configuration
@property (readonly, nonatomic) NSInteger context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKDeviceSharingCapabilitiesManager *deviceCapabiltiesManager; // ivar: _deviceCapabiltiesManager
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIViewController<PKPeerPaymentSetupFlowControllerDataSource> *parentViewController; // ivar: _parentViewController
@property (readonly, nonatomic) UIImage *passSnapShot; // ivar: _passSnapShot
@property (readonly, nonatomic) PKPaymentWebService *paymentWebService; // ivar: _paymentWebService
@property (readonly, nonatomic) PKPeerPaymentAccount *peerPaymentAccount; // ivar: _peerPaymentAccount
@property (readonly, nonatomic) PKPeerPaymentCredential *peerPaymentCredential; // ivar: _peerPaymentCredential
@property (readonly, nonatomic) PKPeerPaymentService *peerPaymentService; // ivar: _peerPaymentService
@property (readonly, nonatomic) PKPeerPaymentWebService *peerPaymentWebService; // ivar: _peerPaymentWebService
@property (readonly, nonatomic) PKPaymentProvisioningController *provisioningController; // ivar: _provisioningController
@property (readonly) Class superclass;


-(BOOL)_hasTooManyPasses;
-(BOOL)_peerPaymentPassIsProvisioned;
-(BOOL)_willDisplayErrorForOperationOperationInContext:(NSUInteger)arg0 completion:(id)arg1 ;
-(NSUInteger)_cipState;
-(id)firstPeerPaymentAccountSetupViewController;
-(id)initWithPeerPaymentCredential:(id)arg0 provisioningController:(id)arg1 passLibraryDataProvider:(id)arg2 configuration:(id)arg3 context:(NSInteger)arg4 ;
-(id)passesIncludingPeerPaymentPass:(BOOL)arg0 isCheckingTotalPassCount:(BOOL)arg1 ;
-(void)_addAssociatedAccountWithCompletion:(id)arg0 ;
-(void)_checkCloudStoreSetupWithCompletion:(id)arg0 ;
-(void)_checkManateeCapabilityWithCompletion:(id)arg0 ;
-(void)_checkMissingTLKsWithCompletion:(id)arg0 ;
-(void)_completedOperation:(NSUInteger)arg0 ;
-(void)_fetchAppleCashCapabilitiesIfNecessary;
-(void)_fitlerOperations:(NSUInteger)arg0 peerPaymentAccount:(id)arg1 context:(NSInteger)arg2 ;
-(void)_handleDisplayableError:(id)arg0 completion:(id)arg1 ;
-(void)_handlePeerPaymentAccountDidChangeNotification;
-(void)_nextViewControllerWithCompletion:(id)arg0 ;
-(void)_presentEnsurePassCountWithCompletion:(id)arg0 ;
-(void)_presentIdentityVerificationFlowWithError:(id)arg0 completion:(id)arg1 ;
-(void)_presentManateeCapableOperationWithCompletion:(id)arg0 ;
-(void)_presentMissingTLKsFlowWithCompletion:(id)arg0 ;
-(void)_presentNameConfirmationViewControllerWithError:(id)arg0 completion:(id)arg1 ;
-(void)_presentTermWithTermsResponse:(id)arg0 completion:(id)arg1 ;
-(void)_provisionPassWithCompletion:(id)arg0 ;
-(void)_setupCloudStoreWithCompletion:(id)arg0 ;
-(void)_termsOperationWithTermsResponse:(id)arg0 completion:(id)arg1 ;
-(void)confirmNameViewController:(id)arg0 enteredFirstName:(id)arg1 lastName:(id)arg2 ;
-(void)confirmNameViewControllerCancelled:(id)arg0 ;
-(void)nextViewControllerAfterPerfomingOperations:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)selectPassesViewController:(id)arg0 didSelectPasses:(id)arg1 completion:(id)arg2 ;
-(void)selectPassesViewControllerDidTapBackButton:(id)arg0 ;
-(void)setOperations:(NSUInteger)arg0 ;
-(void)viewControllerDidCancelSetupFlow:(id)arg0 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg0 ;


@end


#endif
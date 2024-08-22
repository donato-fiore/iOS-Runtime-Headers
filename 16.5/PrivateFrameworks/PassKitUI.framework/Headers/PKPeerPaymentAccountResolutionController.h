// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTACCOUNTRESOLUTIONCONTROLLER_H
#define PKPEERPAYMENTACCOUNTRESOLUTIONCONTROLLER_H

@class PKPeerPaymentWebService, PKPeerPaymentAccount, NSString;
@protocol MFMailComposeViewControllerDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKPeerPaymentActionViewControllerDelegate, PKPaymentSetupViewControllerDelegate, PKPassLibraryDataProvider, PKPaymentSetupDelegate;

#import <Foundation/Foundation.h>

#import "PKPeerPaymentActionViewController.h"

@interface PKPeerPaymentAccountResolutionController : NSObject <MFMailComposeViewControllerDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKPeerPaymentActionViewControllerDelegate, PKPaymentSetupViewControllerDelegate>

 {
    id<PKPassLibraryDataProvider> *_passLibraryDataProvider;
    NSInteger _context;
    PKPeerPaymentWebService *_webService;
    PKPeerPaymentActionViewController *_peerPaymentActionViewController;
}


@property (retain, nonatomic) PKPeerPaymentAccount *account; // ivar: _account
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPeerPaymentAccountResolutionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PKPaymentSetupDelegate> *setupDelegate; // ivar: _setupDelegate
@property (readonly) Class superclass;


+(BOOL)_canShowContactSupportForPass:(id)arg0 ;
-(BOOL)_hasPeerPaymentPassProvisioned;
-(BOOL)peerPaymentPassIsProvisionedOnDevice;
-(NSUInteger)currentPeerPaymentAccountResolution;
-(id)_contactAppleSupportAlertControllerForPass:(id)arg0 ;
-(id)_paymentSetupNavigationControllerForProvisioningController:(id)arg0 ;
-(id)_paymentWebService;
-(id)_peerPaymentPass;
-(id)initWithAccount:(id)arg0 webService:(id)arg1 context:(NSInteger)arg2 delegate:(id)arg3 passLibraryDataProvider:(id)arg4 ;
-(void)_callSupportWithPhoneNumber:(id)arg0 ;
-(void)_dismissViewController;
-(void)_emailSupportWithEmailAddress:(id)arg0 ;
-(void)_openSupportWebsiteWithWebsiteURL:(id)arg0 ;
-(void)_peerPaymentAccountChanged:(id)arg0 ;
-(void)_presentActivationFlowWithCompletion:(id)arg0 ;
-(void)_presentActivationFlowWithConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)_presentContactAppleSupportAlertWithCompletion:(id)arg0 ;
-(void)_presentFlowForAccountResolution:(NSUInteger)arg0 configuration:(id)arg1 completion:(id)arg2 ;
-(void)_presentIdentityVerificationWithConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)_presentPeerPaymentAction:(NSUInteger)arg0 withCompletion:(id)arg1 ;
-(void)_presentReOpenFlowWithCompletion:(id)arg0 ;
-(void)_presentViewController:(id)arg0 ;
-(void)dealloc;
-(void)mailComposeController:(id)arg0 didFinishWithResult:(NSInteger)arg1 error:(id)arg2 ;
-(void)peerPaymentAccountResolutionController:(id)arg0 requestsDismissCurrentViewControllerAnimated:(BOOL)arg1 ;
-(void)peerPaymentAccountResolutionController:(id)arg0 requestsPresentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)peerPaymentActionViewControllerDidCancel:(id)arg0 ;
-(void)peerPaymentActionViewControllerDidPerformAction:(id)arg0 ;
-(void)presentFlowForAccountResolution:(NSUInteger)arg0 configuration:(id)arg1 completion:(id)arg2 ;
-(void)presentResolutionForCurrentAccountStateWithCompletion:(id)arg0 ;
-(void)viewControllerDidCancelSetupFlow:(id)arg0 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg0 ;


@end


#endif
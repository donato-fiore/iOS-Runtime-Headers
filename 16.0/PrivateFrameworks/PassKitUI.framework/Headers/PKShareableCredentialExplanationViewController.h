// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSHAREABLECREDENTIALEXPLANATIONVIEWCONTROLLER_H
#define PKSHAREABLECREDENTIALEXPLANATIONVIEWCONTROLLER_H

@class PKSecureElement, NSString, PKPaymentService, LAContext, PKAddShareablePassConfiguration, NSArray, PKSharingPushProvisioningInvitation, PKAssertion, UIImage, NSMutableDictionary;
@protocol PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKShareableCredentialsMessageComposeViewControllerDelegate, PKPaymentSetupViewControllerDelegate, PKPaymentServiceDelegate, NFRemoteAdminEventListener, OS_dispatch_source;


#import "PKPassShareRedemptionViewController.h"
#import "PKShareableCredentialsMessageComposeViewController.h"

@interface PKShareableCredentialExplanationViewController : PKPassShareRedemptionViewController <PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKShareableCredentialsMessageComposeViewControllerDelegate, PKPaymentSetupViewControllerDelegate, PKPaymentServiceDelegate, NFRemoteAdminEventListener>

 {
    NSInteger _context;
    BOOL _isUnifiedAccessPass;
    NSObject<OS_dispatch_source> *_lostModeTimeout;
    PKSecureElement *_secureElement;
    NSString *_provisioningTemplateIdentifier;
    PKPaymentService *_paymentService;
    LAContext *_localAuthenticationContext;
}


@property (retain, nonatomic) PKAddShareablePassConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) NSArray *credentials; // ivar: _credentials
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKSharingPushProvisioningInvitation *invitation; // ivar: _invitation
@property (nonatomic) BOOL isRunningInForeground; // ivar: _isRunningInForeground
@property (retain, nonatomic) PKShareableCredentialsMessageComposeViewController *messageComposeViewController; // ivar: _messageComposeViewController
@property (retain, nonatomic) PKAssertion *notificationSupressionAssertion; // ivar: _notificationSupressionAssertion
@property (retain, nonatomic) UIImage *passThumbnailImage; // ivar: _passThumbnailImage
@property (retain, nonatomic) NSMutableDictionary *passToMoreItems; // ivar: _passToMoreItems
@property (retain, nonatomic) PKAssertion *provisioningAssertion; // ivar: _provisioningAssertion
@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *setupDelegate; // ivar: _setupDelegate
@property (readonly) Class superclass;


-(BOOL)_shouldRelinquishShareInvitationForError:(id)arg0 ;
-(BOOL)_showProvisioningErrorWithNumberOfPassesFailed:(NSInteger)arg0 error:(id)arg1 ;
-(id)initWithContext:(NSInteger)arg0 setupDelegate:(id)arg1 credentials:(id)arg2 configuration:(id)arg3 ;
-(void)_acquireAssertions;
-(void)_confirmSecurityCapabilities;
-(void)_confirmUserIsNotInLostMode;
-(void)_finishProvisioningFlowWithAddedPasses:(id)arg0 moreInfoItems:(id)arg1 ;
-(void)_handleProvisioningFailureWithError:(id)arg0 ;
-(void)_invalidateAssertions;
-(void)_loadPassThumbnail;
-(void)_provisionCredentials:(id)arg0 ;
-(void)_showExitingLostModeUI;
-(void)_showMoreInfoViewControllerForPasses:(id)arg0 withItems:(id)arg1 showExpressEducationIfPresent:(BOOL)arg2 completion:(id)arg3 ;
-(void)_startProvisioning;
-(void)_terminateSetupFlowWithPasses:(id)arg0 error:(id)arg1 ;
-(void)activationCodeDidChangeToCode:(id)arg0 ;
-(void)appletStateChange:(id)arg0 ;
-(void)cancelButtonPressed;
-(void)continueButtonPressed;
-(void)dealloc;
-(void)messageComposeViewControllerDidFinishWithResult:(BOOL)arg0 ;
-(void)showLoadingUI;
-(void)showStartingUI;
-(void)viewController:(id)arg0 didFinishWithPasses:(id)arg1 error:(id)arg2 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif
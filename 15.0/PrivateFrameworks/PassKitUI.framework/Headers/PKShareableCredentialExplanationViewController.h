// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSHAREABLECREDENTIALEXPLANATIONVIEWCONTROLLER_H
#define PKSHAREABLECREDENTIALEXPLANATIONVIEWCONTROLLER_H

@class PKSecureElement, LAContext, PKAddShareablePassConfiguration, NSArray, NSString, PKAssertion, UIImage, NSMutableDictionary;
@protocol PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKShareableCredentialsMessageComposeViewControllerDelegate, PKPaymentSetupViewControllerDelegate, PKPaymentServiceDelegate, NFRemoteAdminEventListener, OS_dispatch_source;


#import "PKExplanationViewController.h"
#import "PKHeroCardExplainationHeaderView.h"
#import "PKShareableCredentialsMessageComposeViewController.h"

@interface PKShareableCredentialExplanationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKShareableCredentialsMessageComposeViewControllerDelegate, PKPaymentSetupViewControllerDelegate, PKPaymentServiceDelegate, NFRemoteAdminEventListener>

 {
    BOOL _isUnifiedAccessPass;
    NSObject<OS_dispatch_source> *_lostModeTimeout;
    PKSecureElement *_secureElement;
    LAContext *_localAuthenticationContext;
}


@property (retain, nonatomic) PKAddShareablePassConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) NSArray *credentials; // ivar: _credentials
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKHeroCardExplainationHeaderView *heroView; // ivar: _heroView
@property (nonatomic) BOOL isRunningInForeground; // ivar: _isRunningInForeground
@property (retain, nonatomic) PKShareableCredentialsMessageComposeViewController *messageComposeViewController; // ivar: _messageComposeViewController
@property (retain, nonatomic) PKAssertion *notificationSupressionAssertion; // ivar: _notificationSupressionAssertion
@property (retain, nonatomic) UIImage *passThumbnailImage; // ivar: _passThumbnailImage
@property (retain, nonatomic) NSMutableDictionary *passToMoreItems; // ivar: _passToMoreItems
@property (retain, nonatomic) PKAssertion *provisioningAssertion; // ivar: _provisioningAssertion
@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *setupDelegate; // ivar: _setupDelegate
@property (readonly) Class superclass;


-(id)initWithContext:(NSInteger)arg0 setupDelegate:(id)arg1 credentials:(id)arg2 configuration:(id)arg3 ;
-(void)_acquireAssertions;
-(void)_confirmHSA2Enabled;
-(void)_confirmUserIsNotInLostMode;
-(void)_finishProvisioningFlowWithAddedPasses:(id)arg0 moreInfoItems:(id)arg1 ;
-(void)_invalidateAssertions;
-(void)_provisionCredentials:(id)arg0 ;
-(void)_showAddUI;
-(void)_showExitingLostModeUI;
-(void)_showLoadingUI;
-(void)_showMoreInfoViewControllerForPasses:(id)arg0 withItems:(id)arg1 showExpressEducationIfPresent:(BOOL)arg2 completion:(id)arg3 ;
-(void)_showProvisioningErrorWithNumberOfPassesFailed:(NSInteger)arg0 ;
-(void)_startProvisioning;
-(void)_terminateSetupFlowWithPasses:(id)arg0 error:(id)arg1 ;
-(void)appletStateChange:(id)arg0 ;
-(void)dealloc;
-(void)explanationViewControllerDidSelectCancel:(id)arg0 ;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)messageComposeViewControllerDidFinishWithResult:(BOOL)arg0 ;
-(void)viewController:(id)arg0 didFinishWithPasses:(id)arg1 error:(id)arg2 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif
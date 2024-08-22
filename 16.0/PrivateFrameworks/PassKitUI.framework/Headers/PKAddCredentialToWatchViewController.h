// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKADDCREDENTIALTOWATCHVIEWCONTROLLER_H
#define PKADDCREDENTIALTOWATCHVIEWCONTROLLER_H

@class PKAppletSubcredentialSharingSession, PKPaymentAuthorizationCoordinator, LAContext, NSString;
@protocol PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKExplanationViewControllerDelegate, PKSubcredentialRemoteDevicePairingFlowControllerOperation, PKViewControllerPreflightable, PKSubcredentialProvisioningViewModelProtocol, PKSubcredentialPairingFlowControllerProtocol;


#import "PKExplanationViewController.h"
#import "PKWatchHeroCardExplainationHeaderView.h"
#import "PKSubcredentialPairingFlowControllerContext.h"

@interface PKAddCredentialToWatchViewController : PKExplanationViewController <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKExplanationViewControllerDelegate, PKSubcredentialRemoteDevicePairingFlowControllerOperation, PKViewControllerPreflightable>

 {
    PKAppletSubcredentialSharingSession *_sharingSession;
    id<PKSubcredentialProvisioningViewModelProtocol> *_provisioningViewModel;
    BOOL _isAdvancing;
    PKWatchHeroCardExplainationHeaderView *_heroCardView;
    PKPaymentAuthorizationCoordinator *_authorizationCoordinator;
    id *_authorizationRequestCompletion;
    LAContext *_LAContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PKSubcredentialPairingFlowControllerProtocol> *flowController; // ivar: _flowController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger operation;
@property (retain, nonatomic) PKSubcredentialPairingFlowControllerContext *provisioningContext; // ivar: _provisioningContext
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL suppressFieldDetect;


-(id)initWithFlowController:(id)arg0 context:(id)arg1 ;
-(id)presentationSceneIdentifierForPaymentAuthorizationCoordinator:(id)arg0 ;
-(id)sharingSessionWithDelegate:(id)arg0 ;
-(void)advanceToNextState;
-(void)dealloc;
-(void)explanationViewControllerDidSelectCancel:(id)arg0 ;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)invalidateUserAuth;
-(void)loadView;
-(void)paymentAuthorizationCoordinator:(id)arg0 didAuthorizeContextWithHandler:(id)arg1 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didAuthorizePayment:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinatorDidFinish:(id)arg0 ;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)presentPaymentSheetForSharingRequest:(id)arg0 ;
-(void)resetState;
-(void)showActivityIndicator:(BOOL)arg0 ;
-(void)showSuccessCheckmark:(BOOL)arg0 ;
-(void)startProvisioning;
-(void)subcredentialProvisioningConfiguration:(id)arg0 requestUserAuthWithCompletion:(id)arg1 ;
-(void)subcredentialProvisioningController:(id)arg0 didFinishWithError:(id)arg1 inState:(NSInteger)arg2 ;
-(void)subcredentialProvisioningController:(id)arg0 didFinishWithPass:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif
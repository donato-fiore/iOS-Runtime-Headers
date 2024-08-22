// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSUBCREDENTIALINVITATIONVIEWCONTROLLER_H
#define PKSUBCREDENTIALINVITATIONVIEWCONTROLLER_H

@class PKAppletSubcredentialSharingSession, NSString, PKContactResolver;
@protocol PKSubcredentialInvitationProvisioningFlowControllerOperation, PKViewControllerPreflightable, PKSubcredentialProvisioningViewModelProtocol, PKSubcredentialInvitationFlowControllerProtocol;


#import "PKPassShareRedemptionViewController.h"
#import "PKSubcredentialInvitationFlowControllerContext.h"

@interface PKSubcredentialInvitationViewController : PKPassShareRedemptionViewController <PKSubcredentialInvitationProvisioningFlowControllerOperation, PKViewControllerPreflightable>

 {
    PKAppletSubcredentialSharingSession *_session;
    id<PKSubcredentialProvisioningViewModelProtocol> *_provisioningViewModel;
    id<PKSubcredentialProvisioningViewModelProtocol> *_remoteProvisioningViewModel;
    NSString *_contactName;
    PKContactResolver *_contactResolver;
    BOOL _shouldSurfaceRemoteDeviceProvisioningErrors;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PKSubcredentialInvitationFlowControllerProtocol> *flowController; // ivar: _flowController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger operation;
@property (retain, nonatomic) PKSubcredentialInvitationFlowControllerContext *provisioningContext; // ivar: _provisioningContext
@property (readonly) Class superclass;


-(id)_bodyTextForContext:(id)arg0 ;
-(id)_titleTextForContext:(id)arg0 ;
-(id)contactKeysToFetch;
-(id)initWithFlowController:(id)arg0 context:(id)arg1 ;
-(id)sharingSessionWithDelegate:(id)arg0 startSession:(BOOL)arg1 ;
-(void)activationCodeDidChangeToCode:(id)arg0 ;
-(void)advanceToNextState;
-(void)continueButtonPressed;
-(void)continueLaterButtonPressed;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)resetState;
-(void)startLocalDeviceProvisioning;
-(void)startRemoteDeviceProvisioning;
-(void)subcredentialProvisioningController:(id)arg0 didFinishWithError:(id)arg1 inState:(NSInteger)arg2 ;
-(void)subcredentialProvisioningController:(id)arg0 didFinishWithPass:(id)arg1 ;
-(void)subcredentialProvisioningController:(id)arg0 shouldFailAfterError:(id)arg1 withCompletion:(id)arg2 ;
-(void)viewDidLoad;


@end


#endif
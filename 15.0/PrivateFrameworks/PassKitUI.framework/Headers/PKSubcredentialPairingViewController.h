// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSUBCREDENTIALPAIRINGVIEWCONTROLLER_H
#define PKSUBCREDENTIALPAIRINGVIEWCONTROLLER_H

@class UIViewController, PKAppletSubcredentialPairingSession, NSString;
@protocol PKSubcredentialLocalDevicePairingFlowControllerOperation, PKSubcredentialProvisioningViewModelProtocol, PKSubcredentialPairingFlowControllerProtocol;


#import "PKCredentialProvisioningView.h"
#import "PKIdleTimerAssertion.h"
#import "PKSubcredentialPairingFlowControllerContext.h"

@interface PKSubcredentialPairingViewController : UIViewController <PKSubcredentialLocalDevicePairingFlowControllerOperation>

 {
    PKAppletSubcredentialPairingSession *_pairingSession;
    id<PKSubcredentialProvisioningViewModelProtocol> *_provisioningViewModel;
    PKCredentialProvisioningView *_provisioningView;
    BOOL _isCancelling;
    BOOL _isAdvancing;
    BOOL _outstandingAlert;
    PKIdleTimerAssertion *_idleTimerAssertion;
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
-(id)pairingSessionWithDelegate:(id)arg0 ;
-(void)advanceToNextState;
-(void)dealloc;
-(void)handleCancelButton;
-(void)hostApplicationDidEnterBackground;
-(void)setIdleTimerDisabled:(BOOL)arg0 ;
-(void)startProvisioning;
-(void)subcredentialProvisioningController:(id)arg0 didEnterState:(NSInteger)arg1 ;
-(void)subcredentialProvisioningController:(id)arg0 didFinishWithError:(id)arg1 inState:(NSInteger)arg2 ;
-(void)subcredentialProvisioningController:(id)arg0 didFinishWithPass:(id)arg1 ;
-(void)subcredentialProvisioningController:(id)arg0 shouldFailAfterError:(id)arg1 withCompletion:(id)arg2 ;
-(void)updateUIForState:(NSInteger)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif
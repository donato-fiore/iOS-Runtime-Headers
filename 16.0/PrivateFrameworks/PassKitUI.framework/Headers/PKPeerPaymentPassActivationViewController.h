// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTPASSACTIVATIONVIEWCONTROLLER_H
#define PKPEERPAYMENTPASSACTIVATIONVIEWCONTROLLER_H

@class CLInUseAssertion, NSString;
@protocol PKExplanationViewControllerDelegate, PKExplanationViewDelegate, PKPeerPaymentSetupFlowControllerDataSource, PKPaymentSetupViewControllerDelegate;


#import "PKExplanationViewController.h"
#import "PKPeerPaymentSetupFlowController.h"
#import "PKPeerPaymentSetupFlowHeroView.h"

@interface PKPeerPaymentPassActivationViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKExplanationViewDelegate, PKPeerPaymentSetupFlowControllerDataSource>

 {
    PKPeerPaymentSetupFlowController *_peerPaymentSetupFlowController;
    PKPeerPaymentSetupFlowHeroView *_heroView;
    NSUInteger _state;
    NSUInteger _operations;
    BOOL _shouldShowAddDebitCardViewController;
    id<PKPaymentSetupViewControllerDelegate> *_setupDelegate;
    CLInUseAssertion *_inUseAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldShowAddDebitCardViewController;
-(BOOL)shouldPushTerms;
-(id)_bodyStringForState;
-(id)_titleStringForState;
-(id)initWithPeerPaymentSetupFlowController:(id)arg0 ;
-(void)_beginSetup;
-(void)_handleActivatedState;
-(void)_handleNextStep;
-(void)_invalidateCLInUseAssertion;
-(void)_presentActivationFailedErrorAlert;
-(void)_presentDisplayableError:(id)arg0 ;
-(void)_setState:(NSUInteger)arg0 ;
-(void)_showSpinner:(BOOL)arg0 ;
-(void)_terminateSetupFlow;
-(void)dealloc;
-(void)explanationViewControllerDidSelectCancel:(id)arg0 ;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif
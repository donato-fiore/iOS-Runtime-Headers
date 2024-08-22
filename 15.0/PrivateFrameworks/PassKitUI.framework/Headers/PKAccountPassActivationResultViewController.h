// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKACCOUNTPASSACTIVATIONRESULTVIEWCONTROLLER_H
#define PKACCOUNTPASSACTIVATIONRESULTVIEWCONTROLLER_H

@class UIViewController, CLInUseAssertion, UINotificationFeedbackGenerator, CLLocationManager, NSString;
@protocol PKAccountFlowControllerDelegate, PKPaymentSetupViewControllerDelegate;


#import "PKExplanationViewController.h"
#import "PKAccountFlowController.h"

@interface PKAccountPassActivationResultViewController : PKExplanationViewController <PKAccountFlowControllerDelegate>

 {
    PKAccountFlowController *_accountController;
    id<PKPaymentSetupViewControllerDelegate> *_delegate;
    NSUInteger _featureIdentifier;
    NSInteger _setupContext;
    UIViewController *_nextViewController;
    CLInUseAssertion *_inUseAssertion;
    UINotificationFeedbackGenerator *_cardAddedFeedbackGenerator;
    CLLocationManager *_locationManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didAddToAmp; // ivar: _didAddToAmp
@property (nonatomic) BOOL didMakeAccountPassDefault; // ivar: _didMakeAccountPassDefault
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL showingLoadingIndicator; // ivar: _showingLoadingIndicator
@property (readonly) Class superclass;


-(BOOL)_willPerformProvisioningActions;
-(id)_localizedStringKeyForPerformedOperationsAndMadeDefault:(BOOL)arg0 ;
-(id)_setupLaterBodyString;
-(id)initWithAccountFlowController:(id)arg0 context:(NSInteger)arg1 setupDelegate:(id)arg2 ;
-(void)_handleNextStep;
-(void)_presentDisplayableError:(id)arg0 ;
-(void)_presentViewController:(id)arg0 ;
-(void)_showActivationSpinner:(BOOL)arg0 ;
-(void)_terminateSetupFlow;
-(void)_updateForLoading;
-(void)_updateForMadeDefault;
-(void)_updateForSetupLater;
-(void)_updateUI;
-(void)accountFlowController:(id)arg0 requestsPresentationOfDisplayableError:(id)arg1 ;
-(void)accountFlowController:(id)arg0 requestsPresentationOfViewController:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif
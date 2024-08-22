// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTPASSMAKEDEFAULTVIEWCONTOLLER_H
#define PKACCOUNTPASSMAKEDEFAULTVIEWCONTOLLER_H

@class PKAccountPostProvisioningContent, CLInUseAssertion, NSString;
@protocol PKAccountFlowControllerDelegate, PKViewControllerPreflightable, PKPaymentSetupViewControllerDelegate;


#import "PKExplanationViewController.h"
#import "PKAccountFlowController.h"

@interface PKAccountPassMakeDefaultViewContoller : PKExplanationViewController <PKAccountFlowControllerDelegate, PKViewControllerPreflightable>

 {
    PKAccountFlowController *_accountController;
    id<PKPaymentSetupViewControllerDelegate> *_delegate;
    NSUInteger _featureIdentifier;
    PKAccountPostProvisioningContent *_makeDefaultPostProvisioningContent;
    CLInUseAssertion *_inUseAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_willPerformProvisioningActions;
-(id)initWithAccountFlowController:(id)arg0 context:(NSInteger)arg1 setupDelegate:(id)arg2 ;
-(void)_presentDisplayableError:(id)arg0 ;
-(void)_presentViewController:(id)arg0 ;
-(void)_reportEventForPassIfNecessary:(id)arg0 ;
-(void)_terminateSetupFlow;
-(void)accountFlowController:(id)arg0 requestsPresentationOfDisplayableError:(id)arg1 ;
-(void)accountFlowController:(id)arg0 requestsPresentationOfViewController:(id)arg1 ;
-(void)dealloc;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)loadView;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif
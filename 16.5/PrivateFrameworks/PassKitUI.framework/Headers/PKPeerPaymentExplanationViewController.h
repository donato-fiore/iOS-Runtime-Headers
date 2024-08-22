// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTEXPLANATIONVIEWCONTROLLER_H
#define PKPEERPAYMENTEXPLANATIONVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKPeerPaymentSetupFlowControllerDataSource;


#import "PKExplanationViewController.h"
#import "PKPeerPaymentSetupFlowController.h"
#import "PKPeerPaymentSetupFlowProvisionConfiguration.h"

@interface PKPeerPaymentExplanationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKPeerPaymentSetupFlowControllerDataSource>

 {
    NSUInteger _operations;
    PKPeerPaymentSetupFlowController *_peerPaymentSetupFlowController;
    UIViewController *_nextViewController;
    PKPeerPaymentSetupFlowProvisionConfiguration *_configuration;
    BOOL _hidesSetupLater;
}


@property (nonatomic) BOOL allowsManualEntry; // ivar: _allowsManualEntry
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldPushTerms;
-(id)_bodyText;
-(id)initWithProvisoningController:(id)arg0 setupDelegate:(id)arg1 passLibraryDataProvider:(id)arg2 context:(NSInteger)arg3 credential:(id)arg4 ;
-(void)_addDifferentCard;
-(void)_handleNextStep;
-(void)_presentDisplayableError:(id)arg0 ;
-(void)_showSpinner:(BOOL)arg0 ;
-(void)_terminateSetupFlow;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif
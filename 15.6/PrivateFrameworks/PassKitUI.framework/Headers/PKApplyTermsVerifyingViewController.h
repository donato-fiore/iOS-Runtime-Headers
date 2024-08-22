// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKAPPLYTERMSVERIFYINGVIEWCONTROLLER_H
#define PKAPPLYTERMSVERIFYINGVIEWCONTROLLER_H

@class NSString, CLInUseAssertion;
@protocol PKPaymentSetupViewControllerDelegate;


#import "PKExplanationViewController.h"
#import "PKApplyController.h"

@interface PKApplyTermsVerifyingViewController : PKExplanationViewController {
    PKApplyController *_applyController;
    NSString *_termsIdentifier;
    id<PKPaymentSetupViewControllerDelegate> *_setupDelegate;
    BOOL _isProcessingTerms;
    NSUInteger _featureIdentifier;
    CLInUseAssertion *_inUseAssertion;
}




-(id)analyticsPageTag;
-(id)initWithController:(id)arg0 setupDelegate:(id)arg1 context:(NSInteger)arg2 termsIdentifier:(id)arg3 ;
-(void)_processTerms;
-(void)_showActivationSpinner:(BOOL)arg0 ;
-(void)_terminateSetupFlow;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKIDENTITYVERIFICATIONEXPLANATIONVIEWCONTROLLER_H
#define PKIDENTITYVERIFICATIONEXPLANATIONVIEWCONTROLLER_H

@class NSString;
@protocol PKExplanationViewDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKPaymentSetupViewControllerDelegate;


#import "PKExplanationViewController.h"
#import "PKPeerPaymentIdentityVerificationController.h"

@interface PKIdentityVerificationExplanationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKPeerPaymentAccountResolutionControllerDelegate>

 {
    PKPeerPaymentIdentityVerificationController *_controller;
    id<PKPaymentSetupViewControllerDelegate> *_setupDelegate;
    NSUInteger _identityVerificaionError;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_bodyText;
-(id)_titleText;
-(id)initWithContext:(NSInteger)arg0 setupDelegate:(id)arg1 identityVerificationController:(id)arg2 ;
-(struct CGSize )_snapshotSize;
-(void)_cancel;
-(void)_processNextViewController;
-(void)_terminateFlow;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)loadView;
-(void)peerPaymentAccountResolutionController:(id)arg0 requestsDismissCurrentViewControllerAnimated:(BOOL)arg1 ;
-(void)peerPaymentAccountResolutionController:(id)arg0 requestsPresentViewController:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif
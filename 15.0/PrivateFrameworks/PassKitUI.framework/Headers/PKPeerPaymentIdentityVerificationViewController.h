// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPEERPAYMENTIDENTITYVERIFICATIONVIEWCONTROLLER_H
#define PKPEERPAYMENTIDENTITYVERIFICATIONVIEWCONTROLLER_H

@class NSArray, NSString;
@protocol PKExplanationViewDelegate, PKPeerPaymentAccountResolutionControllerDelegate;


#import "PKPaymentSetupFieldsViewController.h"
#import "PKPeerPaymentIdentityVerificationController.h"

@interface PKPeerPaymentIdentityVerificationViewController : PKPaymentSetupFieldsViewController <PKExplanationViewDelegate, PKPeerPaymentAccountResolutionControllerDelegate>

 {
    PKPeerPaymentIdentityVerificationController *_controller;
    NSArray *_visibleFieldIdentifiers;
    NSUInteger _identityVerificaionError;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *headerSubtitle; // ivar: _headerSubtitle
@property (retain, nonatomic) NSString *headerTitle; // ivar: _headerTitle
@property (readonly) Class superclass;


-(id)defaultHeaderViewSubTitle;
-(id)defaultHeaderViewTitle;
-(id)initWithController:(id)arg0 setupDelegate:(id)arg1 visibleFieldIdentifiers:(id)arg2 ;
-(id)initWithController:(id)arg0 visibleFieldIdentifiers:(id)arg1 ;
-(id)visibleFieldIdentifiers;
-(void)_handleCancelButtonTapped:(id)arg0 ;
-(void)_showNavigationBarSpinner:(BOOL)arg0 ;
-(void)_terminateFlow;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)handleNextButtonTapped:(id)arg0 ;
-(void)peerPaymentAccountResolutionController:(id)arg0 requestsDismissCurrentViewControllerAnimated:(BOOL)arg1 ;
-(void)peerPaymentAccountResolutionController:(id)arg0 requestsPresentViewController:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif
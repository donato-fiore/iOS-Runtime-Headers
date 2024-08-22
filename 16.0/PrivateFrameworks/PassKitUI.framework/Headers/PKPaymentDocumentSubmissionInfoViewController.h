// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTDOCUMENTSUBMISSIONINFOVIEWCONTROLLER_H
#define PKPAYMENTDOCUMENTSUBMISSIONINFOVIEWCONTROLLER_H

@class NSString;
@protocol PKPaymentDocumentSubmissionControllerDelegate, PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKPaymentSetupPresentationProtocol;


#import "PKExplanationViewController.h"
#import "PKPaymentDocumentSubmissionController.h"

@interface PKPaymentDocumentSubmissionInfoViewController : PKExplanationViewController <PKPaymentDocumentSubmissionControllerDelegate, PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKPaymentSetupPresentationProtocol>

 {
    PKPaymentDocumentSubmissionController *_controller;
    NSInteger _context;
    NSInteger _currentState;
    NSInteger _currentSide;
    NSUInteger _featureIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)onPresentationRemoveViewControllersAfterMarker;
-(NSUInteger)paymentSetupMarker;
-(id)_secondaryButton;
-(id)initWithController:(id)arg0 context:(NSInteger)arg1 featureIdentifier:(NSUInteger)arg2 ;
-(void)_cancelPressed;
-(void)_reportViewDidAppear:(BOOL)arg0 ;
-(void)captureController:(id)arg0 didChangeStateTo:(NSInteger)arg1 ;
-(void)captureController:(id)arg0 showLoading:(BOOL)arg1 ;
-(void)didSelectSetupLater;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)updateUIWithState:(NSInteger)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTCARDMANUALENTRYVIEWCONTROLLER_H
#define PKPAYMENTCARDMANUALENTRYVIEWCONTROLLER_H

@class NSArray, NSString;
@protocol PKPaymentSetupDisambiguationViewControllerDelegate, PKPaymentCameraCaptureViewControllerDelegate;


#import "PKPaymentSetupProvisioningFieldsViewController.h"

@interface PKPaymentCardManualEntryViewController : PKPaymentSetupProvisioningFieldsViewController <PKPaymentSetupDisambiguationViewControllerDelegate, PKPaymentCameraCaptureViewControllerDelegate>

 {
    NSArray *_pendingCameraCaptureObjects;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldUseInlineSecondaryProvisioningFlow;
-(BOOL)shouldDisplayFooterField;
-(id)defaultFields;
-(id)defaultHeaderViewSubTitle;
-(id)defaultHeaderViewTitle;
-(id)newPaymentEligibilityRequest;
-(id)readonlyFieldIdentifiers;
-(id)visibleFieldIdentifiers;
-(void)_cameraCaptureCancelButtonPressed:(id)arg0 ;
-(void)_dismissCameraCaptureViewController:(id)arg0 ;
-(void)_performDisambiguationWithCompletion:(id)arg0 ;
-(void)_performInlineSecondaryWithCompletion:(id)arg0 ;
-(void)_performRequirementsWithCompletion:(id)arg0 ;
-(void)_performSecondaryWithCompletion:(id)arg0 ;
-(void)_processPendingCameraCaptureObjects;
-(void)_pushSecondaryPaymentSetupViewControllerWithCompletion:(id)arg0 ;
-(void)cameraCaptureViewController:(id)arg0 didRecognizeObjects:(id)arg1 ;
-(void)cameraCaptureViewControllerDidFail:(id)arg0 ;
-(void)disambiguationViewController:(id)arg0 didSelectProduct:(id)arg1 ;
-(void)disambiguationViewControllerSetupLater:(id)arg0 ;
-(void)fieldCellEditableTextFieldValueDidChange:(id)arg0 ;
-(void)handleNextButtonTapped:(id)arg0 ;
-(void)performNextActionForProvisioningState:(NSInteger)arg0 withCompletion:(id)arg1 ;
-(void)updateFieldsModelWithCameraCaptureObjects:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif
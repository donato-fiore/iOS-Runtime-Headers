// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTPASSAMPENROLLMENTVIEWCONTROLLER_H
#define PKPAYMENTPASSAMPENROLLMENTVIEWCONTROLLER_H

@class PKPaymentProvisioningController, PKPaymentPass, RemoteUIController, NSString;
@protocol RemoteUIControllerDelegate, UITextViewDelegate, PKPaymentSetupViewControllerDelegate;


#import "PKExplanationViewController.h"

@interface PKPaymentPassAMPEnrollmentViewController : PKExplanationViewController <RemoteUIControllerDelegate, UITextViewDelegate>

 {
    PKPaymentProvisioningController *_provisioningController;
    PKPaymentPass *_pass;
    id<PKPaymentSetupViewControllerDelegate> *_setupDelegate;
    RemoteUIController *_termsController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)shouldOfferAMPEnrollmentForPass:(id)arg0 provisioningController:(id)arg1 withCompletion:(id)arg2 ;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)_createBodyImage:(id)arg0 ;
-(id)initWithProvisioningController:(id)arg0 paymentPass:(id)arg1 context:(NSInteger)arg2 delegate:(id)arg3 ;
-(struct CGSize )_snapshotSize;
-(void)_displayTermsWithCompletion:(id)arg0 ;
-(void)_done;
-(void)_performAMPEnrollmentWithPass:(id)arg0 asDefault:(BOOL)arg1 completion:(id)arg2 ;
-(void)_performAddToWatchFlowWithCompletionHandler:(id)arg0 ;
-(void)_performTerms;
-(void)_showAddToWatchOfferWithCompletionHandler:(id)arg0 ;
-(void)_updateBodyImage;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)loadView;
-(void)proceedToNextScreen;
-(void)remoteUIController:(id)arg0 didReceiveObjectModel:(id)arg1 actionSignal:(*NSUInteger)arg2 ;


@end


#endif
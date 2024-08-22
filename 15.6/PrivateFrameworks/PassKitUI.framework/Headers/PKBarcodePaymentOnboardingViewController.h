// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKBARCODEPAYMENTONBOARDINGVIEWCONTROLLER_H
#define PKBARCODEPAYMENTONBOARDINGVIEWCONTROLLER_H

@class NSString;
@protocol UITextViewDelegate, PKExplanationViewControllerDelegate, PKPaymentSetupViewControllerDelegate;


#import "PKExplanationViewController.h"
#import "PKEducationPhone.h"
#import "PKWatchDeviceImageOverlayView.h"

@interface PKBarcodePaymentOnboardingViewController : PKExplanationViewController <UITextViewDelegate, PKExplanationViewControllerDelegate>

 {
    id<PKPaymentSetupViewControllerDelegate> *_setupDelegate;
    NSString *_issuerName;
    PKEducationPhone *_educationPhone;
    PKWatchDeviceImageOverlayView *_watchView;
}


@property (copy, nonatomic) id *continueHandler; // ivar: _continueHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)_imageForWatchView;
-(id)initWithIssuerName:(id)arg0 context:(NSInteger)arg1 setupDelegate:(id)arg2 ;
-(void)_terminateSetupFlow;
-(void)explanationViewControllerDidSelectCancel:(id)arg0 ;
-(void)explanationViewControllerDidSelectDone:(id)arg0 ;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLYVERIFICATIONSMSOTPVIEWCONTROLLER_H
#define PKAPPLYVERIFICATIONSMSOTPVIEWCONTROLLER_H

@class PKApplyVerificationPage, UIBarButtonItem, NSString;
@protocol PKOneTimeCodeViewDelegate;


#import "PKApplyExplanationViewController.h"
#import "PKOneTimeCodeView.h"

@interface PKApplyVerificationSMSOTPViewController : PKApplyExplanationViewController <PKOneTimeCodeViewDelegate>

 {
    PKApplyVerificationPage *_verificationPage;
    PKOneTimeCodeView *_otpView;
    UIBarButtonItem *_activityButton;
    UIBarButtonItem *_nextButton;
    BOOL _isBodyButtonSkipToDocUpload;
    BOOL _showingSpinner;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldDisplayErrorForEntryError:(NSUInteger)arg0 ;
-(NSUInteger)_smsOTPViewEntryErrorFromError:(id)arg0 ;
-(id)analyticsPageTag;
-(id)initWithController:(id)arg0 setupDelegate:(id)arg1 context:(NSInteger)arg2 verificationPage:(id)arg3 ;
-(void)_cancelApplication;
-(void)_nextButtonPressed;
-(void)_requestNewCode;
-(void)_submitCode:(id)arg0 skippedVerification:(BOOL)arg1 ;
-(void)_terminateFlow;
-(void)_updateViewWithEntryError:(NSUInteger)arg0 ;
-(void)_withdrawApplication;
-(void)oneTimeCodeView:(id)arg0 didEnterCode:(id)arg1 ;
-(void)showNavigationBarSpinner:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif
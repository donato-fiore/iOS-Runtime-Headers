// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC28HEALTHEXPOSURENOTIFICATIONUI35VERIFICATIONCODEENTRYVIEWCONTROLLER_H
#define _TTC28HEALTHEXPOSURENOTIFICATIONUI35VERIFICATIONCODEENTRYVIEWCONTROLLER_H

@class OBBaseWelcomeController;



@interface _TtC28HealthExposureNotificationUI35VerificationCodeEntryViewController : OBBaseWelcomeController {
    ? flow;
    ? healthAgencyModel;
    ? regionSupportsWebReport;
    ? statusView;
    ? scrollView;
    ? entryView;
    ? contentLayoutGuideBottomConstraint;
    ? itemStackTopConstraint;
    ? keyboardHeight;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)dealloc;
-(void)didTapCancel;
-(void)didTapHelpButton;
-(void)keyboardWillChangeFrame:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif
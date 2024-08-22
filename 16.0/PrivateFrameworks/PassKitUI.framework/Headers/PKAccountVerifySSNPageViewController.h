// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTVERIFYSSNPAGEVIEWCONTROLLER_H
#define PKACCOUNTVERIFYSSNPAGEVIEWCONTROLLER_H

@class PKAccount, PKPaymentSetupField;


#import "PKPaymentSetupFieldsViewController.h"
#import "PKPaymentSetupFieldFooterView.h"

@interface PKAccountVerifySSNPageViewController : PKPaymentSetupFieldsViewController {
    PKAccount *_account;
    PKPaymentSetupField *_aboutCreditReportingField;
    PKPaymentSetupFieldFooterView *_footerView;
    BOOL _isLoading;
}




-(id)defaultHeaderViewSubTitle;
-(id)defaultHeaderViewTitle;
-(id)initWithAccount:(id)arg0 context:(NSInteger)arg1 ;
-(void)_cancelPressed;
-(void)_handleNextStep;
-(void)_showSpinner:(BOOL)arg0 ;
-(void)_terminateFlow;
-(void)viewDidLoad;


@end


#endif
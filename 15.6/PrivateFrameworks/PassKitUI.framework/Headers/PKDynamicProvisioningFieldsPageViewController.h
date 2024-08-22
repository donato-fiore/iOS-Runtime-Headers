// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDYNAMICPROVISIONINGFIELDSPAGEVIEWCONTROLLER_H
#define PKDYNAMICPROVISIONINGFIELDSPAGEVIEWCONTROLLER_H

@class UIBarButtonItem, PKDynamicProvisioningFieldsPageContent;


#import "PKPaymentSetupFieldsViewController.h"

@interface PKDynamicProvisioningFieldsPageViewController : PKPaymentSetupFieldsViewController {
    UIBarButtonItem *_cancelButton;
}


@property (readonly, nonatomic) PKDynamicProvisioningFieldsPageContent *fieldsPage; // ivar: _fieldsPage
@property (readonly, nonatomic) BOOL isLoading; // ivar: _isLoading


-(id)defaultHeaderViewSubTitle;
-(id)defaultHeaderViewTitle;
-(id)initWithWebService:(id)arg0 context:(NSInteger)arg1 setupDelegate:(id)arg2 fieldsPage:(id)arg3 ;
-(void)handleCancelTapped;
-(void)handleNextButtonTapped:(id)arg0 ;
-(void)showSpinner:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif
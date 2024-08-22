// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDYNAMICPROVISIONINGFIELDSPAGEVIEWCONTROLLER_H
#define PKDYNAMICPROVISIONINGFIELDSPAGEVIEWCONTROLLER_H

@class UIBarButtonItem, UIActivityIndicatorView, PKDynamicProvisioningFieldsPageContent;


#import "PKPaymentSetupFieldsViewController.h"

@interface PKDynamicProvisioningFieldsPageViewController : PKPaymentSetupFieldsViewController {
    UIBarButtonItem *_cancelButton;
    BOOL _backHidden;
    UIBarButtonItem *_spinningNavBarItem;
    UIBarButtonItem *_hiddenRightBarButtonItem;
    UIActivityIndicatorView *_activityIndicatorView;
}


@property (readonly, nonatomic) PKDynamicProvisioningFieldsPageContent *fieldsPage; // ivar: _fieldsPage
@property (readonly, nonatomic) BOOL isLoading; // ivar: _isLoading


-(id)defaultHeaderViewSubTitle;
-(id)defaultHeaderViewTitle;
-(id)initWithWebService:(id)arg0 context:(NSInteger)arg1 setupDelegate:(id)arg2 fieldsPage:(id)arg3 ;
-(void)_setNavigationBarEnabled:(BOOL)arg0 ;
-(void)handleCancelTapped;
-(void)handleNextButtonTapped:(id)arg0 ;
-(void)showSpinner:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif
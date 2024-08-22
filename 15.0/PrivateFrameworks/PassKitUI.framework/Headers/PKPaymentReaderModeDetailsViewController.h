// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTREADERMODEDETAILSVIEWCONTROLLER_H
#define PKPAYMENTREADERMODEDETAILSVIEWCONTROLLER_H

@class NSString, PKPaymentSetupProduct;
@protocol OS_dispatch_group;


#import "PKPaymentSetupProvisioningFieldsViewController.h"

@interface PKPaymentReaderModeDetailsViewController : PKPaymentSetupProvisioningFieldsViewController {
    BOOL _termsAccepted;
    NSObject<OS_dispatch_group> *_nextScreenGroup;
    NSString *_titleText;
    NSString *_subtitleText;
}


@property (readonly, nonatomic) PKPaymentSetupProduct *product; // ivar: _product


+(BOOL)readerModeProvisioningIsSupported;
-(id)defaultFields;
-(id)defaultHeaderViewSubTitle;
-(id)defaultHeaderViewTitle;
-(id)footerView;
-(id)initWithProvisioningController:(id)arg0 context:(NSInteger)arg1 setupDelegate:(id)arg2 product:(id)arg3 ;
-(id)visibleFieldIdentifiers;
-(void)_downloadCardArtIfNecessary:(id)arg0 ;
-(void)_prepareForProvisioningViewController;
-(void)_pushReaderModeProvisioningWithCompletion:(id)arg0 ;
-(void)_registerLocalDeviceWithCompletion:(id)arg0 ;
-(void)_showTerms;
-(void)handleNextButtonTapped:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif
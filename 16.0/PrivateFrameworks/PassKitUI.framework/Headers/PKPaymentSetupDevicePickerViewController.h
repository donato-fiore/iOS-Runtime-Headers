// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSETUPDEVICEPICKERVIEWCONTROLLER_H
#define PKPAYMENTSETUPDEVICEPICKERVIEWCONTROLLER_H

@class PKPaymentProvisioningController, PKPaymentSetupProduct, NSArray, PKPaymentWebService, UIImage, NSString;
@protocol PKViewControllerPreflightable, PKPaymentSetupDevicePickerListSectionControllerDelegate, PKPaymentSetupViewControllerDelegate;


#import "PKDynamicCollectionViewController.h"
#import "PKPaymentSetupFlowController.h"

@interface PKPaymentSetupDevicePickerViewController : PKDynamicCollectionViewController <PKViewControllerPreflightable, PKPaymentSetupDevicePickerListSectionControllerDelegate>

 {
    PKPaymentProvisioningController *_provisioningController;
    PKPaymentProvisioningController *_bridgeProvisioningController;
    NSInteger _setupContext;
    id<PKPaymentSetupViewControllerDelegate> *_setupDelegate;
    PKPaymentSetupFlowController *_flowController;
    PKPaymentSetupProduct *_product;
    PKPaymentSetupProduct *_nanoProduct;
    NSArray *_webServices;
    PKPaymentWebService *_webService;
    PKPaymentWebService *_nanoWebService;
    UIImage *_cardImage;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithProvisioningController:(id)arg0 context:(NSInteger)arg1 setupDelegate:(id)arg2 flowController:(id)arg3 product:(id)arg4 webService:(id)arg5 nanoWebService:(id)arg6 ;
-(void)didSelectWebService:(id)arg0 ;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif
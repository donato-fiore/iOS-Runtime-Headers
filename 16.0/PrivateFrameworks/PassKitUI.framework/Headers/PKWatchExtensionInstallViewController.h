// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKWATCHEXTENSIONINSTALLVIEWCONTROLLER_H
#define PKWATCHEXTENSIONINSTALLVIEWCONTROLLER_H

@class ASCLockupView, NSString, PKPaymentPass, PKPaymentProvisioningController, PKPaymentWebService;
@protocol ASCLockupViewDelegate, PKPaymentSetupViewControllerDelegate;


#import "PKExplanationViewController.h"
#import "PKWatchDeviceAppCarouselView.h"

@interface PKWatchExtensionInstallViewController : PKExplanationViewController <ASCLockupViewDelegate>

 {
    PKWatchDeviceAppCarouselView *_deviceImageView;
    ASCLockupView *_appStoreView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKPaymentPass *paymentPass; // ivar: _paymentPass
@property (retain, nonatomic) PKPaymentProvisioningController *provisioningController; // ivar: _provisioningController
@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *setupDelegate; // ivar: _setupDelegate
@property (readonly) Class superclass;
@property (retain, nonatomic) PKPaymentWebService *webservice; // ivar: _webservice


+(BOOL)shouldShowWatchExtensionInstallViewControllerForPaymentPass:(id)arg0 webService:(id)arg1 ;
-(id)initWithPaymentPass:(id)arg0 provisioningController:(id)arg1 webService:(id)arg2 context:(NSInteger)arg3 setupDelegate:(id)arg4 ;
-(id)presentingViewControllerForLockupView:(id)arg0 ;
-(void)_installNowPressed;
-(void)_proceedToNextScreen;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)loadView;
-(void)lockupViewDidFinishRequest:(id)arg0 ;


@end


#endif
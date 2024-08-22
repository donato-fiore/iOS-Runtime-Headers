// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTSETUPHEROVIEWCONTROLLER_H
#define PKPAYMENTSETUPHEROVIEWCONTROLLER_H

@class ACAccountStore, PKPaymentSetupProduct, NSArray, NSString, UIViewController, PKPaymentHeroImageController, PKPaymentProvisioningController, PKPaymentWebService;
@protocol PKExplanationViewDelegate, PKPaymentSetupHideSetupLaterButtonProtocol, PKPaymentSetupViewControllerDelegate;


#import "PKExplanationViewController.h"
#import "PKPaymentSetupHeroView.h"

@interface PKPaymentSetupHeroViewController : PKExplanationViewController <PKExplanationViewDelegate, PKPaymentSetupHideSetupLaterButtonProtocol>

 {
    ACAccountStore *_accountStore;
    BOOL _nextButtonPushed;
    PKPaymentSetupHeroView *_splashView;
    BOOL _hasFelicaSecureElement;
    BOOL _preflightComplete;
    PKPaymentSetupProduct *_product;
    NSArray *_featuredImages;
    NSString *_deviceRegion;
}


@property (nonatomic) BOOL allowsManualEntry; // ivar: _allowsManualEntry
@property (nonatomic) BOOL checkSecurity; // ivar: _checkSecurity
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIViewController *deferredNextViewController; // ivar: _deferredNextViewController
@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKPaymentHeroImageController *heroImageController; // ivar: _heroImageController
@property (nonatomic) NSInteger paymentSetupMode; // ivar: _paymentSetupMode
@property (readonly, nonatomic) PKPaymentProvisioningController *provisioningController; // ivar: _provisioningController
@property (readonly) Class superclass;
@property (readonly, nonatomic) PKPaymentWebService *webService;


-(id)_bodyText;
-(id)initWithProvisioningController:(id)arg0 context:(NSInteger)arg1 delegate:(id)arg2 product:(id)arg3 ;
-(void)_configureDock;
-(void)_next:(id)arg0 ;
-(void)_preflightWithCompletion:(id)arg0 ;
-(void)_presentNextViewController:(id)arg0 ;
-(void)_setUserInteractionEnabled:(BOOL)arg0 ;
-(void)_terminateSetupFlow;
-(void)didTapFooterLink:(id)arg0 ;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)loadView;
-(void)setFeaturedHeroImages:(id)arg0 ;
-(void)setHideSetupLaterButton:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif
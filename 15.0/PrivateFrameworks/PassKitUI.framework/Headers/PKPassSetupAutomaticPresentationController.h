// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPASSSETUPAUTOMATICPRESENTATIONCONTROLLER_H
#define PKPASSSETUPAUTOMATICPRESENTATIONCONTROLLER_H

@class PKPaymentWebService, UIImage, PKPaymentProvisioningController, NSString, PKPass;
@protocol PKPaymentVerificationControllerDelegate, PKPaymentSetupViewControllerDelegate;


#import "PKPaymentSetupTableViewController.h"
#import "PKTableHeaderView.h"
#import "PKPassView.h"
#import "PKPaymentVerificationController.h"

@interface PKPassSetupAutomaticPresentationController : PKPaymentSetupTableViewController <PKPaymentVerificationControllerDelegate>

 {
    PKPaymentWebService *_webService;
    NSUInteger _selectedIndex;
    PKTableHeaderView *_headerView;
    PKPassView *_passView;
    UIImage *_passSnapshot;
    PKPaymentVerificationController *_verificationController;
    PKPaymentProvisioningController *_provisioningController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKPass *pass; // ivar: _pass
@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *setupDelegate; // ivar: _setupDelegate
@property (readonly) Class superclass;


+(BOOL)passNeedsAutomaticPresentationSetup:(id)arg0 ;
-(BOOL)_shouldShowMakeDefaultViewControllerForPass:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)_paymentPassState;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_buttonTitleForPaymentPassState:(NSInteger)arg0 ;
-(id)_contextSpecificStringForAggDKey:(id)arg0 ;
-(id)initWithPass:(id)arg0 ;
-(id)initWithPaymentWebService:(id)arg0 pass:(id)arg1 context:(NSInteger)arg2 provisioningController:(id)arg3 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_dismissView;
-(void)_presentMakeDefaultViewControllerForPass:(id)arg0 ;
-(void)_presentNextCredentialWithCompletion:(id)arg0 ;
-(void)_saveSettings;
-(void)_showAddToWatchOfferForPass:(id)arg0 ;
-(void)_showVerificationForPass:(id)arg0 ;
-(void)_terminateSetupFlow;
-(void)cancel:(id)arg0 ;
-(void)done:(id)arg0 ;
-(void)loadView;
-(void)logAnalyticsContextSpecificCheckpointForKey:(id)arg0 ;
-(void)presentVerificationViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewWillLayoutSubviews;


@end


#endif
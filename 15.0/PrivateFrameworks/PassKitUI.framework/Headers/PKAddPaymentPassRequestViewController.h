// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKADDPAYMENTPASSREQUESTVIEWCONTROLLER_H
#define PKADDPAYMENTPASSREQUESTVIEWCONTROLLER_H

@class UITableViewController, NSString, NSArray, PKPaymentProvisioningController, PKAddPaymentPassRequestConfiguration, CLInUseAssertion, PKAddPaymentPassRequest, OBPrivacyLinkController, RemoteUIController, PKPaymentProvisioningTracker, PKPaymentWebService;
@protocol PKPaymentSetupViewControllerDelegate, NSObject, OS_dispatch_source, PKAddPaymentPassRequestViewControllerDelegate;


#import "PKPasscodeUpgradeFlowController.h"
#import "PKTableHeaderView.h"

@interface PKAddPaymentPassRequestViewController : UITableViewController <PKPaymentSetupViewControllerDelegate>

 {
    NSString *_title;
    NSString *_subtitle;
    NSArray *_details;
    NSInteger _headerState;
    id<NSObject> *_notificationToken;
    PKPasscodeUpgradeFlowController *_passcodeUpgradeFlowController;
    PKPaymentProvisioningController *_provisioningController;
    PKAddPaymentPassRequestConfiguration *_configuration;
    CLInUseAssertion *_passbookForegroundAssertion;
    NSObject<OS_dispatch_source> *_datasourceTimeout;
    PKAddPaymentPassRequest *_addRequest;
    CGSize _lastBoundsSize;
    BOOL _offsetForTextfieldWasCalculated;
    CGFloat _offsetForTextfield;
    BOOL _viewAppearing;
    BOOL _preconditionsValidated;
    BOOL _sentViewHasAppearedEvent;
    PKTableHeaderView *_headerView;
    OBPrivacyLinkController *_privacyController;
    RemoteUIController *_termsController;
    PKPaymentProvisioningTracker *_provisioningTracker;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKAddPaymentPassRequestViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidePrivacy; // ivar: _hidePrivacy
@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *setupDelegate; // ivar: _setupDelegate
@property (nonatomic) BOOL singleTarget; // ivar: _singleTarget
@property (readonly) Class superclass;
@property (readonly, nonatomic) PKPaymentWebService *webService; // ivar: _webService


+(id)backgroundColor;
-(BOOL)_handleRawResponseData:(id)arg0 error:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_titleForCurrentHeaderState;
-(id)initWithPaymentWebService:(id)arg0 configuration:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)_applyHeaderState;
-(void)_cancelDatasourceTimeout;
-(void)_displayTermsForEligibilityResponse:(id)arg0 withCompletion:(id)arg1 ;
-(void)_fetchAddRequestWithCertificatesResponse:(id)arg0 ;
-(void)_fetchCertificates;
-(void)_handleAdd:(id)arg0 ;
-(void)_performEligibility;
-(void)_performMoreInfoItemPush;
-(void)_performNextProvisioningStep;
-(void)_performPasscodeUpgradeIfNeeded;
-(void)_performPreconditionValidation;
-(void)_performProvisioning:(id)arg0 ;
-(void)_performTerms:(id)arg0 ;
-(void)_presentDisplayableError:(id)arg0 ;
-(void)_presentDisplayableError:(id)arg0 allowEarlyExit:(BOOL)arg1 ;
-(void)_promptHSA2Required;
-(void)_provisioningLocalizedProgressDescriptionDidChange:(id)arg0 ;
-(void)_setHeaderState:(NSInteger)arg0 ;
-(void)_setNavigationBarEnabled:(BOOL)arg0 ;
-(void)_setupTermsControllerHandlerWithNavigationController:(id)arg0 forCompletion:(id)arg1 ;
-(void)_showEligibilityIssueForStatus:(NSInteger)arg0 learnMoreURL:(id)arg1 completion:(id)arg2 ;
-(void)_updateHeaderSize;
-(void)_updateHeaderWithSubtitle:(id)arg0 ;
-(void)dealloc;
-(void)hostApplicationDidEnterBackground;
-(void)loadView;
-(void)noteNavigationUserInterfaceDidDisappear;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif
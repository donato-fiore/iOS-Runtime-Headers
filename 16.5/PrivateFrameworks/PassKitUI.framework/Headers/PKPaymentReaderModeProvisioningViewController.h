// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTREADERMODEPROVISIONINGVIEWCONTROLLER_H
#define PKPAYMENTREADERMODEPROVISIONINGVIEWCONTROLLER_H

@class UIViewController, UIScrollView, PKContactlessCardIngester, PKPaymentContactlessProductCredential, PKPaymentPass, NSString, NSMutableDictionary, NSTimer, UILabel, PKPaymentSetupFieldsModel, PKPaymentSetupProduct, PKPaymentProvisioningController, PKPaymentWebService;
@protocol PKContactlessCardIngesterDelegate, PKPaymentSetupViewControllerDelegate;


#import "PKReaderModeProvisioningView.h"
#import "PKPasscodeUpgradeFlowController.h"

@interface PKPaymentReaderModeProvisioningViewController : UIViewController <PKContactlessCardIngesterDelegate>

 {
    PKReaderModeProvisioningView *_provisioningView;
    UIScrollView *_scrollView;
    NSUInteger _state;
    NSUInteger _stateOnRetry;
    BOOL _startedInitialIngestion;
    PKContactlessCardIngester *_cardIngester;
    PKPaymentContactlessProductCredential *_paymentCredential;
    PKPaymentPass *_paymentPass;
    NSString *_cardSessionToken;
    NSMutableDictionary *_durations;
    NSUInteger _startTime;
    id *_currentNextActionBlock;
    NSTimer *_cardNotFoundTimer;
    UILabel *_debugStateLabel;
    NSString *_lastProvisioningStateName;
    BOOL _isGoodState;
    BOOL _idleTimerDisabled;
    PKPasscodeUpgradeFlowController *_passcodeUpgradeFlowController;
}


@property (nonatomic) NSInteger context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKPaymentSetupFieldsModel *fieldsModel; // ivar: _fieldsModel
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKPaymentSetupProduct *product; // ivar: _product
@property (readonly, nonatomic) PKPaymentProvisioningController *provisioningController; // ivar: _provisioningController
@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *setupDelegate; // ivar: _setupDelegate
@property (readonly) Class superclass;
@property (readonly, nonatomic) PKPaymentWebService *webService; // ivar: _webService


-(id)initWithProvisioningController:(id)arg0 context:(NSInteger)arg1 setupDelegate:(id)arg2 fieldsModel:(id)arg3 product:(id)arg4 ;
-(id)newPaymentEligibilityRequest;
-(id)newPaymentProvisioningRequest;
-(void)_done:(id)arg0 ;
-(void)_hideBackButton:(BOOL)arg0 ;
-(void)_invalidateCardNotFoundTimer;
-(void)_logAndSendDurations;
-(void)_performEligibilityWithCompletion:(id)arg0 ;
-(void)_performFinishWithCompletion:(id)arg0 ;
-(void)_performPasscodeUpgradeIfNeededWithCompletion:(id)arg0 ;
-(void)_performProvisionWithCompletion:(id)arg0 ;
-(void)_removePassIfNecessary;
-(void)_resetProvisioningState;
-(void)_setIdleTimerDisabled:(BOOL)arg0 ;
-(void)_setupCardIngester;
// -(void)_showError:(id)arg0 retry:(id)arg1 completion:(unk)arg2  ;
-(void)_startAppletProvisioning;
-(void)_startCardNotFoundTimer;
-(void)_startIngestion;
-(void)_startReadingCard;
-(void)_startTransferringCard;
-(void)_tearDownCardIngester;
-(void)_triggerNextActionLoop;
-(void)_updateDebugStateLabel:(id)arg0 isGoodState:(BOOL)arg1 ;
-(void)_updateDebugStateLabel:(id)arg0 isGoodState:(BOOL)arg1 showTiming:(BOOL)arg2 ;
-(void)_updateToUIState:(NSUInteger)arg0 ;
-(void)acceptTerms;
-(void)cardNotFoundTimerFired:(id)arg0 ;
-(void)contactlessCardIngester:(id)arg0 didFailToIngestCardWithError:(id)arg1 resetProvisioning:(BOOL)arg2 isRecoverable:(BOOL)arg3 ;
-(void)contactlessCardIngester:(id)arg0 didUpdateCardIngestionStatus:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)handleNextActionWithCompletion:(id)arg0 ;
-(void)loadView;
-(void)performNextActionForProvisioningState:(NSInteger)arg0 withCompletion:(id)arg1 ;
-(void)showEligibilityIssueWithReason:(NSInteger)arg0 learnMoreURL:(id)arg1 completion:(id)arg2 ;
-(void)showProvisioningError:(id)arg0 completion:(id)arg1 ;
-(void)showReaderModeError:(id)arg0 isRecoverable:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPHCELLULARSETUPVIEWCONTROLLER_H
#define NPHCELLULARSETUPVIEWCONTROLLER_H

@class BPSWelcomeOptinViewController, NSString, UIBarButtonItem, UIActivityIndicatorView, SUBManager, NSArray;
@protocol UIAdaptivePresentationControllerDelegate, BPSMiniFlowStepController, BPSSetupMiniFlowControllerDelegate;



@interface NPHCellularSetupViewController : BPSWelcomeOptinViewController <UIAdaptivePresentationControllerDelegate, BPSMiniFlowStepController>

 {
    BOOL _shouldHideSkipButton;
}


@property (retain, nonatomic) NSString *alternateButtonTitle; // ivar: _alternateButtonTitle
@property (retain, nonatomic) UIBarButtonItem *cancelNavBarButtonItem; // ivar: _cancelNavBarButtonItem
@property (nonatomic) NSInteger configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *detailString; // ivar: _detailString
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL haveReceivedProxyPlanItems; // ivar: _haveReceivedProxyPlanItems
@property (nonatomic) BOOL isCellularSetupFlowComplete; // ivar: _isCellularSetupFlowComplete
@property (nonatomic) BOOL isTinkerCrossCarrierSetUpFlow; // ivar: _isTinkerCrossCarrierSetUpFlow
@property (weak, nonatomic) NSObject<BPSSetupMiniFlowControllerDelegate> *miniFlowDelegate; // ivar: miniFlowDelegate
@property (retain, nonatomic) UIBarButtonItem *nextNavBarButtonItem; // ivar: _nextNavBarButtonItem
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (retain, nonatomic) SUBManager *subManager; // ivar: _subManager
@property (retain, nonatomic) NSString *suggestedButtonTitle; // ivar: _suggestedButtonTitle
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type
@property (retain, nonatomic) NSArray *userVisibleErrors; // ivar: _userVisibleErrors


+(BOOL)controllerNeedsToRun;
+(id)loggedEvents;
+(void)_logEventOncePerSession:(NSUInteger)arg0 ;
+(void)setLoggedEvents:(id)arg0 ;
-(BOOL)isGeminiSetup;
-(BOOL)wantsLightenBlendedScreen;
-(id)imageResource;
-(id)initWithConfiguration:(NSInteger)arg0 ;
-(id)okayButtonTitle;
-(id)tapToRadarMetadata;
-(id)titleString;
-(id)trialOfferMessage;
-(void)_decideWhetherToShowTransferOrSetup;
-(void)checkForSoftwareUpdate;
-(void)ctCellularPlanInfoDidChange:(id)arg0 ;
-(void)dealloc;
-(void)navigateToNextView;
-(void)okayButtonPressed:(id)arg0 ;
-(void)presentationControllerWillDismiss:(id)arg0 ;
-(void)setUpNow;
-(void)transfer;
-(void)updateUIFromCellularPlanItems;
-(void)updateUIToShowContinue;
-(void)updateUIToShowPlanSetUpTrial;
-(void)updateUIToShowPlanTransferOrSetUpNewOptions;
-(void)updateUIToShowPreinstall;
-(void)updateUIToShowSetUpNow;
-(void)updateUIToShowSetUpNowMultipleSubscriptions;
-(void)updateUIToShowSpinner;
-(void)updateUIToShowUserConsent:(NSInteger)arg0 relevantPlan:(id)arg1 ;
-(void)updateUIToShowUserVisibleError;
-(void)userTappedConsent:(id)arg0 ;
-(void)userTappedContinue:(id)arg0 ;
-(void)userTappedNext:(id)arg0 ;
-(void)userTappedSetUp:(id)arg0 ;
-(void)userTappedSetUpCarrier:(id)arg0 ;
-(void)userTappedSetUpNew:(id)arg0 ;
-(void)userTappedSkip:(id)arg0 ;
-(void)userTappedTransfer:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif
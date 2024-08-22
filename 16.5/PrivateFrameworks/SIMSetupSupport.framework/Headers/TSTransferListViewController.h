// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTRANSFERLISTVIEWCONTROLLER_H
#define TSTRANSFERLISTVIEWCONTROLLER_H

@class NSLayoutConstraint, CTDisplayPlanList, NSArray, NSMutableArray, NSString, UITableViewCell, UIView, CTRemotePlan, CTDeviceIdentifier;
@protocol SSSpinnerProtocol, UINavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate, TSSetupFlowItem, TSSIMSetupFlowDelegate;


#import "TSOBTableWelcomeController.h"
#import "SSOBBoldTrayButton.h"
#import "SSSpinner.h"

@interface TSTransferListViewController : TSOBTableWelcomeController <SSSpinnerProtocol, UINavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate, TSSetupFlowItem>

 {
    BOOL _inBuddy;
    BOOL _isActivationPolicyMismatch;
    BOOL _isDualeSIMCapabilityLoss;
    BOOL _receivedPendingInstallItems;
    BOOL _receivedTransferItems;
    BOOL _continueButtonTappedOnce;
    BOOL _isSinglePhysicalSIMTransfer;
    BOOL _confirmCellularPlanTransfer;
    BOOL _installingALSPlan;
    BOOL _showOtherOptions;
    NSLayoutConstraint *_tableHeightAnchor;
    SSOBBoldTrayButton *_continueButton;
    CTDisplayPlanList *_pendingInstallItems;
    CTDisplayPlanList *_carrierSetupItems;
    NSUInteger _numNonRemotePlanItems;
    BOOL _speedBumper;
    BOOL _followDirections;
    BOOL _isCloudTransfer;
    NSInteger _backOption;
}


@property BOOL animating; // ivar: _animating
@property (retain) NSArray *cachedButtons; // ivar: _cachedButtons
@property (retain) NSMutableArray *chosenUseIndexPaths; // ivar: _chosenUseIndexPaths
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *heightAnchor; // ivar: _heightAnchor
@property BOOL installingTransferPlan; // ivar: _installingTransferPlan
@property BOOL isCarrierSetupItemSelected; // ivar: _isCarrierSetupItemSelected
@property BOOL isOtherButtonTapped; // ivar: _isOtherButtonTapped
@property BOOL isStandaloneProximityFlow; // ivar: _isStandaloneProximityFlow
@property BOOL requireDelayBluetoothConnection; // ivar: _requireDelayBluetoothConnection
@property (retain) UITableViewCell *sectionFooter; // ivar: _sectionFooter
@property BOOL showSIMSetup; // ivar: _showSIMSetup
@property (retain) SSSpinner *spinner; // ivar: _spinner
@property (retain) UIView *spinnerContainer; // ivar: _spinnerContainer
@property (readonly) Class superclass;
@property (retain) NSArray *transferItems; // ivar: _transferItems
@property (retain) CTRemotePlan *transferPlan; // ivar: _transferPlan
@property (retain) CTDeviceIdentifier *transferPlanDeviceID; // ivar: _transferPlanDeviceID


-(BOOL)_isCarrierSetupItemSelected:(NSUInteger)arg0 ;
-(BOOL)canBeShownFromSuspendedState;
-(BOOL)customizeSpinner;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(NSInteger)backOption;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_calculatePlanSelection;
-(id)getLocalizedStringIf:(id)arg0 then:(id)arg1 otherwise:(id)arg2 ;
-(id)getRemoteDeviceDisplayName:(id)arg0 ;
-(id)initWithPendingInstallItems:(id)arg0 ;
-(id)initWithTransferItems:(id)arg0 confirmCellularPlanTransfer:(BOOL)arg1 isActivationPolicyMismatch:(BOOL)arg2 isDualeSIMCapabilityLoss:(BOOL)arg3 pendingInstallItems:(id)arg4 carrierSetupItems:(id)arg5 showOtherOptions:(BOOL)arg6 ;
-(id)initWithTransferItems:(id)arg0 confirmCellularPlanTransfer:(BOOL)arg1 isActivationPolicyMismatch:(BOOL)arg2 isDualeSIMCapabilityLoss:(BOOL)arg3 pendingInstallItems:(id)arg4 carrierSetupItems:(id)arg5 showOtherOptions:(BOOL)arg6 isStandaloneProximityFlow:(BOOL)arg7 ;
-(id)initWithTransferItems:(id)arg0 confirmCellularPlanTransfer:(BOOL)arg1 isActivationPolicyMismatch:(BOOL)arg2 isDualeSIMCapabilityLoss:(BOOL)arg3 showOtherOptions:(BOOL)arg4 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)_cancelTransferringPlan;
-(void)_continueButtonTapped;
-(void)_dismissSelf;
-(void)_installSelectedPlans;
-(void)_maybeDisplayConsent:(BOOL)arg0 phoneNumber:(id)arg1 ;
-(void)_maybeDisplayPhysicalPlanConversionAlert:(BOOL)arg0 phoneNumber:(id)arg1 completion:(id)arg2 ;
-(void)_maybeUpdateTableView;
-(void)_otherButtonTapped;
-(void)_startPendingInstall:(id)arg0 ;
-(void)_startPlanTransfer:(id)arg0 withDeviceID:(id)arg1 ;
-(void)_transferConsentOnSource;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateFooterView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif
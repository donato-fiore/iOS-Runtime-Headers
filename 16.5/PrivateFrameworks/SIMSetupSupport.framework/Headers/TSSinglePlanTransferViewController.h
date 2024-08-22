// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSSINGLEPLANTRANSFERVIEWCONTROLLER_H
#define TSSINGLEPLANTRANSFERVIEWCONTROLLER_H

@class NSDictionary, CTDisplayPlan, NSString, CTRemotePlan, NSLayoutConstraint, NSArray, UIView;
@protocol SSSpinnerProtocol, UINavigationControllerDelegate, UITableViewDataSource, TSSetupFlowItem, TSSIMSetupFlowDelegate;


#import "TSOBTableWelcomeController.h"
#import "SSOBBoldTrayButton.h"
#import "SSSpinner.h"

@interface TSSinglePlanTransferViewController : TSOBTableWelcomeController <SSSpinnerProtocol, UINavigationControllerDelegate, UITableViewDataSource, TSSetupFlowItem>

 {
    NSUInteger _planType;
    NSDictionary *_transferPlan;
    CTDisplayPlan *_pendingInstallPlan;
    NSString *_deviceName;
    NSString *_phoneNumber;
    CTRemotePlan *_planItem;
    BOOL _inBuddy;
    BOOL _confirmCellularPlanTransfer;
    BOOL _showOtherOptions;
    NSLayoutConstraint *_tableHeightAnchor;
    BOOL _speedBumper;
    BOOL _followDirections;
    SSOBBoldTrayButton *_continueButton;
    NSInteger _backOption;
    NSString *_transferBackPhoneNumber;
}


@property BOOL animating; // ivar: _animating
@property (retain) NSArray *cachedButtons; // ivar: _cachedButtons
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL installingTransferPlan; // ivar: _installingTransferPlan
@property BOOL isOtherButtonTapped; // ivar: _isOtherButtonTapped
@property BOOL isStandaloneProximityFlow; // ivar: _isStandaloneProximityFlow
@property BOOL requireDelayBluetoothConnection; // ivar: _requireDelayBluetoothConnection
@property BOOL showSIMSetup; // ivar: _showSIMSetup
@property (retain) SSSpinner *spinner; // ivar: _spinner
@property (retain) UIView *spinnerContainer; // ivar: _spinnerContainer
@property (readonly) Class superclass;


-(BOOL)customizeSpinner;
-(CGFloat)_heightAnchorConstant;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)backOption;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)getLocalizedStringIf:(id)arg0 then:(id)arg1 otherwise:(id)arg2 ;
-(id)getRemoteDeviceDisplayName:(id)arg0 ;
-(id)initWithLocalPhysical:(id)arg0 carrierName:(id)arg1 ;
-(id)initWithPendingInstallPlan:(id)arg0 ;
-(id)initWithTransferPlan:(id)arg0 isPhysical:(BOOL)arg1 isIneligible:(BOOL)arg2 inBuddy:(BOOL)arg3 confirmCellularPlanTransfer:(BOOL)arg4 showOtherOptions:(BOOL)arg5 ;
-(id)initWithTransferPlan:(id)arg0 isPhysical:(BOOL)arg1 isIneligible:(BOOL)arg2 inBuddy:(BOOL)arg3 confirmCellularPlanTransfer:(BOOL)arg4 showOtherOptions:(BOOL)arg5 isStandaloneProximityFlow:(BOOL)arg6 transferBackPhoneNumber:(id)arg7 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_cancelButtonTapped;
-(void)_cancelTransferringPlan;
-(void)_continueButtonTapped;
-(void)_maybeDisplayConsent:(BOOL)arg0 phoneNumber:(id)arg1 ;
-(void)_otherButtonTapped;
-(void)_showAlert:(id)arg0 ;
-(void)_skipButtonTapped;
-(void)_startLocalPlanConversion;
-(void)_startPendingInstall:(id)arg0 ;
-(void)_startPlanTransfer:(id)arg0 ;
-(void)_transferConsentOnSource;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSGRESETORERASELISTCONTROLLER_H
#define PSGRESETORERASELISTCONTROLLER_H

@class PSListController, PSSpecifier, NSString, NSMutableArray, NSNumber, CoreTelephonyClient;
@protocol MBManagerDelegate, CoreTelephonyClientCarrierBundleDelegate;



@interface PSGResetOrEraseListController : PSListController <MBManagerDelegate, CoreTelephonyClientCarrierBundleDelegate>

 {
    BOOL _requireRestrictionsCode;
    BOOL _requirePasscode;
    BOOL _returningFromPINSheetWithSuccess;
    BOOL _shouldEraseCellularPlans;
    int _codesNeeded;
    int _codesEntered;
    PSSpecifier *_currentSpecifier;
    PSSpecifier *_locationSpecifier;
    NSInteger _locationSpecifierIndex;
    NSString *_passcode;
    NSMutableArray *_mutableSpecifiers;
}


@property (retain, nonatomic) NSNumber *_cachedLocationServicesAvailableValue; // ivar: __cachedLocationServicesAvailableValue
@property (retain, nonatomic) CoreTelephonyClient *_client; // ivar: __client
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isLargeTextEnabled;
+(id)maximumSupportedContentSizeCategory;
-(BOOL)_networkConnectivityAvailable;
-(Class)tableViewClass;
-(id)init;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_resetWithMode:(NSInteger)arg0 andOptions:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_showStockholmLocallyStoredValueOfflineWarningIfNeeded:(id)arg0 ;
-(void)carrierBundleChange:(id)arg0 ;
-(void)configureSpin:(BOOL)arg0 ofCellForSpecifier:(id)arg1 setEnabled:(BOOL)arg2 ;
-(void)confirmEraseCellularSettings;
-(void)confirmationSpecifierConfirmed:(id)arg0 ;
-(void)dealloc;
-(void)deviceFullErase:(id)arg0 ;
-(void)devicePINControllerDidDismissPINPane:(id)arg0 ;
-(void)didAcceptEnteredPIN:(id)arg0 ;
-(void)didAppear;
-(void)didSelectAlertAction:(id)arg0 ;
-(void)eraseCellularSettings;
-(void)eraseSettings:(id)arg0 ;
-(void)loadView;
-(void)prepareMutableSpecifiers;
-(void)presentExitBuddyWithUpsellTradeIn:(BOOL)arg0 ;
-(void)profileNotification:(id)arg0 ;
-(void)refreshLocationServicesAvailable;
-(void)reprovisionAccount;
-(void)resetAKey;
-(void)resetAllCellularNetworks:(id)arg0 ;
-(void)resetIconPositions:(id)arg0 ;
-(void)resetKeyboardDictionary:(id)arg0 ;
-(void)resetNetworkPrivacy;
-(void)resetNetworkSettings:(id)arg0 ;
-(void)resetPrivacyWarnings:(id)arg0 ;
-(void)showPINSheetFromParentViewController:(id)arg0 ;
-(void)showResetActionSheet:(id)arg0 ;
-(void)subscriberOptions:(id)arg0 ;
-(void)updateLocationResetSpecifier;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif
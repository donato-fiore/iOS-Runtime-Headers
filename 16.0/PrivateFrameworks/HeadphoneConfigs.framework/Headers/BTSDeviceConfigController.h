// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BTSDEVICECONFIGCONTROLLER_H
#define BTSDEVICECONFIGCONTROLLER_H

@class PSListController, NSArray, NSString, NSDictionary, NSMutableArray, PSSpecifier, BTAirPodsControlServiceClient, CRCarPlayPreferences, NDOACController, PowerUISmartChargeClientAudioAccessories, CRPairedVehicleManager;
@protocol CRCarPlayPreferencesDelegate;


#import "BTSDevice.h"
#import "BTSDeviceLE.h"
#import "HPSBatteryStatusView.h"
#import "HPSDeviceAnalytics.h"

@interface BTSDeviceConfigController : PSListController <CRCarPlayPreferencesDelegate>

 {
    BTSDevice *_device;
    ? _syncSettings;
    BOOL _supportsMAP;
    BOOL _messagingEnabled;
    BOOL _isWatch;
    BOOL _isManagedByWallet;
    NSArray *_versionInfo;
    NSString *_ancAssetVersion;
    NSDictionary *_caseInfo;
    NSArray *_controlGroupSpecifiers;
    NSArray *_messagingSpecifiers;
    NSArray *_syncContactsSpecifiers;
    NSMutableArray *_syncGroupsSpecifiers;
    NSMutableArray *_aacpControlSpecifiers;
    NSUInteger _environmentalSoundProtectionIndex;
    NSMutableArray *_accessoryFirmwareSpecifiers;
    NSMutableArray *_ancsControlSpecifiers;
    NSMutableArray *_nameControlSpecifiers;
    NSMutableArray *_accessoryInfoSpecifiers;
    NSMutableArray *_deviceTypeSpecifiers;
    BOOL _dismissed;
    PSSpecifier *_lastSelectedSyncGroup;
    BTSDeviceLE *_ctkdLeDevice;
    ? _listeningModeConfigs;
    BOOL _findMySupport;
    BOOL _findMyEnable;
    BOOL _findMySetInProgress;
    HPSBatteryStatusView *_batteryStatusView;
    NSString *_findMyUrl;
    BOOL _enteredFromTopLevelEntry;
    BOOL _caseSoundRetrieved;
    BOOL _caseSoundRetrieveInProgress;
    BOOL _caseSoundEnable;
    BOOL _caseSilentMode;
    BOOL _caseSoundSupport;
    BTAirPodsControlServiceClient *_airPodsServiceclient;
    HPSDeviceAnalytics *_deviceAnalytics;
    BOOL _environmentalSoundProtectionRetrieved;
}


@property (nonatomic) NSUInteger cachedCarplayPairingStatus; // ivar: _cachedCarplayPairingStatus
@property (retain, nonatomic) CRCarPlayPreferences *carplayPreferences; // ivar: _carplayPreferences
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NDOACController *ndoController; // ivar: _ndoController
@property (retain, nonatomic) PowerUISmartChargeClientAudioAccessories *smartChargeClient; // ivar: _smartChargeClient
@property (readonly) Class superclass;
@property (retain, nonatomic) CRPairedVehicleManager *vehicleManager; // ivar: _vehicleManager


-(BOOL)boolFromBluetoothPreferences:(id)arg0 ;
-(BOOL)canDisconnect;
-(BOOL)canUnpair;
-(BOOL)deviceSupportsCarPlay;
-(BOOL)deviceSupportsFindMy:(unsigned int)arg0 ;
-(BOOL)isiCloudEnabled;
-(BOOL)isiPad;
-(BOOL)isiPhone;
-(BOOL)nicknameEnabled;
-(BOOL)showItemForDevice:(unsigned int)arg0 ;
-(BOOL)supportsFirmwareReleaseNotes;
-(id)_carPlayVehicle;
-(id)ancsAuthorized;
-(id)automaticAnswerCallsEnabled;
-(id)carPlayEnabled:(id)arg0 ;
-(id)clickHoldModeLeft;
-(id)clickHoldModeRight;
-(id)contactSync:(id)arg0 ;
-(id)deviceName:(id)arg0 ;
-(id)digitalCrownMode;
-(id)doubleTapAction;
-(id)doubleTapActionLeft;
-(id)doubleTapActionRight;
-(id)doubleTapCapability;
-(id)getANCAssetVersion:(id)arg0 ;
-(id)getBudFirmwareVersion:(id)arg0 ;
-(id)getBudLeftSerialNumber:(id)arg0 ;
-(id)getBudRightSerialNumber:(id)arg0 ;
-(id)getCaseFirmwareVersion:(id)arg0 ;
-(id)getCaseName:(id)arg0 ;
-(id)getCaseSoundEnabled:(id)arg0 ;
-(id)getEndCallGesture;
-(id)getFindMyEnable:(id)arg0 ;
-(id)getHearingProtectionEnabled:(id)arg0 ;
-(id)getModelName:(id)arg0 ;
-(id)getModelNumber:(id)arg0 ;
-(id)getSystemSerialNumber:(id)arg0 ;
-(id)inEarDetectEnabled;
-(id)init;
-(id)messagesEnabled:(id)arg0 ;
-(id)micMode;
-(id)optimizedBatteryChargingEnabled;
-(id)sealDetect;
-(id)smartRouteMode;
-(id)soundProfileAllowed;
-(id)spatialProfileVideoCapture;
-(id)specifiers;
-(id)userSelectedDeviceType;
-(int)listeningMode;
-(void)cancelFitTest;
-(void)caseSoundChangedHandler:(id)arg0 ;
-(void)contactGroupSelected:(id)arg0 ;
-(void)dealloc;
-(void)deviceConnectedHandler:(id)arg0 ;
-(void)deviceDisconnectedHandler:(id)arg0 ;
-(void)deviceRemoved:(id)arg0 ;
-(void)deviceSupportsMAP:(id)arg0 ;
-(void)deviceSupportsSync:(id)arg0 ;
-(void)deviceUpdated:(id)arg0 ;
-(void)disconnectDevice:(id)arg0 ;
-(void)findMyStatusUpdatedHandler:(id)arg0 ;
-(void)forgetDevice:(id)arg0 ;
-(void)getFindMyUrl;
-(void)getSoundMode;
-(void)handleCarPlayAllowedDidChange;
-(void)handlePairedVehiclesChanged:(id)arg0 ;
-(void)listeningModeConfigSelected:(id)arg0 ;
-(void)listeningModeUpdated:(id)arg0 ;
-(void)listeningModeUpdatedHandler:(id)arg0 ;
-(void)loadAccessoryFirmwareInfo;
-(void)loadAccessoryInfo;
-(void)loadAccessorySettings;
-(void)loadSyncSettings;
-(void)metaGroupSelected:(id)arg0 ;
-(void)presentAssetLocationLink;
-(void)presentFindMyLink;
-(void)presentFitTestController:(id)arg0 ;
-(void)presentImportantMsgLink;
-(void)presentSpatialTutorialController:(id)arg0 ;
-(void)pressAndHoldModeSelectedHandler:(id)arg0 ;
-(void)refreshFindMyStatus;
-(void)sealDetectSet:(id)arg0 ;
-(void)sendSmartRoutingDisabledTipEvent;
-(void)setANCSAuthorized:(id)arg0 ;
-(void)setAutomaticAnswerCallsEnabled:(id)arg0 ;
-(void)setCarPlayEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setCaseSoundEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setContactSync:(id)arg0 specifier:(id)arg1 ;
-(void)setDeviceName:(id)arg0 specifier:(id)arg1 ;
-(void)setDigitalCrownMode:(id)arg0 ;
-(void)setEndCallGesture:(id)arg0 ;
-(void)setFindMyEnable:(id)arg0 specifier:(id)arg1 ;
-(void)setGestureMode:(id)arg0 specifier:(id)arg1 ;
-(void)setHearingProtectionEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setInEarDetectEnabled:(id)arg0 ;
-(void)setListeningMode:(id)arg0 ;
-(void)setMessagesEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setMicMode:(id)arg0 ;
-(void)setOptimizedBatteryChargingEnabled:(id)arg0 ;
-(void)setSmartRouteMode:(id)arg0 ;
-(void)setSoundProfileAllowed:(id)arg0 ;
-(void)setSpatialProfileVideoCapture:(id)arg0 ;
-(void)setUserSelectedDeviceType:(id)arg0 ;
-(void)setdoubleTapAction:(id)arg0 ;
-(void)setdoubleTapActionLeft:(id)arg0 ;
-(void)setdoubleTapActionRight:(id)arg0 ;
-(void)spatialAudioProfileUpdateHandler:(id)arg0 ;
-(void)spatialProfileTappedHandler:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)triggerSpatialProfileFeedback:(id)arg0 ;
-(void)updateBatteryStatus;
-(void)updateDisconnectButton:(BOOL)arg0 ;
-(void)updateHearingProtectionSpecifiers;
-(void)updateSerialNumberSpecifier:(id)arg0 ;
-(void)updateVersionSpecifier:(id)arg0 ;
-(void)userDidTapNiPrivacyLink:(id)arg0 ;
-(void)userDidTapRecommendedBuilds:(id)arg0 ;
-(void)userDidTapSpatialProfileLearnMoreLink:(id)arg0 ;
-(void)userDidTapWalletLink:(id)arg0 ;
-(void)userDidTapWatchLink:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif
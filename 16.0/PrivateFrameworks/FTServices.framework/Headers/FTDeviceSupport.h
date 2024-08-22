// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTDEVICESUPPORT_H
#define FTDEVICESUPPORT_H

@class NSString, CoreTelephonyClient, NSDictionary;
@protocol CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientPNRDelegate, CoreTelephonyClientSuppServicesDelegate;

#import <Foundation/Foundation.h>

#import "FTSelectedPNRSubscription.h"

@interface FTDeviceSupport : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientPNRDelegate, CoreTelephonyClientSuppServicesDelegate>

 {
    NSString *_number;
    BOOL _blockPost;
    BOOL _supportsiMessage;
    NSInteger _supportsApplePayState;
    NSInteger _supportsUWBState;
    NSInteger _supportsManateeForAppleCash;
    NSInteger _supportsRegionForAppleCash;
    NSInteger _supportsFMDV2State;
    NSInteger _supportsVeniceState;
    NSInteger _supportsKeySharingState;
    NSInteger _supportsHarmonyState;
    BOOL _supportsFT;
    BOOL _supportsFTA;
    BOOL _supportsFTMW;
    BOOL _simBecameNotReady;
    NSInteger _simInserted;
    NSInteger _isPNRSupportedCachedValue;
    BOOL _faceTimeBlocked;
    BOOL _iMessageBlocked;
    BOOL _accountModificationRestricted;
    NSInteger _performanceClass;
    CoreTelephonyClient *_coreTelephonyClient;
    FTSelectedPNRSubscription *_selectedPNRSubscription;
}


@property (readonly, nonatomic) NSDictionary *CTNetworkInformation;
@property (readonly, nonatomic) BOOL SIMInserted;
@property (readonly, nonatomic) BOOL accountModificationRestricted;
@property (readonly, nonatomic) BOOL callingAvailable;
@property (readonly, nonatomic) BOOL callingBlocked;
@property (readonly, nonatomic) BOOL callingSupported;
@property (readonly, nonatomic) BOOL commCenterDead; // ivar: _commCenterDead
@property (readonly, nonatomic) BOOL conferencingAllowed;
@property (readonly, nonatomic) BOOL conferencingBlocked;
@property (readonly, nonatomic) BOOL conferencingEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *deviceColor;
@property (readonly, nonatomic) NSString *deviceIDPrefix;
@property (readonly, nonatomic) NSString *deviceInformationString;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSString *deviceRegionInfo;
@property (readonly, nonatomic) NSInteger deviceType;
@property (readonly, nonatomic) NSString *deviceTypeIDPrefix;
@property (readonly, nonatomic) NSString *enclosureColor;
@property (readonly, nonatomic) BOOL faceTimeAvailable;
@property (readonly, nonatomic) BOOL faceTimeBlocked;
@property (readonly, nonatomic) BOOL faceTimeSupported;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL iMessageAvailable;
@property (readonly, nonatomic) BOOL iMessageBlocked;
@property (readonly, nonatomic) BOOL iMessageSupported;
@property (readonly, nonatomic) BOOL identityServicesSupported;
@property (readonly, nonatomic) BOOL isC2KEquipment;
@property (readonly, nonatomic) BOOL isGreenTea; // ivar: _isGreenTea
@property (readonly, nonatomic) BOOL isInMultiUserMode;
@property (readonly, nonatomic) BOOL isTelephonyDevice;
@property (readonly, nonatomic) BOOL lowRAMDevice;
@property (readonly, nonatomic) BOOL madridAvailable;
@property (readonly, nonatomic) BOOL madridBlocked;
@property (readonly, nonatomic) BOOL madridSupported;
@property (readonly, nonatomic) BOOL mmsConfigured; // ivar: _mmsConfigured
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) BOOL multiwayAvailable;
@property (readonly, nonatomic) BOOL multiwayBlocked;
@property (readonly, nonatomic) BOOL multiwaySupported;
@property (readonly, nonatomic) BOOL nonWifiCallingAvailable;
@property (readonly, nonatomic) BOOL nonWifiFaceTimeAvailable;
@property (readonly, nonatomic) NSInteger performanceClass;
@property (readonly, nonatomic) NSString *productBuildVersion;
@property (readonly, nonatomic) NSString *productName;
@property (readonly, nonatomic) NSString *productOSVersion;
@property (readonly, nonatomic) NSString *productVersion;
@property (readonly, nonatomic) BOOL registrationSupported;
@property (readonly, nonatomic) BOOL slowCPUDevice;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsAnimojiV2;
@property (readonly, nonatomic) BOOL supportsAppleIDIdentification;
@property (readonly, nonatomic) BOOL supportsApplePay;
@property (readonly, nonatomic) BOOL supportsBackFacingCamera; // ivar: _supportsBackCamera
@property (readonly, nonatomic) BOOL supportsCellularData; // ivar: _supportsCellularData
@property (readonly, nonatomic) BOOL supportsCinematicFraming;
@property (readonly, nonatomic) BOOL supportsFMDV2;
@property (readonly, nonatomic) BOOL supportsFrontFacingCamera; // ivar: _supportsFrontCamera
@property (readonly, nonatomic) BOOL supportsFunCam;
@property (readonly, nonatomic) BOOL supportsHDRdecoding;
@property (readonly, nonatomic) BOOL supportsHEIFEncoding;
@property (readonly, nonatomic) BOOL supportsHandoff; // ivar: _supportsHandoff
@property (readonly, nonatomic) BOOL supportsHarmony;
@property (readonly, nonatomic) BOOL supportsHomeKitResident;
@property (readonly, nonatomic) BOOL supportsKeySharing;
@property (readonly, nonatomic) BOOL supportsMMS; // ivar: _supportsMMS
@property (readonly, nonatomic) BOOL supportsManateeForAppleCash;
@property (readonly, nonatomic) BOOL supportsNonWiFiCalling;
@property (readonly, nonatomic) BOOL supportsNonWiFiFaceTime; // ivar: _supportsNonWiFiFaceTime
@property (readonly, nonatomic) BOOL supportsRegionForAppleCash;
@property (readonly, nonatomic) BOOL supportsSMS; // ivar: _supportsSMS
@property (readonly, nonatomic) BOOL supportsSMSIdentification;
@property (readonly, nonatomic) BOOL supportsSimultaneousVoiceAndDataRightNow;
@property (readonly, nonatomic) BOOL supportsTethering; // ivar: _supportsTethering
@property (readonly, nonatomic) BOOL supportsUWB;
@property (readonly, nonatomic) BOOL supportsVenice;
@property (readonly, nonatomic) BOOL supportsWLAN; // ivar: _supportsWLAN
@property (readonly, nonatomic) BOOL supportsWiFi; // ivar: _supportsWiFi
@property (readonly, nonatomic) NSString *telephoneNumber;
@property (readonly, nonatomic) NSDictionary *telephonyCapabilities;
@property (readonly, nonatomic) NSString *userAgentString;
@property (readonly, nonatomic) BOOL wantsBreakBeforeMake;


+(id)marketingNameForDeviceType:(NSInteger)arg0 ;
+(id)sharedInstance;
-(BOOL)_enoughPowerToSupportEffects;
-(BOOL)inProcess_isCallingSupported;
-(BOOL)isInDualPhoneIdentityMode;
-(BOOL)nonBluetoothAvailableForBundleId:(id)arg0 ;
-(BOOL)nonWifiAvailableForBundleId:(id)arg0 ;
-(BOOL)wifiAllowedForBundleId:(id)arg0 ;
-(NSInteger)memorySize;
-(id)_serviceStatus;
-(id)init;
-(id)registrationState;
-(int)cpuFamily;
-(void)_commCenterAlive;
-(void)_handleCarrierSettingsChanged;
-(void)_handlePotentialPhoneNumberRegistrationStateChanged;
-(void)_handleSIMStatusChangedToStatus:(id)arg0 ;
-(void)_invalidateValuesCachedForSelectedPhoneNumberRegistration;
-(void)_lockdownStateChanged:(id)arg0 ;
-(void)_registerForCapabilityNotifications;
-(void)_registerForCarrierNotifications;
-(void)_registerForCommCenterReadyNotifications;
-(void)_registerForInternalCoreTelephonyNotifications;
-(void)_registerForLockdownNotifications;
-(void)_registerForManagedConfigurationNotifications;
-(void)_registerForServiceStatusNotifications;
-(void)_unregisterForCommCenterReadyNotifications;
-(void)_unregisterForManagedConfigurationNotifications;
-(void)_unregisterForServiceStatusNotifications;
-(void)_updateCTNetworkDictionary:(id)arg0 key:(id)arg1 withTelephonyNetworkValue:(id)arg2 telephonyError:(id)arg3 ;
-(void)_updateCapabilities;
-(void)_updateManagedConfigurationSettings;
-(void)carrierBundleChange:(id)arg0 ;
-(void)dealloc;
-(void)noteSelectedPhoneNumberRegistrationSubscriptionDidChange;
-(void)operatorBundleChange:(id)arg0 ;
-(void)phoneNumberChanged:(id)arg0 ;
-(void)pnrReadyStateNotification:(id)arg0 regState:(BOOL)arg1 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)simStatusDidChange:(id)arg0 status:(id)arg1 ;


@end


#endif
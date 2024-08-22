// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBSREMOTEDEVICERECEIVER_H
#define SBSREMOTEDEVICERECEIVER_H

@class RPCompanionLinkClient;
@protocol SBSImplementerInternal;

#import <Foundation/Foundation.h>


@interface SBSRemoteDeviceReceiver : NSObject

@property (retain) RPCompanionLinkClient *client; // ivar: _client
@property (weak, nonatomic) NSObject<SBSImplementerInternal> *delegate; // ivar: _delegate


-(id)initWithDelegate:(id)arg0 ;
-(void)_deregisterDisassociateCurrentNetwork;
-(void)_deregisterDisassociateNetworkWithName;
-(void)_deregisterEverything;
-(void)_deregisterGetAllDebugInfo;
-(void)_deregisterGetFeatureFlags;
-(void)_deregisterGetInstalledProfiles;
-(void)_deregisterGetLEDInfo;
-(void)_deregisterGetPowerEstimateForInterval;
-(void)_deregisterGetSelectDebugInfo;
-(void)_deregisterGetTuningInfo;
-(void)_deregisterGetUserDefaults;
-(void)_deregisterGetVolume;
-(void)_deregisterIdentifyWithOptions;
-(void)_deregisterInjectSWUpdateToHome;
-(void)_deregisterInstallProfileData;
-(void)_deregisterIntercomWithOptions;
-(void)_deregisterIsDeviceStereoFollower;
-(void)_deregisterObliterate;
-(void)_deregisterPlayTone;
-(void)_deregisterReboot;
-(void)_deregisterRemoveProfileByIdentifier;
-(void)_deregisterRequestDeferredReboot;
-(void)_deregisterRequestForFetchingAlarmsAndTimers;
-(void)_deregisterResetAllUserDefaults;
-(void)_deregisterResetUserDefault;
-(void)_deregisterSUScanForSoftwareUpdate;
-(void)_deregisterSendButtonCommand;
-(void)_deregisterSendLEDCommand;
-(void)_deregisterSetBootSpinner;
-(void)_deregisterSetDeviceAsStereoLeader;
-(void)_deregisterSetFeatureFlags;
-(void)_deregisterSetLEDContents;
-(void)_deregisterSetTuningInfoOnBox;
-(void)_deregisterSetUserDefaults;
-(void)_deregisterSetVolume;
-(void)_deregisterSetWifiEnabled;
-(void)_deregisterSiriSay;
-(void)_deregisterSiriUtteranceFileToBePlayed;
-(void)_deregisterStopTone;
-(void)_deregisterSysdiagnoseHasStarted;
-(void)_deregisterTriggerWiFiCoreCapture;
-(void)_registerDisassociateCurrentNetwork;
-(void)_registerDisassociateNetworkWithName;
-(void)_registerEverything;
-(void)_registerGetAllDebugInfo;
-(void)_registerGetFeatureFlags;
-(void)_registerGetInstalledProfiles;
-(void)_registerGetLEDInfo;
-(void)_registerGetPowerEstimateForInterval;
-(void)_registerGetSelectDebugInfo;
-(void)_registerGetTuningInfo;
-(void)_registerGetUserDefaults;
-(void)_registerGetVolume;
-(void)_registerIdentifyWithOptions;
-(void)_registerInjectSWUpdateToHome;
-(void)_registerInstallProfileData;
-(void)_registerIntercomWithOptions;
-(void)_registerIsDeviceStereoFollower;
-(void)_registerObliterate;
-(void)_registerPlayTone;
-(void)_registerReboot;
-(void)_registerRemoveProfileByIdentifier;
-(void)_registerRequestDeferredReboot;
-(void)_registerRequestForFetchingAlarmsAndTimers;
-(void)_registerResetAllUserDefaults;
-(void)_registerResetUserDefault;
-(void)_registerSUScanForSoftwareUpdate;
-(void)_registerSendButtonCommand;
-(void)_registerSendLEDCommand;
-(void)_registerSetBootSpinner;
-(void)_registerSetDeviceAsStereoLeader;
-(void)_registerSetFeatureFlags;
-(void)_registerSetLEDContents;
-(void)_registerSetTuningInfoOnBox;
-(void)_registerSetUserDefaults;
-(void)_registerSetVolume;
-(void)_registerSetWifiEnabled;
-(void)_registerSiriSay;
-(void)_registerSiriUtteranceFileToBePlayed;
-(void)_registerStopTone;
-(void)_registerSysdiagnoseHasStarted;
-(void)_registerTriggerWiFiCoreCapture;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBSSERVER_H
#define SBSSERVER_H

@class NSXPCListener, NSMutableArray, NSMutableSet, NSString;
@protocol SBSImplementerInternal, NSXPCListenerDelegate, SBSImplementer, SBSCannedDemoServiceImplementer, SBSCaptiveNetworkSupportImplementer, SBSHomePodControlsImplementer, SBSDebugInfoImplementer, SBSPowerMonitorImplementer, SBSProfilesImplementer, SBSProximityHandoffUIImplementer, SBSStereoLeaderRoleImplementer, SBSSysdiagnoseImplementer, SBSSystemImplementer;

#import <Foundation/Foundation.h>

#import "SBSRemoteDeviceReceiver.h"

@interface SBSServer : NSObject <SBSImplementerInternal, NSXPCListenerDelegate, SBSImplementer>

 {
    NSXPCListener *_serverListener;
    NSMutableArray *_clients;
    NSMutableSet *_delegates;
    SBSRemoteDeviceReceiver *_receiver;
}


@property (weak, nonatomic) NSObject<SBSCannedDemoServiceImplementer> *cannedDemoServerDelegate; // ivar: _cannedDemoServerDelegate
@property (weak, nonatomic) NSObject<SBSCaptiveNetworkSupportImplementer> *captiveNetworkDelegate; // ivar: _captiveNetworkDelegate
@property (weak, nonatomic) NSObject<SBSHomePodControlsImplementer> *controlsDelegate; // ivar: _controlsDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBSDebugInfoImplementer> *debugInfoDelegate; // ivar: _debugInfoDelegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SBSPowerMonitorImplementer> *powerMonitorDelegate; // ivar: _powerMonitorDelegate
@property (weak, nonatomic) NSObject<SBSProfilesImplementer> *profilesDelegate; // ivar: _profilesDelegate
@property (weak, nonatomic) NSObject<SBSProximityHandoffUIImplementer> *proximityHandoffUIDelegate; // ivar: _proximityHandoffUIDelegate
@property (weak, nonatomic) NSObject<SBSStereoLeaderRoleImplementer> *stereoLeaderDelegate; // ivar: _stereoLeaderDelegate
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<SBSSysdiagnoseImplementer> *sysdiagnoseDelegate; // ivar: _sysdiagnoseDelegate
@property (weak, nonatomic) NSObject<SBSSystemImplementer> *systemDelegate; // ivar: _systemDelegate


+(BOOL)_isInternalBuild;
+(id)sharedInstance;
-(BOOL)_hasEntitlement:(id)arg0 ;
-(BOOL)isMediaAlarm:(id)arg0 ;
-(BOOL)isMediaAlarmInternal:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_gatherXPCClientInfo:(id)arg0 ;
-(id)_processNameForPID:(int)arg0 ;
-(id)init;
-(void)_findConnectionAndSetClientType:(NSUInteger)arg0 ;
-(void)captiveCancel;
-(void)captiveCancelInternal;
-(void)captiveDetected:(id)arg0 ;
-(void)captiveDetectedInternal:(id)arg0 ;
-(void)disassociateCurrentNetwork;
-(void)disassociateCurrentNetworkInternal;
-(void)disassociateNetworkWithName:(id)arg0 ;
-(void)disassociateNetworkWithNameInternal:(id)arg0 ;
-(void)getAllDebugInfo:(id)arg0 ;
-(void)getAllDebugInfoInternal:(id)arg0 ;
-(void)getAllSyncedAlarmsAndTimers:(id)arg0 ;
-(void)getAllSyncedAlarmsAndTimersInternal:(id)arg0 ;
-(void)getFeatureFlags:(id)arg0 ;
-(void)getFeatureFlagsInternal:(id)arg0 ;
-(void)getInstalledProfiles:(id)arg0 ;
-(void)getInstalledProfilesInternal:(id)arg0 ;
-(void)getLEDInfo:(id)arg0 ;
-(void)getLEDInfoInternal:(id)arg0 ;
-(void)getPowerEstimateForInterval:(float)arg0 reply:(id)arg1 ;
-(void)getPowerEstimateForIntervalInternal:(float)arg0 reply:(id)arg1 ;
-(void)getSelectDebugInfo:(id)arg0 reply:(id)arg1 ;
-(void)getSelectDebugInfoInternal:(id)arg0 reply:(id)arg1 ;
-(void)getTuningInfo:(id)arg0 ;
-(void)getTuningInfoInternal:(id)arg0 ;
-(void)getUserDefaults:(id)arg0 ;
-(void)getUserDefaultsInternal:(id)arg0 ;
-(void)getVolume:(id)arg0 ;
-(void)getVolumeInternal:(id)arg0 ;
-(void)handleClientDisconnection:(id)arg0 ;
-(void)handoffCancel;
-(void)handoffCancelInternal;
-(void)handoffComplete;
-(void)handoffCompleteInternal;
-(void)handoffSetDeviceAsStereoLeader:(BOOL)arg0 withOptions:(id)arg1 ;
-(void)handoffStart;
-(void)handoffStartInternal;
-(void)handoffUpdateIntensity:(float)arg0 ;
-(void)handoffUpdateIntensityInternal:(float)arg0 ;
-(void)identifyWithOptions:(id)arg0 ;
-(void)identifyWithOptionsInternal:(id)arg0 ;
-(void)injectSWUpdateToHome:(id)arg0 ;
-(void)injectSWUpdateToHomeInternal:(id)arg0 ;
-(void)installProfileData:(id)arg0 completion:(id)arg1 ;
-(void)installProfileDataInternal:(id)arg0 completion:(id)arg1 ;
-(void)intercomWithOptions:(id)arg0 ;
-(void)intercomWithOptionsInternal:(id)arg0 ;
-(void)isDeviceStereoFollower:(id)arg0 ;
-(void)isDeviceStereoFollowerInternal:(id)arg0 ;
-(void)obliterate:(id)arg0 ;
-(void)obliterateInternal:(id)arg0 ;
-(void)playTone:(unsigned int)arg0 ;
-(void)playToneInternal:(unsigned int)arg0 ;
-(void)proximityHandoffCancelled;
-(void)proximityHandoffCompleted;
-(void)proximityHandoffInactive;
-(void)proximityHandoffStarted;
-(void)proximityHandoffUpdating;
-(void)reboot:(id)arg0 ;
-(void)rebootInternal:(id)arg0 ;
-(void)removeProfileByIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)removeProfileByIdentifierInternal:(id)arg0 completion:(id)arg1 ;
-(void)requestDeferredReboot;
-(void)requestDeferredRebootInternal;
-(void)resetAllUserDefaults;
-(void)resetAllUserDefaultsInternal;
-(void)resetUserDefault:(id)arg0 ;
-(void)resetUserDefaultInternal:(id)arg0 ;
-(void)sendButtonCommand:(id)arg0 ;
-(void)sendButtonCommandInternal:(id)arg0 ;
-(void)sendLEDCommand:(id)arg0 ;
-(void)sendLEDCommandInternal:(id)arg0 ;
-(void)setBootSpinner:(BOOL)arg0 ;
-(void)setBootSpinnerInternal:(BOOL)arg0 ;
-(void)setDeviceAsStereoLeader:(BOOL)arg0 withOptions:(id)arg1 ;
-(void)setDeviceAsStereoLeaderInternal:(BOOL)arg0 withOptions:(id)arg1 ;
-(void)setFeatureFlags:(id)arg0 ;
-(void)setFeatureFlagsInternal:(id)arg0 ;
-(void)setLEDContents:(id)arg0 ;
-(void)setLEDContentsInternal:(id)arg0 ;
-(void)setTuningInfoOnBox:(id)arg0 at:(id)arg1 withValue:(float)arg2 ;
-(void)setTuningInfoOnBoxInternal:(id)arg0 at:(id)arg1 withValue:(float)arg2 ;
-(void)setTurnOffBrightnessFactor:(BOOL)arg0 ;
-(void)setUserDefaults:(id)arg0 withValue:(id)arg1 ;
-(void)setUserDefaultsInternal:(id)arg0 withValue:(id)arg1 ;
-(void)setVolume:(float)arg0 ;
-(void)setVolumeInternal:(float)arg0 ;
-(void)setWifiEnabled:(BOOL)arg0 ;
-(void)setWifiEnabledInternal:(BOOL)arg0 ;
-(void)siriSay:(id)arg0 ;
-(void)siriSayInternal:(id)arg0 ;
-(void)siriUtteranceFileToBePlayed:(id)arg0 duckMusic:(BOOL)arg1 reply:(id)arg2 ;
-(void)siriUtteranceFileToBePlayedInternal:(id)arg0 duckMusic:(BOOL)arg1 reply:(id)arg2 ;
-(void)stopTone:(unsigned int)arg0 ;
-(void)stopToneInternal:(unsigned int)arg0 ;
-(void)suScanForSoftwareUpdate;
-(void)suScanForSoftwareUpdateInternal;
-(void)sysdiagnoseHasStarted:(BOOL)arg0 ;
-(void)sysdiagnoseHasStartedInternal:(BOOL)arg0 ;
-(void)triggerWiFiCoreCapture:(id)arg0 ;
-(void)triggerWiFiCoreCaptureInternal:(id)arg0 ;


@end


#endif
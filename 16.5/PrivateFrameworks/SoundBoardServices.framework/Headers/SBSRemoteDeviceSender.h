// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSREMOTEDEVICESENDER_H
#define SBSREMOTEDEVICESENDER_H

@class RPCompanionLinkClient, NSString;
@protocol SBSImplementer, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBSRemoteDeviceSender : NSObject <SBSImplementer>



@property (retain) RPCompanionLinkClient *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *destinationID; // ivar: _destinationID
@property (readonly) NSUInteger hash;
@property (retain) NSObject<OS_dispatch_queue> *rapportQueue; // ivar: _rapportQueue
@property (readonly) Class superclass;


-(BOOL)isMediaAlarm:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(void)captiveCancel;
-(void)captiveDetected:(id)arg0 ;
-(void)clearHomeSWUpdate;
-(void)disassociateCurrentNetwork;
-(void)disassociateNetworkWithName:(id)arg0 ;
-(void)getAllDebugInfo:(id)arg0 ;
-(void)getAllSyncedAlarmsAndTimers:(id)arg0 ;
-(void)getFeatureFlags:(id)arg0 ;
-(void)getInstalledProfiles:(id)arg0 ;
-(void)getLEDInfo:(id)arg0 ;
-(void)getPowerEstimateForInterval:(float)arg0 reply:(id)arg1 ;
-(void)getSelectDebugInfo:(id)arg0 reply:(id)arg1 ;
-(void)getTuningInfo:(id)arg0 ;
-(void)getUserDefaults:(id)arg0 ;
-(void)getVolume:(id)arg0 ;
-(void)handoffCancel;
-(void)handoffComplete;
-(void)handoffSetDeviceAsStereoLeader:(BOOL)arg0 withOptions:(id)arg1 ;
-(void)handoffStart;
-(void)handoffStartWithArtworkColors:(id)arg0 ;
-(void)handoffUpdateIntensity:(float)arg0 ;
-(void)identifyWithOptions:(id)arg0 ;
-(void)injectSWUpdateToHome:(id)arg0 ;
-(void)installProfileData:(id)arg0 completion:(id)arg1 ;
-(void)intercomWithOptions:(id)arg0 ;
-(void)isDeviceStereoFollower:(id)arg0 ;
-(void)obliterate:(id)arg0 ;
-(void)playTone:(unsigned int)arg0 ;
-(void)reboot:(id)arg0 ;
-(void)removeProfileByIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)render:(id)arg0 ;
-(void)requestDeferredReboot;
-(void)resetAllUserDefaults;
-(void)resetUserDefault:(id)arg0 ;
-(void)sendButtonCommand:(id)arg0 ;
-(void)sendLEDCommand:(id)arg0 ;
-(void)setBootSpinner:(BOOL)arg0 ;
-(void)setDeviceAsStereoLeader:(BOOL)arg0 withOptions:(id)arg1 ;
-(void)setFeatureFlags:(id)arg0 ;
-(void)setHomeUpdateState:(NSInteger)arg0 ;
-(void)setLEDContents:(id)arg0 ;
-(void)setTuningInfoOnBox:(id)arg0 at:(id)arg1 withValue:(float)arg2 ;
-(void)setTurnOffBrightnessFactor:(BOOL)arg0 ;
-(void)setUserDefaults:(id)arg0 withValue:(id)arg1 ;
-(void)setVolume:(float)arg0 ;
-(void)setWifiEnabled:(BOOL)arg0 ;
-(void)siriSay:(id)arg0 ;
-(void)stopTone:(unsigned int)arg0 ;
-(void)suScanForSoftwareUpdate;
-(void)sysdiagnoseHasStarted:(BOOL)arg0 ;
-(void)triggerWiFiCoreCapture:(id)arg0 ;


@end


#endif
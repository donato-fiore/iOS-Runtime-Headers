// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUHEARINGAIDSETTINGS_H
#define HUHEARINGAIDSETTINGS_H

@class HCSettings, ACAccountStore, NSString, NSDictionary;
@protocol OS_dispatch_queue;



@interface HUHearingAidSettings : HCSettings {
    ACAccountStore *_accountStore;
    int _contentProtectionNotifyToken;
    BOOL _finishediCloudSetup;
}


@property (nonatomic) BOOL allowHearingAidControlOnLockScreen;
@property (nonatomic) BOOL anyGizmoLiveHeadphoneLevelEnabled; // ivar: _anyGizmoLiveHeadphoneLevelEnabled
@property (retain, nonatomic) NSString *availableHearingDeviceName;
@property (nonatomic) int availableInputEars;
@property (nonatomic) NSInteger callAudioRoute;
@property (nonatomic) BOOL clearPartialPairing;
@property (nonatomic) NSInteger complicationPreferredDisplayMode;
@property (nonatomic) int earsSupportingWatch;
@property (nonatomic) BOOL exportsLiveListenToFile;
@property (nonatomic) BOOL gizmoLiveHeadphoneLevelEnabled; // ivar: _gizmoLiveHeadphoneLevelEnabled
@property (nonatomic) BOOL gizmoLiveHeadphoneLevelNPEnabled; // ivar: _gizmoLiveHeadphoneLevelNPEnabled
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *icloudInitializationQueue; // ivar: _icloudInitializationQueue
@property (nonatomic) BOOL independentHearingAidSettings;
@property (retain, nonatomic) NSDictionary *knownPeripheralUUIDs;
@property (nonatomic) BOOL liveHeadphoneLevelEnabled;
@property (nonatomic) NSInteger mediaAudioRoute;
@property (nonatomic) BOOL multideviceAudioEnabled;
@property (nonatomic) BOOL multideviceSettingsEnabled;
@property (retain, nonatomic) NSDictionary *pairedHearingAids;
@property (nonatomic) int preferredInputEar;
@property (nonatomic) BOOL shouldStreamSystemSounds;
@property (nonatomic) BOOL shouldStreamToLeftAid;
@property (nonatomic) BOOL shouldStreamToRightAid;
@property (nonatomic) NSUInteger usedHearingFeatures;


+(id)sharedInstance;
-(BOOL)isDeviceIDOnCloudDenylist:(id)arg0 ;
-(BOOL)isPairedWithFakeHearingAids;
-(BOOL)isPairedWithRealHearingAids;
-(BOOL)isiCloudPaired;
-(BOOL)shouldPushLocalAidsToiCloud;
-(BOOL)shouldStoreLocally;
-(BOOL)shouldUseiCloud;
-(id)convertPersistentRepresentation:(id)arg0 fromVersion:(float)arg1 toVersion:(float)arg2 ;
-(id)deviceIDForPairingInformation:(id)arg0 ;
-(id)init;
-(id)keysToSync;
-(id)preferenceDomainForPreferenceKey:(id)arg0 ;
-(id)preferenceKeyForSelector:(SEL)arg0 ;
-(void)_accessibilitySettingsChangedOnCompanion;
-(void)_initializeICloudSetup;
-(void)_updateTripleClickOptionsForPairedAids:(id)arg0 ;
-(void)addDeviceIDToCloudDenylist:(id)arg0 ;
-(void)dealloc;
-(void)iCloudAccountDidChange:(id)arg0 ;
-(void)icloudHearingSettingsDidChange:(id)arg0 ;
-(void)logMessage:(id)arg0 ;
-(void)pushLocalHearingAidsToiCloud;
-(void)removeDeviceIDFromCloudDenylist:(id)arg0 ;
-(void)setLocalHearingAidsFromiCloud:(id)arg0 ;
-(void)updateStreamingPreference;


@end


#endif
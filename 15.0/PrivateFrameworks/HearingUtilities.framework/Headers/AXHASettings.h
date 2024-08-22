// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXHASETTINGS_H
#define AXHASETTINGS_H

@class ACAccountStore, NSString, NSDictionary, NSMutableSet, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AXHASettings : NSObject {
    ACAccountStore *_accountStore;
    int _contentProtectionNotifyToken;
    BOOL _finishediCloudSetup;
    os_unfair_lock_s _syncLock;
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
@property (retain, nonatomic) NSMutableSet *registeredNotifications; // ivar: _registeredNotifications
@property (nonatomic) BOOL shouldStreamSystemSounds;
@property (nonatomic) BOOL shouldStreamToLeftAid;
@property (nonatomic) BOOL shouldStreamToRightAid;
@property (retain, nonatomic) NSMutableSet *synchronizePreferences; // ivar: _synchronizePreferences
@property (retain, nonatomic) NSMutableDictionary *updateBlocks; // ivar: _updateBlocks
@property (nonatomic) NSUInteger usedHearingFeatures;


+(id)sharedInstance;
+(void)initialize;
-(BOOL)isDeviceIDOnCloudDenylist:(id)arg0 ;
-(BOOL)isPairedWithFakeHearingAids;
-(BOOL)isPairedWithRealHearingAids;
-(BOOL)isiCloudPaired;
-(BOOL)shouldPushLocalAidsToiCloud;
-(BOOL)shouldUseiCloud;
-(id)_notificationForPreferenceKey:(id)arg0 ;
-(id)_preferenceKeyForSelector:(SEL)arg0 ;
-(id)_valueForPreferenceKey:(id)arg0 ;
-(id)convertPersistentRepresentation:(id)arg0 fromVersion:(float)arg1 toVersion:(float)arg2 ;
-(id)deviceIDForPairingInformation:(id)arg0 ;
-(id)init;
-(struct __CFString *)domainNameForPreferenceKey:(id)arg0 ;
-(void)_handlePreferenceChanged:(id)arg0 ;
-(void)_initializeICloudSetup;
-(void)_registerForNotification:(id)arg0 ;
-(void)_setValue:(id)arg0 forPreferenceKey:(id)arg1 ;
-(void)_synchronizeIfNecessary:(id)arg0 ;
-(void)_updateTripleClickOptionsForPairedAids:(id)arg0 ;
-(void)addDeviceIDToCloudDenylist:(id)arg0 ;
-(void)dealloc;
-(void)iCloudAccountDidChange:(id)arg0 ;
-(void)icloudHearingSettingsDidChange:(id)arg0 ;
-(void)pushLocalHearingAidsToiCloud;
// -(void)registerUpdateBlock:(id)arg0 forRetrieveSelector:(unk)arg1 withListener:(SEL)arg2  ;
-(void)removeDeviceIDFromCloudDenylist:(id)arg0 ;
-(void)setLocalHearingAidsFromiCloud:(id)arg0 ;
-(void)updateStreamingPreference;


@end


#endif
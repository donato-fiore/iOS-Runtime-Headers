// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAENDEFAULTS_H
#define HAENDEFAULTS_H

@class NSUserDefaults, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HAENDefaults : NSObject {
    NSUserDefaults *_userDefaults;
    NSMutableDictionary *_domainSettings;
    os_unfair_lock_s _lock;
    BOOL _EUVolumeLimitFlag;
    BOOL _SKVolumeLimitFlag;
}




+(BOOL)HAENSupportedForCurrentDeviceClass;
+(BOOL)isCurrentProcessMediaserverd;
+(BOOL)isRunningCITests;
+(id)sharedInstance;
-(BOOL)_shouldRepromptSinceDate:(id)arg0 ;
-(BOOL)isConnectedUnknownWiredDeviceHeadphone;
-(BOOL)isCurrentAudioAccessoryHeadphone;
-(BOOL)isEUVolumeLimitOn;
-(BOOL)isHAENFeatureEnabled;
-(BOOL)isHAENFeatureMandatory;
-(BOOL)isHAENFeatureOptedIn;
-(BOOL)isReduceLoudSoundEnabled;
-(BOOL)isSKVolumeLimitOn;
-(BOOL)softwareVersionEnabled;
-(CGFloat)getLiveMonitorTimeWindowInSeconds;
-(CGFloat)getLiveMonitoringThreshold;
-(CGFloat)volumeReductionDelta;
-(NSInteger)getAudioAccessoryConnectionInfo;
-(id)_generateAccessoryKeyWithManufacture:(id)arg0 andSerialNumber:(id)arg1 ;
-(id)init;
-(int)getReduceLoudSoundThreshold;
-(void)_registerNotification:(id)arg0 ;
-(void)_updateSetting:(id)arg0 value:(id)arg1 notify:(BOOL)arg2 ;
-(void)forceReadDefaults;
-(void)removeAllAdapters;
-(void)setAudioAccessoryIsConnectedToHeadphones:(NSInteger)arg0 ;
-(void)setUserVolumeWithValue:(float)arg0 mininum:(float)arg1 ;
-(void)updateAudioAccessoryIsConnectedToHeadphones:(NSInteger)arg0 ;
-(void)updateRLSSettings;
-(void)updateUserVolumeForVolumeLimit;
-(void)wiredDeviceStatusDidChange;


@end


#endif
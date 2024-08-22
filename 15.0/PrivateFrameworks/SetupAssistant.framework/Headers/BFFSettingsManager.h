// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BFFSETTINGSMANAGER_H
#define BFFSETTINGSMANAGER_H

@class NSMutableArray, NSMutableDictionary, NSNumber, NSData, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface BFFSettingsManager : NSObject {
    NSMutableArray *_stashedPaths;
    NSMutableDictionary *_stashedPreferences;
    NSMutableDictionary *_stashedManagedConfigurationSettings;
    NSNumber *_stashedAssistantEnabled;
    NSNumber *_stashedAssistantVoiceTriggerEnabled;
    NSNumber *_stashedSiriDataSharingOptInStatus;
    NSNumber *_stashedLocationServicesEnabled;
    NSData *_stashedLocationServicesSettings;
    NSData *_stashedWatchData;
    NSArray *_stashedFlowSkipIdentifiers;
    NSNumber *_stashedScreenTimeEnabled;
    NSNumber *_stashedAutoUpdateEnabled;
    NSNumber *_stashedAutoDownloadEnabled;
    NSData *_stashedAccessibilityData;
    NSNumber *_stashedUserInterfaceStyleMode;
    NSString *_stashedSeedEnrollmentProgramName;
    NSString *_stashedSeedEnrollmentAssetAudience;
    NSMutableArray *_stashedAnalytics;
    NSData *_stashedSiriOutputVoice;
    NSString *_stashedSiriLanguage;
}




+(id)sharedManager;
-(BOOL)_commitStash;
-(BOOL)_stashConfiguration:(BOOL)arg0 ;
-(BOOL)_stashPaths;
-(BOOL)hasStashedValues;
-(BOOL)hasStashedValuesOnDisk;
-(BOOL)hideStashInSafeHaven;
-(BOOL)hideStashInSafeHavenAsProvisional:(BOOL)arg0 ;
-(BOOL)removeSafeHaven;
-(NSInteger)stashConfigurationType;
-(NSUInteger)_restoreConfiguration;
-(NSUInteger)stashVersion;
-(id)_preferencesForDomain:(id)arg0 ;
-(id)_shovePath:(id)arg0 toPath:(id)arg1 ;
-(id)init;
-(id)loadConfigurationFromDisk;
-(id)stashBuildVersion;
-(id)stashProductVersion;
-(id)watchData;
-(void)_applyAssistantPreferences;
-(void)_applyLocationServices;
-(void)_applyLocationServicesSettings;
-(void)_applyScreenTimePreferences;
-(void)_applySeedEnrollmentData;
-(void)_applyStashedFlowSkipIdentifiers;
-(void)_applyStashedManagedConfiguration;
-(void)_applyStashedPreferences;
-(void)_applyUpdatePreferences;
-(void)_applyUserInterfaceStyleMode;
-(void)_reset:(BOOL)arg0 ;
-(void)_restoreAccessibilityData;
-(void)_restoreAnalyticsData;
-(void)_restoreStashedFiles;
-(void)_restoreWatchData;
-(void)applySafeHavenStash;
-(void)populatePathsToStash;
-(void)postDidRestoreSafeHavenNotification;
-(void)removeBoolSettingForManagedConfigurationSetting:(id)arg0 ;
-(void)reset;
-(void)setAssistantEnabled:(BOOL)arg0 ;
-(void)setAssistantVoiceTriggerEnabled:(BOOL)arg0 ;
-(void)setAutoDownloadEnabled:(BOOL)arg0 ;
-(void)setAutoUpdateEnabled:(BOOL)arg0 ;
-(void)setBool:(BOOL)arg0 forDomain:(id)arg1 key:(id)arg2 ;
-(void)setBool:(BOOL)arg0 forManagedConfigurationSetting:(id)arg1 ;
-(void)setObject:(id)arg0 forDomain:(id)arg1 key:(id)arg2 ;
-(void)setScreenTimeEnabled:(BOOL)arg0 ;
-(void)setSeedEnrollmentProgramName:(id)arg0 assetAudience:(id)arg1 ;
-(void)setUserInterfaceStyleMode:(NSInteger)arg0 ;
-(void)stashAccessibilityData:(id)arg0 ;
-(void)stashAnalyticEvent:(id)arg0 payload:(id)arg1 ;
-(void)stashFlowSkipIdentifiers:(id)arg0 ;
-(void)stashLocationServicesChoice:(BOOL)arg0 ;
-(void)stashLocationServicesSettings:(id)arg0 ;
-(void)stashPath:(id)arg0 ;
-(void)stashWatchData:(id)arg0 ;


@end


#endif
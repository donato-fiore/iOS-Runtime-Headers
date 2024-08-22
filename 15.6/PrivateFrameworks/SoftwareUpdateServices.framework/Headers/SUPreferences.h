// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUPREFERENCES_H
#define SUPREFERENCES_H

@class NSNumber, NSMutableDictionary, NSDictionary, NSString;
@protocol OS_dispatch_workloop, SUPreferencesObserver;

#import <Foundation/Foundation.h>


@interface SUPreferences : NSObject {
    NSObject<OS_dispatch_workloop> *_preferencesWorkloop;
}


@property (readonly, nonatomic) NSNumber *MDMSoftwareUpdatePath;
@property (readonly, nonatomic) BOOL allowLiveAssetServerFallback;
@property (readonly, nonatomic) BOOL allowSameBuildUpdates;
@property (readonly, nonatomic) NSNumber *analyticsSubmissionIntervalOverride;
@property (readonly, nonatomic) BOOL autoDownloadDeletedBuild;
@property (readonly, nonatomic) NSNumber *autoSUEndDelta;
@property (readonly, nonatomic) NSNumber *autoSUStartDelta;
@property (readonly, nonatomic) NSNumber *autoSUUnlockEndDelta;
@property (readonly, nonatomic) NSNumber *autoSUUnlockStartDelta;
@property (readonly, nonatomic) BOOL autoUpdateForceOff;
@property (readonly, nonatomic) BOOL autoUpdateForceOn;
@property (readonly, nonatomic) BOOL backgroundDLKnownBuilds; // ivar: _backgroundDLKnownBuilds
@property (readonly, nonatomic) NSNumber *bannerDelay;
@property (retain, nonatomic) NSMutableDictionary *cachedPreferences; // ivar: _cachedPreferences
@property (readonly, nonatomic, getter=isAutoDownloadDisabled) BOOL disableAutoDownload;
@property (readonly, nonatomic, getter=isAutoSUDisabled) BOOL disableAutoSU; // ivar: _disableAutoSU
@property (readonly, nonatomic) BOOL disableAvailabilityAlerts;
@property (readonly, nonatomic) BOOL disableBuildNumberComparison;
@property (readonly, nonatomic) BOOL disableFullReplacementFallback;
@property (readonly, nonatomic) BOOL disableManagedRequest;
@property (readonly, nonatomic) BOOL disableUserWiFiOnlyPeriod;
@property (readonly, nonatomic) BOOL forceFullReplacement;
@property (nonatomic, setter=enableAutomaticDownload:) BOOL isAutomaticDownloadEnabled;
@property (nonatomic, setter=enableAutomaticUpdateV2:) BOOL isAutomaticUpdateV2Enabled;
@property (readonly, nonatomic) NSNumber *mandatorySUFlags;
@property (nonatomic) NSObject<SUPreferencesObserver> *observer; // ivar: _observer
@property (retain, nonatomic) NSDictionary *preferencesDefinitions; // ivar: _preferencesDefinitions
@property (readonly, nonatomic) BOOL queryCustomerBuilds;
@property (readonly, nonatomic) NSString *requestedPMV;
@property (readonly, nonatomic) BOOL scanWeeklyInternally;
@property (readonly, nonatomic) BOOL shouldDelayInMinutes;
@property (readonly, nonatomic) BOOL shouldDelayUpdates;
@property (readonly, nonatomic) NSNumber *unmetConstraints;
@property (readonly, nonatomic) NSNumber *updateDelayInterval;


+(id)sharedInstance;
-(*void)_copyPreferenceForKey:(struct __CFString *)arg0 ofType:(NSUInteger)arg1 ;
-(BOOL)_autoDownloadDisableDefaultValue;
-(BOOL)_autoInstallDefaultValue;
-(BOOL)_cachedBoolValueForKey:(id)arg0 withDefaultValue:(BOOL)arg1 ;
-(BOOL)_getBooleanPreferenceForKey:(id)arg0 withDefaultValue:(BOOL)arg1 ;
-(BOOL)disableAutoDownload;
-(BOOL)isKeySetInPreferences:(id)arg0 ;
-(id)_cachedNumberValueForKey:(id)arg0 ;
-(id)_cachedObjectForKey:(id)arg0 ofClass:(Class)arg1 ;
-(id)_cachedStringValueForKey:(id)arg0 ;
-(id)_copyNumberPreferenceForKey:(id)arg0 ;
-(id)_copyStringPreferenceForKey:(id)arg0 ;
-(id)_getValueOfKey:(id)arg0 withType:(NSInteger)arg1 ;
-(id)init;
-(void)_loadPreferences;
-(void)_setBooleanPreferenceForKey:(id)arg0 value:(BOOL)arg1 ;
-(void)_setCachedBooleanPreferenceForKey:(id)arg0 value:(BOOL)arg1 ;
-(void)_setObjectPreferenceForKey:(id)arg0 value:(id)arg1 ;
-(void)_setupAutomaticUpdateV2Enabled;
-(void)dealloc;
-(void)enableAutomaticDownload:(BOOL)arg0 ;
-(void)enableAutomaticUpdateV2:(BOOL)arg0 ;
-(void)reload;
-(void)setPreference:(id)arg0 toBool:(BOOL)arg1 ;
-(void)setPreference:(id)arg0 toValue:(id)arg1 ;


@end


#endif
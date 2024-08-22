// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHEARINGFEATURES_H
#define HKHEARINGFEATURES_H


#import <Foundation/Foundation.h>


@interface HKHearingFeatures : NSObject



+(BOOL)_boolForPreferenceKey:(id)arg0 defaultValue:(BOOL)arg1 fromValues:(id)arg2 ;
+(BOOL)_isHeadphoneExposureDataTransient;
+(BOOL)_isHeadphoneExposureDataTransientOnActiveWatchWithError:(*id)arg0 ;
+(BOOL)_isMeasureOtherHeadphonesEnabled;
+(BOOL)_isMeasureOtherHeadphonesEnabledOnActiveWatchWithError:(*id)arg0 ;
+(BOOL)_setBoolForPhonePreferenceKey:(id)arg0 newValue:(BOOL)arg1 error:(*id)arg2 ;
+(BOOL)_setBoolForPreferenceKey:(id)arg0 newValue:(BOOL)arg1 error:(*id)arg2 ;
+(BOOL)_setBoolForWatchPreferenceKey:(id)arg0 newValue:(BOOL)arg1 error:(*id)arg2 ;
+(BOOL)_setHeadphoneExposureMeasureLevelsEnabled:(BOOL)arg0 error:(*id)arg1 ;
+(BOOL)_setHeadphoneExposureMeasureLevelsEnabledOnActiveWatch:(BOOL)arg0 error:(*id)arg1 ;
+(BOOL)_setHeadphoneExposureNotificationsEnabled:(BOOL)arg0 error:(*id)arg1 ;
+(BOOL)_setHeadphoneExposureNotificationsEnabledOnActiveWatch:(BOOL)arg0 error:(*id)arg1 ;
+(BOOL)areHeadphoneExposureNotificationsMandatory;
+(BOOL)areHeadphoneExposureNotificationsMandatoryOnActiveWatchWithError:(*id)arg0 ;
+(BOOL)hasActivePairedDevice;
+(BOOL)isHeadphoneExposureMeasureLevelsEnabled;
+(BOOL)isHeadphoneExposureMeasureLevelsEnabledOnActiveWatchWithError:(*id)arg0 ;
+(BOOL)isHeadphoneExposureNotificationsEnabled;
+(BOOL)isHeadphoneExposureNotificationsEnabledOnActiveWatchWithError:(*id)arg0 ;
+(BOOL)isHeadphoneExposureNotificationsSupportedOnActiveWatch;
+(BOOL)setBoolForPreferenceKey:(id)arg0 newValue:(BOOL)arg1 forPairedWatch:(BOOL)arg2 error:(*id)arg3 ;
+(BOOL)unitTesting_forceDefaultHeadphoneDataCollectionInterval;
+(BOOL)unitTesting_simulateLocalHeadphonePlayback;
+(id)_numbersForPhonePreferenceKeys:(id)arg0 ;
+(id)_numbersForPreferenceKeys:(id)arg0 error:(*id)arg1 ;
+(id)_numbersForPreferenceKeys:(id)arg0 fromActiveWatch:(BOOL)arg1 ;
+(id)_numbersForWatchPreferenceKeys:(id)arg0 ;
+(id)_sharedAudioDataAnalysisManager;
+(id)activePairedDevice;
+(id)sharedInstance;
+(void)startObservingForChanges;
+(void)unitTesting_overrideForceDefaultHeadphoneDataCollectionInterval:(id)arg0 ;
+(void)unitTesting_overrideIsHeadphoneExposureNotificationsEnabled:(id)arg0 ;
+(void)unitTesting_overrideSimulateLocalHeadphonePlayback:(id)arg0 ;
-(BOOL)swizzled_isHAENFeatureEnabled;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)_adasPreferenceDidChange:(id)arg0 ;
-(void)_startObservingForChanges;
-(void)_startObservingForChangesOnActiveWatch;
-(void)_stopObservingForChanges;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHRCARDIOFITNESSFEATURESTATUSMANAGERSERVER_H
#define HKHRCARDIOFITNESSFEATURESTATUSMANAGERSERVER_H

@class HDStandardTaskServer, NSUserDefaults, HDUserCharacteristicsManager, HKWristDetectionSettingManager, HKWatchAppInstallationManager, NSString;
@protocol HDFeatureAvailabilityExtensionObserver, HKWristDetectionSettingManagerObserver, HKWatchAppInstallationManagerObserver, HKHRCardioFitnessFeatureStatusManagerServerInterface, HDHRRegionSupportedDeterminer, HDFeatureAvailabilityExtension, OS_dispatch_queue;



@interface HKHRCardioFitnessFeatureStatusManagerServer : HDStandardTaskServer <HDFeatureAvailabilityExtensionObserver, HKWristDetectionSettingManagerObserver, HKWatchAppInstallationManagerObserver, HKHRCardioFitnessFeatureStatusManagerServerInterface>

 {
    id<HDHRRegionSupportedDeterminer> *_regionSupportedDeterminer;
    id<HDFeatureAvailabilityExtension> *_featureAvailabilityExtension;
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_ageGatingDefaults;
    NSUserDefaults *_heartRateSettingsDefaults;
    NSUserDefaults *_privacyDefaults;
    HDUserCharacteristicsManager *_userCharacteristicsManager;
    HKWristDetectionSettingManager *_wristDetectionSettingManager;
    HKWatchAppInstallationManager *_watchAppInstallationManager;
    os_unfair_lock_s _lock;
    BOOL _observing;
    int _privacyPreferencesNotificationToken;
    int _userCharacteristicsNotificationToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)validateConfiguration:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
+(Class)configurationClass;
+(id)createTaskServerWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 error:(*id)arg4 ;
+(id)taskIdentifier;
-(BOOL)_doesActiveWatchSupportFeature;
-(BOOL)_isAgeGated;
-(BOOL)_isHealthAppHidden;
-(BOOL)_isHeartRateEnabled;
-(BOOL)_isOnboardedFeatureSupportedOnBothPhoneAndWatch;
-(BOOL)_isWatchAppInstalled;
-(BOOL)_isWristDetectEnabled;
-(BOOL)_requiresMedicationDetailsConfirmation;
-(BOOL)doesLocaleMatchAllowedCountryCodeForLocalDevice:(id)arg0 ;
-(id)_clientRemoteObjectProxy;
-(id)_getNotificationStatusWithError:(*id)arg0 ;
-(id)_getOnboardingStatusWithError:(*id)arg0 ;
-(id)_isAgePresentWithError:(*id)arg0 ;
-(id)_isCardioFitnessClassificationAvailableWithError:(*id)arg0 ;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 featureAvailabilityExtension:(id)arg4 regionSupportedDeterminer:(id)arg5 ageGatingDefaults:(id)arg6 heartRateSettingsDefaults:(id)arg7 privacyDefaults:(id)arg8 userCharacteristicsManager:(id)arg9 wristDetectionSettingManager:(id)arg10 watchAppInstallationManager:(id)arg11 ;
-(id)remoteInterface;
-(void)_heartRateSettingsSynced;
-(void)_notifyClientChangesToOnboardingStatus:(BOOL)arg0 changesToNotificationStatus:(BOOL)arg1 ;
-(void)_stopObservingChangesAndExpectToBeObserving:(BOOL)arg0 ;
-(void)_userCharacteristicsChanged;
-(void)dealloc;
-(void)featureAvailabilityExtensionDidUpdateRegionAvailability:(id)arg0 ;
-(void)featureAvailabilityExtensionOnboardingCompletionDataDidBecomeAvailable:(id)arg0 ;
-(void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg0 ;
-(void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg0 ;
-(void)featureAvailabilityProvidingDidUpdateSettings:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)remote_notificationStatusWithCompletion:(id)arg0 ;
-(void)remote_onboardingStatusWithCompletion:(id)arg0 ;
-(void)remote_resetOnboardingWithCompletion:(id)arg0 ;
-(void)remote_setNotificationsEnabled:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)remote_startObservingChangesWithCompletion:(id)arg0 ;
-(void)remote_stopObservingChanges;
-(void)watchAppInstallationManagerDidObserveChange:(id)arg0 ;
-(void)wristDetectionSettingManagerDidObserveWristDetectChange:(id)arg0 ;


@end


#endif
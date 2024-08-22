// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDMOBILITYWALKINGSTEADINESSFEATURESTATUSMANAGERSERVER_H
#define HDMOBILITYWALKINGSTEADINESSFEATURESTATUSMANAGERSERVER_H

@class HDStandardTaskServer, NSUserDefaults, HDDataCollectionManager, HDUserCharacteristicsManager, NSString;
@protocol HDFeatureAvailabilityExtensionObserver, HKMobilityWalkingSteadinessFeatureStatusManagerServerInterface, HDMobilityRegionSupportedDeterminer, HDFeatureAvailabilityExtension, HDMobilityIsHeightPresentProvider, HDMobilityHealthAppNotificationAuthorizationStatusProvider, OS_dispatch_queue;



@interface HDMobilityWalkingSteadinessFeatureStatusManagerServer : HDStandardTaskServer <HDFeatureAvailabilityExtensionObserver, HKMobilityWalkingSteadinessFeatureStatusManagerServerInterface>

 {
    id<HDMobilityRegionSupportedDeterminer> *_regionSupportedDeterminer;
    id<HDFeatureAvailabilityExtension> *_classificationsFeatureAvailabilityExtension;
    id<HDFeatureAvailabilityExtension> *_notificationsFeatureAvailabilityExtension;
    id<HDMobilityIsHeightPresentProvider> *_isHeightPresentProvider;
    id<HDMobilityHealthAppNotificationAuthorizationStatusProvider> *_healthAppNotificationAuthorizationStatusProvider;
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_ageGatingDefaults;
    NSUserDefaults *_mobilitySettingsDefaults;
    HDDataCollectionManager *_dataCollectionManager;
    HDUserCharacteristicsManager *_userCharacteristicsManager;
    BOOL _observing;
    int _userCharacteristicsNotificationToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_hasWriteEntitlement:(id)arg0 withError:(*id)arg1 ;
+(BOOL)validateConfiguration:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
+(Class)configurationClass;
+(id)createTaskServerWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 error:(*id)arg4 ;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(BOOL)_isAgeGated;
-(BOOL)_isDeviceSupported;
-(BOOL)_isFitnessTrackingEnabled;
-(BOOL)_isHealthAppHidden;
-(BOOL)_isOnboardedFeatureSupported;
-(BOOL)_isWalkingSteadinessClassificationAvailableWithError:(*id)arg0 ;
-(BOOL)doesLocaleMatchAllowedCountryCodeForLocalDevice:(id)arg0 ;
-(id)_clientRemoteObjectProxy;
-(id)_getNotificationStatusWithError:(*id)arg0 ;
-(id)_getOnboardingStatusWithError:(*id)arg0 ;
-(id)_isAgePresentWithError:(*id)arg0 ;
-(id)_isHeightPresentWithError:(*id)arg0 ;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 classificationsFeatureAvailabilityExtension:(id)arg4 notificationsFeatureAvailabilityExtension:(id)arg5 regionSupportedDeterminer:(id)arg6 ageGatingDefaults:(id)arg7 mobilitySettingsDefaults:(id)arg8 userCharacteristicsManager:(id)arg9 isHeightPresentProvider:(id)arg10 healthAppNotificationAuthorizationStatusProvider:(id)arg11 ;
-(id)remoteInterface;
-(void)_fitnessTrackingEnabledChanged;
-(void)_notifyClientChangesToOnboardingStatus:(BOOL)arg0 changesToNotificationStatus:(BOOL)arg1 ;
-(void)_stopObservingChangesAndExpectToBeObserving:(BOOL)arg0 ;
-(void)_userCharacteristicsChanged;
-(void)dealloc;
-(void)featureAvailabilityExtensionDidUpdateRegionAvailability:(id)arg0 ;
-(void)featureAvailabilityExtensionOnboardingCompletionDataDidBecomeAvailable:(id)arg0 ;
-(void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg0 ;
-(void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)remote_fitnessTrackingEnabledWithCompletion:(id)arg0 ;
-(void)remote_notificationStatusWithCompletion:(id)arg0 ;
-(void)remote_onboardingStatusWithCompletion:(id)arg0 ;
-(void)remote_resetOnboardingWithCompletion:(id)arg0 ;
-(void)remote_setNotificationsEnabled:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)remote_startObservingChangesWithCompletion:(id)arg0 ;
-(void)remote_stopObservingChanges;


@end


#endif
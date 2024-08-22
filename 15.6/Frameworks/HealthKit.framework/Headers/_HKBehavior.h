// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKBEHAVIOR_H
#define _HKBEHAVIOR_H

@class NSNumber, NSString, NSDictionary, NSTimeZone;

#import <Foundation/Foundation.h>


@interface _HKBehavior : NSObject {
    NSNumber *_overriddenSupportsSwimmingWorkoutSessions;
    NSNumber *_overriddenEnableManateeForHSA2Accounts;
    NSNumber *_overriddenSupportsWorkoutSmoothing;
    NSNumber *_overriddenSupportsCachedStatisticsCollectionQueries;
    NSNumber *_overriddenSupportsHFDInSQLite;
    NSNumber *_overriddenSupportsActiveQueryDaemonTransactions;
    _HKLazyLoader<bool> _isRunningStoreDemoMode;
    _HKLazyLoader<bool> _runningInStoreDemoModeF201;
    _HKLazyLoader<bool> _futureMigrationsEnabled;
    _HKLazyLoader<bool> _supportsCloudSync;
    _HKLazyLoader<bool> _supportsCloudSyncSharding;
    _HKLazyLoader<bool> _supportsCloudSyncStagingShard;
}


@property (nonatomic, getter=isIRN2FeatureFlagEnabled) BOOL IRN2FeatureFlagEnabled; // ivar: _IRN2FeatureFlagEnabled
@property (nonatomic) BOOL collectsCalorimetry; // ivar: _collectsCalorimetry
@property (nonatomic) BOOL collectsData; // ivar: _collectsData
@property (copy, nonatomic) NSString *currentDeviceClass; // ivar: _currentDeviceClass
@property (readonly, copy, nonatomic) NSString *currentDeviceDisplayName;
@property (readonly, copy, nonatomic) NSString *currentDeviceManufacturer;
@property (copy, nonatomic) NSString *currentDeviceName; // ivar: _currentDeviceName
@property (readonly, copy, nonatomic) NSString *currentDeviceProductType;
@property (readonly, copy, nonatomic) NSString *currentDeviceRegionCode;
@property (readonly, nonatomic) NSUInteger currentDiskSpaceAvailable;
@property (readonly, nonatomic) NSDictionary *currentDiskUsage;
@property (readonly, copy, nonatomic) NSString *currentInternalDeviceModel;
@property (copy, nonatomic) NSString *currentOSBuild; // ivar: _currentOSBuild
@property (readonly, copy, nonatomic) NSString *currentOSName;
@property (copy, nonatomic) NSString *currentOSVersion; // ivar: _currentOSVersion
@property (nonatomic) ? currentOSVersionStruct; // ivar: _currentOSVersionStruct
@property (retain, nonatomic) NSDictionary *featureRequirementOverrides; // ivar: _featureRequirementOverrides
@property (nonatomic) BOOL futureMigrationsEnabled;
@property (nonatomic) BOOL hasTelephonyCapability; // ivar: _hasTelephonyCapability
@property (nonatomic) BOOL healthAppHidden; // ivar: _healthAppHidden
@property (nonatomic) BOOL isAppleInternalInstall; // ivar: _isAppleInternalInstall
@property (nonatomic) BOOL isAppleWatch; // ivar: _isAppleWatch
@property (nonatomic) BOOL isCompanionCapable; // ivar: _isCompanionCapable
@property (readonly, nonatomic) BOOL isCurrentDeviceN2XA;
@property (readonly, nonatomic) BOOL isCurrentDeviceSeries3OrOlder;
@property (nonatomic) BOOL isDeviceSupported; // ivar: _isDeviceSupported
@property (nonatomic) BOOL isRunningSeedBuild; // ivar: _isRunningSeedBuild
@property (nonatomic) BOOL isRunningStoreDemoMode;
@property (nonatomic) BOOL isTestingDevice; // ivar: _isTestingDevice
@property (nonatomic) BOOL journalDatabaseFeatureEnabled; // ivar: _journalDatabaseFeatureEnabled
@property (readonly, copy, nonatomic) NSTimeZone *localTimeZone;
@property (readonly, nonatomic, getter=isManateeEnabledForHSA2Accounts) BOOL manateeEnabledForHSA2Accounts;
@property (nonatomic) BOOL ontologyIndexingEnabled; // ivar: _ontologyIndexingEnabled
@property (nonatomic) BOOL ontologyIndexingRequiresAccounts; // ivar: _ontologyIndexingRequiresAccounts
@property (nonatomic) BOOL performsAutomaticConceptIndexing; // ivar: _performsAutomaticConceptIndexing
@property (nonatomic) BOOL performsAutomaticUserDomainConceptProcessing; // ivar: _performsAutomaticUserDomainConceptProcessing
@property (nonatomic) BOOL performsWorkoutCondensation; // ivar: _performsWorkoutCondensation
@property (nonatomic) BOOL runningInStoreDemoModeF201;
@property (nonatomic) BOOL schedulesXPCAlarms; // ivar: _schedulesXPCAlarms
@property (nonatomic) BOOL showSensitiveLogItems; // ivar: _showSensitiveLogItems
@property (nonatomic) BOOL supportsAWDMetricSubmission; // ivar: _supportsAWDMetricSubmission
@property (readonly, nonatomic) BOOL supportsActiveQueryDaemonTransactions;
@property (nonatomic) BOOL supportsActivitySharing; // ivar: _supportsActivitySharing
@property (nonatomic) BOOL supportsAppSubscriptions; // ivar: _supportsAppSubscriptions
@property (readonly, nonatomic) BOOL supportsCachedStatisticsCollectionQueries;
@property (nonatomic) BOOL supportsCloudSync;
@property (nonatomic) BOOL supportsCloudSyncSharding;
@property (nonatomic) BOOL supportsCloudSyncStagingShard;
@property (nonatomic) BOOL supportsComputedUserCharacteristicCaching; // ivar: _supportsComputedUserCharacteristicCaching
@property (readonly, nonatomic) BOOL supportsEED;
@property (readonly, nonatomic) BOOL supportsFeatureAvailabilityAssets; // ivar: _supportsFeatureAvailabilityAssets
@property (readonly, nonatomic) BOOL supportsHFDInSQLite;
@property (nonatomic) BOOL supportsHeartRateDataCollection; // ivar: _supportsHeartRateDataCollection
@property (nonatomic) BOOL supportsNanoSync; // ivar: _supportsNanoSync
@property (nonatomic) BOOL supportsOntology; // ivar: _supportsOntology
@property (nonatomic) BOOL supportsOntologyDatabaseUpdates; // ivar: _supportsOntologyDatabaseUpdates
@property (nonatomic) BOOL supportsPeriodicCountryMonitoring; // ivar: _supportsPeriodicCountryMonitoring
@property (nonatomic) BOOL supportsSampleExpiration; // ivar: _supportsSampleExpiration
@property (nonatomic) BOOL supportsSwimmingWorkoutSessions;
@property (nonatomic) BOOL supportsWorkoutRouteSmoothing; // ivar: _supportsWorkoutRouteSmoothing
@property (nonatomic) BOOL supportsWorkouts; // ivar: _supportsWorkouts
@property (nonatomic) BOOL tinkerModeEnabled; // ivar: _tinkerModeEnabled
@property (readonly, nonatomic) NSUInteger totalDiskCapacity;
@property (copy, nonatomic) NSString *unitTest_deviceRegionCode; // ivar: _unitTest_deviceRegionCode


+(BOOL)_condensesHeartRateSamples;
+(BOOL)_hasCompletedBuddyWithVersion:(NSInteger)arg0 ;
+(BOOL)_isForceBuddyEnabled;
+(BOOL)_isProductTypeSeries3OrOlder:(id)arg0 ;
+(BOOL)_shouldShowBuddy;
+(BOOL)activePairedWatchHasSmartFitnessCoaching;
+(BOOL)activePairedWatchSupportsBradycardiaDetection;
+(BOOL)activePairedWatchSupportsHeartRateMotionContexts;
+(BOOL)allPairedWatchesSupportBradycardiaDetection;
+(BOOL)allPairedWatchesSupportHeartRateMotionContexts;
+(BOOL)anyPairedWatchHasFlightsClimbedCapability;
+(BOOL)hasCompletedBuddyWithVersion:(NSInteger)arg0 ;
+(BOOL)hasPairedWatch;
+(BOOL)isManateeEnabledByDefault;
+(BOOL)isiPod;
+(BOOL)shouldShowBuddy;
+(id)currentDeviceReleaseType;
+(id)sharedBehavior;
+(int)nanoSyncProtocolVersionForCompanionSystemBuildVersion:(id)arg0 ;
+(int)nanoSyncProtocolVersionForWatchSystemBuildVersion:(id)arg0 ;
+(void)_setHasCompletedBuddyWithVersion:(NSInteger)arg0 ;
+(void)resetSharedBehavior;
+(void)setForceBuddy:(BOOL)arg0 ;
+(void)setHasCompletedBuddyWithVersion:(NSInteger)arg0 ;
+(void)setSharedBehavior:(id)arg0 ;
-(BOOL)_hasProductTypePrefix:(id)arg0 ;
-(id)currentDeviceReleaseType;
-(id)init;


@end


#endif
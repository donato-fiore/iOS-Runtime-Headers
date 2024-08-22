// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDPROFILE_H
#define HDPROFILE_H

@class NSString, NSDictionary, HKObserverSet, NSURL, HKProfileIdentifier, HDAssertionManager;
@protocol HKFeatureAvailabilityHealthDataSource, HKAnalyticsHealthDataSource, HDHealthDaemonReadyObserver, OS_dispatch_group, HDHealthDaemon, HDSyncEngine;

#import <Foundation/Foundation.h>

#import "HDDatabase.h"
#import "HDAuthorizationManager.h"
#import "HDOntologyDatabase.h"
#import "HDOntologyConceptManager.h"
#import "HDConceptIndexManager.h"
#import "HDBackgroundObservationServerExtensionManager.h"
#import "HDDaemonSyncEngine.h"
#import "HDActivityCacheManager.h"
#import "HDAgeGatingManager.h"
#import "HDRestorableAlarmScheduler.h"
#import "HDAppSubscriptionManager.h"
#import "HDAttachmentManager.h"
#import "HDAWDSubmissionManager.h"
#import "HDCloudSyncManager.h"
#import "HDContributorManager.h"
#import "HDCurrentActivitySummaryHelper.h"
#import "HDDaemon.h"
#import "HDDataCollectionManager.h"
#import "HDDataManager.h"
#import "HDDataProvenanceManager.h"
#import "HDDeviceManager.h"
#import "HDFeatureSettingsManager.h"
#import "HDFitnessMachineManager.h"
#import "HDHealthRecordsAccountExistenceNotifier.h"
#import "HDMedicalIDDataManager.h"
#import "HDMetadataManager.h"
#import "HDMigrationManager.h"
#import "HDNanoSyncManager.h"
#import "HDNotificationManager.h"
#import "HDOnboardingCompletionManager.h"
#import "HDPeriodicCountryMonitor.h"
#import "HDServiceConnectionManager.h"
#import "HDHealthServiceManager.h"
#import "HDSharedSummaryManager.h"
#import "HDSharingAuthorizationManager.h"
#import "HDSummarySharingEntryManager.h"
#import "HDSourceManager.h"
#import "HDSourceOrderManager.h"
#import "HDSummarySharingEntryIDSManager.h"
#import "HDSyncIdentityManager.h"
#import "HDTinkerPrivacyAlertCoordinator.h"
#import "HDUnitPreferencesManager.h"
#import "HDUserCharacteristicsManager.h"
#import "HDUserDomainConceptManager.h"
#import "HDWorkoutCondenser.h"
#import "HDWorkoutManager.h"

@interface HDProfile : NSObject <HKFeatureAvailabilityHealthDataSource, HKAnalyticsHealthDataSource, HDHealthDaemonReadyObserver>

 {
    HDDatabase *_database;
    HDAuthorizationManager *_authorizationManager;
    HDOntologyDatabase *_ontologyDatabase;
    HDOntologyConceptManager *_ontologyManager;
    HDConceptIndexManager *_conceptIndexManager;
    HDBackgroundObservationServerExtensionManager *_extensionManager;
    NSString *_directoryPath;
    HDDaemonSyncEngine *_syncEngine;
    NSDictionary *_profileExtensionsByIdentifier;
    os_unfair_lock_s _profileLock;
    os_unfair_lock_s _profileObserverLock;
    NSObject<OS_dispatch_group> *_profileObserverGroup;
    BOOL _hasNotifiedProfileInitializedObservers;
    BOOL _hasNotifiedProfileReadyObservers;
    HKObserverSet *_profileInitializedObservers;
    HKObserverSet *_profileReadyObservers;
}


@property (readonly, nonatomic) HDActivityCacheManager *activityCacheManager;
@property (readonly, nonatomic) HDAgeGatingManager *ageGatingManager;
@property (readonly, nonatomic) HDRestorableAlarmScheduler *alarmScheduler; // ivar: _alarmScheduler
@property (readonly, nonatomic) HDAppSubscriptionManager *appSubscriptionManager;
@property (readonly, nonatomic) HDAttachmentManager *attachmentManager;
@property (readonly, nonatomic) HDAuthorizationManager *authorizationManager;
@property (readonly, nonatomic) HDAWDSubmissionManager *awdSubmissionManager; // ivar: _awdSubmissionManager
@property (readonly, nonatomic) HDCloudSyncManager *cloudSyncManager; // ivar: _cloudSyncManager
@property (readonly, nonatomic) HDConceptIndexManager *conceptIndexManager;
@property (readonly, nonatomic) HDContributorManager *contributorManager; // ivar: _contributorManager
@property (readonly, nonatomic) HDCurrentActivitySummaryHelper *currentActivitySummaryHelper;
@property (readonly, weak, nonatomic) HDDaemon *daemon; // ivar: _daemon
@property (readonly, nonatomic) HDDataCollectionManager *dataCollectionManager;
@property (readonly, nonatomic) HDDataManager *dataManager; // ivar: _dataManager
@property (readonly, nonatomic) HDDataProvenanceManager *dataProvenanceManager; // ivar: _dataProvenanceManager
@property (readonly, nonatomic) HDDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HDDeviceManager *deviceManager; // ivar: _deviceManager
@property (readonly, copy, nonatomic) NSString *directoryPath;
@property (readonly, copy, nonatomic) NSURL *directoryURL;
@property (readonly, nonatomic) HDFeatureSettingsManager *featureSettingsManager; // ivar: _featureSettingsManager
@property (readonly, nonatomic) HDFitnessMachineManager *fitnessMachineManager;
@property (readonly, nonatomic) BOOL hasNotifiedProfileReadyObservers;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<HDHealthDaemon> *healthDaemon;
@property (readonly, nonatomic) HDHealthRecordsAccountExistenceNotifier *healthRecordsAccountExistenceNotifier; // ivar: _healthRecordsAccountExistenceNotifier
@property (readonly, nonatomic) HDMedicalIDDataManager *medicalIDDataManager; // ivar: _medicalIDDataManager
@property (readonly, copy, nonatomic) NSString *medicalIDDirectoryPath; // ivar: _medicalIDDirectoryPath
@property (readonly, nonatomic) HDMetadataManager *metadataManager; // ivar: _metadataManager
@property (readonly, nonatomic) HDMigrationManager *migrationManager; // ivar: _migrationManager
@property (readonly, nonatomic) HDNanoSyncManager *nanoSyncManager;
@property (readonly, nonatomic) HDNotificationManager *notificationManager;
@property (readonly, nonatomic) HDOnboardingCompletionManager *onboardingCompletionManager; // ivar: _onboardingCompletionManager
@property (readonly, nonatomic) HDOntologyConceptManager *ontologyConceptManager;
@property (readonly, nonatomic) HDOntologyDatabase *ontologyDatabase;
@property (readonly, nonatomic) HDPeriodicCountryMonitor *periodicCountryMonitor; // ivar: _periodicCountryMonitor
@property (readonly, nonatomic) HKProfileIdentifier *profileIdentifier;
@property (readonly, copy, nonatomic) HKProfileIdentifier *profileIdentifier; // ivar: _profileIdentifier
@property (readonly, nonatomic) NSInteger profileType;
@property (readonly, nonatomic) BOOL requiresWeakRetention;
@property (readonly, nonatomic) HDServiceConnectionManager *serviceConnectionManager;
@property (readonly, nonatomic) HDHealthServiceManager *serviceManager;
@property (readonly, nonatomic) HDAssertionManager *sessionAssertionManager;
@property (readonly, nonatomic) HDSharedSummaryManager *sharedSummaryManager; // ivar: _sharedSummaryManager
@property (readonly, nonatomic) HDSharingAuthorizationManager *sharingAuthorizationManager; // ivar: _sharingAuthorizationManager
@property (readonly, nonatomic) HDSummarySharingEntryManager *sharingEntryManager;
@property (readonly, nonatomic) HDSourceManager *sourceManager; // ivar: _sourceManager
@property (readonly, nonatomic) HDSourceOrderManager *sourceOrderManager; // ivar: _sourceOrderManager
@property (readonly, nonatomic) HDSummarySharingEntryIDSManager *summarySharingEntryIDSManager;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HDSyncEngine> *syncEngine;
@property (readonly, nonatomic) HDSyncIdentityManager *syncIdentityManager; // ivar: _syncIdentityManager
@property (nonatomic) BOOL testModeEnabled; // ivar: _testModeEnabled
@property (readonly, nonatomic) HDTinkerPrivacyAlertCoordinator *tinkerPrivacyAlertCoordinator;
@property (readonly, nonatomic) HDUnitPreferencesManager *unitPreferencesManager; // ivar: _unitPreferencesManager
@property (readonly, nonatomic) HDUserCharacteristicsManager *userCharacteristicsManager; // ivar: _userCharacteristicsManager
@property (readonly, nonatomic) HDUserDomainConceptManager *userDomainConceptManager; // ivar: _userDomainConceptManager
@property (readonly, nonatomic) HDWorkoutCondenser *workoutCondenser;
@property (readonly, nonatomic) HDWorkoutManager *workoutManager;


+(NSUInteger)_concurrentDatabaseReaderLimitForProfileType:(NSInteger)arg0 ;
-(BOOL)fetchDisplayFirstName:(*id)arg0 lastName:(*id)arg1 error:(*id)arg2 ;
-(BOOL)setDisplayFirstName:(id)arg0 lastName:(id)arg1 error:(*id)arg2 ;
-(BOOL)setDisplayImageData:(id)arg0 error:(*id)arg1 ;
-(BOOL)setPairedGuardianParticipant:(id)arg0 error:(*id)arg1 ;
-(BOOL)setPairedGuardianUserInfo:(id)arg0 error:(*id)arg1 ;
-(id)_newAWDSubmissionManager;
-(id)_newCloudSyncManager;
-(id)_newContributorManager;
-(id)_newDatabase;
-(id)_newUserCharacteristicsManager;
-(id)ageWithCurrentDate:(id)arg0 error:(*id)arg1 ;
-(id)allProfileExtensions;
-(id)biologicalSexWithError:(*id)arg0 ;
-(id)featureAvailabilityProviderForIdentifier:(id)arg0 ;
-(id)featureAvailabilityProvidingForFeatureIdentifier:(id)arg0 ;
-(id)featureStatusProviderForIdentifier:(id)arg0 ;
-(id)fetchDisplayImageDataWithError:(*id)arg0 ;
-(id)initWithDirectoryPath:(id)arg0 medicalIDDirectoryPath:(id)arg1 daemon:(id)arg2 profileIdentifier:(id)arg3 ;
-(id)isImproveHealthRecordsAllowedWithError:(*id)arg0 ;
-(id)pairedGuardianParticipantWithError:(*id)arg0 ;
-(id)pairedGuardianUserInfoWithError:(*id)arg0 ;
-(id)profileExtensionWithIdentifier:(id)arg0 ;
-(id)profileExtensionsConformingToProtocol:(id)arg0 ;
-(id)requirementSatisfactionOverridesDataSource;
-(id)watchLowPowerModeDataSource;
-(id)wristDetectionSettingManager;
-(void)_notifyProfileReadyObservers;
-(void)awakeFromDisk;
-(void)daemonReady:(id)arg0 ;
-(void)invalidateAndWaitWithReason:(id)arg0 ;
-(void)notifyProfileInitializedObservers;
-(void)obliterateAndTerminateWithOptions:(NSUInteger)arg0 reason:(id)arg1 completion:(id)arg2 ;
-(void)obliterateWithOptions:(NSUInteger)arg0 reason:(id)arg1 ;
-(void)prepareForObliterationWithReason:(id)arg0 ;
-(void)registerProfileInitializedObserver:(id)arg0 queue:(id)arg1 ;
-(void)registerProfileReadyObserver:(id)arg0 queue:(id)arg1 ;
-(void)terminationCleanup;
-(void)triggerDeletion;


@end


#endif
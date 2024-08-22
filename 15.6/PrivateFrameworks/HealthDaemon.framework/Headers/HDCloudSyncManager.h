// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCMANAGER_H
#define HDCLOUDSYNCMANAGER_H

@class HDAssertion, NSDate, HKObserverSet, NSString;
@protocol HDContentProtectionObserver, HDDatabaseProtectedDataObserver, HDProfileReadyObserver, HDAnalyticsSubmissionCoordinatorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDCloudSyncOwnerIdentifierManager.h"
#import "HDProfile.h"
#import "HDCloudSyncSharedSummaryManager.h"

@interface HDCloudSyncManager : NSObject <HDContentProtectionObserver, HDDatabaseProtectedDataObserver, HDProfileReadyObserver, HDAnalyticsSubmissionCoordinatorDelegate>

 {
    HDAssertion *_preparedDatabaseAccessibilityAssertion;
    os_unfair_lock_s _lock;
    NSDate *_lock_lastSuccessfulPullDate;
    NSDate *_lock_lastSuccessfulPushDate;
    NSDate *_lock_lastDataUploadRequestStartDate;
    NSDate *_lock_lastDataUploadRequestCompletionDate;
    NSInteger _lock_uploadRequestStatus;
    HKObserverSet *_observers;
    NSInteger _inProgressSyncCount;
}


@property (readonly) NSInteger bytesPerChangeRecordAssetThreshold;
@property (readonly) NSInteger bytesPerChangeRecordAssetThresholdHardLimit;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *lastSuccessfulPullDate;
@property (readonly, nonatomic) NSDate *lastSuccessfulPushDate;
@property (readonly, nonatomic) HDCloudSyncOwnerIdentifierManager *ownerIdentifierManager; // ivar: _ownerIdentifierManager
@property (readonly) HDAssertion *preparedDatabaseAccessibilityAssertion;
@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) HDCloudSyncSharedSummaryManager *sharedSummaryManager; // ivar: _sharedSummaryManager
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsRebase; // ivar: _supportsRebase


+(void)_containerIdentifiersWithEncryptionSupportEnabled:(BOOL)arg0 accountManateeEnabled:(BOOL)arg1 internalSettingManateeEnabled:(BOOL)arg2 resultHandler:(id)arg3 ;
-(BOOL)canPerformCloudSyncWithError:(*id)arg0 ;
-(BOOL)persistRestoreCompletionDate:(id)arg0 withError:(*id)arg1 ;
-(BOOL)setShareOwnerParticipant:(id)arg0 error:(*id)arg1 ;
-(id)_containerWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)disableAndDeleteAllSyncDataWithCompletion:(id)arg0 ;
-(id)fetchDescriptionWithContext:(id)arg0 completion:(id)arg1 ;
-(id)fetchShareParticipantsForSharingType:(NSUInteger)arg0 completion:(id)arg1 ;
-(id)fetchSharingStatusForCurrentAppleIDWithOwnerEmailAddress:(id)arg0 completion:(id)arg1 ;
-(id)initWithProfile:(id)arg0 ;
-(id)lastPushForwardProgressDate;
-(id)leaveSharesWithCompletion:(id)arg0 ;
-(id)lookupParticipantWithIdentityLookUpInfo:(id)arg0 completion:(id)arg1 ;
-(id)prepareForSharingWithCompletion:(id)arg0 ;
-(id)removeAllParticipantsForSharingType:(NSUInteger)arg0 completion:(id)arg1 ;
-(id)removeParticipants:(id)arg0 fromSharesWithCompletion:(id)arg1 ;
-(id)resetWithContext:(id)arg0 completion:(id)arg1 ;
-(id)setupSharingToAccountWithIdentityLookupInfo:(id)arg0 requireExistingRelationship:(BOOL)arg1 requireZoneDeviceMode:(id)arg2 completion:(id)arg3 ;
-(id)shareOwnerParticipantWithError:(*id)arg0 ;
-(id)syncMedicalIDDataWithContext:(id)arg0 completion:(id)arg1 ;
-(id)syncSessionForSyncStore:(id)arg0 reason:(id)arg1 delegate:(id)arg2 accessibilityAssertion:(id)arg3 excludedStores:(id)arg4 ;
-(id)syncWithContext:(id)arg0 completion:(id)arg1 ;
-(void)_scheduleResetReceivedCloudSyncAnchorsAndRebaseForHFDRecovery;
-(void)acceptShare:(id)arg0 completion:(id)arg1 ;
-(void)accountDeviceToDeviceEncryptionAvailabilityStatusWithCompletion:(id)arg0 ;
-(void)addObserver:(id)arg0 queue:(id)arg1 ;
-(void)cloudSyncRepositoriesWithCompletion:(id)arg0 ;
-(void)configureForShareSetupMetadata:(id)arg0 acceptedShares:(id)arg1 completion:(id)arg2 ;
-(void)contentProtectionStateChanged:(NSInteger)arg0 previousState:(NSInteger)arg1 ;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)dealloc;
-(void)didCompleteSuccessfulPullOfUpdateWithDate:(id)arg0 ;
-(void)didCompleteSuccessfulPullWithDate:(id)arg0 ;
-(void)didCompleteSuccessfulPushWithDate:(id)arg0 ;
-(void)fetchCloudKitAccountInfoWithCompletion:(id)arg0 ;
-(void)fetchServerPreferredPushEnvironmentWithCompletion:(id)arg0 ;
-(void)fetchSyncStatusWithCompletion:(id)arg0 ;
-(void)prepareForPeriodicSync;
-(void)profileDidBecomeReady:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)reportDailyAnalyticsWithCoordinator:(id)arg0 completion:(id)arg1 ;
-(void)requestDataUploadWithCompletion:(id)arg0 ;
-(void)subscribeToDataAvailableNotificationsWithCompletion:(id)arg0 ;
-(void)subscribeToDataUploadRequestsWithCompletion:(id)arg0 ;
-(void)updateErrorRequiringUserAction:(id)arg0 ;


@end


#endif
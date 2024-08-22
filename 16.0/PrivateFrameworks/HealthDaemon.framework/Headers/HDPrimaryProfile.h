// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDPRIMARYPROFILE_H
#define HDPRIMARYPROFILE_H

@class HDAssertionManager;


#import "HDProfile.h"
#import "HDAgeGatingManager.h"
#import "HDAppSubscriptionManager.h"
#import "HDAWDSubmissionManager.h"
#import "HDCurrentActivitySummaryHelper.h"
#import "HDDataCollectionManager.h"
#import "HDFitnessMachineManager.h"
#import "HDNanoSyncManager.h"
#import "HDNotificationManager.h"
#import "HDPeriodicCountryMonitor.h"
#import "HDHealthServiceManager.h"
#import "HDRestorableAlarmScheduler.h"
#import "HDServiceConnectionManager.h"
#import "HDWorkoutManager.h"
#import "HDWorkoutCondenser.h"
#import "HDDemoDataManager.h"
#import "HDTinkerPrivacyAlertCoordinator.h"
#import "HDSummarySharingEntryManager.h"
#import "HDSummarySharingEntryIDSManager.h"
#import "HDAttachmentManager.h"

@interface HDPrimaryProfile : HDProfile {
    HDAgeGatingManager *_ageGatingManager;
    HDAppSubscriptionManager *_appSubscriptionManager;
    HDAWDSubmissionManager *_awdSubmissionManager;
    HDCurrentActivitySummaryHelper *_currentActivitySummaryHelper;
    HDDataCollectionManager *_dataCollectionManager;
    HDFitnessMachineManager *_fitnessMachineManager;
    HDNanoSyncManager *_nanoSyncManager;
    HDNotificationManager *_notificationManager;
    HDPeriodicCountryMonitor *_periodicCountryMonitor;
    HDHealthServiceManager *_serviceManager;
    HDRestorableAlarmScheduler *_alarmScheduler;
    HDServiceConnectionManager *_serviceConnectionManager;
    HDAssertionManager *_sessionAssertionManager;
    HDWorkoutManager *_workoutManager;
    HDWorkoutCondenser *_workoutCondenser;
    HDDemoDataManager *_demoDataManager;
    HDTinkerPrivacyAlertCoordinator *_tinkerPrivacyAlertCoordinator;
    HDSummarySharingEntryManager *_summarySharingEntryManager;
    HDSummarySharingEntryIDSManager *_summarySharingEntryIDSManager;
    HDAttachmentManager *_attachmentManager;
}




-(id)_initWithDirectoryPath:(id)arg0 medicalIDDirectoryPath:(id)arg1 daemon:(id)arg2 profileIdentifier:(id)arg3 ;
-(id)_newAWDSubmissionManager;
-(id)_newNanoSyncManager;
-(id)_newPeriodicCountryMonitorWithNanoSyncManager:(id)arg0 ;
-(id)_newWorkoutManager;
-(id)activityCacheManager;
-(id)ageGatingManager;
-(id)alarmScheduler;
-(id)appSubscriptionManager;
-(id)attachmentManager;
-(id)awdSubmissionManager;
-(id)currentActivitySummaryHelper;
-(id)dataCollectionManager;
-(id)fitnessMachineManager;
-(id)initWithDirectoryPath:(id)arg0 medicalIDDirectoryPath:(id)arg1 daemon:(id)arg2 ;
-(id)nanoSyncManager;
-(id)notificationManager;
-(id)periodicCountryMonitor;
-(id)serviceConnectionManager;
-(id)serviceManager;
-(id)sessionAssertionManager;
-(id)sharingEntryManager;
-(id)summarySharingEntryIDSManager;
-(id)tinkerPrivacyAlertCoordinator;
-(id)workoutCondenser;
-(id)workoutManager;
-(void)terminationCleanup;
-(void)unitTest_setNanoSyncManager:(id)arg0 ;
-(void)unitTest_setServiceManager:(id)arg0 ;


@end


#endif
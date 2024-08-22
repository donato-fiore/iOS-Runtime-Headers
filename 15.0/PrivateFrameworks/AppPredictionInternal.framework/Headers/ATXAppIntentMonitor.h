// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXAPPINTENTMONITOR_H
#define ATXAPPINTENTMONITOR_H

@class NSMutableSet, PETScalarEventTracker, PETDistributionEventTracker, _PASSimpleCoalescingTimer, NSUserDefaults;
@protocol ATXPredictionContextBuilderProtocol, OS_dispatch_queue, _CDLocalContext;

#import <Foundation/Foundation.h>

#import "_ATXAppLaunchHistogramManager.h"
#import "_ATXDuetHelper.h"
#import "_ATXAppInfoManager.h"
#import "_ATXAppLaunchSequenceManager.h"
#import "_ATXDataStore.h"
#import "ATXInternalAppRegistrationNotification.h"
#import "ATXSafariIntentEventQualityFilter.h"

@interface ATXAppIntentMonitor : NSObject {
    _ATXAppLaunchHistogramManager *_appLaunchHistogramManager;
    _ATXDuetHelper *_duetHelper;
    _ATXAppInfoManager *_appInfoManager;
    _ATXAppLaunchSequenceManager *_appActionLaunchSequenceManager;
    _ATXDataStore *_dataStore;
    id<ATXPredictionContextBuilderProtocol> *_predictionContextBuilder;
    NSObject<OS_dispatch_queue> *_appIntentHistoryQueue;
    id<_CDLocalContext> *_context;
    NSMutableSet *_registrations;
    NSObject<OS_dispatch_queue> *_donationQueue;
    NSUInteger deletionHandlerToken;
    PETScalarEventTracker *_donatedActionsTracker;
    PETDistributionEventTracker *_donatedActionInCacheTracker;
    ATXInternalAppRegistrationNotification *_appRegistrationListener;
    _PASSimpleCoalescingTimer *_coalescedIntentOrActivityDeletion;
    NSUserDefaults *_userDefaults;
    ATXSafariIntentEventQualityFilter *_safariIntentQualityFilter;
}




-(BOOL)_isWhitelistedDaemonDonationBundleId:(id)arg0 ;
-(BOOL)sessionStartedBeforeDonationForStartDate:(id)arg0 latestDonationDate:(id)arg1 ;
-(BOOL)shouldAcceptMessageDonation:(id)arg0 ;
-(BOOL)shouldProcessIntentDonationsForSessionStartDate:(id)arg0 ;
-(BOOL)shouldProcessNSUADonationsForSessionStartDate:(id)arg0 ;
-(id)_appActionLaunchSequenceManager;
-(id)adjustedEndDateForOneSecondFlooringWithAppSessionEndDate:(id)arg0 ;
-(id)adjustedEndDateForTombstoneStreamQuery:(id)arg0 ;
-(id)adjustedStartDateForOneSecondFlooringWithAppSessionStartDate:(id)arg0 ;
-(id)adjustedStartDateForTombstoneStreamQuery:(id)arg0 ;
-(id)deletionHighWaterMarkForDefaultsKey:(id)arg0 currentDate:(id)arg1 ;
-(id)fetchIntentEventsForAppSessionWithBundleId:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(id)fetchNSUAEventsForAppSessionWithBundleId:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(id)init;
-(id)initWithAppLaunchHistogramManager:(id)arg0 appInfoManager:(id)arg1 appActionLaunchSequenceManager:(id)arg2 dataStore:(id)arg3 ;
-(id)initWithAppLaunchHistogramManager:(id)arg0 appInfoManager:(id)arg1 appActionLaunchSequenceManager:(id)arg2 duetHelper:(id)arg3 dataStore:(id)arg4 predictionContextBuilder:(id)arg5 userDefaults:(id)arg6 safariIntentFilter:(id)arg7 ;
-(void)_displayDonationOnLockscreenWithAction:(id)arg0 ;
-(void)_handleCompletedIntentForForUUID:(id)arg0 atxIntentSource:(NSInteger)arg1 ;
-(void)_listenToActivityStream;
-(void)_listenToIntentStream;
-(void)_logIntentPredictionsForIntentEvent:(id)arg0 context:(id)arg1 ;
-(void)_respondToIntentStreamChangingWithContext:(id)arg0 ;
-(void)_syncForTests;
-(void)_updateActionPredictionHistogramsForIntentEvent:(id)arg0 weight:(float)arg1 context:(id)arg2 ;
-(void)_updateActionPredictionHistogramsRemovingActionUUIDs:(id)arg0 ;
-(void)coalescedHandleIntentOrActivityDeletion;
-(void)dealloc;
-(void)handleAppRegistrationForBundleIds:(id)arg0 ;
-(void)handleDonationImmediatelyForBundleId:(id)arg0 intentType:(id)arg1 contextValue:(id)arg2 isDonatedBySiri:(BOOL)arg3 isWhitelistedDaemonDonationBundleId:(BOOL)arg4 ;
-(void)handleIntentOrActivityDeletion;
-(void)processIntentDonationsDuringAppSessionForBundleId:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 globals:(id)arg3 ;
-(void)processNSUADonationsDuringAppSessionForBundleId:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 globals:(id)arg3 ;
-(void)removeDonationFromLockscreenForAction:(id)arg0 ;
-(void)setDeletionHighWaterMark:(id)arg0 defaultsKey:(id)arg1 ;
-(void)start;
-(void)stop;
-(void)updateActionPredictionPipelineForAppSession:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(void)updateActionPredictionPipelineForIntentEvent:(id)arg0 weight:(float)arg1 appSessionStartDate:(id)arg2 appSessionEndDate:(id)arg3 ;
-(void)updateActionPredictionPipelineForIntentEvent:(id)arg0 weight:(float)arg1 appSessionStartDate:(id)arg2 appSessionEndDate:(id)arg3 context:(id)arg4 ;
-(void)updateActionPredictionSlotResolutionForIntentEvent:(id)arg0 weight:(float)arg1 prevLocationUUID:(id)arg2 locationUUID:(id)arg3 currentMotionType:(NSInteger)arg4 appSessionStartDate:(id)arg5 appSessionEndDate:(id)arg6 geohash:(NSInteger)arg7 coarseGeohash:(NSInteger)arg8 ;


@end


#endif
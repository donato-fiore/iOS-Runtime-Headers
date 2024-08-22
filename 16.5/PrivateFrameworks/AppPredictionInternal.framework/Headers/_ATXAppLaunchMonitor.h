// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ATXAPPLAUNCHMONITOR_H
#define _ATXAPPLAUNCHMONITOR_H

@class _PASQueueLock, _PASLock, PETScalarEventTracker, NSUserDefaults, NSSet;
@protocol OS_dispatch_queue, ATXPETEventTracker2Protocol;

#import <Foundation/Foundation.h>

#import "ATXAppClipUsageDuetContextUpdateListener.h"
#import "_ATXAppIconState.h"

@interface _ATXAppLaunchMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_appLaunchHistoryQueue;
    NSObject<OS_dispatch_queue> *_logQueue;
    _PASQueueLock *_history;
    _PASLock *_cdContext;
    PETScalarEventTracker *_updateLaunchHistoryTracker;
    NSUserDefaults *_userDefaults;
    ATXAppClipUsageDuetContextUpdateListener *_appClipChangeListener;
    id<ATXPETEventTracker2Protocol> *_tracker;
    _ATXAppIconState *_appIconState;
    NSSet *_predictionUpdateBlacklist;
}




+(id)predictionUpdateBlacklistedBundleIds;
+(int)petClipCaptureTypeFromDuetClipLaunchReason:(int)arg0 ;
+(void)_logAppLaunch:(id)arg0 from:(NSUInteger)arg1 ;
+(void)_logPredictionForBundleId:(id)arg0 poweringAppClipBundleId:(id)arg1 urlHash:(id)arg2 isClip:(BOOL)arg3 appLaunchReason:(id)arg4 appClipLaunchReason:(int)arg5 consumerType:(NSUInteger)arg6 consumerSubType:(unsigned char)arg7 context:(id)arg8 ;
+(void)mergeAppLaunches:(id)arg0 andBacklightTransitions:(id)arg1 callingAppLaunchBlock:(id)arg2 ;
-(BOOL)isValidAppLaunchBundleId:(id)arg0 ;
-(id)appIconState;
-(id)appInfoManager;
-(id)appLaunchHistogramManager;
-(id)appLaunchSequenceManager;
-(id)dailyDose;
-(id)init;
-(id)initWithAppInfoManager:(id)arg0 appLaunchHistogramManager:(id)arg1 appLaunchSequenceManager:(id)arg2 appDailyDose:(id)arg3 duetHelper:(id)arg4 contextBuilder:(id)arg5 tracker:(id)arg6 ;
-(id)initWithAppInfoManager:(id)arg0 appLaunchHistogramManager:(id)arg1 appLaunchSequenceManager:(id)arg2 appDailyDose:(id)arg3 duetHelper:(id)arg4 contextBuilder:(id)arg5 tracker:(id)arg6 predictionUpdateBlacklist:(id)arg7 heroPoiManager:(id)arg8 ;
-(id)initWithInMemoryStore;
-(id)stopDeltaRecording;
-(void)_addLaunchWithLockWitness:(id)arg0 bundleId:(id)arg1 date:(id)arg2 timeZone:(id)arg3 reason:(id)arg4 context:(id)arg5 ;
-(void)_logAppLaunchOverallCaptureRateForBundleId:(id)arg0 launchReason:(id)arg1 ;
-(void)_logAppPanelCaptureRateForBundleId:(id)arg0 ;
-(void)_logAppPanelLaunchRatioForBundleId:(id)arg0 launchReason:(id)arg1 ;
-(void)_syncForTests;
-(void)_updateAppIconStateForTests:(id)arg0 ;
-(void)addLaunchWithBundleId:(id)arg0 date:(id)arg1 timeZone:(id)arg2 reason:(id)arg3 ;
-(void)clearHistory;
-(void)clearIntentHistogramHistory;
-(void)dealloc;
-(void)handleAppOrClipLaunchNotificationForBundleId:(id)arg0 poweringAppClipBundleId:(id)arg1 urlHash:(id)arg2 isClip:(BOOL)arg3 appLaunchReason:(id)arg4 appClipLaunchReason:(int)arg5 date:(id)arg6 ;
-(void)handleBacklightChangeNotificationWithValue:(int)arg0 date:(id)arg1 ;
-(void)logAppLaunchForBundleId:(id)arg0 launchReason:(id)arg1 ;
-(void)processDonationsForPreviousAppSessionEndIfNeeded;
-(void)registerForAppChange;
-(void)registerForAppClipLaunch;
-(void)registerForBacklightChange;
-(void)start;
-(void)startDeltaRecording;
-(void)stop;
-(void)swapDuetHelper:(id)arg0 ;
-(void)updateLaunchHistoryFromDuet:(CGFloat)arg0 callback:(id)arg1 ;


@end


#endif
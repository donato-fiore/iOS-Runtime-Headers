// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DESTRIALEVENTMANAGER_H
#define DESTRIALEVENTMANAGER_H



#import "DESEventManager.h"

@interface DESTrialEventManager : DESEventManager



+(void)_sendTrialMetrics:(id)arg0 dimensions:(id)arg1 factorsState:(id)arg2 ;
+(void)initialize;
+(void)sendEventActivityShouldDeferWithConnectionDuration:(float)arg0 ;
+(void)sendEventMaintenanceWithShouldSkip:(BOOL)arg0 ;
+(void)sendEventSchedulerStartedWithPluginCount:(NSUInteger)arg0 ;
+(void)sendEventTaskCompletedForBundleID:(id)arg0 factorsState:(id)arg1 duration:(float)arg2 error:(id)arg3 ;
+(void)sendEventTaskFetchedForBundleID:(id)arg0 factorsState:(id)arg1 ;
+(void)sendEventTaskScheduledStatusForBundleID:(id)arg0 factorsState:(id)arg1 success:(BOOL)arg2 ;
+(void)sendEventTaskSchedulingErrorForBundleID:(id)arg0 factorsState:(id)arg1 error:(id)arg2 ;
+(void)sendEventTasksFetchedCountForBundleID:(id)arg0 count:(NSUInteger)arg1 ;
+(void)sendEventTasksFetchingErrorForBundleID:(id)arg0 error:(id)arg1 ;


@end


#endif
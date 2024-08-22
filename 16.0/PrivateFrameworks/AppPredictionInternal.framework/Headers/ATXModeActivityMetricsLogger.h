// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXMODEACTIVITYMETRICSLOGGER_H
#define ATXMODEACTIVITYMETRICSLOGGER_H

@class NSArray, NSNumber, NSDate;

#import <Foundation/Foundation.h>


@interface ATXModeActivityMetricsLogger : NSObject {
    NSArray *_combinedEvents;
    NSNumber *_startingDNDState;
    NSDate *_startDate;
    NSDate *_endDate;
}




-(BOOL)_eventIsBeforeStartDate:(id)arg0 ;
-(BOOL)_shouldCoalesceLaunch:(id)arg0 nextLaunch:(id)arg1 ;
-(id)_coalesceAppLaunches:(id)arg0 ;
-(id)_findStartingDNDStateFromTransitions:(id)arg0 ;
-(id)init;
-(id)initWithAppLaunches:(id)arg0 dndTransitions:(id)arg1 modeTransitions:(id)arg2 notificationEvents:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(void)_populateCombinedEvents:(id)arg0 ;
-(void)logMetrics;
-(void)logMetricsWithXPCActivity:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXURGENCYTUNINGGLOBALMETRICSLOGGER_H
#define ATXURGENCYTUNINGGLOBALMETRICSLOGGER_H

@class ATXPETEventTracker2Logger;

#import <Foundation/Foundation.h>


@interface ATXUrgencyTuningGlobalMetricsLogger : NSObject {
    ATXPETEventTracker2Logger *_eventTrackerLogger;
}




-(id)init;
-(void)logCountForNotificationWithBundleId:(id)arg0 isTimeSensitiveNotification:(BOOL)arg1 isEngagedTimeSensitiveNotification:(BOOL)arg2 count:(CGFloat)arg3 xpcActivity:(id)arg4 ;
-(void)logUrgencyTuningGlobalMetrics;
-(void)logUrgencyTuningGlobalMetricsWithXPCActivity:(id)arg0 ;


@end


#endif
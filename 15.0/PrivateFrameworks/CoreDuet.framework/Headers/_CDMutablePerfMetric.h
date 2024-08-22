// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CDMUTABLEPERFMETRIC_H
#define _CDMUTABLEPERFMETRIC_H

@class CDPerfMetric;
@protocol OS_os_activity;


#import "_DKEventStatsTimerCounter.h"

@interface _CDMutablePerfMetric : CDPerfMetric {
    NSObject<OS_os_activity> *_os_activity;
    os_activity_scope_state_s _os_activity_scope_state;
    _DKEventStatsTimerCounter *_eventStatsTimerCounter;
}




-(id)description;
-(id)initWithName:(id)arg0 string:(id)arg1 family:(id)arg2 ;
-(void)endTimingWithEvent:(struct _CDPerfEvent *)arg0 resultCount:(NSUInteger)arg1 incrementErrorCount:(BOOL)arg2 ;
-(void)startTelemetryWithOSActivity:(id)arg0 ;


@end


#endif
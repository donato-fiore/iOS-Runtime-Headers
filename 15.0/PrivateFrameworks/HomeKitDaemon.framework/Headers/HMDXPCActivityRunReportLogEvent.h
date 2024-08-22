// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDXPCACTIVITYRUNREPORTLOGEVENT_H
#define HMDXPCACTIVITYRUNREPORTLOGEVENT_H

@class HMMLogEvent, NSString;
@protocol HMMCoreAnalyticsLogging;



@interface HMDXPCActivityRunReportLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSInteger activityDefinedIntervalInMinutes; // ivar: _activityDefinedIntervalInMinutes
@property (readonly, nonatomic) NSString *activityName; // ivar: _activityName
@property (readonly, nonatomic) NSInteger activityRunHourOfDay; // ivar: _activityRunHourOfDay
@property (readonly, nonatomic) BOOL activityShouldWake; // ivar: _activityShouldWake
@property (readonly, nonatomic) NSInteger activityTimeSinceLastRunInMinutes; // ivar: _activityTimeSinceLastRunInMinutes


-(id)eventName;
-(id)initWithActivityName:(id)arg0 definedInterval:(CGFloat)arg1 activityShouldWake:(BOOL)arg2 timeSinceLastRun:(CGFloat)arg3 ;
-(id)serializedEvent;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDPROCESSRELAUNCHTHRESHOLDLOGEVENT_H
#define HMDPROCESSRELAUNCHTHRESHOLDLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary, NSNumber;
@protocol HMMCoreAnalyticsLogging;



@interface HMDProcessRelaunchThresholdLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSNumber *timeIntervalSincePreviousProcessLaunch; // ivar: _timeIntervalSincePreviousProcessLaunch


-(id)initWithTimeSincePreviousLaunch:(id)arg0 ;


@end


#endif
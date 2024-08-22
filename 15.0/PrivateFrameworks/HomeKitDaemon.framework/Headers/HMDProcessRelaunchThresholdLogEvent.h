// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDPROCESSRELAUNCHTHRESHOLDLOGEVENT_H
#define HMDPROCESSRELAUNCHTHRESHOLDLOGEVENT_H

@class HMMLogEvent, NSString, NSNumber;
@protocol HMMCoreAnalyticsLogging;



@interface HMDProcessRelaunchThresholdLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSNumber *timeIntervalSincePreviousProcessLaunch; // ivar: _timeIntervalSincePreviousProcessLaunch


-(id)eventName;
-(id)initWithTimeSincePreviousLaunch:(id)arg0 ;
-(id)serializedEvent;


@end


#endif
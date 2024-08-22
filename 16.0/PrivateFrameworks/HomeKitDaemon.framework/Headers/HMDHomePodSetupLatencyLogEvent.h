// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHOMEPODSETUPLATENCYLOGEVENT_H
#define HMDHOMEPODSETUPLATENCYLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDHomePodSetupLatencyLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) CGFloat setupLatency; // ivar: _setupLatency


+(BOOL)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
-(id)initWithSetupLatency:(CGFloat)arg0 ;


@end


#endif
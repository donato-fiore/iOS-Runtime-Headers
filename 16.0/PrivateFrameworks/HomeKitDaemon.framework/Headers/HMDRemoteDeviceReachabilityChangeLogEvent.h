// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDREMOTEDEVICEREACHABILITYCHANGELOGEVENT_H
#define HMDREMOTEDEVICEREACHABILITYCHANGELOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDRemoteDeviceReachabilityChangeLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) BOOL reachable; // ivar: _reachable
@property (readonly) NSUInteger reason; // ivar: _reason
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly) BOOL targetSupportsIDSPresence; // ivar: _targetSupportsIDSPresence


-(id)initWithReason:(NSUInteger)arg0 reachable:(BOOL)arg1 targetSupportsIDSPresence:(BOOL)arg2 ;


@end


#endif
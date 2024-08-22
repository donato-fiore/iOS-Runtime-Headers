// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDREMOTEDEVICEREACHABILITYCHANGELOGEVENT_H
#define HMDREMOTEDEVICEREACHABILITYCHANGELOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDRemoteDeviceReachabilityChangeLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL reachable; // ivar: _reachable
@property (readonly) NSUInteger reason; // ivar: _reason
@property (readonly) Class superclass;
@property (readonly) BOOL targetSupportsIDSPresence; // ivar: _targetSupportsIDSPresence


-(id)initWithReason:(NSUInteger)arg0 reachable:(BOOL)arg1 targetSupportsIDSPresence:(BOOL)arg2 ;


@end


#endif
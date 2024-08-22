// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAGGREGATEREMOTEMESSAGECOUNTERSLOGEVENT_H
#define HMDAGGREGATEREMOTEMESSAGECOUNTERSLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary, NSNumber;
@protocol HMMCoreAnalyticsLogging;



@interface HMDAggregateRemoteMessageCountersLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSNumber *count; // ivar: _count
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *deviceType; // ivar: _deviceType
@property (readonly, copy, nonatomic) NSString *direction; // ivar: _direction
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *messageName; // ivar: _messageName
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *transportType; // ivar: _transportType


+(BOOL)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
+(id)aggregateRemoteCountersLogEventWithMessageName:(id)arg0 deviceType:(id)arg1 transportType:(id)arg2 direction:(id)arg3 count:(id)arg4 ;
-(id)__initWithMessageName:(id)arg0 deviceType:(id)arg1 transportType:(id)arg2 direction:(id)arg3 count:(id)arg4 ;
-(id)init;


@end


#endif
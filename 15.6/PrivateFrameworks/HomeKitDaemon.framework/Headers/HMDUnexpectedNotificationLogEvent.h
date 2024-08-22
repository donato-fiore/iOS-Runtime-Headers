// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDUNEXPECTEDNOTIFICATIONLOGEVENT_H
#define HMDUNEXPECTEDNOTIFICATIONLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDUnexpectedNotificationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSInteger count; // ivar: _count
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;


+(BOOL)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
-(id)initWithCount:(NSInteger)arg0 ;


@end


#endif
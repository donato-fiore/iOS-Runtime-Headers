// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAUDIOANALYSISNOTIFICATIONRECEIVEDLOGEVENT_H
#define HMDAUDIOANALYSISNOTIFICATIONRECEIVEDLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary, NSDate;
@protocol HMMCoreAnalyticsLogging;



@interface HMDAudioAnalysisNotificationReceivedLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) CGFloat latency;
@property (readonly, nonatomic) NSDate *notificationSentDate; // ivar: _notificationSentDate
@property (readonly) NSUInteger reason; // ivar: _reason
@property (readonly) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;


-(id)initWithReason:(NSUInteger)arg0 state:(NSUInteger)arg1 notificationSentDate:(id)arg2 ;


@end


#endif
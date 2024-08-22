// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDERRORAGGREGATIONLOGEVENT_H
#define HMDERRORAGGREGATIONLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDErrorAggregationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsSerializedEvent; // ivar: _coreAnalyticsSerializedEvent
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;


+(BOOL)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
+(id)createErrorEventForRequestGroup:(id)arg0 errorString:(id)arg1 errorCount:(id)arg2 ;
+(id)createSummaryEventForRequestGroup:(id)arg0 totalErrorCount:(id)arg1 totalEventCount:(id)arg2 ;
-(id)initWithEventGroupName:(id)arg0 errorString:(id)arg1 errorCount:(id)arg2 eventCount:(id)arg3 ;


@end


#endif
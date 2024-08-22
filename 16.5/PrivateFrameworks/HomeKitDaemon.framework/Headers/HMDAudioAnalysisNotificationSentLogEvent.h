// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAUDIOANALYSISNOTIFICATIONSENTLOGEVENT_H
#define HMDAUDIOANALYSISNOTIFICATIONSENTLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary, NSDate;
@protocol HMMCoreAnalyticsLogging;



@interface HMDAudioAnalysisNotificationSentLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDate *dateOfOccurrence; // ivar: _dateOfOccurrence
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger reason; // ivar: _reason
@property (readonly) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;


+(id)shortDescription;
-(id)initWithDate:(id)arg0 reason:(NSUInteger)arg1 state:(NSUInteger)arg2 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSPANALYTICSSLEEPSCHEDULECHANGEEVENT_H
#define HKSPANALYTICSSLEEPSCHEDULECHANGEEVENT_H

@class NSString, NSDictionary, NSArray;
@protocol HKSPAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface HKSPAnalyticsSleepScheduleChangeEvent : NSObject <HKSPAnalyticsEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *eventName; // ivar: _eventName
@property (retain, nonatomic) NSDictionary *eventPayload; // ivar: _eventPayload
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *keysRequiringIHAGating;
@property (readonly) Class superclass;


+(id)_payloadWithApplication:(id)arg0 isSleepTrackingEnabled:(BOOL)arg1 activeWatchProductType:(id)arg2 provenanceSource:(id)arg3 ;
-(id)initWithScheduleChangeInfo:(id)arg0 provenanceInfo:(id)arg1 ;


@end


#endif
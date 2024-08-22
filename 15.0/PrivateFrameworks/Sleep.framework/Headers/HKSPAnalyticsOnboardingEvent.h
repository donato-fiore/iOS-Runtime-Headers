// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSPANALYTICSONBOARDINGEVENT_H
#define HKSPANALYTICSONBOARDINGEVENT_H

@class NSString, NSDictionary;
@protocol HKSPAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface HKSPAnalyticsOnboardingEvent : NSObject <HKSPAnalyticsEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *eventName; // ivar: _eventName
@property (retain, nonatomic) NSDictionary *eventPayload; // ivar: _eventPayload
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithOnboardingInfo:(id)arg0 provenanceInfo:(id)arg1 ;


@end


#endif
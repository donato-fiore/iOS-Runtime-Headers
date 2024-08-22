// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMSHAREANALYTICSEVENT_H
#define PMSHAREANALYTICSEVENT_H

@class NSString;
@protocol CoreAnalyticsEventProtocol;


#import "PMCoreAnalyticsEvent.h"

@interface PMShareAnalyticsEvent : PMCoreAnalyticsEvent <CoreAnalyticsEventProtocol>



@property (copy, nonatomic) NSString *activityType; // ivar: _activityType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *orientation; // ivar: _orientation
@property (readonly) Class superclass;


-(id)eventName;
-(id)eventPayload;
-(id)initWithActivityType:(id)arg0 isLandscape:(BOOL)arg1 ;
-(void)sendToCoreAnalytics;


@end


#endif
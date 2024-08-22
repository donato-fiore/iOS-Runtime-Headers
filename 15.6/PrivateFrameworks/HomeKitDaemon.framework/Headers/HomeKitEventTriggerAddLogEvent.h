// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HOMEKITEVENTTRIGGERADDLOGEVENT_H
#define HOMEKITEVENTTRIGGERADDLOGEVENT_H

@class HMMHomeLogEvent, NSString;
@protocol HMDAWDLogEvent;


#import "HMDAnalyticsAddEventTriggerData.h"

@interface HomeKitEventTriggerAddLogEvent : HMMHomeLogEvent <HMDAWDLogEvent>



@property (readonly, nonatomic) HMDAnalyticsAddEventTriggerData *analyticsData; // ivar: _analyticsData
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithHomeUUID:(id)arg0 ;
-(id)metricForAWD;
-(unsigned int)AWDMessageType;


@end


#endif
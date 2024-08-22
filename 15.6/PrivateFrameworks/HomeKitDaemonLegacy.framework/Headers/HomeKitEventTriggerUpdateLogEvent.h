// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HOMEKITEVENTTRIGGERUPDATELOGEVENT_H
#define HOMEKITEVENTTRIGGERUPDATELOGEVENT_H

@class HMMLogEvent, NSString;
@protocol HMDAWDLogEvent;


#import "HMDAnalyticsUpdateEventTriggerData.h"

@interface HomeKitEventTriggerUpdateLogEvent : HMMLogEvent <HMDAWDLogEvent>



@property (readonly, nonatomic) HMDAnalyticsUpdateEventTriggerData *analyticsData; // ivar: _analyticsData
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)metricForAWD;
-(unsigned int)AWDMessageType;


@end


#endif
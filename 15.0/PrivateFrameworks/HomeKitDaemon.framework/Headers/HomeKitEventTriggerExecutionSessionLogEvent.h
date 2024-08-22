// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HOMEKITEVENTTRIGGEREXECUTIONSESSIONLOGEVENT_H
#define HOMEKITEVENTTRIGGEREXECUTIONSESSIONLOGEVENT_H

@class HMMLogEvent, NSString;
@protocol HMDAWDLogEvent;


#import "HMDAnalyticsEventTriggerExecutionSessionData.h"

@interface HomeKitEventTriggerExecutionSessionLogEvent : HMMLogEvent <HMDAWDLogEvent>



@property (readonly, nonatomic) HMDAnalyticsEventTriggerExecutionSessionData *analyticsData; // ivar: _analyticsData
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithSessionID:(id)arg0 ;
-(id)metricForAWD;
-(int)toAWDExecutionState:(int)arg0 ;
-(unsigned int)AWDMessageType;


@end


#endif
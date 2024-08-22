// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HOMEKITEVENTTRIGGERUSERCONFIRMATIONRECEIVERSESSIONLOGEVENT_H
#define HOMEKITEVENTTRIGGERUSERCONFIRMATIONRECEIVERSESSIONLOGEVENT_H

@class HMMLogEvent, NSString, NSDate;
@protocol HMDAWDLogEvent;


#import "HMDAnalyticsEventTriggerUserConfirmationReceiverSessionData.h"

@interface HomeKitEventTriggerUserConfirmationReceiverSessionLogEvent : HMMLogEvent <HMDAWDLogEvent>



@property (readonly, nonatomic) HMDAnalyticsEventTriggerUserConfirmationReceiverSessionData *analyticsData; // ivar: _analyticsData
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *startTime; // ivar: _startTime
@property (readonly) Class superclass;


-(id)initWithSessionID:(id)arg0 ;
-(id)metricForAWD;
-(unsigned int)AWDMessageType;


@end


#endif
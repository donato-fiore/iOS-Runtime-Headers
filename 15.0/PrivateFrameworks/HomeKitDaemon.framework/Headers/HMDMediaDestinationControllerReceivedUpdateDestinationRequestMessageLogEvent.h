// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDMEDIADESTINATIONCONTROLLERRECEIVEDUPDATEDESTINATIONREQUESTMESSAGELOGEVENT_H
#define HMDMEDIADESTINATIONCONTROLLERRECEIVEDUPDATEDESTINATIONREQUESTMESSAGELOGEVENT_H

@class NSString;
@protocol HMMCoreAnalyticsLogging;


#import "HMDMediaDestinationControllerDestinationLogEvent.h"

@interface HMDMediaDestinationControllerReceivedUpdateDestinationRequestMessageLogEvent : HMDMediaDestinationControllerDestinationLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;


-(id)eventName;
-(id)initWithExistingDestinationType:(id)arg0 destinationType:(id)arg1 isTriggeredOnControllerDevice:(id)arg2 userPrivilege:(id)arg3 ;
-(id)serializedEvent;


@end


#endif
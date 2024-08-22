// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMEDIADESTINATIONCONTROLLERTRANSACTIONUPDATEDDESTINATIONLOGEVENT_H
#define HMDMEDIADESTINATIONCONTROLLERTRANSACTIONUPDATEDDESTINATIONLOGEVENT_H

@class NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;


#import "HMDMediaDestinationControllerDestinationLogEvent.h"

@interface HMDMediaDestinationControllerTransactionUpdatedDestinationLogEvent : HMDMediaDestinationControllerDestinationLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;


-(id)initWithExistingDestinationType:(id)arg0 destinationType:(id)arg1 isTriggeredOnControllerDevice:(id)arg2 userPrivilege:(id)arg3 ;


@end


#endif
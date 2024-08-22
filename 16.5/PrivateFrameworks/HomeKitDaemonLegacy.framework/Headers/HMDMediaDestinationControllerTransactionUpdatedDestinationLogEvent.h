// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMEDIADESTINATIONCONTROLLERTRANSACTIONUPDATEDDESTINATIONLOGEVENT_H
#define HMDMEDIADESTINATIONCONTROLLERTRANSACTIONUPDATEDDESTINATIONLOGEVENT_H

@class NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;


#import "HMDMediaDestinationControllerDestinationLogEvent.h"

@interface HMDMediaDestinationControllerTransactionUpdatedDestinationLogEvent : HMDMediaDestinationControllerDestinationLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithExistingDestinationType:(id)arg0 destinationType:(id)arg1 isTriggeredOnControllerDevice:(id)arg2 userPrivilege:(id)arg3 ;


@end


#endif
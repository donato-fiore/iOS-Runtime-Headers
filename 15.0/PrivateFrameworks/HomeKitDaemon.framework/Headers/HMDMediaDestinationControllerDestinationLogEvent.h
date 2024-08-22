// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDMEDIADESTINATIONCONTROLLERDESTINATIONLOGEVENT_H
#define HMDMEDIADESTINATIONCONTROLLERDESTINATIONLOGEVENT_H

@class NSString;


#import "HMDMediaDestinationControllerLogEvent.h"

@interface HMDMediaDestinationControllerDestinationLogEvent : HMDMediaDestinationControllerLogEvent

@property (readonly, copy) NSString *destinationType; // ivar: _destinationType
@property (readonly, copy) NSString *existingDestinationType; // ivar: _existingDestinationType


-(id)initWithExistingDestinationType:(id)arg0 destinationType:(id)arg1 isTriggeredOnControllerDevice:(id)arg2 userPrivilege:(id)arg3 ;


@end


#endif
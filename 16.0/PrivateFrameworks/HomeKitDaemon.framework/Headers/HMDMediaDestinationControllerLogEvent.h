// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMEDIADESTINATIONCONTROLLERLOGEVENT_H
#define HMDMEDIADESTINATIONCONTROLLERLOGEVENT_H

@class HMMLogEvent, NSString;



@interface HMDMediaDestinationControllerLogEvent : HMMLogEvent

@property (readonly, copy) NSString *isTriggeredOnControllerDevice; // ivar: _isTriggeredOnControllerDevice
@property (readonly, copy) NSString *userPrivilege; // ivar: _userPrivilege


-(id)initWithIsTriggeredOnControllerDevice:(id)arg0 userPrivilege:(id)arg1 ;


@end


#endif
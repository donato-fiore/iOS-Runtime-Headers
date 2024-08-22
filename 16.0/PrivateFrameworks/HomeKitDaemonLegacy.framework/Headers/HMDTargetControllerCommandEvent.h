// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDTARGETCONTROLLERCOMMANDEVENT_H
#define HMDTARGETCONTROLLERCOMMANDEVENT_H

@class HMMLogEvent, NSString;
@protocol HMDAWDLogEvent;


#import "HMDHAPAccessory.h"

@interface HMDTargetControllerCommandEvent : HMMLogEvent <HMDAWDLogEvent>



@property (readonly, weak, nonatomic) HMDHAPAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) NSUInteger commandType; // ivar: _commandType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)commandEventWithCommandType:(NSUInteger)arg0 accessory:(id)arg1 ;
-(id)initWithCommandType:(NSUInteger)arg0 accessory:(id)arg1 ;
-(id)metricForAWD;
-(unsigned int)AWDMessageType;


@end


#endif
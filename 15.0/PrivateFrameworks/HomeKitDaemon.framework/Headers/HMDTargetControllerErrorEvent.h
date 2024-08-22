// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDTARGETCONTROLLERERROREVENT_H
#define HMDTARGETCONTROLLERERROREVENT_H

@class HMMLogEvent, NSString;
@protocol HMDAWDLogEvent;


#import "HMDHAPAccessory.h"

@interface HMDTargetControllerErrorEvent : HMMLogEvent <HMDAWDLogEvent>



@property (readonly, weak, nonatomic) HMDHAPAccessory *accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger errorType; // ivar: _errorType
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)errorEventWithErrorType:(NSUInteger)arg0 accessory:(id)arg1 ;
-(id)initWithErrorType:(NSUInteger)arg0 accessory:(id)arg1 ;
-(id)metricForAWD;
-(unsigned int)AWDMessageType;


@end


#endif
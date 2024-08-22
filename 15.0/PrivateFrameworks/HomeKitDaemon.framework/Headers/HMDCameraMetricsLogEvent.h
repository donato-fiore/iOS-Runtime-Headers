// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCAMERAMETRICSLOGEVENT_H
#define HMDCAMERAMETRICSLOGEVENT_H

@class HMMLogEvent;


#import "HMDAccessory.h"
#import "HMDCameraSessionID.h"

@interface HMDCameraMetricsLogEvent : HMMLogEvent

@property (readonly, weak, nonatomic) HMDAccessory *accessory; // ivar: _accessory
@property (readonly) BOOL isLocal; // ivar: _isLocal
@property (readonly, nonatomic) HMDCameraSessionID *sessionID; // ivar: _sessionID


-(id)initWithSessionID:(id)arg0 cameraAccessory:(id)arg1 isLocal:(BOOL)arg2 ;


@end


#endif
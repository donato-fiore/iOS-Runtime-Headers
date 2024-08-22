// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDDEVICESETUPTRACKINGINFO_H
#define HMDDEVICESETUPTRACKINGINFO_H

@class HMFObject, NSUUID, NSError;
@protocol HMDDeviceSetupTrackingInfo;



@interface HMDDeviceSetupTrackingInfo : HMFObject <HMDDeviceSetupTrackingInfo>



@property (copy) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (readonly) NSUInteger endTime; // ivar: _endTime
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly) NSInteger role; // ivar: _role
@property (readonly, copy) NSError *sessionError; // ivar: _sessionError
@property (readonly) NSUInteger startTime; // ivar: _startTime


-(id)initWithIdentifier:(id)arg0 startTime:(NSUInteger)arg1 endTime:(NSUInteger)arg2 role:(NSInteger)arg3 accessoryUUID:(id)arg4 ;


@end


#endif
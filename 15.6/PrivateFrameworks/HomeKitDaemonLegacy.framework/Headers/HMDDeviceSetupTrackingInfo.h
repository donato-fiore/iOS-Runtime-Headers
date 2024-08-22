// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDDEVICESETUPTRACKINGINFO_H
#define HMDDEVICESETUPTRACKINGINFO_H

@class HMFObject, NSUUID, NSDate, NSError;
@protocol HMDDeviceSetupTrackingInfo;



@interface HMDDeviceSetupTrackingInfo : HMFObject <HMDDeviceSetupTrackingInfo>



@property (copy) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (readonly, copy) NSDate *endTime; // ivar: _endTime
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly) NSInteger role; // ivar: _role
@property (readonly, copy) NSError *sessionError; // ivar: _sessionError
@property (readonly, copy) NSDate *startTime; // ivar: _startTime


-(id)initWithIdentifier:(id)arg0 startTime:(id)arg1 endTime:(id)arg2 role:(NSInteger)arg3 accessoryUUID:(id)arg4 ;


@end


#endif
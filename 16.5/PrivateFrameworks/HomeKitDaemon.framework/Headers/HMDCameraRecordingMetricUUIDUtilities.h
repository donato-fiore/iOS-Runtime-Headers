// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERARECORDINGMETRICUUIDUTILITIES_H
#define HMDCAMERARECORDINGMETRICUUIDUTILITIES_H

@class HMFObject;



@interface HMDCameraRecordingMetricUUIDUtilities : HMFObject



+(id)UUIDRotationSalt;
+(id)currentEphemeralUUIDWithUUID:(id)arg0 rotationScheduleDays:(NSUInteger)arg1 ;
+(id)ephemeralUUIDWithUUID:(id)arg0 forTimestamp:(NSUInteger)arg1 rotationSchedule:(NSUInteger)arg2 ;
+(id)ephemeralUUIDWithUUID:(id)arg0 forTimestamp:(NSUInteger)arg1 rotationScheduleDays:(NSUInteger)arg2 ;


@end


#endif
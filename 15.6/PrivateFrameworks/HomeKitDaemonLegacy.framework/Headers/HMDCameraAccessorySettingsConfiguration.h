// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERAACCESSORYSETTINGSCONFIGURATION_H
#define HMDCAMERAACCESSORYSETTINGSCONFIGURATION_H

@class HMFObject;



@interface HMDCameraAccessorySettingsConfiguration : HMFObject

@property (readonly) BOOL inclusionZone; // ivar: _inclusionZone
@property (readonly) BOOL isRecordingAudioEnabled; // ivar: _isRecordingAudioEnabled
@property (readonly) BOOL isRecordingCapable; // ivar: _isRecordingCapable
@property (readonly) BOOL isRecordingEnabled; // ivar: _isRecordingEnabled
@property (readonly) NSUInteger numActivityZones; // ivar: _numActivityZones
@property (readonly) BOOL reachabilityNotificationEnabled; // ivar: _reachabilityNotificationEnabled
@property (readonly) NSUInteger recordingEventTriggers; // ivar: _recordingEventTriggers
@property (readonly) BOOL smartBulletinBoardNotificationEnabled; // ivar: _smartBulletinBoardNotificationEnabled


-(id)initWithCameraAccessory:(id)arg0 ;


@end


#endif
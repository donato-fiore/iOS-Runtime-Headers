// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERAHOMESETTINGSCONFIGURATION_H
#define HMDCAMERAHOMESETTINGSCONFIGURATION_H

@class HMFObject, NSArray;



@interface HMDCameraHomeSettingsConfiguration : HMFObject

@property (readonly, nonatomic) NSArray *cameraSettings; // ivar: _cameraSettings
@property (readonly) NSUInteger enabledResidentsDeviceCapabilities; // ivar: _enabledResidentsDeviceCapabilities
@property (readonly, getter=isFaceClassificationEnabled) BOOL faceClassificationEnabled; // ivar: _faceClassificationEnabled
@property (readonly, getter=isOwner) BOOL owner; // ivar: _owner
@property (readonly, nonatomic) NSArray *userSettings; // ivar: _userSettings


-(id)initWithHome:(id)arg0 ;


@end


#endif
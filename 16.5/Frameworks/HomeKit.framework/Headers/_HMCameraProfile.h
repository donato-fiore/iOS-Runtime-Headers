// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HMCAMERAPROFILE_H
#define _HMCAMERAPROFILE_H

@class NSArray;


#import "HMAccessoryProfile.h"
#import "HMCameraClipManager.h"
#import "_HMCameraAudioControl.h"
#import "HMCameraRecordingReachabilityEventManager.h"
#import "HMCameraRecordingEventManager.h"
#import "_HMCameraSettingsControl.h"
#import "_HMCameraSnapshotControl.h"
#import "_HMCameraStreamControl.h"
#import "HMCameraUserSettings.h"

@interface _HMCameraProfile : HMAccessoryProfile

@property (retain) HMCameraClipManager *clipManager; // ivar: _clipManager
@property (readonly, copy) NSArray *controls;
@property (readonly) _HMCameraAudioControl *microphoneControl; // ivar: _microphoneControl
@property (retain) HMCameraRecordingReachabilityEventManager *reachabilityEventManager; // ivar: _reachabilityEventManager
@property (retain) HMCameraRecordingEventManager *recordingEventManager; // ivar: _recordingEventManager
@property (readonly) _HMCameraSettingsControl *settingsControl; // ivar: _settingsControl
@property (readonly) _HMCameraSnapshotControl *snapshotControlInternal; // ivar: _snapshotControlInternal
@property (readonly) _HMCameraAudioControl *speakerControl; // ivar: _speakerControl
@property (readonly) _HMCameraStreamControl *streamControlInternal; // ivar: _streamControlInternal
@property (retain) HMCameraUserSettings *userSettings; // ivar: _userSettings


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 services:(id)arg1 ;
-(void)__configureWithContext:(id)arg0 accessory:(id)arg1 ;
-(void)_createControls:(id)arg0 ;
-(void)addUserSettings:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
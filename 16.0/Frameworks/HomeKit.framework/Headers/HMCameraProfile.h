// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMCAMERAPROFILE_H
#define HMCAMERAPROFILE_H

@class NSString;
@protocol HMFLogging, HMCameraProfileUserSettingsDelegate;


#import "HMAccessoryProfile.h"
#import "_HMCameraProfile.h"
#import "HMCameraClipManager.h"
#import "HMCameraAudioControl.h"
#import "HMCameraRecordingReachabilityEventManager.h"
#import "HMCameraRecordingEventManager.h"
#import "HMCameraSettingsControl.h"
#import "HMCameraSnapshotControl.h"
#import "HMCameraStreamControl.h"
#import "HMCameraUserSettings.h"

@interface HMCameraProfile : HMAccessoryProfile <HMFLogging>



@property (readonly, nonatomic) _HMCameraProfile *cameraProfile;
@property (readonly) HMCameraClipManager *clipManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMCameraAudioControl *microphoneControl; // ivar: _microphoneControl
@property (readonly) HMCameraRecordingReachabilityEventManager *reachabilityEventManager;
@property (readonly) HMCameraRecordingEventManager *recordingEventManager;
@property (retain, nonatomic) HMCameraSettingsControl *settingsControl; // ivar: _settingsControl
@property (retain, nonatomic) HMCameraSnapshotControl *snapshotControl; // ivar: _snapshotControl
@property (retain, nonatomic) HMCameraAudioControl *speakerControl; // ivar: _speakerControl
@property (retain, nonatomic) HMCameraStreamControl *streamControl; // ivar: _streamControl
@property (readonly) Class superclass;
@property (readonly) HMCameraUserSettings *userSettings;
@property (weak) NSObject<HMCameraProfileUserSettingsDelegate> *userSettingsDelegate; // ivar: _userSettingsDelegate


+(id)logCategory;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(id)initWithCameraProfile:(id)arg0 ;
-(id)logIdentifier;
-(id)services;


@end


#endif
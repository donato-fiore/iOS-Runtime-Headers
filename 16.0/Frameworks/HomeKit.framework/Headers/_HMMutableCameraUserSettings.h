// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HMMUTABLECAMERAUSERSETTINGS_H
#define _HMMUTABLECAMERAUSERSETTINGS_H

@class NSUUID, NSSet;


#import "HMCameraUserSettings.h"
#import "HMCameraUserNotificationSettings.h"

@interface _HMMutableCameraUserSettings : HMCameraUserSettings

@property (copy) NSUUID *UUID;
@property NSUInteger accessModeAtHome;
@property (getter=isAccessModeIndicatorEnabled) BOOL accessModeIndicatorEnabled;
@property NSUInteger accessModeNotAtHome;
@property (copy) NSSet *activityZones;
@property (getter=areActivityZonesIncludedForSignificantEventDetection) BOOL activityZonesIncludedForSignificantEventDetection;
@property (getter=isCameraManuallyDisabled) BOOL cameraManuallyDisabled;
@property NSUInteger currentAccessMode;
@property (getter=isNightVisionModeEnabled) BOOL nightVisionModeEnabled;
@property (copy) HMCameraUserNotificationSettings *notificationSettings;
@property (getter=arePeriodicSnapshotsAllowed) BOOL periodicSnapshotsAllowed;
@property (getter=isRecordingAudioEnabled) BOOL recordingAudioEnabled;
@property NSUInteger recordingEventTriggers;
@property (getter=areSnapshotsAllowed) BOOL snapshotsAllowed;
@property NSUInteger supportedFeatures;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
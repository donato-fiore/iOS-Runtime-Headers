// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERAPROFILESETTINGSMODEL_H
#define HMDCAMERAPROFILESETTINGSMODEL_H

@class HMBModel, NSNumber, NSSet, NSData;


#import "HMDBulletinBoardNotification.h"

@interface HMDCameraProfileSettingsModel : HMBModel

@property NSUInteger accessModeAtHome;
@property (copy) NSNumber *accessModeAtHomeField;
@property (readonly) BOOL accessModeChangeNotificationEnabled;
@property (copy) NSNumber *accessModeChangeNotificationEnabledField;
@property NSUInteger accessModeNotAtHome;
@property (copy) NSNumber *accessModeNotAtHomeField;
@property (retain) NSSet *activityZones;
@property (copy) NSData *activityZonesField;
@property BOOL activityZonesIncludedForSignificantEventDetection;
@property (copy) NSNumber *activityZonesIncludedForSignificantEventDetectionField;
@property BOOL cameraManuallyDisabled; // ivar: _cameraManuallyDisabled
@property NSUInteger currentAccessMode; // ivar: _currentAccessMode
@property (readonly) BOOL hasAnyNotificationFieldsSet;
@property (readonly) NSUInteger mostPrivateAccessMode;
@property (readonly) BOOL reachabilityEventNotificationEnabled;
@property (copy) NSNumber *reachabilityEventNotificationEnabledField;
@property NSUInteger recordingEventTriggers;
@property (copy) NSNumber *recordingEventTriggersField;
@property (readonly) HMDBulletinBoardNotification *smartBulletinBoardNotification;
@property (copy) NSData *smartBulletinBoardNotificationDataField;
@property NSInteger version;
@property (copy) NSNumber *versionField;


+(id)hmbProperties;


@end


#endif
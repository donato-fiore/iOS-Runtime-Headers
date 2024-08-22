// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HMCAMERAUSERSETTINGS_H
#define _HMCAMERAUSERSETTINGS_H

@class NSUUID, NSSet, NSArray, NSString;
@protocol HMFObject, NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HMCameraUserNotificationSettings.h"

@interface _HMCameraUserSettings : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>



@property (copy) NSUUID *UUID; // ivar: _UUID
@property NSUInteger accessModeAtHome; // ivar: _accessModeAtHome
@property (getter=isAccessModeIndicatorEnabled) BOOL accessModeIndicatorEnabled; // ivar: _accessModeIndicatorEnabled
@property NSUInteger accessModeNotAtHome; // ivar: _accessModeNotAtHome
@property (copy) NSSet *activityZones; // ivar: _activityZones
@property (getter=areActivityZonesIncludedForSignificantEventDetection) BOOL activityZonesIncludedForSignificantEventDetection; // ivar: _activityZonesIncludedForSignificantEventDetection
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (getter=isCameraManuallyDisabled) BOOL cameraManuallyDisabled; // ivar: _cameraManuallyDisabled
@property NSUInteger currentAccessMode; // ivar: _currentAccessMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (getter=isNightVisionModeEnabled) BOOL nightVisionModeEnabled; // ivar: _nightVisionModeEnabled
@property (copy) HMCameraUserNotificationSettings *notificationSettings; // ivar: _notificationSettings
@property (getter=arePeriodicSnapshotsAllowed) BOOL periodicSnapshotsAllowed; // ivar: _periodicSnapshotsAllowed
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (getter=isRecordingAudioEnabled) BOOL recordingAudioEnabled; // ivar: _recordingAudioEnabled
@property NSUInteger recordingEventTriggers; // ivar: _recordingEventTriggers
@property (readonly, copy) NSString *shortDescription;
@property (getter=areSnapshotsAllowed) BOOL snapshotsAllowed; // ivar: _snapshotsAllowed
@property (readonly) Class superclass;
@property NSUInteger supportedFeatures; // ivar: _supportedFeatures


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
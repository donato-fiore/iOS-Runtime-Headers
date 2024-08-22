// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMCAMERAUSERSETTINGS_H
#define HMCAMERAUSERSETTINGS_H

@class NSSet, NSArray, NSString, NSUUID;
@protocol HMFLogging, HMFMessageReceiver, HMFObject, HMCameraUserSettingsDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMCharacteristic.h"
#import "HMAccessory.h"
#import "_HMCameraUserSettings.h"
#import "_HMContext.h"
#import "HMCameraBulletinBoardSmartNotification.h"

@interface HMCameraUserSettings : NSObject <HMFLogging, HMFMessageReceiver, HMFObject>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, getter=isAccessModeChangeNotificationEnabled) BOOL accessModeChangeNotificationEnabled;
@property (readonly, getter=isAccessModeIndicatorEnabled) BOOL accessModeIndicatorEnabled;
@property (readonly) HMCharacteristic *accessModeIndicatorEnabledCharacteristic;
@property (weak, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (readonly, getter=activityZones) NSSet *activityZones;
@property (readonly, getter=areActivityZonesIncludedForSignificantEventDetection) BOOL activityZonesIncludedForSignificantEventDetection;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, getter=isCameraManuallyDisabled) BOOL cameraManuallyDisabled;
@property (copy) _HMCameraUserSettings *cameraUserSettings; // ivar: _cameraUserSettings
@property (retain, nonatomic) _HMContext *context; // ivar: _context
@property (readonly) NSUInteger currentAccessMode;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMCameraUserSettingsDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, getter=isNightVisionModeEnabled) BOOL nightVisionModeEnabled;
@property (readonly) HMCharacteristic *nightVisionModeEnabledCharacteristic;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, getter=isReachabilityEventNotificationEnabled) BOOL reachabilityEventNotificationEnabled;
@property (readonly, getter=isRecordingAudioEnabled) BOOL recordingAudioEnabled;
@property (readonly) HMCharacteristic *recordingAudioEnabledCharacteristic;
@property (readonly) NSUInteger recordingEventTriggers;
@property (readonly, copy) NSString *shortDescription;
@property (retain) HMCameraBulletinBoardSmartNotification *smartNotificationBulletin; // ivar: _smartNotificationBulletin
@property (readonly, getter=areSnapshotsAllowed) BOOL snapshotsAllowed;
@property (readonly) HMCharacteristic *snapshotsAllowedCharacteristic;
@property (readonly) Class superclass;
@property (readonly) NSUInteger supportedFeatures;
@property (readonly) NSUUID *uniqueIdentifier;


+(id)logCategory;
-(NSUInteger)accessModeAtHome;
-(NSUInteger)accessModeForPresenceType:(NSUInteger)arg0 ;
-(NSUInteger)accessModeNotAtHome;
-(id)_characteristicWithType:(id)arg0 serviceType:(id)arg1 ;
-(id)initWithCameraUserSettings:(id)arg0 ;
-(id)logIdentifier;
-(id)messageDestination;
-(id)smartNotificationBulletinForSettings:(id)arg0 ;
-(void)_mergeNewSettings:(id)arg0 ;
// -(void)_sendSettingsUpdateMessage:(id)arg0 completion:(id)arg1 successHandler:(unk)arg2  ;
-(void)_updateSettings:(id)arg0 shouldNotifyDelegate:(BOOL)arg1 ;
-(void)configureWithAccessory:(id)arg0 context:(id)arg1 ;
-(void)handleSettingsDidUpdateMessage:(id)arg0 ;
-(void)updateAccessMode:(NSUInteger)arg0 forPresenceEventType:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)updateAccessModeChangeNotificationEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)updateAccessModeIndicatorEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)updateActivityZones:(id)arg0 areActivityZonesIncludedForSignificantEventDetection:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)updateBulletinNotificationEnabled:(BOOL)arg0 condition:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateNightVisionModeEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)updateReachabilityEventNotificationEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)updateRecordingAudioEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)updateRecordingEventTriggers:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)updateSnapshotsAllowed:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif
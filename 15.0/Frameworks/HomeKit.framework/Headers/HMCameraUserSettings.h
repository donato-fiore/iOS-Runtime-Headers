// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMCAMERAUSERSETTINGS_H
#define HMCAMERAUSERSETTINGS_H

@class HMFUnfairLock, NSSet, NSArray, NSString, NSUUID;
@protocol HMFLogging, HMFMessageReceiver, HMFObject, HMCameraUserSettingsDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMAccessory.h"
#import "_HMCameraUserSettings.h"
#import "_HMContext.h"
#import "HMCameraBulletinBoardSmartNotification.h"

@interface HMCameraUserSettings : NSObject <HMFLogging, HMFMessageReceiver, HMFObject>

 {
    HMFUnfairLock *_lock;
}


@property (readonly, getter=isAccessModeChangeNotificationEnabled) BOOL accessModeChangeNotificationEnabled;
@property (readonly, getter=isAccessModeIndicatorEnabled) BOOL accessModeIndicatorEnabled;
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
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, getter=isReachabilityChangeNotificationEnabled) BOOL reachabilityChangeNotificationEnabled;
@property (readonly, getter=isReachabilityEventNotificationEnabled) BOOL reachabilityEventNotificationEnabled;
@property (readonly, getter=isRecordingAudioEnabled) BOOL recordingAudioEnabled;
@property (readonly) NSUInteger recordingEventTriggers;
@property (readonly, copy) NSString *shortDescription;
@property (retain) HMCameraBulletinBoardSmartNotification *smartNotificationBulletin; // ivar: _smartNotificationBulletin
@property (readonly, getter=areSnapshotsAllowed) BOOL snapshotsAllowed;
@property (readonly) Class superclass;
@property (readonly) NSUInteger supportedFeatures;
@property (readonly) NSUUID *uniqueIdentifier;


+(id)logCategory;
-(NSUInteger)accessModeAtHome;
-(NSUInteger)accessModeForPresenceType:(NSUInteger)arg0 ;
-(NSUInteger)accessModeNotAtHome;
-(id)initWithCameraUserSettings:(id)arg0 ;
-(id)logIdentifier;
-(id)messageDestination;
-(id)smartNotificationBulletinForSettings:(id)arg0 ;
-(void)_mergeNewSettings:(id)arg0 operations:(id)arg1 ;
-(void)_notifyDelegatesOfUpdatedSettings;
-(void)_updateSettings:(id)arg0 shouldNotifyDelegate:(BOOL)arg1 mergeOperations:(id)arg2 ;
-(void)configureWithAccessory:(id)arg0 context:(id)arg1 ;
-(void)handleSettingsDidUpdateMessage:(id)arg0 ;
-(void)updateAccessMode:(NSUInteger)arg0 forPresenceEventType:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)updateAccessModeChangeNotificationEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)updateAccessModeIndicatorEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)updateActivityZones:(id)arg0 areActivityZonesIncludedForSignificantEventDetection:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)updateActivityZones:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateNightVisionModeEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)updateReachabilityChangeNotificationEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)updateReachabilityEventNotificationEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)updateRecordingAudioEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)updateRecordingEventTriggers:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)updateSnapshotsAllowed:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERAPROFILE_H
#define HMDCAMERAPROFILE_H

@class NSDictionary, NSSet, _HMCameraUserSettings, NSString, HMFNetMonitor, NSNotificationCenter, HMFTimer, NSMutableArray;
@protocol HMDCameraSettingProactiveReaderDelegate, HMDCameraProfileSettingsManagerDelegate, HMDCameraSignificantEventListenerDelegate, HMFNetMonitorDelegate, HMFTimerDelegate, HMDCameraSignificantEventNotificationObserver, HMDCameraClipManagerDelegate;


#import "HMDAccessoryProfile.h"
#import "HMDCameraRecordingManager.h"
#import "HMDCameraProfileSettingsManager.h"
#import "HMDCameraClipManager.h"
#import "HMDCameraClipUserNotificationCenter.h"
#import "HMDHAPAccessory.h"
#import "HMDPredicateUtilities.h"
#import "HMDCameraRecordingReachabilityEventManager.h"
#import "HMDService.h"
#import "HMDCameraSignificantEventListener.h"
#import "HMDCameraSignificantEventNotificationFilter.h"
#import "HMDCameraSnapshotManager.h"
#import "HMDCameraStreamSnapshotHandler.h"

@interface HMDCameraProfile : HMDAccessoryProfile <HMDCameraSettingProactiveReaderDelegate, HMDCameraProfileSettingsManagerDelegate, HMDCameraSignificantEventListenerDelegate, HMFNetMonitorDelegate, HMFTimerDelegate, HMDCameraSignificantEventNotificationObserver, HMDCameraClipManagerDelegate>



@property (readonly, copy) NSDictionary *assistantObject;
@property (retain) HMDCameraRecordingManager *cameraRecordingManager; // ivar: _cameraRecordingManager
@property (readonly) HMDCameraProfileSettingsManager *cameraSettingsManager; // ivar: _cameraSettingsManager
@property (readonly) NSSet *cameraStreamManagers; // ivar: _cameraStreamManagers
@property (readonly) HMDCameraClipManager *clipManager; // ivar: _clipManager
@property (readonly) HMDCameraClipUserNotificationCenter *clipUserNotificationCenter; // ivar: _clipUserNotificationCenter
@property (readonly) _HMCameraUserSettings *currentSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak) HMDHAPAccessory *hapAccessory; // ivar: _hapAccessory
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isMicrophonePresent) BOOL microphonePresent; // ivar: _microphonePresent
@property (readonly) HMFNetMonitor *networkMonitor; // ivar: _networkMonitor
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (retain) HMDPredicateUtilities *predicateUtilities; // ivar: _predicateUtilities
@property (readonly) HMDCameraRecordingReachabilityEventManager *reachabilityEventManager; // ivar: _reachabilityEventManager
@property (retain) HMFTimer *recordingEventsCleanupTimer; // ivar: _recordingEventsCleanupTimer
@property (copy) id *recordingEventsCleanupTimerFactory; // ivar: _recordingEventsCleanupTimerFactory
@property (readonly) HMDService *recordingManagementService; // ivar: _recordingManagementService
@property (copy) id *recordingManagerFactory; // ivar: _recordingManagerFactory
@property (readonly) NSMutableArray *settingProactiveReaders; // ivar: _settingProactiveReaders
@property (retain) HMDCameraSignificantEventListener *significantEventListener; // ivar: _significantEventListener
@property (readonly, nonatomic) HMDCameraSignificantEventNotificationFilter *significantEventNotificationFilter; // ivar: _significantEventNotificationFilter
@property (readonly) HMDCameraSnapshotManager *snapshotManager; // ivar: _snapshotManager
@property (readonly, nonatomic, getter=isSpeakerPresent) BOOL speakerPresent; // ivar: _speakerPresent
@property (readonly) HMDCameraStreamSnapshotHandler *streamSnapshotHandler; // ivar: _streamSnapshotHandler
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isCameraRecordingFeatureSupported) BOOL supportsCameraRecordingFeature;
@property (readonly, copy) NSString *urlString;


+(BOOL)hasMessageReceiverChildren;
+(BOOL)supportsSecureCoding;
+(id)bulletinBoard;
+(id)logCategory;
+(void)setBulletinBoard:(id)arg0 ;
-(BOOL)_areFaceClassificationsSuppressedForSignificantEvent:(id)arg0 ;
-(BOOL)_shouldNotifyForSignificantEvent:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)dumpState;
-(id)initWithAccessory:(id)arg0 services:(id)arg1 msgDispatcher:(id)arg2 workQueue:(id)arg3 home:(id)arg4 settingsManager:(id)arg5 ;
-(id)initWithAccessory:(id)arg0 services:(id)arg1 recordingManagementService:(id)arg2 msgDispatcher:(id)arg3 workQueue:(id)arg4 home:(id)arg5 settingsManager:(id)arg6 uniqueIdentifier:(id)arg7 clipManager:(id)arg8 clipUserNotificationCenter:(id)arg9 reachabilityEventManager:(id)arg10 networkMonitor:(id)arg11 streamSnapshotHandler:(id)arg12 snapshotManager:(id)arg13 cameraStreamManagers:(id)arg14 significantEventNotificationFilter:(id)arg15 notificationCenter:(id)arg16 ;
-(id)messageReceiverChildren;
-(void)_createCameraRecordingManager;
-(void)_createSignificantEventListener;
-(void)_handleNegotiateStreamRequest:(id)arg0 ;
-(void)_handleStreamControlRequest:(id)arg0 ;
-(void)_postNotificationForUpdatedSignificantEvent:(id)arg0 ;
-(void)_setControlSupport;
-(void)_setUpBulletinNotificationManagerObserver;
-(void)cameraProfileSettingsManager:(id)arg0 canDisableRecordingWithCompletion:(id)arg1 ;
-(void)cameraProfileSettingsManager:(id)arg0 canEnableRecordingWithCompletion:(id)arg1 ;
-(void)cameraSettingProactiveReaderDidCompleteRead:(id)arg0 ;
-(void)clipManager:(id)arg0 didDeleteClipWithUUID:(id)arg1 ;
-(void)clipManager:(id)arg0 didUpdateSignificantEvent:(id)arg1 ;
-(void)clipManagerDidDisableCloudStorage:(id)arg0 ;
-(void)clipManagerDidStart:(id)arg0 ;
-(void)clipManagerDidStartUpCloudZone:(id)arg0 ;
-(void)clipManagerDidStop:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleCameraProfileSettingsDidChangeNotification:(id)arg0 ;
-(void)handleResidentsChangedNotification:(id)arg0 ;
-(void)listener:(id)arg0 didReceiveSignificantEvent:(id)arg1 heroFrameData:(id)arg2 ;
-(void)networkMonitorIsReachable:(id)arg0 ;
-(void)networkMonitorIsUnreachable:(id)arg0 ;
-(void)notificationManager:(id)arg0 didReceiveNotificationForCameraSignificantEventIdentifier:(id)arg1 notificationReasons:(NSUInteger)arg2 ;
-(void)registerForMessages;
-(void)removeCloudData;
-(void)setUp;
-(void)tearDownWithReplacementCameraProfile:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;
-(void)unconfigure;


@end


#endif
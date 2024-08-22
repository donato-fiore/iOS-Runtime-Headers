// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCCONTROLLERMANAGERAPPCLIENT_H
#define _GCCONTROLLERMANAGERAPPCLIENT_H

@class GCControllerManager, NSMutableSet, NSMutableDictionary, BKSHIDEventDeliveryPolicyObserver, NSDate, NSString;
@protocol GCControllerServiceRemoteClientInterface, GCPlayerIndicatorXPCProxyServiceClient, GCPlayerIndicatorXPCProxyServiceRemoteClientInterface, GCLightXPCProxyServiceClient, GCLightXPCProxyServiceRemoteClientInterface, GCAdaptiveTriggersXPCProxyServiceClient, GCAdaptiveTriggersXPCProxyServiceRemoteClientInterface, GCMotionXPCProxyServiceClient, GCMotionXPCProxyServiceRemoteClientInterface, GCBatteryXPCProxyServiceClient, GCBatteryXPCProxyServiceRemoteClientInterface, GCSettingsXPCProxyServiceClient, GCSettingsXPCProxyServiceRemoteClientInterface, GCGameIntentXPCProxyServiceClient, GCGameIntentXPCProxyServiceRemoteClientInterface, GCSystemGestureXPCProxyServiceClient, GCSystemGestureXPCProxyServiceRemoteClientInterface, BKSHIDEventDeliveryPolicyObserving, _GCAppClientInterface, GCIPCOutgoingConnection, GCControllerServiceRemoteServerInterface, GCPlayerIndicatorXPCProxyServiceRemoteServerInterface, GCLightXPCProxyServiceRemoteServerInterface, GCAdaptiveTriggersXPCProxyServiceRemoteServerInterface, GCSettingsXPCProxyServiceRemoteServerInterface, GCMotionXPCProxyServiceRemoteServerInterface, GCBatteryXPCProxyServiceRemoteServerInterface, GCPhotoVideoXPCProxyServiceRemoteServerInterface, GCGameIntentXPCProxyServiceRemoteServerInterface, GCSystemGestureXPCProxyServiceRemoteServerInterface, GCUserDefaultsXPCProxyServiceRemoteServerInterface, _GCIPCEndpointConnection;


#import "GCVirtualController.h"

@interface _GCControllerManagerAppClient : GCControllerManager <GCControllerServiceRemoteClientInterface, GCPlayerIndicatorXPCProxyServiceClient, GCPlayerIndicatorXPCProxyServiceRemoteClientInterface, GCLightXPCProxyServiceClient, GCLightXPCProxyServiceRemoteClientInterface, GCAdaptiveTriggersXPCProxyServiceClient, GCAdaptiveTriggersXPCProxyServiceRemoteClientInterface, GCMotionXPCProxyServiceClient, GCMotionXPCProxyServiceRemoteClientInterface, GCBatteryXPCProxyServiceClient, GCBatteryXPCProxyServiceRemoteClientInterface, GCSettingsXPCProxyServiceClient, GCSettingsXPCProxyServiceRemoteClientInterface, GCGameIntentXPCProxyServiceClient, GCGameIntentXPCProxyServiceRemoteClientInterface, GCSystemGestureXPCProxyServiceClient, GCSystemGestureXPCProxyServiceRemoteClientInterface, BKSHIDEventDeliveryPolicyObserving, _GCAppClientInterface>

 {
    NSMutableSet *_knownHIDServices;
    NSMutableDictionary *_publishedControllers;
    NSMutableSet *_pendingControllers;
    NSMutableSet *_serverValidControllerIdentifiers;
    NSMutableSet *_customControllerIdentifiers;
    id<GCIPCOutgoingConnection> *_serverConnection;
    id *_serverConnectionInvalidation;
    id *_serverConnectionInterruption;
    id<GCControllerServiceRemoteServerInterface> *_controllerService;
    id<GCPlayerIndicatorXPCProxyServiceRemoteServerInterface> *_playerIndicatorXPCProxyService;
    id<GCLightXPCProxyServiceRemoteServerInterface> *_lightXPCProxyService;
    id<GCAdaptiveTriggersXPCProxyServiceRemoteServerInterface> *_adaptiveTriggersXPCProxyService;
    id<GCSettingsXPCProxyServiceRemoteServerInterface> *_settingsXPCProxyService;
    id<GCMotionXPCProxyServiceRemoteServerInterface> *_motionXPCProxyService;
    id<GCBatteryXPCProxyServiceRemoteServerInterface> *_batteryXPCProxyService;
    id<GCPhotoVideoXPCProxyServiceRemoteServerInterface> *_photoVideoService;
    id<GCGameIntentXPCProxyServiceRemoteServerInterface> *_gameIntentXPCProxyService;
    id<GCSystemGestureXPCProxyServiceRemoteServerInterface> *_systemGestureXPCProxyService;
    id<GCUserDefaultsXPCProxyServiceRemoteServerInterface> *_userDefaultsXPCProxyService;
    GCVirtualController *_forcedVirtualController;
    BKSHIDEventDeliveryPolicyObserver *_hidEventObserver;
    BOOL _shouldResumeDaemonConnectionOnForeground;
    BOOL _bufferingStartPending;
    BOOL _bufferingStarted;
    BOOL _shouldStartBufferingOnForeground;
    NSDate *_recordingStart;
    BOOL _hasEnabledKeyboardMouseSupport;
}


@property (readonly) NSObject<_GCIPCEndpointConnection> *adaptiveTriggersXPCProxyServiceConnection;
@property (readonly) NSObject<GCAdaptiveTriggersXPCProxyServiceRemoteServerInterface> *adaptiveTriggersXPCProxyServiceRemoteServer;
@property (readonly) NSObject<_GCIPCEndpointConnection> *batteryXPCProxyServiceConnection;
@property (readonly) NSObject<GCBatteryXPCProxyServiceRemoteServerInterface> *batteryXPCProxyServiceRemoteServer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<_GCIPCEndpointConnection> *gameIntentXPCProxyServiceConnection;
@property (readonly) NSObject<GCGameIntentXPCProxyServiceRemoteServerInterface> *gameIntentXPCProxyServiceRemoteServer;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<_GCIPCEndpointConnection> *lightXPCProxyServiceConnection;
@property (readonly) NSObject<GCLightXPCProxyServiceRemoteServerInterface> *lightXPCProxyServiceRemoteServer;
@property (readonly) NSObject<_GCIPCEndpointConnection> *motionXPCProxyServiceConnection;
@property (readonly) NSObject<GCMotionXPCProxyServiceRemoteServerInterface> *motionXPCProxyServiceRemoteServer;
@property (readonly) NSObject<_GCIPCEndpointConnection> *playerIndicatorXPCProxyServiceConnection;
@property (readonly) NSObject<GCPlayerIndicatorXPCProxyServiceRemoteServerInterface> *playerIndicatorXPCProxyServiceRemoteServer;
@property (readonly) NSObject<_GCIPCEndpointConnection> *settingsXPCProxyServiceConnection;
@property (readonly) NSObject<GCSettingsXPCProxyServiceRemoteServerInterface> *settingsXPCProxyServiceRemoteServer;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) NSObject<_GCIPCEndpointConnection> *systemGestureXPCProxyServiceConnection;
@property (readonly) NSObject<GCSystemGestureXPCProxyServiceRemoteServerInterface> *systemGestureXPCProxyServiceRemoteServer;


-(BOOL)_containsPublishedController:(id)arg0 ;
-(id)_mostRecentlyActiveControllerIgnoring:(id)arg0 ;
-(id)_mostRecentlyActiveExtendedGamepadIgnoring:(id)arg0 ;
-(id)_mostRecentlyActiveMicroGamepadIgnoring:(id)arg0 ;
-(id)controllers;
-(id)currentController;
-(id)currentExtendedGamepad;
-(id)currentMicroGamepad;
-(id)init;
-(id)mice;
-(id)serviceClientForIPCService:(id)arg0 ;
-(void)CBApplicationDidBecomeActive;
-(void)CBApplicationWillResignActive;
-(void)_connectToDaemon;
-(void)_onqueue_addPendingController:(id)arg0 ;
-(void)_onqueue_publishController:(id)arg0 ;
-(void)_onqueue_publishCustomController:(id)arg0 ;
-(void)_onqueue_refreshPublishedControllers;
-(void)_onqueue_unpublishController:(id)arg0 ;
-(void)_onqueue_unpublishCustomController:(id)arg0 ;
-(void)_resumeDaemonConnection;
-(void)_setCurrentController:(id)arg0 ;
-(void)_setCurrentExtendedGamepad:(id)arg0 ;
-(void)_setCurrentMicroGamepad:(id)arg0 ;
-(void)createVirtualControllerView;
-(void)dealloc;
-(void)enableKeyboardAndMouseSupport;
-(void)finalizeRecording;
-(void)handleKeyboardEventAsFrontmostApp:(id)arg0 ;
-(void)handleMouseEventAsFrontmostApp:(id)arg0 ;
-(void)observerDeliveryPolicyDidChange:(id)arg0 ;
-(void)onHIDDeviceAdded:(struct __IOHIDServiceClient *)arg0 ;
-(void)onHIDDeviceRemoved:(struct __IOHIDServiceClient *)arg0 ;
-(void)onScreenshotTriggeredWithController:(id)arg0 ;
-(void)onVideoRecordingToggledWithController:(id)arg0 mode:(NSInteger)arg1 ;
-(void)open;
-(void)publishControllers:(id)arg0 ;
-(void)refreshControllers;
-(void)setCurrentController:(id)arg0 ;
-(void)setCurrentExtendedGamepad:(id)arg0 ;
-(void)setCurrentMicroGamepad:(id)arg0 ;
-(void)setProperty:(id)arg0 forKey:(id)arg1 forHIDServiceClientWithRegistryID:(id)arg2 ;
-(void)startBuffering;
-(void)startVideoRecording;
-(void)startVideoRecordingBuffering;
-(void)stopBuffering;
-(void)stopVideoRecordingBuffering;
-(void)stopVideoRecordingWithClipBuffering:(BOOL)arg0 controller:(id)arg1 ;
-(void)unpublishControllersWithIdentifiers:(id)arg0 ;
-(void)updateCurrentControllerAndProfileForUnpublishedController:(id)arg0 ;
-(void)updateEmulatedControllerEnabled;


@end


#endif
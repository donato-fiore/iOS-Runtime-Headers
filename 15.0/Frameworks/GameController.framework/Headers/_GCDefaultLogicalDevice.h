// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GCDEFAULTLOGICALDEVICE_H
#define _GCDEFAULTLOGICALDEVICE_H

@class NSMapTable, NSArray, NSMutableDictionary, NSSet, NSString;
@protocol _GCDeviceControllerProviding, _GCDeviceSettingsComponent, _GCDeviceSystemGestureComponent, GCPlayerIndicatorXPCProxyServerEndpointDelegate, GCLightXPCProxyServerEndpointDelegate, GCAdaptiveTriggersXPCProxyServerEndpointDelegate, GCMotionXPCProxyServerEndpointDelegate, GCBatteryXPCProxyServerEndpointDelegate, GCSettingsXPCProxyServerEndpointDelegate, GCGameIntentXPCProxyServerEndpointDelegate, GCSystemGestureXPCProxyServerEndpointDelegate, GCApplicationStateObserver, _GCLogicalDevice, _GCDevicePlayerIndexIndicatorComponent, _GCDeviceAdaptiveTriggersComponent, _GCDeviceLightComponent, _GCDeviceMotionComponent, _GCDeviceBatteryComponent, _GCDeviceGameIntentComponent, _GCDefaultLogicalDeviceDelegate, NSObject><NSCopying><NSSecureCoding, _GCDeviceManager, _GCPhysicalDevice;

#import <Foundation/Foundation.h>

#import "GCDeviceLight.h"
#import "GCDeviceBattery.h"
#import "GCSystemGesturesState.h"
#import "_GCDeviceConfiguration.h"

@interface _GCDefaultLogicalDevice : NSObject <_GCDeviceControllerProviding, _GCDeviceSettingsComponent, _GCDeviceSystemGestureComponent, GCPlayerIndicatorXPCProxyServerEndpointDelegate, GCLightXPCProxyServerEndpointDelegate, GCAdaptiveTriggersXPCProxyServerEndpointDelegate, GCMotionXPCProxyServerEndpointDelegate, GCBatteryXPCProxyServerEndpointDelegate, GCSettingsXPCProxyServerEndpointDelegate, GCGameIntentXPCProxyServerEndpointDelegate, GCSystemGestureXPCProxyServerEndpointDelegate, GCApplicationStateObserver, _GCLogicalDevice>

 {
    NSMapTable *_clients;
    id<_GCDevicePlayerIndexIndicatorComponent> *_devicePlayerIndicatorComponent;
    NSInteger _indicatedPlayerIndex;
    NSMapTable *_clientPlayerIndicatorEndpoints;
    id<_GCDeviceAdaptiveTriggersComponent> *_deviceAdaptiveTriggersComponent;
    NSArray *_adaptiveTriggerStatuses;
    NSMapTable *_pidToAdaptiveTriggersComponent;
    NSMapTable *_clientAdaptiveTriggersEndpoints;
    id<_GCDeviceLightComponent> *_deviceLightComponent;
    GCDeviceLight *_light;
    NSMapTable *_clientLightEndpoints;
    id<_GCDeviceMotionComponent> *_deviceMotionComponent;
    BOOL _motionSensorsActive;
    NSMapTable *_clientMotionEndpoints;
    id<_GCDeviceBatteryComponent> *_deviceBatteryComponent;
    GCDeviceBattery *_battery;
    NSMapTable *_clientBatteryEndpoints;
    id<_GCDeviceSettingsComponent> *_deviceSettingsComponent;
    NSMapTable *_clientSettingsEndpoints;
    NSMutableDictionary *_deviceSettingsForBundleIDs;
    id<_GCDeviceGameIntentComponent> *_deviceGameIntentComponent;
    NSMapTable *_clientGameIntentEndpoints;
    id<_GCDeviceSystemGestureComponent> *_deviceSystemGestureComponent;
    GCSystemGesturesState *_activeSystemGesturesState;
    NSMapTable *_pidToSystemGesturesState;
    NSMapTable *_clientSystemGestureEndpoints;
    NSMutableDictionary *_pidToAnalytics;
}


@property (nonatomic) BOOL activeApplicationCanReceiveEvents; // ivar: _activeApplicationCanReceiveEvents
@property (nonatomic) int activeApplicationPID; // ivar: _activeApplicationPID
@property (retain, nonatomic) GCSystemGesturesState *activeSystemGesturesState;
@property (readonly) NSSet *components;
@property (readonly, nonatomic) _GCDeviceConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_GCDefaultLogicalDeviceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property (readonly, weak) NSObject<_GCDeviceManager> *manager; // ivar: _manager
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<_GCPhysicalDevice> *underlyingDevice; // ivar: _underlyingDevice
@property (readonly) NSSet *underlyingDevices;


-(BOOL)_addClient:(id)arg0 ;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(id)defaultSettings;
-(id)init;
-(id)initWithPhysicalDevice:(id)arg0 configuration:(id)arg1 manager:(id)arg2 ;
-(id)makeControllerForClient:(id)arg0 ;
-(id)propertyForKey:(id)arg0 ;
-(id)redactedDescription;
-(id)settingsForBundleIdentifier:(id)arg0 ;
-(void)_removeClient:(id)arg0 ;
-(void)activateLogical;
-(void)adaptiveTriggersXPCProxyServerEndpoint:(id)arg0 didReceiveAdaptiveTriggersChange:(id)arg1 forIndex:(int)arg2 ;
-(void)applicationBackgrounded:(int)arg0 ;
-(void)applicationCanReceiveEventsDidChange:(BOOL)arg0 forPID:(int)arg1 ;
-(void)applicationForegrounded:(int)arg0 ;
-(void)deactivateLogical;
-(void)gameIntentXPCProxyServerEndpoint:(id)arg0 didReceiveGameIntent:(NSInteger)arg1 ;
-(void)lightXPCProxyServerEndpoint:(id)arg0 didReceiveLightChange:(id)arg1 ;
-(void)motionXPCProxyServerEndpoint:(id)arg0 didReceiveSensorsActiveChange:(BOOL)arg1 ;
-(void)playerIndicatorXPCProxyServerEndpoint:(id)arg0 didReceivePlayerIndexChange:(NSInteger)arg1 ;
-(void)startTrackingSessionForClient:(id)arg0 ;
-(void)stopObservingClientStateChanges:(id)arg0 ;
-(void)stopObservingClientStateChangesForAllClients;
-(void)stopTrackingSessionForClient:(id)arg0 ;
-(void)stopTrackingSessionsForAllClients;
-(void)systemGestureXPCProxyServerEndpoint:(id)arg0 didSetSystemGestureStateForInput:(id)arg1 enabled:(BOOL)arg2 ;
-(void)systemGestureXPCProxyServerEndpoint:(id)arg0 disableSystemGestureForInput:(id)arg1 ;
-(void)systemGestureXPCProxyServerEndpoint:(id)arg0 enableSystemGestureForInput:(id)arg1 ;


@end


#endif
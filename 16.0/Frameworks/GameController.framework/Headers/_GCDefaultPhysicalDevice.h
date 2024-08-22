// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCDEFAULTPHYSICALDEVICE_H
#define _GCDEFAULTPHYSICALDEVICE_H

@class NSSet, NSString, NSArray, _GCHIDServiceInfo;
@protocol _GCDeviceGamepadComponent, _GCDeviceMotionComponent, _GCDevicePlayerIndexIndicatorComponent, _GCDeviceLightComponent, _GCDeviceAdaptiveTriggersComponent, GCAdaptiveTriggersServiceClientInterface, _GCDeviceBatteryComponent, GCBatteryServiceClientInterface, _GCDeviceHapticCapabilitiesComponent, _GCDeviceGameIntentComponent, GCGameIntentServiceClientInterface, _GCExternalAccessory, _GCPhysicalDevice, _GCDeviceDriverConnection, GCAdaptiveTriggersServiceServerInterface, GCBatteryServiceServerInterface, _GCDefaultPhysicalDeviceDelegate, GCGameIntentServiceServerInterface, _GCGamepadEventSourceDescription, NSObject><NSCopying><NSSecureCoding, GCLightServiceServerInterface, _GCDeviceManager, _GCMotionEventSourceDescription, GCMotionServiceServerInterface;

#import <Foundation/Foundation.h>

#import "GCDeviceBattery.h"
#import "GCHapticCapabilityGraph.h"
#import "GCDeviceLight.h"

@interface _GCDefaultPhysicalDevice : NSObject <_GCDeviceGamepadComponent, _GCDeviceMotionComponent, _GCDevicePlayerIndexIndicatorComponent, _GCDeviceLightComponent, _GCDeviceAdaptiveTriggersComponent, GCAdaptiveTriggersServiceClientInterface, _GCDeviceBatteryComponent, GCBatteryServiceClientInterface, _GCDeviceHapticCapabilitiesComponent, _GCDeviceGameIntentComponent, GCGameIntentServiceClientInterface, _GCExternalAccessory, _GCPhysicalDevice>

 {
    id<_GCDeviceDriverConnection> *_driverConnection;
    id *_driverConnectionInvalidationRegistration;
    id<_GCDeviceDriverConnection> *_filterConnection;
    id *_filterConnectionInvalidationRegistration;
    id *_lightComponentServiceConnectedHandler;
    id *_adaptiveTriggersComponentServiceConnectedHandler;
    id *_adaptiveTriggersComponentStatusUpdatedHandler;
    id *_motionComponentServiceConnectedHandler;
    id *_batteryComponentServiceConnectedHandler;
    id *_batteryComponentBatteryUpdatedHandler;
    NSInteger _cachedIntentEvent;
    id *_gameIntentComponentGameIntentTriggeredHandler;
    NSInteger _cachedGlyphSet;
}


@property (readonly, nonatomic) NSObject<GCAdaptiveTriggersServiceServerInterface> *adaptiveTriggersServiceServer; // ivar: _adaptiveTriggersServiceServer
@property (readonly, nonatomic) GCDeviceBattery *battery;
@property (readonly, nonatomic) NSObject<GCBatteryServiceServerInterface> *batteryServiceServer; // ivar: _batteryServiceServer
@property (readonly) NSSet *components;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_GCDefaultPhysicalDeviceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *deviceAdaptiveTriggersComponentStatusUpdatedHandler;
@property (copy, nonatomic) id *deviceAdaptiveTriggersServiceConnectedHandler;
@property (copy, nonatomic) id *deviceBatteryComponentBatteryUpdatedHandler;
@property (copy, nonatomic) id *deviceBatteryServiceConnectedHandler;
@property (copy, nonatomic) id *deviceGameIntentComponentGameIntentTriggeredHandler;
@property (copy, nonatomic) id *deviceLightServiceConnectedHandler;
@property (copy, nonatomic) id *deviceMotionServiceConnectedHandler;
@property (readonly, nonatomic) NSObject<GCGameIntentServiceServerInterface> *gameIntentServiceServer; // ivar: _gameIntentServiceServer
@property (readonly) NSObject<_GCGamepadEventSourceDescription> *gamepadEventSource;
@property (readonly, nonatomic) GCHapticCapabilityGraph *hapticCapabilityGraph;
@property (readonly, nonatomic) NSArray *hapticEngines;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property NSInteger indicatedPlayerIndex;
@property (retain, nonatomic) GCDeviceLight *light;
@property (readonly, nonatomic) NSObject<GCLightServiceServerInterface> *lightServiceServer; // ivar: _lightServiceServer
@property (readonly, weak) NSObject<_GCDeviceManager> *manager; // ivar: _manager
@property (readonly, nonatomic) NSObject<_GCMotionEventSourceDescription> *motionEventSource;
@property (readonly, nonatomic) NSObject<GCMotionServiceServerInterface> *motionServiceServer; // ivar: _motionServiceServer
@property (nonatomic) BOOL sensorsActive;
@property (readonly, nonatomic) _GCHIDServiceInfo *serviceInfo; // ivar: _serviceInfo
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *triggerStatuses;


+(id)identifierForService:(id)arg0 ;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)supportsAdaptiveTriggers;
-(BOOL)supportsBattery;
-(BOOL)supportsGamepad;
-(BOOL)supportsHapticCapabilities;
-(BOOL)supportsLight;
-(BOOL)supportsMotion;
-(BOOL)supportsPlayerIndicator;
-(NSInteger)getGlyphSetOverride;
-(id)driverConnection;
-(id)init;
-(id)initWithHIDDevice:(id)arg0 manager:(id)arg1 ;
-(id)propertyForKey:(id)arg0 ;
-(id)redactedDescription;
-(void)_workaround_backbone_97462229:(id)arg0 ;
-(void)dealloc;
-(void)eaAccessoriesDidChange;
-(void)setAdaptiveTriggersPayload:(id)arg0 forIndex:(int)arg1 ;
-(void)setDriverConnection:(id)arg0 ;
-(void)setEnableGlobalGameControllerFunctionality:(BOOL)arg0 ;
-(void)setFilterConnection:(id)arg0 ;
-(void)triggerGameIntentWithEvent:(NSInteger)arg0 ;
-(void)updateAdaptiveTriggerStatusWithLeftMode:(unsigned char)arg0 leftStatus:(unsigned char)arg1 leftArmPosition:(unsigned char)arg2 rightMode:(unsigned char)arg3 rightStatus:(unsigned char)arg4 rightArmPosition:(unsigned char)arg5 ;
-(void)updateBattery:(unsigned char)arg0 isCharging:(BOOL)arg1 ;
-(void)updateGlyphSetOverride;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCNINTENDOJOYCONDEVICE_H
#define _GCNINTENDOJOYCONDEVICE_H

@class _GCHIDServiceInfo, NSMapTable, NSSet, _GCDeviceConfiguration, NSString, NSArray;
@protocol _GCDeviceControllerProviding, _GCDeviceGamepadComponent, _GCDevicePlayerIndexIndicatorComponent, _GCDeviceBatteryComponent, _GCDeviceHapticCapabilitiesComponent, GCNintendoJoyConFusionGestureServiceClientInterface, _GCDriverClientHapticInterfaceProvider, GCPlayerIndicatorXPCProxyServerEndpointDelegate, GCBatteryXPCProxyServerEndpointDelegate, _GCPhysicalDevice, _GCLogicalDevice, GCBatteryServiceServerInterface, _GCDeviceDriverConnection, _GCGamepadEventSourceDescription, NSObject><NSCopying><NSSecureCoding, _GCDeviceManager;

#import <Foundation/Foundation.h>

#import "GCDeviceBattery.h"
#import "_GCNintendoFusedJoyConDevice.h"
#import "GCHapticCapabilityGraph.h"

@interface _GCNintendoJoyConDevice : NSObject <_GCDeviceControllerProviding, _GCDeviceGamepadComponent, _GCDevicePlayerIndexIndicatorComponent, _GCDeviceBatteryComponent, _GCDeviceHapticCapabilitiesComponent, GCNintendoJoyConFusionGestureServiceClientInterface, _GCDriverClientHapticInterfaceProvider, GCPlayerIndicatorXPCProxyServerEndpointDelegate, GCBatteryXPCProxyServerEndpointDelegate, _GCPhysicalDevice, _GCLogicalDevice>

 {
    _GCHIDServiceInfo *_serviceInfo;
    id *_driverConnectionInvalidationRegistration;
    NSMapTable *_clients;
    NSInteger _indicatedPlayerIndex;
    NSMapTable *_clientPlayerIndicatorEndpoints;
    id *_batteryComponentBatteryUpdatedHandler;
    id<GCBatteryServiceServerInterface> *_batteryServiceServer;
    GCDeviceBattery *_battery;
    NSMapTable *_clientBatteryEndpoints;
}


@property (readonly, nonatomic) GCDeviceBattery *battery;
@property (readonly, nonatomic) ? bodyColor;
@property (readonly, nonatomic) ? buttonsColor;
@property (readonly) NSSet *components;
@property (retain, nonatomic) _GCDeviceConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *deviceBatteryComponentBatteryUpdatedHandler;
@property (copy, nonatomic) id *deviceBatteryServiceConnectedHandler;
@property (readonly, nonatomic) NSObject<_GCDeviceDriverConnection> *driverConnection; // ivar: _driverConnection
@property (weak, nonatomic) _GCNintendoFusedJoyConDevice *fusionDevice; // ivar: _fusionDevice
@property (readonly) NSObject<_GCGamepadEventSourceDescription> *gamepadEventSource;
@property (readonly, nonatomic) GCHapticCapabilityGraph *hapticCapabilityGraph;
@property (readonly, nonatomic) NSArray *hapticEngines;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property NSInteger indicatedPlayerIndex;
@property (nonatomic) unsigned char inputMode;
@property (readonly, weak) NSObject<_GCDeviceManager> *manager; // ivar: _manager
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned char type; // ivar: _type
@property (readonly) NSSet *underlyingDevices;


-(id)hapticDriver;
-(id)init;
-(id)initWithHIDDevice:(id)arg0 manager:(id)arg1 type:(unsigned char)arg2 ;
-(id)makeControllerForClient:(id)arg0 ;
-(id)propertyForKey:(id)arg0 ;
-(id)readBattery;
-(void)_addClient:(id)arg0 ;
-(void)_removeClient:(id)arg0 ;
-(void)activateLogical;
-(void)homeButtonLongPressGesture:(BOOL)arg0 ;
-(void)playerIndicatorXPCProxyServerEndpoint:(id)arg0 didReceivePlayerIndexChange:(NSInteger)arg1 ;
-(void)propagateBattery:(id)arg0 ;
-(void)updateBattery:(unsigned char)arg0 isCharging:(BOOL)arg1 ;


@end


#endif
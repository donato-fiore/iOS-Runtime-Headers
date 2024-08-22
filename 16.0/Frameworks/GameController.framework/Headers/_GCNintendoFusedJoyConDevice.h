// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCNINTENDOFUSEDJOYCONDEVICE_H
#define _GCNINTENDOFUSEDJOYCONDEVICE_H

@class NSMapTable, NSSet, _GCDeviceConfiguration, NSString;
@protocol _GCDeviceControllerProviding, _GCDeviceGamepadComponent, _GCDevicePlayerIndexIndicatorComponent, _GCDeviceBatteryComponent, _GCDeviceSettingsComponent, GCPlayerIndicatorXPCProxyServerEndpointDelegate, GCBatteryXPCProxyServerEndpointDelegate, GCSettingsXPCProxyServerEndpointDelegate, _GCLogicalDevice, _GCDriverClientHapticInterfaceProvider, GCSSettingsStoreService, _GCGamepadEventSourceDescription, _GCDriverClientHapticInterface, NSObject><NSCopying><NSSecureCoding, _GCDeviceManager;

#import <Foundation/Foundation.h>

#import "GCDeviceBattery.h"
#import "GCHapticCapabilityGraph.h"
#import "_GCNintendoJoyConDevice.h"

@interface _GCNintendoFusedJoyConDevice : NSObject <_GCDeviceControllerProviding, _GCDeviceGamepadComponent, _GCDevicePlayerIndexIndicatorComponent, _GCDeviceBatteryComponent, _GCDeviceSettingsComponent, GCPlayerIndicatorXPCProxyServerEndpointDelegate, GCBatteryXPCProxyServerEndpointDelegate, GCSettingsXPCProxyServerEndpointDelegate, _GCLogicalDevice, _GCDriverClientHapticInterfaceProvider>

 {
    NSMapTable *_clients;
    NSInteger _indicatedPlayerIndex;
    NSMapTable *_clientPlayerIndicatorEndpoints;
    GCDeviceBattery *_battery;
    NSMapTable *_clientBatteryEndpoints;
    id<GCSSettingsStoreService> *_settingsStore;
    NSMapTable *_clientSettingsEndpoints;
    GCHapticCapabilityGraph *_hapticCapabilityGraph;
}


@property (readonly, nonatomic) GCDeviceBattery *battery;
@property (readonly) NSSet *components;
@property (retain, nonatomic) _GCDeviceConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *deviceBatteryComponentBatteryUpdatedHandler;
@property (copy, nonatomic) id *deviceBatteryServiceConnectedHandler;
@property (readonly) NSObject<_GCGamepadEventSourceDescription> *gamepadEventSource;
@property (readonly, nonatomic) NSObject<_GCDriverClientHapticInterface> *hapticDriver; // ivar: _hapticDriver
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property NSInteger indicatedPlayerIndex;
@property (readonly, nonatomic) _GCNintendoJoyConDevice *leftDevice; // ivar: _leftDevice
@property (readonly, weak) NSObject<_GCDeviceManager> *manager; // ivar: _manager
@property (readonly, nonatomic) _GCNintendoJoyConDevice *rightDevice; // ivar: _rightDevice
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) NSSet *underlyingDevices;


+(id)identifierForFusedJoyConDeviceWithLeftDevice:(id)arg0 rightDevice:(id)arg1 ;
-(id)init;
-(id)initWithLeft:(id)arg0 right:(id)arg1 manager:(id)arg2 ;
-(id)makeControllerForClient:(id)arg0 ;
-(id)persistentIdentifierForSettings;
-(id)propertyForKey:(id)arg0 ;
-(void)_addClient:(id)arg0 ;
-(void)_propagateBattery;
-(void)_refreshBattery;
-(void)_removeClient:(id)arg0 ;
-(void)activateLogical;
-(void)deactivate;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)playerIndicatorXPCProxyServerEndpoint:(id)arg0 didReceivePlayerIndexChange:(NSInteger)arg1 ;
-(void)settingsDidChange;


@end


#endif
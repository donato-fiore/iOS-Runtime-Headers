// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GCCONTROLLER_H
#define GCCONTROLLER_H

@class NSString, NSMutableArray, NSArray, GCPhysicalInputProfile<GCNamedProfile>;
@protocol _GCIPCObject, NSSecureCoding, GCDeviceLegacy, GCDevice, GCControllerProductInfo, GCControllerMotionConfigurableSensors, GCControllerSettingsComponent, GCControllerPlayerIndicator, GCDeviceHapticCapabilityInfo, GCDeviceLightComponent, GCDeviceBatteryComponent, GCDeviceGameIntentComponent, GCSystemGestureComponent, GCNamedProfile, OS_dispatch_queue, NSObject><NSCopying><NSSecureCoding, NSCopying><NSObject><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GCPhysicalInputProfile.h"
#import "GCMotion.h"
#import "GCDeviceBattery.h"
#import "GCExtendedGamepad.h"
#import "GCGamepad.h"
#import "GCDeviceHaptics.h"
#import "GCDeviceLight.h"
#import "GCMicroGamepad.h"
#import "GCControllerSettings.h"

@interface GCController : NSObject <_GCIPCObject, NSSecureCoding, GCDeviceLegacy, GCDevice>

 {
    id<GCControllerProductInfo> *_info;
    GCPhysicalInputProfile *_physicalInput;
    GCMotion *_motion;
    id<GCControllerMotionConfigurableSensors> *_motionConfigurableSensors;
    id<GCControllerSettingsComponent> *_settings;
    id<GCControllerPlayerIndicator> *_playerIndicator;
    id<GCDeviceHapticCapabilityInfo> *_hapticCapabilityInfo;
    id<GCDeviceLightComponent> *_light;
    id<GCDeviceBatteryComponent> *_battery;
    id<GCDeviceGameIntentComponent> *_gameIntent;
    id<GCSystemGestureComponent> *_systemGesture;
    id<GCNamedProfile> *_profile;
    NSString *_uniqueIdentifier;
    unsigned int _service;
    NSMutableArray *_hidServices;
    NSString *_physicalDeviceUniqueID;
    NSString *_debugName;
    NSString *_vendorName;
    NSString *_description;
    NSUInteger _deviceHash;
    NSInteger _playerIndex;
    BOOL _physicalDeviceUsesCompass;
    BOOL _forwarded;
    BOOL _allHIDDevicesConnected;
    BOOL _published;
    BOOL _isProxyController;
}


@property (copy, nonatomic) id *__deprecated_controllerPausedHandler;
@property (nonatomic, getter=areAllHIDDevicesConnected) BOOL allHIDDevicesConnected;
@property (readonly, nonatomic, getter=isAttachedToDevice) BOOL attachedToDevice;
@property (readonly, copy, nonatomic) GCDeviceBattery *battery;
@property (readonly, nonatomic, getter=isComponentBased) BOOL componentBased;
@property (readonly, nonatomic) NSArray *components;
@property (copy, nonatomic) NSArray *components; // ivar: _components
@property (copy, nonatomic) id *controllerPausedHandler; // ivar: _controllerPausedHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *debugName;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger deviceHash;
@property (readonly, nonatomic) GCExtendedGamepad *extendedGamepad;
@property (nonatomic, getter=isForwarded) BOOL forwarded;
@property (readonly, nonatomic) GCGamepad *gamepad;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue; // ivar: _handlerQueue
@property (readonly, retain, nonatomic) GCDeviceHaptics *haptics;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *hidServices;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier;
@property (readonly, nonatomic) NSObject<NSCopying><NSObject><NSSecureCoding> *identifier; // ivar: _identifier
@property (readonly, retain, nonatomic) GCDeviceLight *light;
@property (readonly, nonatomic) GCMicroGamepad *microGamepad;
@property (readonly, nonatomic) GCMotion *motion;
@property (readonly, nonatomic) NSObject<GCControllerMotionConfigurableSensors> *motionConfigurableSensors;
@property (retain, nonatomic) NSString *physicalDeviceUniqueID;
@property (nonatomic) BOOL physicalDeviceUsesCompass;
@property (readonly, nonatomic) GCPhysicalInputProfile *physicalInputProfile;
@property (nonatomic) NSInteger playerIndex;
@property (readonly, nonatomic) NSString *productCategory;
@property (readonly, nonatomic) NSString *productCategory;
@property (retain, nonatomic) GCPhysicalInputProfile<GCNamedProfile> *profile;
@property (nonatomic, getter=isPublished) BOOL published;
@property (readonly, nonatomic) unsigned int service;
@property (readonly, nonatomic) GCControllerSettings *settings;
@property (readonly, nonatomic) GCControllerSettings *settingsForBundleID;
@property (readonly, getter=isSnapshot) BOOL snapshot; // ivar: _snapshot
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<GCSystemGestureComponent> *systemGestureComponent;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *vendorName;


+(BOOL)shouldMonitorBackgroundEvents;
+(BOOL)supportsSecureCoding;
+(id)controllerWithExtendedGamepad;
+(id)controllerWithMicroGamepad;
+(id)controllers;
+(id)current;
+(void)__daemon__appDidEnterBackground;
+(void)__daemon__appWillEnterForeground;
+(void)__openXPC__;
+(void)__openXPC_and_CBApplicationDidBecomeActive__;
+(void)__open__;
+(void)__setLogger__:(id)arg0 ;
+(void)_startWirelessControllerDiscoveryWithCompanions:(BOOL)arg0 btClassic:(BOOL)arg1 btle:(BOOL)arg2 completionHandler:(id)arg3 ;
+(void)setShouldMonitorBackgroundEvents:(BOOL)arg0 ;
+(void)startWirelessControllerDiscoveryWithCompletionHandler:(id)arg0 ;
+(void)stopWirelessControllerDiscovery;
-(*void)createInputBufferForDevice:(struct __IOHIDDevice *)arg0 withSize:(NSUInteger)arg1 ;
-(BOOL)_legacy_isEqualToController:(id)arg0 ;
-(BOOL)displayTrueSiriRemoteName;
-(BOOL)hasServiceRef:(struct __IOHIDServiceClient *)arg0 ;
-(BOOL)isATVRemote;
-(BOOL)isEqualToController:(id)arg0 ;
-(BOOL)isProxyController;
-(id)_componentOfClass:(Class)arg0 ;
-(id)_componentWithProtocol:(id)arg0 ;
-(id)_legacy_keyboard;
-(id)_legacy_mouse;
-(id)anonymizedIdentifier;
-(id)capture;
-(id)controllerSettings;
-(id)detailedProductCategory;
-(id)hapticEngines;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComponents:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 components:(id)arg1 ;
-(id)initWithProfile:(id)arg0 ;
-(id)initWithProfileClass:(Class)arg0 serviceRef:(struct __IOHIDServiceClient *)arg1 ;
-(id)initWithProfileClass:(Class)arg0 services:(id)arg1 ;
-(id)initWithServiceRef:(struct __IOHIDServiceClient *)arg0 ;
-(unsigned int)sampleRate;
-(void)_addComponent:(id)arg0 ;
-(void)_becomeCurrent;
-(void)_legacy_invalidateDescription;
-(void)_triggerGameIntent;
-(void)addServiceRef:(id)arg0 ;
-(void)addServiceRefs:(id)arg0 ;
-(void)addServiceRefsWithDevice:(id)arg0 ;
-(void)clearServiceRef;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleEvent:(struct __IOHIDEvent *)arg0 ;
-(void)initializeHapticEngines;
-(void)removeComponent:(id)arg0 ;
-(void)removeHapticEngines;
-(void)removeServiceRef:(struct __IOHIDServiceClient *)arg0 ;
-(void)setIsProxyController:(BOOL)arg0 ;


@end


#endif
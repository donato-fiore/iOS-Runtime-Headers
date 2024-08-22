// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GCCONTROLLERMANAGERSERVER_H
#define _GCCONTROLLERMANAGERSERVER_H

@class GCControllerManager, NSMutableDictionary, NSMutableSet, NSURL, NSSet, NSString;
@protocol GCPhysicalDeviceRegistry, GCLogicalDeviceRegistry, GCDeviceRegistry, GCDeviceConfigurationRegistry;



@interface _GCControllerManagerServer : GCControllerManager <GCPhysicalDeviceRegistry, GCLogicalDeviceRegistry, GCDeviceRegistry, GCDeviceConfigurationRegistry>

 {
    NSMutableDictionary *_allDeviceManagers;
    NSMutableDictionary *_physicalDeviceManagers;
    NSMutableDictionary *_logicalDeviceManagers;
    os_unfair_lock_s _configurationsLock;
    NSMutableSet *_configurations;
    NSMutableDictionary *_allDevices;
    NSMutableDictionary *_physicalDevices;
    NSMutableDictionary *_logicalDevices;
    NSMutableSet *_activeConfigurations;
    NSMutableSet *_hidServices;
    NSMutableDictionary *_hidServiceOwners;
    NSMutableDictionary *_pendingDriverConnections;
    NSMutableDictionary *_pendingFilterConnections;
    NSURL *_lastGeneratedURL;
}


@property (copy) NSSet *activeControllerDevices; // ivar: _activeControllerDevices
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<GCDeviceConfigurationRegistry> *deviceConfigurationRegistry;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSSet *pidsWithKeyboardAndMouseSupport;
@property (copy) NSSet *pidsWithKeyboardAndMouseSupport; // ivar: _pidsWithKeyboardAndMouseSupport
@property (readonly) Class superclass;


-(BOOL)acceptIncomingDriverConnection:(id)arg0 ;
-(BOOL)addConfiguration:(id)arg0 replaceExisting:(BOOL)arg1 ;
-(BOOL)hasConfigurationWithIdentifier:(id)arg0 ;
-(BOOL)removeConfigurationWithIdentifier:(id)arg0 ;
-(BOOL)updateConfiguration:(id)arg0 ;
-(id)_hidqueue_popPendingDriverConnectionsForRegistryID:(id)arg0 ;
-(id)_hidqueue_popPendingFilterConnectionsForRegistryID:(id)arg0 ;
-(id)configurationWithIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithControllerProfiles:(id)arg0 ;
-(id)lastGeneratedURL;
-(id)logicalDevices;
-(id)makeHIDEventSource:(struct __IOHIDEventSystemClient *)arg0 ;
-(void)_hidqueue_pushPendingDriverConnection:(id)arg0 forRegistryID:(id)arg1 ;
-(void)_hidqueue_pushPendingFilterConnection:(id)arg0 forRegistryID:(id)arg1 ;
-(void)_onqueue_refreshControllers;
-(void)_onqueue_refreshLogicalDevices;
-(void)_onqueue_registerLogicalDevice:(id)arg0 ;
-(void)_onqueue_registerPhysicalDevice:(id)arg0 ;
-(void)_onqueue_signalGameControllerFocusModeEvent;
-(void)_onqueue_unregisterLogicalDevice:(id)arg0 ;
-(void)_onqueue_unregisterPhysicalDevice:(id)arg0 ;
-(void)deviceManager:(id)arg0 deviceDidConnect:(id)arg1 ;
-(void)deviceManager:(id)arg0 deviceDidDisconnect:(id)arg1 ;
-(void)disableKeyboardAndMouseSupportForPID:(id)arg0 ;
-(void)driverCheckIn;
-(void)enableKeyboardAndMouseSupportForPID:(id)arg0 ;
-(void)onHIDDeviceAdded:(struct __IOHIDServiceClient *)arg0 ;
-(void)onHIDDeviceRemoved:(struct __IOHIDServiceClient *)arg0 ;
-(void)refreshActiveConfigurations;
-(void)refreshActiveConfigurationsWithCompletion:(id)arg0 ;
-(void)setLastGeneratedURL:(id)arg0 ;


@end


#endif
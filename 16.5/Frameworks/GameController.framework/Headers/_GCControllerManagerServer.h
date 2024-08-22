// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCCONTROLLERMANAGERSERVER_H
#define _GCCONTROLLERMANAGERSERVER_H

@class GCControllerManager, NSMutableDictionary, NSMutableSet, NSArray, GCSSettingsStore, NSString, NSFileHandle, NSURL, NSSet;
@protocol _GCPhysicalDeviceRegistry, _GCLogicalDeviceRegistry, _GCDeviceRegistry, _GCDeviceConfigurationRegistry, GCUserDefaults;



@interface _GCControllerManagerServer : GCControllerManager <_GCPhysicalDeviceRegistry, _GCLogicalDeviceRegistry, _GCDeviceRegistry, _GCDeviceConfigurationRegistry>

 {
    NSMutableDictionary *_allDeviceManagers;
    NSMutableDictionary *_physicalDeviceManagers;
    NSMutableDictionary *_logicalDeviceManagers;
    os_unfair_lock_s _configurationsLock;
    NSMutableSet *_configurations;
    id<GCUserDefaults> *_defaults;
    NSArray *_copilotSettings;
    GCSSettingsStore *_settingsStore;
    NSMutableSet *_copilotConfigurations;
    NSMutableDictionary *_allDevices;
    NSMutableDictionary *_physicalDevices;
    NSMutableDictionary *_logicalDevices;
    NSMutableSet *_activeConfigurations;
    NSMutableSet *_hidServices;
    NSMutableDictionary *_hidServiceOwners;
    NSMutableDictionary *_pendingDriverConnections;
    NSMutableDictionary *_pendingFilterConnections;
    NSString *_lastGeneratedName;
    NSFileHandle *_lastGeneratedDirectoryHandle;
    NSURL *_lastGeneratedURL;
}


@property (copy) NSSet *activeControllerDevices; // ivar: _activeControllerDevices
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<_GCDeviceConfigurationRegistry> *deviceConfigurationRegistry;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSSet *pidsWithKeyboardAndMouseSupport;
@property (copy) NSSet *pidsWithKeyboardAndMouseSupport; // ivar: _pidsWithKeyboardAndMouseSupport
@property (readonly) Class superclass;


-(BOOL)acceptIncomingDriverConnection:(id)arg0 ;
-(BOOL)addConfiguration:(id)arg0 replaceExisting:(BOOL)arg1 ;
-(BOOL)getLastGeneratedName:(*id)arg0 directoryHandle:(*id)arg1 url:(*id)arg2 ;
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
-(void)dealloc;
-(void)deviceManager:(id)arg0 deviceDidConnect:(id)arg1 ;
-(void)deviceManager:(id)arg0 deviceDidDisconnect:(id)arg1 ;
-(void)disableKeyboardAndMouseSupportForPID:(id)arg0 ;
-(void)driverCheckIn;
-(void)enableKeyboardAndMouseSupportForPID:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)onHIDDeviceAdded:(struct __IOHIDServiceClient *)arg0 ;
-(void)onHIDDeviceRemoved:(struct __IOHIDServiceClient *)arg0 ;
-(void)refreshActiveConfigurations;
-(void)refreshActiveConfigurationsWithCompletion:(id)arg0 ;
-(void)setLastGeneratedName:(id)arg0 directoryHandle:(id)arg1 url:(id)arg2 ;


@end


#endif
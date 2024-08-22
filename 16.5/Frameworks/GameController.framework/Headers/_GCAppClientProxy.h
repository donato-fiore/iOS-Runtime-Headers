// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCAPPCLIENTPROXY_H
#define _GCAPPCLIENTPROXY_H

@class NSMapTable, NSString, NSArray;
@protocol _GCDeviceClient, GCControllerServiceRemoteServerInterface, GCPlayerIndicatorXPCProxyServiceRemoteServerInterface, GCLightXPCProxyServiceRemoteServerInterface, GCAdaptiveTriggersXPCProxyServiceRemoteServerInterface, GCMotionXPCProxyServiceRemoteServerInterface, GCBatteryXPCProxyServiceRemoteServerInterface, GCGameIntentXPCProxyServiceRemoteServerInterface, GCSystemGestureXPCProxyServiceRemoteServerInterface, GCSettingsXPCProxyServiceRemoteServerInterface, _GCAppServerInterface, _GCIPCIncomingConnection, GCControllerServiceRemoteClientInterface, OS_os_transaction, _GCIPCObjectRegistry, _GCIPCServiceRegistry;

#import <Foundation/Foundation.h>

#import "_GCControllerManagerServer.h"

@interface _GCAppClientProxy : NSObject <_GCDeviceClient, GCControllerServiceRemoteServerInterface, GCPlayerIndicatorXPCProxyServiceRemoteServerInterface, GCLightXPCProxyServiceRemoteServerInterface, GCAdaptiveTriggersXPCProxyServiceRemoteServerInterface, GCMotionXPCProxyServiceRemoteServerInterface, GCBatteryXPCProxyServiceRemoteServerInterface, GCGameIntentXPCProxyServiceRemoteServerInterface, GCSystemGestureXPCProxyServiceRemoteServerInterface, GCSettingsXPCProxyServiceRemoteServerInterface, _GCAppServerInterface>

 {
    _GCControllerManagerServer *_server;
    uint8_t _invalid;
    id<_GCIPCIncomingConnection> *_connection;
    id *_connectionInvalidationRegistration;
    id *_connectionInterruptedRegistration;
    id<GCControllerServiceRemoteClientInterface> *_controllerServiceClient;
    NSUInteger _controllerServiceClientPendingUpdates;
    NSMapTable *_publishedControllerDescriptions;
    NSObject<OS_os_transaction> *_keyboardMouseTransaction;
}


@property (readonly) NSObject<_GCIPCObjectRegistry> *IPCObjectRegistry;
@property (readonly) NSObject<_GCIPCServiceRegistry> *IPCServiceRegistry;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;
@property (copy) NSArray *invalidationHandlers; // ivar: _invalidationHandlers
@property (readonly, nonatomic) int processIdentifier;


+(id)clientProxyWithConnection:(id)arg0 server:(id)arg1 ;
+(id)settingsSuiteName;
-(BOOL)readBooleanValueWithName:(id)arg0 ;
-(id)_initWithConnection:(id)arg0 server:(id)arg1 ;
-(id)addInvalidationHandler:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)redactedDescription;
-(void)_invalidate;
-(void)adaptiveTriggersXPCProxyServiceClientEndpointConnect:(id)arg0 reply:(id)arg1 ;
-(void)batteryXPCProxyServiceClientEndpointConnect:(id)arg0 reply:(id)arg1 ;
-(void)checkClipBufferingEnabledWithReply:(id)arg0 ;
-(void)checkEmulatedControllerEnabledWithReply:(id)arg0 ;
-(void)clientCanReceiveEventsDidChange:(BOOL)arg0 ;
-(void)connectToAdaptiveTriggersXPCProxyServiceWithClient:(id)arg0 reply:(id)arg1 ;
-(void)connectToBatteryXPCProxyServiceWithClient:(id)arg0 reply:(id)arg1 ;
-(void)connectToControllerServiceWithClient:(id)arg0 reply:(id)arg1 ;
-(void)connectToGameIntentXPCProxyServiceWithClient:(id)arg0 reply:(id)arg1 ;
-(void)connectToLightXPCProxyServiceWithClient:(id)arg0 reply:(id)arg1 ;
-(void)connectToMotionXPCProxyServiceWithClient:(id)arg0 reply:(id)arg1 ;
-(void)connectToPhotoVideoXPCProxyServiceWithClient:(id)arg0 reply:(id)arg1 ;
-(void)connectToPlayerIndicatorXPCProxyServiceWithClient:(id)arg0 reply:(id)arg1 ;
-(void)connectToSettingsXPCProxyServiceWithClient:(id)arg0 reply:(id)arg1 ;
-(void)connectToSystemGestureXPCProxyServiceWithClient:(id)arg0 reply:(id)arg1 ;
-(void)dealloc;
-(void)enableFeature:(NSInteger)arg0 ;
-(void)fetchControllerDescriptionsWithReply:(id)arg0 ;
-(void)gameIntentXPCProxyServiceClientEndpointConnect:(id)arg0 reply:(id)arg1 ;
-(void)generateURLFor:(id)arg0 withReply:(id)arg1 ;
-(void)getTheLastGeneratedURLWithReply:(id)arg0 ;
-(void)lightXPCProxyServiceClientEndpointConnect:(id)arg0 reply:(id)arg1 ;
-(void)motionXPCProxyServiceClientEndpointConnect:(id)arg0 reply:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)onVideoRecordingStart:(id)arg0 ;
-(void)onVideoRecordingStopWithURL:(id)arg0 reply:(id)arg1 ;
-(void)pingWithReply:(id)arg0 ;
-(void)playerIndicatorXPCProxyServiceClientEndpointConnect:(id)arg0 reply:(id)arg1 ;
-(void)settingsXPCProxyServiceClientEndpointConnect:(id)arg0 reply:(id)arg1 ;
-(void)systemGestureXPCProxyServiceClientEndpointConnect:(id)arg0 reply:(id)arg1 ;
-(void)takeScreenshotWithReply:(id)arg0 ;


@end


#endif
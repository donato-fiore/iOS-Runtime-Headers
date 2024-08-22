// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PCCBRIDGEENDPOINT_H
#define PCCBRIDGEENDPOINT_H

@class OS_remote_device_browser, NSMutableDictionary, OS_xpc_remote_connection, NSMutableSet;
@protocol OS_dispatch_queue;


#import "PCCEndpoint.h"

@interface PCCBridgeEndpoint : PCCEndpoint {
    OS_remote_device_browser *_device_browser;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSObject<OS_dispatch_queue> *_initializationQueue;
    NSMutableDictionary *_remoteDevices;
    NSMutableDictionary *_remoteCRKeys;
    NSMutableDictionary *_outgoingConnections;
    OS_xpc_remote_connection *_listeningConnection;
    NSMutableSet *_interruptedDevices;
}




+(BOOL)isSupportedRemoteDeviceType:(unsigned int)arg0 ;
+(id)UDIDForRemoteDevice:(id)arg0 ;
+(id)identifierForRemoteDevice:(id)arg0 ;
+(id)remoteDeviceForIdentifier:(id)arg0 ;
+(void)addSenderToMessage:(id)arg0 ;
-(BOOL)isDeviceNearby:(id)arg0 ;
-(id)connectionForIdentifier:(id)arg0 ;
-(id)deviceIds;
-(id)identifierForTarget:(id)arg0 ;
-(id)init;
-(id)send:(id)arg0 file:(id)arg1 metadata:(id)arg2 error:(*id)arg3 ;
-(id)send:(id)arg0 message:(id)arg1 error:(*id)arg2 ;
-(id)synchronize:(id)arg0 withOptions:(id)arg1 ;
-(void)dealloc;
-(void)enterInterruptedStateFrom:(id)arg0 ;
-(void)exitInterruptedStateFrom:(id)arg0 ;
-(void)runWithDelegate:(id)arg0 ;
-(void)setupDeviceStateChangeHandler;
-(void)setupIncomingEventListener;
-(void)setupOutgoingConnection:(id)arg0 ;
-(void)stashCrashReporterKeyForIdentifier:(id)arg0 ;


@end


#endif
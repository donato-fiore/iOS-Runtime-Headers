// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCBATTERYXPCPROXYSERVERENDPOINT_H
#define GCBATTERYXPCPROXYSERVERENDPOINT_H

@class NSString;
@protocol _GCIPCEndpointServer, GCBatteryXPCProxyRemoteServerEndpointInterface, GCBatteryXPCProxyRemoteClientEndpointInterface, _GCIPCEndpointConnection, GCBatteryXPCProxyServerEndpointDelegate, NSObject><NSCopying><NSSecureCoding, _GCControllerComponentDescription;

#import <Foundation/Foundation.h>

#import "GCDeviceBattery.h"

@interface GCBatteryXPCProxyServerEndpoint : NSObject <_GCIPCEndpointServer, GCBatteryXPCProxyRemoteServerEndpointInterface>

 {
    id<GCBatteryXPCProxyRemoteClientEndpointInterface> *_clientEndpoint;
    id<_GCIPCEndpointConnection> *_connection;
    id *_connectionInterruptionRegistration;
    id *_connectionInvalidationRegistration;
    NSUInteger _pendingUpdates;
}


@property (retain, nonatomic) GCDeviceBattery *battery; // ivar: _battery
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GCBatteryXPCProxyServerEndpointDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject<_GCControllerComponentDescription> *receiverDescription;
@property (readonly) Class superclass;
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo


-(BOOL)acceptClient:(id)arg0 onConnection:(id)arg1 error:(*id)arg2 ;
-(id)initWithIdentifier:(id)arg0 initialValue:(id)arg1 ;
-(id)initWithInitialValue:(id)arg0 ;
-(void)fetchBatteryWithReply:(id)arg0 ;
-(void)fetchObjectIdentifierWithReply:(id)arg0 ;
-(void)invalidateClient;
-(void)invalidateConnection;


@end


#endif
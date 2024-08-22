// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GCLIGHTXPCPROXYSERVERENDPOINT_H
#define GCLIGHTXPCPROXYSERVERENDPOINT_H

@class NSString;
@protocol _GCIPCEndpointServer, GCLightXPCProxyRemoteServerEndpointInterface, GCLightXPCProxyRemoteClientEndpointInterface, _GCIPCEndpointConnection, GCLightXPCProxyServerEndpointDelegate, NSObject><NSCopying><NSSecureCoding, _GCControllerComponentDescription;

#import <Foundation/Foundation.h>

#import "GCDeviceLight.h"

@interface GCLightXPCProxyServerEndpoint : NSObject <_GCIPCEndpointServer, GCLightXPCProxyRemoteServerEndpointInterface>

 {
    id<GCLightXPCProxyRemoteClientEndpointInterface> *_clientEndpoint;
    id<_GCIPCEndpointConnection> *_connection;
    id *_connectionInterruptionRegistration;
    id *_connectionInvalidationRegistration;
    NSUInteger _pendingUpdates;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GCLightXPCProxyServerEndpointDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property (retain, nonatomic) GCDeviceLight *light; // ivar: _light
@property (readonly, nonatomic) NSObject<_GCControllerComponentDescription> *receiverDescription;
@property (readonly) Class superclass;
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo


-(BOOL)acceptClient:(id)arg0 onConnection:(id)arg1 error:(*id)arg2 ;
-(id)initWithIdentifier:(id)arg0 initialValue:(id)arg1 ;
-(id)initWithInitialValue:(id)arg0 ;
-(void)fetchLightWithReply:(id)arg0 ;
-(void)fetchObjectIdentifierWithReply:(id)arg0 ;
-(void)invalidateClient;
-(void)invalidateConnection;
-(void)newLight:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCMOTIONXPCPROXYSERVERENDPOINT_H
#define GCMOTIONXPCPROXYSERVERENDPOINT_H

@class NSString;
@protocol _GCIPCEndpointServer, GCMotionXPCProxyRemoteServerEndpointInterface, GCMotionXPCProxyRemoteClientEndpointInterface, _GCIPCEndpointConnection, GCMotionXPCProxyServerEndpointDelegate, NSObject><NSCopying><NSSecureCoding, _GCControllerComponentDescription;

#import <Foundation/Foundation.h>


@interface GCMotionXPCProxyServerEndpoint : NSObject <_GCIPCEndpointServer, GCMotionXPCProxyRemoteServerEndpointInterface>

 {
    id<GCMotionXPCProxyRemoteClientEndpointInterface> *_clientEndpoint;
    id<_GCIPCEndpointConnection> *_connection;
    id *_connectionInterruptionRegistration;
    id *_connectionInvalidationRegistration;
    NSUInteger _pendingUpdates;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GCMotionXPCProxyServerEndpointDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject<_GCControllerComponentDescription> *receiverDescription;
@property (nonatomic) BOOL sensorsActive; // ivar: _sensorsActive
@property (readonly) Class superclass;
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo


-(BOOL)acceptClient:(id)arg0 onConnection:(id)arg1 error:(*id)arg2 ;
-(id)initWithIdentifier:(id)arg0 initialValue:(BOOL)arg1 ;
-(id)initWithInitialValue:(BOOL)arg0 ;
-(void)fetchObjectIdentifierWithReply:(id)arg0 ;
-(void)fetchSensorsActiveWithReply:(id)arg0 ;
-(void)invalidateClient;
-(void)invalidateConnection;
-(void)newSensorsActive:(BOOL)arg0 ;


@end


#endif
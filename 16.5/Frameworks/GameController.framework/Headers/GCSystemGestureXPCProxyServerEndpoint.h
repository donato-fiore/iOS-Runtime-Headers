// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCSYSTEMGESTUREXPCPROXYSERVERENDPOINT_H
#define GCSYSTEMGESTUREXPCPROXYSERVERENDPOINT_H

@class NSString;
@protocol _GCIPCEndpointServer, GCSystemGestureXPCProxyRemoteServerEndpointInterface, GCSystemGestureXPCProxyRemoteClientEndpointInterface, _GCIPCEndpointConnection, GCSystemGestureXPCProxyServerEndpointDelegate, NSObject><NSCopying><NSSecureCoding, _GCControllerComponentDescription;

#import <Foundation/Foundation.h>

#import "GCSystemGesturesState.h"

@interface GCSystemGestureXPCProxyServerEndpoint : NSObject <_GCIPCEndpointServer, GCSystemGestureXPCProxyRemoteServerEndpointInterface>

 {
    id<GCSystemGestureXPCProxyRemoteClientEndpointInterface> *_clientEndpoint;
    id<_GCIPCEndpointConnection> *_connection;
    id *_connectionInterruptionRegistration;
    id *_connectionInvalidationRegistration;
    NSUInteger _pendingUpdates;
    BOOL _isSystemGestureObserver;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GCSystemGestureXPCProxyServerEndpointDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isSystemGestureObserver;
@property (readonly, nonatomic) NSObject<_GCControllerComponentDescription> *receiverDescription;
@property (readonly) Class superclass;
@property (retain, nonatomic) GCSystemGesturesState *systemGesturesState; // ivar: _systemGesturesState
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo


-(BOOL)acceptClient:(id)arg0 onConnection:(id)arg1 error:(*id)arg2 ;
-(id)initSystemGestureObserverWithIdentifier:(id)arg0 initialValue:(id)arg1 ;
-(id)initSystemGestureObserverWithInitialValue:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)disableSystemGestureForInput:(id)arg0 ;
-(void)enableSystemGestureForInput:(id)arg0 ;
-(void)fetchObjectIdentifierWithReply:(id)arg0 ;
-(void)fetchSystemGesturesStateWithReply:(id)arg0 ;
-(void)invalidateClient;
-(void)invalidateConnection;


@end


#endif
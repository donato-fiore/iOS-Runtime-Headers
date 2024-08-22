// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GCPLAYERINDICATORXPCPROXYSERVERENDPOINT_H
#define GCPLAYERINDICATORXPCPROXYSERVERENDPOINT_H

@class NSString;
@protocol _GCIPCEndpointServer, GCPlayerIndicatorXPCProxyRemoteServerEndpointInterface, GCPlayerIndicatorXPCProxyRemoteClientEndpointInterface, _GCIPCEndpointConnection, GCPlayerIndicatorXPCProxyServerEndpointDelegate, NSObject><NSCopying><NSSecureCoding, _GCControllerComponentDescription;

#import <Foundation/Foundation.h>


@interface GCPlayerIndicatorXPCProxyServerEndpoint : NSObject <_GCIPCEndpointServer, GCPlayerIndicatorXPCProxyRemoteServerEndpointInterface>

 {
    id<GCPlayerIndicatorXPCProxyRemoteClientEndpointInterface> *_clientEndpoint;
    id<_GCIPCEndpointConnection> *_connection;
    id *_connectionInterruptionRegistration;
    id *_connectionInvalidationRegistration;
    NSUInteger _pendingUpdates;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GCPlayerIndicatorXPCProxyServerEndpointDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property (nonatomic) NSInteger playerIndex; // ivar: _playerIndex
@property (readonly, nonatomic) NSObject<_GCControllerComponentDescription> *receiverDescription;
@property (readonly) Class superclass;
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo


-(BOOL)acceptClient:(id)arg0 onConnection:(id)arg1 error:(*id)arg2 ;
-(id)initWithIdentifier:(id)arg0 initialValue:(NSInteger)arg1 ;
-(id)initWithInitialValue:(NSInteger)arg0 ;
-(void)fetchObjectIdentifierWithReply:(id)arg0 ;
-(void)fetchPlayerIndexWithReply:(id)arg0 ;
-(void)invalidateClient;
-(void)invalidateConnection;
-(void)newPlayerIndex:(NSInteger)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GCGAMEINTENTXPCPROXYSERVERENDPOINT_H
#define GCGAMEINTENTXPCPROXYSERVERENDPOINT_H

@class NSString;
@protocol _GCIPCEndpointServer, GCGameIntentXPCProxyRemoteServerEndpointInterface, GCGameIntentXPCProxyRemoteClientEndpointInterface, _GCIPCEndpointConnection, GCGameIntentXPCProxyServerEndpointDelegate, NSObject><NSCopying><NSSecureCoding, _GCControllerComponentDescription;

#import <Foundation/Foundation.h>


@interface GCGameIntentXPCProxyServerEndpoint : NSObject <_GCIPCEndpointServer, GCGameIntentXPCProxyRemoteServerEndpointInterface>

 {
    id<GCGameIntentXPCProxyRemoteClientEndpointInterface> *_clientEndpoint;
    id<_GCIPCEndpointConnection> *_connection;
    id *_connectionInterruptionRegistration;
    id *_connectionInvalidationRegistration;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GCGameIntentXPCProxyServerEndpointDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject<_GCControllerComponentDescription> *receiverDescription;
@property (readonly) Class superclass;
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo


-(BOOL)acceptClient:(id)arg0 onConnection:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(void)fetchObjectIdentifierWithReply:(id)arg0 ;
-(void)invalidateClient;
-(void)invalidateConnection;
-(void)triggerGameIntentWithEvent:(NSInteger)arg0 ;


@end


#endif
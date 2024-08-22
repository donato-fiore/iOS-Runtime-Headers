// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCPLAYERINDICATORXPCPROXYCLIENTENDPOINT_H
#define GCPLAYERINDICATORXPCPROXYCLIENTENDPOINT_H

@class NSString;
@protocol _GCIPCEndpointClient, GCControllerPlayerIndicator, GCPlayerIndicatorXPCProxyRemoteClientEndpointInterface, GCPlayerIndicatorXPCProxyRemoteServerEndpointInterface, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GCController.h"

@interface GCPlayerIndicatorXPCProxyClientEndpoint : NSObject <_GCIPCEndpointClient, GCControllerPlayerIndicator, GCPlayerIndicatorXPCProxyRemoteClientEndpointInterface>

 {
    GCController *_controller;
    id<GCPlayerIndicatorXPCProxyRemoteServerEndpointInterface> *_serverEndpoint;
    id *_connectionInterruptionRegistration;
    id *_connectionInvalidationRegistration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property NSInteger playerIndex; // ivar: _playerIndex
@property (readonly) Class superclass;


-(id)init;
-(id)initWithIdentifier:(id)arg0 initialPlayerIndex:(NSInteger)arg1 ;
-(void)_remoteEndpointSetPlayerIndex:(NSInteger)arg0 ;
-(void)fetchObjectIdentifierWithReply:(id)arg0 ;
-(void)invalidateConnection;
-(void)newPlayerIndex:(NSInteger)arg0 ;
-(void)refreshPlayerIndex;
-(void)setController:(id)arg0 ;
-(void)setRemoteEndpoint:(id)arg0 connection:(id)arg1 ;


@end


#endif
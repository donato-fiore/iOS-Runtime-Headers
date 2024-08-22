// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCGAMEINTENTXPCPROXYCLIENTENDPOINT_H
#define GCGAMEINTENTXPCPROXYCLIENTENDPOINT_H

@class NSString;
@protocol _GCIPCEndpointClient, GCDeviceGameIntentComponent, GCGameIntentXPCProxyRemoteClientEndpointInterface, GCGameIntentXPCProxyRemoteServerEndpointInterface, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GCController.h"

@interface GCGameIntentXPCProxyClientEndpoint : NSObject <_GCIPCEndpointClient, GCDeviceGameIntentComponent, GCGameIntentXPCProxyRemoteClientEndpointInterface>

 {
    GCController *_controller;
    id<GCGameIntentXPCProxyRemoteServerEndpointInterface> *_serverEndpoint;
    id *_connectionInterruptionRegistration;
    id *_connectionInvalidationRegistration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property (readonly) Class superclass;


-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(void)fetchObjectIdentifierWithReply:(id)arg0 ;
-(void)invalidateConnection;
-(void)setController:(id)arg0 ;
-(void)setRemoteEndpoint:(id)arg0 connection:(id)arg1 ;
-(void)triggerGestureGameIntentAppLibrary;
-(void)triggerGestureGameIntentGameCenter;


@end


#endif
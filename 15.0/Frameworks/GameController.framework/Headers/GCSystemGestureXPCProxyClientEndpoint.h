// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GCSYSTEMGESTUREXPCPROXYCLIENTENDPOINT_H
#define GCSYSTEMGESTUREXPCPROXYCLIENTENDPOINT_H

@class NSString;
@protocol _GCIPCEndpointClient, GCSystemGestureComponent, GCSystemGestureXPCProxyRemoteClientEndpointInterface, GCSystemGestureXPCProxyRemoteServerEndpointInterface, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GCController.h"
#import "GCSystemGesturesState.h"

@interface GCSystemGestureXPCProxyClientEndpoint : NSObject <_GCIPCEndpointClient, GCSystemGestureComponent, GCSystemGestureXPCProxyRemoteClientEndpointInterface>

 {
    GCController *_controller;
    id<GCSystemGestureXPCProxyRemoteServerEndpointInterface> *_serverEndpoint;
    id *_connectionInterruptionRegistration;
    id *_connectionInvalidationRegistration;
    BOOL _isSystemGestureObserver;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) GCSystemGesturesState *systemGesturesState; // ivar: _systemGesturesState


-(BOOL)isSystemGestureObserver;
-(id)init;
-(id)initWithIdentifier:(id)arg0 initialSystemGesture:(id)arg1 isSystemGestureObserver:(BOOL)arg2 ;
-(void)_remoteEndpointHasSetSystemGesturesState:(id)arg0 ;
-(void)disableSystemGestureForInput:(id)arg0 ;
-(void)enableSystemGestureForInput:(id)arg0 ;
-(void)fetchObjectIdentifierWithReply:(id)arg0 ;
-(void)invalidateConnection;
-(void)newSystemGesturesState:(id)arg0 ;
-(void)refreshSystemGesturesState;
-(void)setController:(id)arg0 ;
-(void)setRemoteEndpoint:(id)arg0 connection:(id)arg1 ;


@end


#endif
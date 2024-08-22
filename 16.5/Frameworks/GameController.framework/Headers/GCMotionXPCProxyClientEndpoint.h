// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCMOTIONXPCPROXYCLIENTENDPOINT_H
#define GCMOTIONXPCPROXYCLIENTENDPOINT_H

@class NSString;
@protocol _GCIPCEndpointClient, GCControllerMotionConfigurableSensors, GCMotionXPCProxyRemoteClientEndpointInterface, GCMotionXPCProxyRemoteServerEndpointInterface, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GCController.h"

@interface GCMotionXPCProxyClientEndpoint : NSObject <_GCIPCEndpointClient, GCControllerMotionConfigurableSensors, GCMotionXPCProxyRemoteClientEndpointInterface>

 {
    GCController *_controller;
    id<GCMotionXPCProxyRemoteServerEndpointInterface> *_serverEndpoint;
    id *_connectionInterruptionRegistration;
    id *_connectionInvalidationRegistration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property (nonatomic) BOOL sensorsActive; // ivar: _sensorsActive
@property (readonly) Class superclass;


-(id)init;
-(id)initWithIdentifier:(id)arg0 initialSensorsActive:(BOOL)arg1 ;
-(void)_remoteEndpointSetSensorsActive:(BOOL)arg0 ;
-(void)fetchObjectIdentifierWithReply:(id)arg0 ;
-(void)invalidateConnection;
-(void)newSensorsActive:(BOOL)arg0 ;
-(void)refreshSensorsActive;
-(void)setController:(id)arg0 ;
-(void)setRemoteEndpoint:(id)arg0 connection:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCLIGHTXPCPROXYCLIENTENDPOINT_H
#define GCLIGHTXPCPROXYCLIENTENDPOINT_H

@class NSString;
@protocol _GCIPCEndpointClient, GCDeviceLightComponent, GCLightXPCProxyRemoteClientEndpointInterface, GCLightXPCProxyRemoteServerEndpointInterface, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GCController.h"
#import "GCDeviceLight.h"

@interface GCLightXPCProxyClientEndpoint : NSObject <_GCIPCEndpointClient, GCDeviceLightComponent, GCLightXPCProxyRemoteClientEndpointInterface>

 {
    GCController *_controller;
    id<GCLightXPCProxyRemoteServerEndpointInterface> *_serverEndpoint;
    id *_connectionInterruptionRegistration;
    id *_connectionInvalidationRegistration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property (readonly, nonatomic) GCDeviceLight *light; // ivar: _light
@property (readonly) Class superclass;


-(id)init;
-(id)initWithIdentifier:(id)arg0 initialLight:(id)arg1 ;
-(void)_remoteEndpointHasSetLight:(id)arg0 ;
-(void)fetchObjectIdentifierWithReply:(id)arg0 ;
-(void)invalidateConnection;
-(void)newLight:(id)arg0 ;
-(void)observeChangesForLight:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)refreshLight;
-(void)setController:(id)arg0 ;
-(void)setRemoteEndpoint:(id)arg0 connection:(id)arg1 ;
-(void)stopObservingChangesForLight:(id)arg0 ;


@end


#endif
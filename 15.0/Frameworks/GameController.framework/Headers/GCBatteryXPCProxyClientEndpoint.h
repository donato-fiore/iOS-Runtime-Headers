// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GCBATTERYXPCPROXYCLIENTENDPOINT_H
#define GCBATTERYXPCPROXYCLIENTENDPOINT_H

@class NSString;
@protocol _GCIPCEndpointClient, GCDeviceBatteryComponent, GCBatteryXPCProxyRemoteClientEndpointInterface, GCBatteryXPCProxyRemoteServerEndpointInterface, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GCController.h"
#import "GCDeviceBattery.h"

@interface GCBatteryXPCProxyClientEndpoint : NSObject <_GCIPCEndpointClient, GCDeviceBatteryComponent, GCBatteryXPCProxyRemoteClientEndpointInterface>

 {
    GCController *_controller;
    id<GCBatteryXPCProxyRemoteServerEndpointInterface> *_serverEndpoint;
    id *_connectionInterruptionRegistration;
    id *_connectionInvalidationRegistration;
}


@property (readonly, nonatomic) GCDeviceBattery *battery; // ivar: _battery
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property (readonly) Class superclass;


-(id)init;
-(id)initWithIdentifier:(id)arg0 initialBattery:(id)arg1 ;
-(void)_remoteEndpointHasSetBattery:(id)arg0 ;
-(void)fetchObjectIdentifierWithReply:(id)arg0 ;
-(void)invalidateConnection;
-(void)newBattery:(id)arg0 ;
-(void)refreshBattery;
-(void)setController:(id)arg0 ;
-(void)setRemoteEndpoint:(id)arg0 connection:(id)arg1 ;


@end


#endif
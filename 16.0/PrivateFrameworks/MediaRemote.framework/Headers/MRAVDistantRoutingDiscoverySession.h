// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRAVDISTANTROUTINGDISCOVERYSESSION_H
#define MRAVDISTANTROUTINGDISCOVERYSESSION_H

@class NSArray, NSString, NSMutableDictionary, NSXPCConnection;
@protocol MRAVDistantRoutingDiscoveryClientProtocol, OS_dispatch_queue;


#import "MRAVRoutingDiscoverySession.h"

@interface MRAVDistantRoutingDiscoverySession : MRAVRoutingDiscoverySession <MRAVDistantRoutingDiscoveryClientProtocol>

 {
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned int _endpointFeatures;
    unsigned int _discoveryMode;
    BOOL _enableThrottling;
    NSArray *_distantEndpoints;
    NSArray *_distantOutputDevices;
    NSString *_routingContextUID;
    int _serviceResetNotifyToken;
    BOOL _hostedRoutingConnectionDidInitialize;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *distantEndpoints;
@property (retain, nonatomic) NSMutableDictionary *distantExternalDevices; // ivar: _distantExternalDevices
@property (retain, nonatomic) NSArray *distantOutputDevices;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCConnection *hostedRoutingSessionConnection; // ivar: _hostedRoutingSessionConnection
@property (readonly) Class superclass;


+(id)clientInterface;
+(id)serviceInterface;
-(BOOL)_shouldAddLocalEndpoint;
-(BOOL)devicePresenceDetected;
-(id)_hostedRoutingConnection;
-(id)availableEndpoints;
-(id)availableOutputDevices;
-(id)initWithConfiguration:(id)arg0 ;
-(id)routingContextUID;
-(unsigned int)discoveryMode;
-(unsigned int)endpointFeatures;
-(void)_initializeHostedRoutingConnectionWithCompletion:(id)arg0 ;
-(void)_reloadAvailableDistantEndpoints;
-(void)_reloadAvailableDistantEndpointsWithEndpoints:(id)arg0 ;
-(void)_reloadAvailableDistantOutputDevices;
-(void)_reloadAvailableDistantOutputDevicesWithOutputDevices:(id)arg0 ;
-(void)_reloadHostedRoutingServiceDiscoveryMode;
-(void)availableEndpointsDidChange:(id)arg0 ;
-(void)availableOutputDevicesDidChange:(id)arg0 ;
-(void)dealloc;
-(void)setDiscoveryMode:(unsigned int)arg0 ;
-(void)setRoutingContextUID:(id)arg0 ;


@end


#endif
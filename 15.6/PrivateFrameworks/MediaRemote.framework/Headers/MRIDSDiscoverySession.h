// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRIDSDISCOVERYSESSION_H
#define MRIDSDISCOVERYSESSION_H

@class NSString;
@protocol MRProtocolClientConnectionDelegate, OS_dispatch_queue;


#import "MRAVRoutingDiscoverySession.h"
#import "MRProtocolClientConnection.h"

@interface MRIDSDiscoverySession : MRAVRoutingDiscoverySession <MRProtocolClientConnectionDelegate>

 {
    unsigned int _discoveryMode;
    unsigned int _endpointFeatures;
    NSObject<OS_dispatch_queue> *_idsQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MRProtocolClientConnection *discoveryChannel; // ivar: _discoveryChannel
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)devicePresenceDetected;
-(id)availableOutputDevices;
-(id)initWithConfiguration:(id)arg0 ;
-(unsigned int)discoveryMode;
-(unsigned int)endpointFeatures;
-(void)_handleCompanionDeviceDidConnectNotification:(id)arg0 ;
-(void)_handleCompanionDeviceDisconnectedNotification:(id)arg0 ;
-(void)_onIDSQueue_connectDiscoveryChannel:(id)arg0 ;
-(void)_onIDSQueue_disconnectDiscoveryChannel:(id)arg0 ;
-(void)_onIDSQueue_initializeDiscoveryChannel;
-(void)_syncClientStateToConnection:(id)arg0 ;
-(void)clientConnection:(id)arg0 didReceiveMessage:(id)arg1 ;
-(void)handleUpdateOutputDevicesMessage:(id)arg0 forClient:(id)arg1 ;
-(void)setDiscoveryMode:(unsigned int)arg0 ;


@end


#endif
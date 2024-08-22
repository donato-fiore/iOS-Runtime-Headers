// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCADAPTIVETRIGGERSXPCPROXYSERVERENDPOINT_H
#define GCADAPTIVETRIGGERSXPCPROXYSERVERENDPOINT_H

@class NSString, NSArray;
@protocol _GCIPCEndpointServer, GCAdaptiveTriggersXPCProxyRemoteServerEndpointInterface, GCAdaptiveTriggersXPCProxyRemoteClientEndpointInterface, _GCIPCEndpointConnection, GCAdaptiveTriggersXPCProxyServerEndpointDelegate, NSObject><NSCopying><NSSecureCoding, _GCControllerComponentDescription;

#import <Foundation/Foundation.h>

#import "GCDeviceAdaptiveTriggersPayload.h"

@interface GCAdaptiveTriggersXPCProxyServerEndpoint : NSObject <_GCIPCEndpointServer, GCAdaptiveTriggersXPCProxyRemoteServerEndpointInterface>

 {
    id<GCAdaptiveTriggersXPCProxyRemoteClientEndpointInterface> *_clientEndpoint;
    id<_GCIPCEndpointConnection> *_connection;
    id *_connectionInterruptionRegistration;
    id *_connectionInvalidationRegistration;
    NSUInteger _pendingUpdates;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GCAdaptiveTriggersXPCProxyServerEndpointDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property (retain, nonatomic) GCDeviceAdaptiveTriggersPayload *leftTrigger; // ivar: _leftTrigger
@property (readonly, nonatomic) NSObject<_GCControllerComponentDescription> *receiverDescription;
@property (retain, nonatomic) GCDeviceAdaptiveTriggersPayload *rightTrigger; // ivar: _rightTrigger
@property (retain, nonatomic) NSArray *statuses; // ivar: _statuses
@property (readonly) Class superclass;
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo


-(BOOL)acceptClient:(id)arg0 onConnection:(id)arg1 error:(*id)arg2 ;
-(id)initWithIdentifier:(id)arg0 initialStatuses:(id)arg1 ;
-(id)initWithInitialStatuses:(id)arg0 ;
-(void)fetchObjectIdentifierWithReply:(id)arg0 ;
-(void)fetchStatusesWithReply:(id)arg0 ;
-(void)invalidateClient;
-(void)invalidateConnection;
-(void)newAdaptiveTriggerPayload:(id)arg0 index:(int)arg1 ;


@end


#endif
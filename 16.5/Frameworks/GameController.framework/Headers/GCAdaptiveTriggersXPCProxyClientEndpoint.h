// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCADAPTIVETRIGGERSXPCPROXYCLIENTENDPOINT_H
#define GCADAPTIVETRIGGERSXPCPROXYCLIENTENDPOINT_H

@class NSString;
@protocol _GCIPCEndpointClient, GCAdaptiveTriggers, GCAdaptiveTriggersXPCProxyRemoteClientEndpointInterface, GCAdaptiveTriggersXPCProxyRemoteServerEndpointInterface, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GCController.h"
#import "GCDeviceAdaptiveTriggersStatusPayload.h"
#import "GCDeviceAdaptiveTriggersPayload.h"

@interface GCAdaptiveTriggersXPCProxyClientEndpoint : NSObject <_GCIPCEndpointClient, GCAdaptiveTriggers, GCAdaptiveTriggersXPCProxyRemoteClientEndpointInterface>

 {
    GCController *_controller;
    id<GCAdaptiveTriggersXPCProxyRemoteServerEndpointInterface> *_serverEndpoint;
    id *_connectionInterruptionRegistration;
    id *_connectionInvalidationRegistration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property (retain, nonatomic) GCDeviceAdaptiveTriggersStatusPayload *leftStatus; // ivar: _leftStatus
@property (retain, nonatomic) GCDeviceAdaptiveTriggersPayload *leftTrigger; // ivar: _leftTrigger
@property (retain, nonatomic) GCDeviceAdaptiveTriggersStatusPayload *rightStatus; // ivar: _rightStatus
@property (retain, nonatomic) GCDeviceAdaptiveTriggersPayload *rightTrigger; // ivar: _rightTrigger
@property (readonly) Class superclass;


-(id)init;
-(id)initWithIdentifier:(id)arg0 initialStatuses:(id)arg1 ;
-(void)_remoteEndpointHasSetStatuses:(id)arg0 ;
-(void)fetchObjectIdentifierWithReply:(id)arg0 ;
-(void)invalidateConnection;
-(void)newStatuses:(id)arg0 ;
-(void)refreshStatuses;
-(void)setController:(id)arg0 ;
-(void)setRemoteEndpoint:(id)arg0 connection:(id)arg1 ;


@end


#endif
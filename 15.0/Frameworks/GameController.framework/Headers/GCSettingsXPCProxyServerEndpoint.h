// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GCSETTINGSXPCPROXYSERVERENDPOINT_H
#define GCSETTINGSXPCPROXYSERVERENDPOINT_H

@class NSString;
@protocol _GCIPCEndpointServer, GCSettingsXPCProxyRemoteServerEndpointInterface, GCSettingsXPCProxyRemoteClientEndpointInterface, _GCIPCEndpointConnection, GCSettingsXPCProxyServerEndpointDelegate, NSObject><NSCopying><NSSecureCoding, _GCControllerComponentDescription;

#import <Foundation/Foundation.h>

#import "GCControllerSettings.h"

@interface GCSettingsXPCProxyServerEndpoint : NSObject <_GCIPCEndpointServer, GCSettingsXPCProxyRemoteServerEndpointInterface>

 {
    id<GCSettingsXPCProxyRemoteClientEndpointInterface> *_clientEndpoint;
    id<_GCIPCEndpointConnection> *_connection;
    id *_connectionInterruptionRegistration;
    id *_connectionInvalidationRegistration;
    NSUInteger _pendingUpdates;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GCSettingsXPCProxyServerEndpointDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject<_GCControllerComponentDescription> *receiverDescription;
@property (retain, nonatomic) GCControllerSettings *settingsDefault; // ivar: _settingsDefault
@property (retain, nonatomic) GCControllerSettings *settingsForBundleID; // ivar: _settingsForBundleID
@property (readonly) Class superclass;
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo


-(BOOL)acceptClient:(id)arg0 onConnection:(id)arg1 error:(*id)arg2 ;
-(id)initWithIdentifier:(id)arg0 initialValueForBundleID:(id)arg1 defaultSettings:(id)arg2 ;
-(id)initWithInitialValueForBundleID:(id)arg0 defaultSettings:(id)arg1 ;
-(void)fetchObjectIdentifierWithReply:(id)arg0 ;
-(void)fetchSettingsWithReply:(id)arg0 ;
-(void)invalidateClient;
-(void)invalidateConnection;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCSETTINGSXPCPROXYSERVERENDPOINT_H
#define GCSETTINGSXPCPROXYSERVERENDPOINT_H

@class NSString, GCSProfile;
@protocol _GCIPCEndpointServer, GCSettingsXPCProxyRemoteServerEndpointInterface, GCSettingsXPCProxyRemoteClientEndpointInterface, _GCIPCEndpointConnection, GCSettingsXPCProxyServerEndpointDelegate, NSObject><NSCopying><NSSecureCoding, _GCControllerComponentDescription;

#import <Foundation/Foundation.h>


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
@property (retain, nonatomic) GCSProfile *settingsProfile; // ivar: _settingsProfile
@property (readonly) Class superclass;
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo


-(BOOL)acceptClient:(id)arg0 onConnection:(id)arg1 error:(*id)arg2 ;
-(id)initWithIdentifier:(id)arg0 initialValueForProfile:(id)arg1 ;
-(id)initWithInitialValueForProfile:(id)arg0 ;
-(void)fetchObjectIdentifierWithReply:(id)arg0 ;
-(void)fetchProfileWithReply:(id)arg0 ;
-(void)invalidateClient;
-(void)invalidateConnection;


@end


#endif
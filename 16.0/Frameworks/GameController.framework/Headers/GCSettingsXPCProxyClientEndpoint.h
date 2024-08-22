// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCSETTINGSXPCPROXYCLIENTENDPOINT_H
#define GCSETTINGSXPCPROXYCLIENTENDPOINT_H

@class NSString, GCSProfile;
@protocol _GCIPCEndpointClient, GCControllerSettingsComponent, GCSettingsXPCProxyRemoteClientEndpointInterface, GCSettingsXPCProxyRemoteServerEndpointInterface, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GCController.h"

@interface GCSettingsXPCProxyClientEndpoint : NSObject <_GCIPCEndpointClient, GCControllerSettingsComponent, GCSettingsXPCProxyRemoteClientEndpointInterface>

 {
    GCController *_controller;
    id<GCSettingsXPCProxyRemoteServerEndpointInterface> *_serverEndpoint;
    id *_connectionInterruptionRegistration;
    id *_connectionInvalidationRegistration;
}


@property (copy, nonatomic) id *changedHandler; // ivar: _changedHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property (readonly, nonatomic) GCSProfile *settingsProfile; // ivar: _settingsProfile
@property (readonly) Class superclass;


-(id)init;
-(id)initWithIdentifier:(id)arg0 initialValueForProfile:(id)arg1 ;
-(void)_remoteEndpointHasSetProfile:(id)arg0 ;
-(void)fetchObjectIdentifierWithReply:(id)arg0 ;
-(void)invalidateConnection;
-(void)newProfile:(id)arg0 ;
-(void)refreshProfile;
-(void)setController:(id)arg0 ;
-(void)setRemoteEndpoint:(id)arg0 connection:(id)arg1 ;


@end


#endif
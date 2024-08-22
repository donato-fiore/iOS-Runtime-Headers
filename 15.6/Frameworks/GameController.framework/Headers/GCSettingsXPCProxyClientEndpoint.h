// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GCSETTINGSXPCPROXYCLIENTENDPOINT_H
#define GCSETTINGSXPCPROXYCLIENTENDPOINT_H

@class NSString;
@protocol _GCIPCEndpointClient, GCControllerSettingsComponent, GCSettingsXPCProxyRemoteClientEndpointInterface, GCSettingsXPCProxyRemoteServerEndpointInterface, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GCController.h"
#import "GCControllerSettings.h"

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
@property (readonly, nonatomic) GCControllerSettings *settingsDefault; // ivar: _settingsDefault
@property (readonly, nonatomic) GCControllerSettings *settingsForBundleID; // ivar: _settingsForBundleID
@property (readonly) Class superclass;


-(id)init;
-(id)initWithIdentifier:(id)arg0 initialValueForBundleID:(id)arg1 defaultSettings:(id)arg2 ;
-(void)_remoteEndpointHasSetSettingsForBundleID:(id)arg0 defaultSettings:(id)arg1 ;
-(void)fetchObjectIdentifierWithReply:(id)arg0 ;
-(void)invalidateConnection;
-(void)newSettingsForBundleID:(id)arg0 defaultSettings:(id)arg1 ;
-(void)observeChangesForSettings:(id)arg0 ;
-(void)refreshSettings;
-(void)setController:(id)arg0 ;
-(void)setRemoteEndpoint:(id)arg0 connection:(id)arg1 ;
-(void)stopObservingChangesForSettings:(id)arg0 ;


@end


#endif
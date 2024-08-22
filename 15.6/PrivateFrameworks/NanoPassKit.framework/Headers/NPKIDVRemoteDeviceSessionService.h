// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKIDVREMOTEDEVICESESSIONSERVICE_H
#define NPKIDVREMOTEDEVICESESSIONSERVICE_H

@class NSXPCListener, NSMutableSet, NSString;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>

#import "NPKIDVRemoteDeviceServiceEventsCoordinator.h"
#import "NPKIDVRemoteDeviceConnectionCoordinator.h"
#import "NPKBiometricPassPreflightManager.h"

@interface NPKIDVRemoteDeviceSessionService : NSObject <NSXPCListenerDelegate>

 {
    NSXPCListener *_xpcListener;
    NPKIDVRemoteDeviceServiceEventsCoordinator *_remoteDeviceEventCoordinator;
    NPKIDVRemoteDeviceConnectionCoordinator *_remoteDeviceConnectionCoordinator;
    NPKBiometricPassPreflightManager *_preflightManager;
    NSMutableSet *_sessionServers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithRemoteDeviceEventsCoordinator:(id)arg0 connectionCoordinator:(id)arg1 preflightManager:(id)arg2 ;
-(void)_addConnection:(id)arg0 ;
-(void)_addServer:(id)arg0 ;
-(void)_removeServer:(id)arg0 ;
-(void)dealloc;
-(void)teardownCurrentRemoteDeviceSessions;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBEXTERNALDISPLAYSERVICE_H
#define SBEXTERNALDISPLAYSERVICE_H

@class FBServiceClientAuthenticator, BSServiceConnectionListener, NSMutableArray, SBExternalDisplayDefaults, NSHashTable, NSString;
@protocol SBSExternalDisplayServiceClientToServerInterface, BSServiceConnectionListenerDelegate, SBDisplayManagerObserver, OS_dispatch_queue, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBDisplayManager.h"

@interface SBExternalDisplayService : NSObject <SBSExternalDisplayServiceClientToServerInterface, BSServiceConnectionListenerDelegate, SBDisplayManagerObserver>

 {
    FBServiceClientAuthenticator *_serviceClientAuthenticator;
    BSServiceConnectionListener *_connectionListener;
    NSMutableArray *_connections;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    SBDisplayManager *_displayManager;
    id<BSInvalidatable> *_displayManagerObserverToken;
    SBExternalDisplayDefaults *_defaults;
    NSHashTable *_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)_supportedScalesForDisplay:(id)arg0 error:(*id)arg1 ;
-(id)_displayInfoForDisplayIdentity:(id)arg0 configuration:(id)arg1 ;
-(id)_effectiveSettingsForDisplay:(id)arg0 error:(*id)arg1 ;
-(id)_extendedModeDisplayIdentityForHardwareIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)initWithDisplayManager:(id)arg0 ;
-(id)initWithDisplayManager:(id)arg0 configureConnectionListener:(BOOL)arg1 ;
-(id)preferredArrangementOfDisplay:(id)arg0 relativeTo:(id)arg1 ;
-(id)preferredArrangementOfExternalDisplay:(id)arg0 ;
-(void)_handleDisconnectForServiceConnection:(id)arg0 ;
-(void)_notifyOfPropertyChangesForDisplayIdentity:(id)arg0 requestingProcess:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)displayManager:(id)arg0 didConnectIdentity:(id)arg1 withConfiguration:(id)arg2 ;
-(void)displayManager:(id)arg0 willDisconnectIdentity:(id)arg1 ;
-(void)getConnectedDisplayInfoWithCompletion:(id)arg0 ;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)removeObserver:(id)arg0 ;
-(void)setDisplayArrangement:(id)arg0 forDisplay:(id)arg1 ;
-(void)setDisplayMirroringEnabled:(id)arg0 forDisplay:(id)arg1 ;
-(void)setDisplayModeSettings:(id)arg0 forDisplay:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif
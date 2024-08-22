// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSTATUSBARSTYLEOVERRIDESASSERTIONMANAGER_H
#define SBSTATUSBARSTYLEOVERRIDESASSERTIONMANAGER_H

@class NSMutableArray, NSMapTable, NSString, FBWorkspaceEventQueue, NSXPCListener;
@protocol NSXPCListenerDelegate, SBAppStatusBarAssertionManagerObserver, SBStatusBarStyleOverridesAssertionServer, BSDescriptionProviding, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SBAppStatusBarAssertionManager.h"
#import "SBStatusBarTapManager.h"

@interface SBStatusBarStyleOverridesAssertionManager : NSObject <NSXPCListenerDelegate, SBAppStatusBarAssertionManagerObserver, SBStatusBarStyleOverridesAssertionServer, BSDescriptionProviding>

 {
    NSMutableArray *_runningUpdateTransactions;
}


@property (retain, nonatomic) SBAppStatusBarAssertionManager *appStatusBarAssertionManager; // ivar: _appStatusBarAssertionManager
@property (retain, nonatomic) NSObject<OS_dispatch_source> *assertionTimerSource; // ivar: _assertionTimerSource
@property (retain, nonatomic) NSMapTable *assertionsByIdentifierByClientConnection; // ivar: _assertionsByIdentifierByClientConnection
@property (retain, nonatomic) NSMapTable *assertionsByStyleOverride; // ivar: _assertionsByStyleOverride
@property (retain, nonatomic) NSMutableArray *coordinatorConnectionsByStyleOverride; // ivar: _coordinatorConnectionsByStyleOverride
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) FBWorkspaceEventQueue *eventQueue; // ivar: _eventQueue
@property (nonatomic) NSUInteger exclusiveStatusBarStyleOverrides; // ivar: _exclusiveStatusBarStyleOverrides
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (nonatomic) NSUInteger statusBarStyleOverrides; // ivar: _statusBarStyleOverrides
@property (readonly, nonatomic) SBStatusBarTapManager *statusBarTapManager; // ivar: _statusBarTapManager
@property (readonly) Class superclass;
@property (retain, nonatomic) NSXPCListener *xpcListener; // ivar: _xpcListener


+(id)sharedInstance;
-(BOOL)_verifyCoordinatorEntitlementForStyleOverride:(id)arg0 onConnection:(id)arg1 ;
-(BOOL)handleTapForStatusBarStyleOverride:(NSUInteger)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(NSUInteger)_internalQueue_addAssertionByStyleOverrides:(id)arg0 ;
-(NSUInteger)_internalQueue_removeAssertionByStyleOverrides:(id)arg0 ;
-(id)_internalQueue_coordinatorClientForConnection:(id)arg0 ;
-(id)_internalQueue_coordinatorClientForStyleOverrides:(NSUInteger)arg0 ;
-(id)_statusStringsByStyleForActiveAssertionsByStyleOverride:(id)arg0 inactiveAssertionsByStyleOverride:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_internalQueue_deactivateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg0 forClientConnection:(id)arg1 ;
-(void)_invalidateAssertionsWithIdentifiers:(id)arg0 forClientConnection:(id)arg1 ;
-(void)_mainQueue_getStatusBarStyleOverridesToSuppressAndStatusStringsByStyleForForegroundApplicationSceneHandles:(id)arg0 withHandler:(id)arg1 ;
-(void)_postStatusStringsByStyle:(id)arg0 ;
-(void)_updateAppSceneSettingsForForegroundAppsAndPostAddedStyleOverrides:(NSUInteger)arg0 removedStyleOverrides:(NSUInteger)arg1 ;
-(void)activateStatusBarStyleOverridesAssertions:(id)arg0 reply:(id)arg1 ;
-(void)deactivateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg0 ;
-(void)invalidateStatusBarStyleOverridesAssertions:(id)arg0 ;
-(void)setRegisteredOverrides:(id)arg0 reply:(id)arg1 ;
-(void)setStatusString:(id)arg0 forAssertionWithIdentifier:(id)arg1 ;
-(void)statusBarAssertionManager:(id)arg0 statusBarSettingsDidChange:(id)arg1 ;
-(void)unregisterCoordinatorRegistrationForStyleOverrides:(id)arg0 ;
-(void)updateForegroundApplicationSceneHandles:(id)arg0 withOptions:(NSUInteger)arg1 completion:(id)arg2 ;


@end


#endif
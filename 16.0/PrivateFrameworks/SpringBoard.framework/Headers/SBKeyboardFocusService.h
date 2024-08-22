// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBKEYBOARDFOCUSSERVICE_H
#define SBKEYBOARDFOCUSSERVICE_H

@class FBServiceClientAuthenticator, NSHashTable, BSServiceConnectionListener, NSMapTable, NSString;
@protocol SBSKeyboardFocusServiceClientToServerInterface, BSServiceConnectionListenerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SBWorkspaceKeyboardFocusController.h"
#import "SBSystemUIScenesCoordinator.h"

@interface SBKeyboardFocusService : NSObject <SBSKeyboardFocusServiceClientToServerInterface, BSServiceConnectionListenerDelegate>

 {
    FBServiceClientAuthenticator *_serviceClientAuthenticator;
    SBWorkspaceKeyboardFocusController *_keyboardFocusController;
    SBSystemUIScenesCoordinator *_systemUIScenesCoordinator;
    NSHashTable *_focusRequestedScenes;
    BSServiceConnectionListener *_connectionListener;
    NSMapTable *_lock_additionalDeferringRulesByConnection;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_sceneForIdentity:(id)arg0 inProcess:(int)arg1 ;
-(id)initWithKeyboardFocusController:(id)arg0 systemUIScenesCoordinator:(id)arg1 ;
-(void)_handleDisconnectForServiceConnection:(id)arg0 ;
-(void)deferAdditionalEnvironments:(id)arg0 whenSceneHasKeyboardFocus:(id)arg1 pid:(id)arg2 ;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)removeKeyboardFocusFromSceneIdentity:(id)arg0 pid:(id)arg1 ;
-(void)requestKeyboardFocusForSceneIdentity:(id)arg0 pid:(id)arg1 completion:(id)arg2 ;
-(void)stopApplyingAdditionalDeferringRulesWhenSceneHasKeyboardFocus:(id)arg0 pid:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIKEYBOARDARBITER_H
#define _UIKEYBOARDARBITER_H

@class NSXPCListener, NSMutableArray, FBSSceneIdentityToken, NSMutableOrderedSet, FBSWorkspace, FBSScene, BKSApplicationStateMonitor, FBSSceneLayer, NSString, _UIKeyboardChangedInformation;
@protocol NSXPCListenerDelegate, _UIKeyboardArbiterAdvisor, OS_dispatch_queue, _UIKeyboardArbiterOmniscientDelegate, _UIKeyboardArbiterLink;

#import <Foundation/Foundation.h>

#import "_UIKeyboardArbiterHandle.h"

@interface _UIKeyboardArbiter : NSObject <NSXPCListenerDelegate, _UIKeyboardArbiterAdvisor>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    NSMutableArray *_clients;
    _UIKeyboardArbiterHandle *_previouslyActiveHandle;
    int _currentFocusPID;
    FBSSceneIdentityToken *_currentFocusSceneIdentity;
    _UIKeyboardArbiterHandle *_keyboardFocusHandle;
    NSMutableOrderedSet *_recentlyActiveSceneIdentities;
    FBSWorkspace *_workspace;
    FBSScene *_scene;
    int _updateCounter;
    BKSApplicationStateMonitor *_stateMonitor;
    NSInteger _lastEventSource;
    FBSSceneLayer *_sceneLayer;
    _UIKeyboardArbiterHandle *_disablingHandle;
}


@property (readonly, weak) _UIKeyboardArbiterHandle *activeHandle; // ivar: _activeHandle
@property (readonly, weak) _UIKeyboardArbiterHandle *commandFocusHandle; // ivar: _commandFocusHandle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UIKeyboardChangedInformation *lastUpdate; // ivar: _lastUpdate
@property (weak, nonatomic) NSObject<_UIKeyboardArbiterOmniscientDelegate> *omniscientDelegate; // ivar: _omniscientDelegate
@property (readonly, nonatomic) int presentingKeyboardProcessIdentifier;
@property (readonly) FBSSceneLayer *sceneLayer;
@property (readonly, nonatomic) NSObject<_UIKeyboardArbiterLink> *sceneLink; // ivar: _sceneLink
@property (readonly) Class superclass;


-(BOOL)activateHandle:(id)arg0 ;
-(BOOL)deactivateHandle:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_activeFocusHandle;
-(id)_descriptionWithScene:(BOOL)arg0 ;
-(id)handlerForBundleID:(id)arg0 ;
-(id)handlerForPID:(int)arg0 ;
-(id)handlerForToken:(id)arg0 ;
-(id)hostBundleIdentifierForHandle:(id)arg0 hosts:(id)arg1 ;
-(id)hostForHandle:(id)arg0 hosts:(id)arg1 ;
-(id)initWithLink:(id)arg0 ;
-(id)preferredSceneIdentityForKeyboardFocusWithChangeInformation:(id)arg0 ;
-(id)remoteSceneIdentity;
-(void)_cullRecentlyActiveSceneIdentities;
-(void)_findForHandle:(id)arg0 deepestHandleHandler:(id)arg1 ;
// -(void)_findForHandle:(id)arg0 deepestHandleHandler:(id)arg1 checklist:(unk)arg2  ;
-(void)_trackRecentlyActiveArbiterHandle:(id)arg0 ;
-(void)activateClients;
-(void)attemptConnection;
-(void)captureStateForDebug;
-(void)checkHostingState;
-(void)completeKeyboardStatusChangedFromHandler:(id)arg0 ;
-(void)dealloc;
-(void)handleUnexpectedDeallocForHandler:(id)arg0 ;
-(void)handlerRequestedFocus:(id)arg0 shouldStealKeyboard:(BOOL)arg1 ;
-(void)handlerRequestedForcedClientSceneIdentityUpdate:(id)arg0 ;
-(void)newClientConnected:(id)arg0 withExpectedState:(id)arg1 onConnected:(id)arg2 ;
-(void)notifyHeightUpdated:(id)arg0 ;
-(void)processWithPID:(int)arg0 foreground:(BOOL)arg1 suspended:(BOOL)arg2 ;
-(void)reevaluateFocusedSceneIdentityForKeyboardFocusWithChangeInformation:(id)arg0 ;
-(void)reevaluateHardwareKeyboardClient;
-(void)reevaluateSceneClientSettings;
-(void)resume;
-(void)retrieveClientDebugInformationWithCompletion:(id)arg0 ;
-(void)retrieveDebugInformationWithCompletion:(id)arg0 ;
// -(void)runOperations:(id)arg0 onHandler:(unk)arg1  ;
-(void)scheduleWindowTimeout;
-(void)setKeyboardTotalDisable:(BOOL)arg0 withFence:(id)arg1 fromHandler:(id)arg2 completionHandler:(id)arg3 ;
-(void)setSuppressionCount:(int)arg0 ofPIDs:(id)arg1 ;
-(void)signalEventSourceChanged:(NSInteger)arg0 fromHandler:(id)arg1 completionHandler:(id)arg2 ;
-(void)transition:(id)arg0 eventStage:(NSUInteger)arg1 withInfo:(id)arg2 fromHandler:(id)arg3 ;
-(void)updateInterestedBundleIDs;
-(void)updateKeyboardSceneSettings;
-(void)updateKeyboardStatus:(id)arg0 fromHandler:(id)arg1 ;
-(void)updateSceneClientSettings:(id)arg0 ;
-(void)updateSuppression:(BOOL)arg0 ofPID:(id)arg1 active:(BOOL)arg2 ;
-(void)updateSuppression:(BOOL)arg0 ofPIDs:(id)arg1 active:(BOOL)arg2 ;


@end


#endif
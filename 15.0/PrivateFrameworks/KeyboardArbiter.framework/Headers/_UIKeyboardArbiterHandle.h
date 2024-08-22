// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIKEYBOARDARBITERHANDLE_H
#define _UIKEYBOARDARBITERHANDLE_H

@class NSMutableSet, BKSProcessAssertion, NSArray, BSServiceConnectionEndpointInjector, NSString, NSXPCConnection, FBSSceneIdentityToken, FBSCAContextSceneLayer;
@protocol _UIKeyboardArbitration;

#import <Foundation/Foundation.h>

#import "_UIKeyboardArbiter.h"

@interface _UIKeyboardArbiterHandle : NSObject <_UIKeyboardArbitration>

 {
    BOOL _invalidated;
    _UIKeyboardArbiter *_owner;
    NSMutableSet *_hostedPids;
    BOOL _checkingShowability;
    int _childrenSuppressionCount;
    BOOL _keyboardOnScreen;
    BKSProcessAssertion *_remoteKeepAliveAssertion;
    NSUInteger _remoteKeepAliveAssertionCount;
    NSUInteger _remoteKeepAliveTimerCount;
    NSArray *_cachedContext;
    BSServiceConnectionEndpointInjector *_endpointGrantInjector;
}


@property (nonatomic, getter=isAcquiringFocus) BOOL acquiringFocus; // ivar: _acquiringFocus
@property (readonly) BOOL active; // ivar: _active
@property (readonly, retain) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly) NSXPCConnection *connection; // ivar: _connection
@property (readonly) BOOL deactivating; // ivar: _deactivating
@property (readonly) BOOL hasHostedPids;
@property (readonly) CGFloat iavHeight; // ivar: _iavHeight
@property (readonly) BOOL isKeyboardOnScreen;
@property (readonly) CGFloat level; // ivar: _level
@property (readonly) BOOL multipleScenes; // ivar: _multipleScenes
@property int prevActiveIdentifier; // ivar: _prevActiveIdentifier
@property (readonly) int processIdentifier;
@property (readonly, retain) FBSSceneIdentityToken *remoteSceneIdentity; // ivar: _remoteSceneIdentity
@property (nonatomic) BOOL requestedCorrectionOfClientSceneIdentityWhileAcquiringFocus; // ivar: _requestedCorrectionOfClientSceneIdentityWhileAcquiringFocus
@property BOOL running; // ivar: _running
@property (readonly, retain) FBSCAContextSceneLayer *sceneLayer; // ivar: _sceneLayer
@property int suppressionCount; // ivar: _suppressionCount
@property (readonly) NSUInteger wantedState; // ivar: _wantedState
@property (readonly) BOOL wantsFence; // ivar: _wantsFence


+(id)handlerWithArbiter:(id)arg0 forConnection:(id)arg1 ;
-(BOOL)_isKeyboardOnScreen:(id)arg0 ;
-(BOOL)_shouldRejectSceneIdentityUpdateCorrectingClientIfNeeded:(id)arg0 fromSelector:(SEL)arg1 ;
-(BOOL)isHandlerShowableWithHandler:(id)arg0 ;
-(BOOL)isHostingPID:(int)arg0 ;
-(id)description;
-(void)_deactivateScene;
-(void)_reevaluateRemoteSceneIdentity:(id)arg0 ;
-(void)addHostedPids:(id)arg0 ;
-(void)applicationShouldFocusWithBundle:(id)arg0 onCompletion:(id)arg1 ;
-(void)cacheWindowContext;
-(void)checkActivation:(NSUInteger)arg0 ;
-(void)clearAcquiringFocusFlags;
-(void)dealloc;
-(void)didAttachLayer;
-(void)didDetachLayer;
-(void)focusApplicationWithProcessIdentifier:(int)arg0 sceneIdentity:(id)arg1 onCompletion:(id)arg2 ;
-(void)focusApplicationWithProcessIdentifier:(int)arg0 sceneIdentity:(id)arg1 stealingKeyboard:(BOOL)arg2 onCompletion:(id)arg3 ;
-(void)invalidate;
-(void)notifyHostedPIDsOfSuppression:(BOOL)arg0 ;
-(void)notifyHostedPIDsOfSuppression:(BOOL)arg0 active:(BOOL)arg1 ;
-(void)notifyIAVHeight:(CGFloat)arg0 ;
-(void)releaseProcessAssertion;
-(void)retrieveDebugInformation:(id)arg0 ;
-(void)retrieveMoreDebugInformationWithCompletion:(id)arg0 ;
-(void)setKeyboardTotalDisable:(BOOL)arg0 withFence:(id)arg1 completionHandler:(id)arg2 ;
-(void)setSceneIdentity:(id)arg0 ;
-(void)setWantsFencing:(BOOL)arg0 ;
-(void)setWindowContextID:(unsigned int)arg0 sceneIdentity:(id)arg1 windowState:(NSUInteger)arg2 withLevel:(CGFloat)arg3 ;
-(void)setWindowHostingPID:(int)arg0 active:(BOOL)arg1 ;
-(void)signalEventSourceChanged:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)signalKeyboardChangeComplete;
-(void)signalKeyboardChanged:(id)arg0 onCompletion:(id)arg1 ;
-(void)startArbitrationWithExpectedState:(id)arg0 hostingPIDs:(id)arg1 usingFence:(BOOL)arg2 withSuppression:(int)arg3 onConnected:(id)arg4 ;
-(void)takeProcessAssertionOnRemoteWithQueue:(id)arg0 ;
-(void)transition:(id)arg0 eventStage:(NSUInteger)arg1 withInfo:(id)arg2 ;
-(void)uncacheWindowContext;
-(void)updateSuspensionCountForPids:(id)arg0 active:(BOOL)arg1 ;


@end


#endif
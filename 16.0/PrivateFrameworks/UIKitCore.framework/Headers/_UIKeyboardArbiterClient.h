// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIKEYBOARDARBITERCLIENT_H
#define _UIKEYBOARDARBITERCLIENT_H

@class NSHashTable, NSXPCConnection, NSString, FBSScene;
@protocol _UIRemoteKeyboardDistributedViewSource, _UIAssertionControllerSubject, _UIKBArbiterDelegateProtocol, _UIRemoteKeyboardControllerDelegate, _UIRemoteKeyboardsEventObserverDelegate, _UIKeyboardArbiterClient, _UIKBArbiterClientKeyboardChangeDelegate, _UIKeyboardUIStateDelegate;

#import <Foundation/Foundation.h>

#import "_UIAssertionController.h"
#import "_UIKeyboardChangedInformation.h"
#import "_UIKeyboardUIInformation.h"
#import "_UIRemoteKeyboardsEventObserver.h"
#import "UIInputWindowController.h"
#import "UIView.h"

@interface _UIKeyboardArbiterClient : NSObject <_UIRemoteKeyboardDistributedViewSource, _UIAssertionControllerSubject, _UIKBArbiterDelegateProtocol, _UIRemoteKeyboardControllerDelegate, _UIRemoteKeyboardsEventObserverDelegate, _UIKeyboardArbiterClient>

 {
    int _ignoreLayoutSubviews;
    int _externalSuppression;
    NSHashTable *_windowControllers;
    int _recursionCheck;
    _UIAssertionController *_assertionController;
}


@property (retain, nonatomic) _UIKeyboardChangedInformation *backupState; // ivar: _backupState
@property (weak, nonatomic) NSObject<_UIKBArbiterClientKeyboardChangeDelegate> *changeInfoDelegate; // ivar: _changeInfoDelegate
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (retain, nonatomic) _UIKeyboardChangedInformation *currentClientState; // ivar: _currentClientState
@property (nonatomic) BOOL currentInputDestination; // ivar: _currentInputDestination
@property (retain, nonatomic) _UIKeyboardUIInformation *currentUIState; // ivar: _currentUIState
@property (nonatomic) BOOL deactivatedByControlCenter; // ivar: _deactivatedByControlCenter
@property (nonatomic) BOOL deactivatedBySystemGesture; // ivar: _deactivatedBySystemGesture
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didSignalKeyboardChangedForCurrentKeyboard; // ivar: _didSignalKeyboardChangedForCurrentKeyboard
@property (nonatomic) BOOL disableBecomeFirstResponder; // ivar: _disableBecomeFirstResponder
@property (nonatomic) BOOL enqueuedWillEnterForegroundActions; // ivar: _enqueuedWillEnterForegroundActions
@property (retain, nonatomic) _UIRemoteKeyboardsEventObserver *eventObserver; // ivar: _eventObserver
@property (nonatomic) BOOL expectedSuppression; // ivar: _expectedSuppression
@property BOOL expectingInitialState; // ivar: _expectingInitialState
@property (nonatomic) BOOL handlingKeyboardTransition; // ivar: _handlingKeyboardTransition
@property (nonatomic) BOOL handlingRemoteEvent; // ivar: _handlingRemoteEvent
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger hostedCount; // ivar: _hostedCount
@property (nonatomic) CGFloat iavHeight; // ivar: _iavHeight
@property (retain, nonatomic) UIInputWindowController *inputWindowRootViewController; // ivar: _inputWindowRootViewController
@property (weak, nonatomic) NSObject<_UIKeyboardUIStateDelegate> *kbUIStateDelegate; // ivar: _kbUIStateDelegate
@property (readonly) BOOL keyboardActive;
@property (retain, nonatomic) UIView *keyboardSnapshot; // ivar: _keyboardSnapshot
@property (nonatomic) NSInteger keyboardSource; // ivar: _keyboardSource
@property (nonatomic) BOOL keyboardUIHost; // ivar: _keyboardUIHost
@property (readonly) BOOL keyboardVisible;
@property (nonatomic) NSInteger lastEventSource; // ivar: _lastEventSource
@property (readonly) BOOL remoteKeyboardUndocked;
@property (retain, nonatomic) FBSScene *requiredScene; // ivar: _requiredScene
@property (nonatomic) BOOL shouldFence; // ivar: _shouldFence
@property (nonatomic) BOOL snapshotting; // ivar: _snapshotting
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property BOOL updatingHeight; // ivar: _updatingHeight
@property (nonatomic) BOOL windowEnabled; // ivar: _windowEnabled


+(BOOL)enabled;
+(id)automaticSharedArbiterClient;
+(id)keyboardClientFBSSceneIdentityStringOrIdentifierFromScene:(id)arg0 ;
+(id)mainBundleIdentifier;
+(id)serviceName;
-(BOOL)_didHandleKeyboardClientChange:(id)arg0 shouldConsiderSnapshottingKeyboard:(BOOL)arg1 isLocalEvent:(BOOL)arg2 ;
-(BOOL)allowedToShowKeyboard;
-(BOOL)assertionActivationStateForType:(NSUInteger)arg0 ;
-(BOOL)hasAnyHostedViews;
-(BOOL)hasWindowHostingPID:(int)arg0 ;
-(BOOL)isOnScreenRotating;
-(BOOL)isSpotlight:(id)arg0 ;
-(BOOL)keyboardClientDidChange:(id)arg0 ;
-(BOOL)remoteKeyboardUndocked:(BOOL)arg0 ;
-(BOOL)shouldAllowInputViewsRestoredForId:(id)arg0 ;
-(BOOL)shouldSnapshot;
-(NSUInteger)localSceneCount;
-(id)arbiterConnection;
-(id)arbiterProxy;
-(id)currentHostedPIDs;
-(id)existingInputWindowRootViewController;
-(id)init;
-(id)initWithShouldConnect:(BOOL)arg0 ;
-(id)prepareForHostedWindowWithScene:(id)arg0 ;
-(id)vendKeyboardSuppressionAssertionForReason:(id)arg0 ;
-(id)vendKeyboardSuppressionAssertionForReason:(id)arg0 type:(NSUInteger)arg1 ;
-(void)_handleKeyboardChanged:(id)arg0 isLocal:(BOOL)arg1 onComplete:(id)arg2 ;
-(void)_layoutKeyboardViews:(id)arg0 ;
-(void)_performOnDistributedControllersExceptSelf:(id)arg0 ;
-(void)_postInputSourceDidChangeNotification;
-(void)_preserveInputViewsForClientChange:(BOOL)arg0 clientInfo:(id)arg1 snapshotIfNecessary:(BOOL)arg2 ;
-(void)_updateEventSource:(NSInteger)arg0 options:(NSUInteger)arg1 ;
-(void)addWindowHostingPID:(int)arg0 ;
-(void)applicationResume:(id)arg0 ;
-(void)assertIgnoreLayoutNotifications;
-(void)assertionActivationStateChangedToState:(BOOL)arg0 forType:(NSUInteger)arg1 ;
-(void)checkConnection;
-(void)checkState;
-(void)cleanSuppression;
-(void)completeTransition:(id)arg0 withInfo:(id)arg1 ;
-(void)configureArbiterCommunication:(id)arg0 ;
-(void)controllerDidLayoutSubviews:(id)arg0 ;
-(void)dealloc;
-(void)didFailArbiterConnection;
-(void)didSuspend:(id)arg0 ;
-(void)finishWithHostedWindow;
-(void)ignoreLayoutNotifications:(id)arg0 ;
-(void)keyboardChangedCompleted;
-(void)peekApplicationEvent:(id)arg0 ;
-(void)performOnControllers:(id)arg0 ;
-(void)performOnDistributedControllers:(id)arg0 ;
-(void)performOnExistingControllers:(id)arg0 ;
-(void)queue_failedConnection:(id)arg0 ;
-(void)queue_getDebugInfoWithCompletion:(id)arg0 ;
-(void)queue_keyboardChanged:(id)arg0 onComplete:(id)arg1 ;
-(void)queue_keyboardChangedWithCompletion:(id)arg0 ;
-(void)queue_keyboardIAVChanged:(CGFloat)arg0 onComplete:(id)arg1 ;
-(void)queue_keyboardSuppressed:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)queue_keyboardTransition:(id)arg0 event:(NSUInteger)arg1 withInfo:(id)arg2 onComplete:(id)arg3 ;
-(void)queue_keyboardUIDidChange:(id)arg0 onComplete:(id)arg1 ;
-(void)queue_sceneBecameFocused:(id)arg0 withCompletion:(id)arg1 ;
-(void)registerController:(id)arg0 ;
-(void)releaseIgnoreLayoutNotificationsAssertion;
-(void)reloadForSnapshotting;
-(void)removeWindowHostingPID:(int)arg0 ;
-(void)resetSnapshotWithWindowCheck:(BOOL)arg0 ;
-(void)resignFirstResponderIfNeeded;
-(void)restorePreservedInputViewsIfNecessary;
-(void)sceneUpdated;
-(void)setPlacement:(id)arg0 quietly:(BOOL)arg1 animated:(BOOL)arg2 generateSplitNotification:(BOOL)arg3 ;
-(void)setSuppressingKeyboard:(BOOL)arg0 forScene:(id)arg1 ;
-(void)signalToProxyKeyboardChanged:(id)arg0 onCompletion:(id)arg1 ;
-(void)snapsShotKeyboard;
-(void)startConnection;
-(void)startConnectionWithCompletion:(id)arg0 ;
-(void)startTransition:(id)arg0 withInfo:(id)arg1 ;
-(void)stopConnection;
-(void)unregisterController:(id)arg0 ;
-(void)updateEventSource:(NSInteger)arg0 options:(NSUInteger)arg1 ;
-(void)updateTransition:(id)arg0 withInfo:(id)arg1 ;
-(void)willResume:(id)arg0 ;


@end


#endif
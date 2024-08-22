// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIVIEWSERVICETEXTEFFECTSOPERATOR_H
#define _UIVIEWSERVICETEXTEFFECTSOPERATOR_H

@class NSArray, NSString;
@protocol _UIHostedWindowDelegate, _UIViewServiceTextEffectsOperator_RemoteViewControllerInterface, _UIViewServiceDeputy, _UIViewServiceDeputyRotationDelegate;

#import <Foundation/Foundation.h>

#import "_UIAsyncInvocation.h"
#import "_UIHostedWindow.h"

@interface _UIViewServiceTextEffectsOperator : NSObject <_UIHostedWindowDelegate, _UIViewServiceTextEffectsOperator_RemoteViewControllerInterface, _UIViewServiceDeputy, _UIViewServiceDeputyRotationDelegate>

 {
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
    id *_remoteViewControllerProxy;
    BOOL _wasInvalidated;
    _UIAsyncInvocation *_prepareForDisconnectionInvocation;
    _UIAsyncInvocation *_invalidationInvocation;
    _UIHostedWindow *_hostedWindow;
    CGPoint _windowOffset;
    UIEdgeInsets _safeAreaInsets;
    CGSize _sceneSize;
    BOOL _canRestoreInputViews;
    BOOL _isRestoringInputViews;
    BOOL _didResignForDisappear;
    BOOL _localVCDisablesAutomaticBehaviors;
    NSArray *_allowedNotifications;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_shouldAddServiceOperator;
+(id)XPCInterface;
+(id)operatorWithRemoteViewControllerProxy:(id)arg0 hostPID:(int)arg1 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(NSUInteger)retainCount;
-(id)_queue;
-(id)autorelease;
-(id)invalidate;
-(id)retain;
-(int)__automatic_invalidation_logic;
-(void)__createHostedTextEffectsWithReplyHandler:(id)arg0 ;
-(void)__hostDidEnterBackground;
-(void)__hostViewWillAppear:(BOOL)arg0 ;
-(void)__hostViewWillDisappear:(BOOL)arg0 ;
-(void)__hostWillEnterForeground;
-(void)__prepareForDisconnectionWithCompletionHandler:(id)arg0 ;
-(void)__setHostAllowedNotifications:(id)arg0 ;
-(void)__setNextAutomaticOrderOutDirection:(int)arg0 duration:(CGFloat)arg1 ;
-(void)__setSafeAreaInsets:(struct UIEdgeInsets )arg0 ;
-(void)__setSceneSize:(struct CGSize )arg0 ;
-(void)__setWindowOffset:(struct CGPoint )arg0 ;
-(void)_invalidateUnconditionallyThen:(id)arg0 ;
-(void)_prepareForDisconnectionUnconditionallyThen:(id)arg0 ;
-(void)_reloadSafeInsets;
-(void)_resetSceneSize;
-(void)_restoreInputViews;
-(void)_viewServiceHostWillEnterForeground:(id)arg0 ;
-(void)dealloc;
-(void)finishRotationFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)forceSyncToStatusBarOrientation;
-(void)hostedWindow:(id)arg0 didSetFirstResponder:(id)arg1 ;
-(void)hostedWindow:(id)arg0 didSetResponderTargetForCalloutBar:(id)arg1 ;
-(void)makeHostWindowKey;
-(void)performOnRelevantWindows:(id)arg0 ;
-(void)release;
-(void)rotateToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)setHostedWindow:(id)arg0 disableAutomaticBehaviors:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;


@end


#endif
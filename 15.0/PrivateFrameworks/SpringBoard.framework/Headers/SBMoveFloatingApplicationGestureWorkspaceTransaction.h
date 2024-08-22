// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBMOVEFLOATINGAPPLICATIONGESTUREWORKSPACETRANSACTION_H
#define SBMOVEFLOATINGAPPLICATIONGESTUREWORKSPACETRANSACTION_H

@class NSMutableDictionary;


#import "SBFluidSwitcherGestureWorkspaceTransaction.h"
#import "SBApplicationSceneUpdateTransaction.h"

@interface SBMoveFloatingApplicationGestureWorkspaceTransaction : SBFluidSwitcherGestureWorkspaceTransaction {
    BOOL _tryPreemptiveFloatingApplicationActivation;
    BOOL _didAddActivateFloatingApplicationTransaction;
    SBApplicationSceneUpdateTransaction *_activateFloatingApplicationTransaction;
    NSMutableDictionary *_statusBarAssertions;
    CGRect _initialFloatingApplicationFrame;
}




-(NSInteger)_gestureType;
-(id)_transitionRequestForPreemptiveFloatingApplicationActivation;
-(void)_acquireStatusBarAssertions;
-(void)_begin;
-(void)_beginWithGesture:(id)arg0 ;
-(void)_didComplete;
-(void)_finishWithGesture:(id)arg0 ;
-(void)_invalidateStatusBarAssertions;
-(void)_performBlockWithLiveContentOverlayUpdatesSuspended:(id)arg0 ;
-(void)_startSuppressingKeyboardForFloatingApplication;
-(void)_stopSuppressingKeyboard;
-(void)_tryPreemptiveFloatingApplicationActivationIfNecessaryWithGesture:(id)arg0 ;
-(void)_updateStatusBarAssertionsForGesture;
-(void)_updateStatusBarAssertionsForLayoutState;
-(void)_updateWithGesture:(id)arg0 ;


@end


#endif
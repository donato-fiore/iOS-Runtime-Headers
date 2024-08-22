// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMOVEFLOATINGAPPLICATIONGESTUREWORKSPACETRANSACTION_H
#define SBMOVEFLOATINGAPPLICATIONGESTUREWORKSPACETRANSACTION_H



#import "SBFluidSwitcherGestureWorkspaceTransaction.h"
#import "SBApplicationSceneUpdateTransaction.h"

@interface SBMoveFloatingApplicationGestureWorkspaceTransaction : SBFluidSwitcherGestureWorkspaceTransaction {
    BOOL _tryPreemptiveFloatingApplicationActivation;
    BOOL _didAddActivateFloatingApplicationTransaction;
    SBApplicationSceneUpdateTransaction *_activateFloatingApplicationTransaction;
    CGRect _initialFloatingApplicationFrame;
}




-(NSInteger)_gestureType;
-(id)_transitionRequestForPreemptiveFloatingApplicationActivation;
-(void)_begin;
-(void)_beginWithGesture:(id)arg0 ;
-(void)_didComplete;
-(void)_finishWithGesture:(id)arg0 ;
-(void)_performBlockWithLiveContentOverlayUpdatesSuspended:(id)arg0 ;
-(void)_startSuppressingKeyboardForFloatingApplication;
-(void)_stopSuppressingKeyboard;
-(void)_tryPreemptiveFloatingApplicationActivationIfNecessaryWithGesture:(id)arg0 ;
-(void)_updateWithGesture:(id)arg0 ;


@end


#endif
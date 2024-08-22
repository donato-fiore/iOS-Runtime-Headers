// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBKEYBOARDDISMISSALMANAGER_H
#define SBKEYBOARDDISMISSALMANAGER_H

@class __UIKeyboardArbiterManager, BKSTouchDeliveryObservationService, BSCompoundAssertion, UIGestureRecognizer, BSAbsoluteMachTimer, NSString;
@protocol SBFailureNotifyingTapGestureRecognizerDelegate, BKSTouchDeliveryObserving;

#import <Foundation/Foundation.h>

#import "SBSystemGestureManager.h"
#import "SBWorkspaceKeyboardFocusController.h"

@interface SBKeyboardDismissalManager : NSObject <SBFailureNotifyingTapGestureRecognizerDelegate, BKSTouchDeliveryObserving>

 {
    __UIKeyboardArbiterManager *_keyboardArbiterManager;
    SBSystemGestureManager *_systemGestureManager;
    SBWorkspaceKeyboardFocusController *_focusController;
    BKSTouchDeliveryObservationService *_touchService;
    BSCompoundAssertion *_participantsAssertion;
    UIGestureRecognizer *_dismissGestureRecognizer;
    unsigned int _trackedTouchIdentifier;
    BSAbsoluteMachTimer *_touchExpiryTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldPreventDismissalForTouch:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)initWithTouchDeliveryService:(id)arg0 systemGestureManager:(id)arg1 keyboardArbiterManager:(id)arg2 focusController:(id)arg3 ;
-(id)registerKeyboardDismissalParticipant:(id)arg0 ;
-(id)viewForSystemGestureRecognizer:(id)arg0 ;
-(void)_didTap:(id)arg0 ;
-(void)_reset;
-(void)dealloc;
-(void)gestureRecognizerTransitionedToFailed:(id)arg0 ;
-(void)touchUpOccuredForIdentifier:(unsigned int)arg0 detached:(BOOL)arg1 context:(unsigned int)arg2 pid:(int)arg3 ;


@end


#endif
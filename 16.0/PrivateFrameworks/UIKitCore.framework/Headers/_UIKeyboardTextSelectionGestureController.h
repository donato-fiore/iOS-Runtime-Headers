// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIKEYBOARDTEXTSELECTIONGESTURECONTROLLER_H
#define _UIKEYBOARDTEXTSELECTIONGESTURECONTROLLER_H

@class NSMutableArray;
@protocol _UIKeyboardTextSelectionGestureControllerDelegate;

#import <Foundation/Foundation.h>

#import "_UIStatesFeedbackGenerator.h"
#import "UIDelayedAction.h"
#import "UITextMagnifierTimeWeightedPoint.h"

@interface _UIKeyboardTextSelectionGestureController : NSObject {
    NSMutableArray *_deallocHandlers;
}


@property (nonatomic) CGPoint accumulatedAcceleration; // ivar: _accumulatedAcceleration
@property (nonatomic) CGPoint accumulatedBounding; // ivar: _accumulatedBounding
@property (retain, nonatomic) NSMutableArray *activeGestures; // ivar: _activeGestures
@property (nonatomic) CGPoint cursorLocationBase; // ivar: _cursorLocationBase
@property (weak, nonatomic) NSObject<_UIKeyboardTextSelectionGestureControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL didFloatCursor; // ivar: _didFloatCursor
@property (nonatomic) BOOL didSuppressSelectionGrabbers; // ivar: _didSuppressSelectionGrabbers
@property (retain, nonatomic) _UIStatesFeedbackGenerator *feedbackBehaviour; // ivar: _feedbackBehaviour
@property (nonatomic) BOOL hadAddedTouch; // ivar: _hadAddedTouch
@property (nonatomic) BOOL isLongPressing; // ivar: _isLongPressing
@property (nonatomic) BOOL isPanning; // ivar: _isPanning
@property (nonatomic) BOOL isSpacePan; // ivar: _isSpacePan
@property (nonatomic) CGPoint lastPanTranslation; // ivar: _lastPanTranslation
@property (nonatomic) CGFloat lastPressTimestamp; // ivar: _lastPressTimestamp
@property (retain, nonatomic) UIDelayedAction *longForcePressAction; // ivar: _longForcePressAction
@property (nonatomic) NSInteger panGestureState; // ivar: _panGestureState
@property (nonatomic) int previousForcePressCount; // ivar: _previousForcePressCount
@property (nonatomic) NSInteger previousRepeatedGranularity; // ivar: _previousRepeatedGranularity
@property (nonatomic) CGFloat spacePanDistance; // ivar: _spacePanDistance
@property (nonatomic) BOOL suppressTwoFingerPan; // ivar: _suppressTwoFingerPan
@property (retain, nonatomic) UIDelayedAction *tapLogTimer; // ivar: _tapLogTimer
@property (nonatomic) CGFloat twoFingerTapTimestamp; // ivar: _twoFingerTapTimestamp
@property (nonatomic) BOOL wasNestedPinchingDisabled; // ivar: _wasNestedPinchingDisabled
@property (nonatomic) BOOL wasScrollingEnabled; // ivar: _wasScrollingEnabled
@property (retain, nonatomic) UITextMagnifierTimeWeightedPoint *weightedPoint; // ivar: _weightedPoint


+(id)sharedInstance;
-(BOOL)_longPressAllowedForView:(id)arg0 ;
-(BOOL)allowOneFingerDeepPress;
-(BOOL)oneFingerForcePressShouldCancelTouchesInView;
-(BOOL)oneFingerForcePressShouldFailWithoutForce;
-(BOOL)shouldAddForceGesture;
-(CGFloat)oneFingerForcePressAllowableMovement;
-(CGFloat)oneFingerForcePressMinimumDuration;
-(Class)textInteractionClass;
-(id)addDeallocationHandler:(id)arg0 ;
-(id)addLongPressTextSelectionInteractionsToView:(id)arg0 ;
-(id)addOneFingerTextSelectionInteractionsToView:(id)arg0 ;
-(id)addTwoFingerTextSelectionInteractionsToView:(id)arg0 ;
-(id)init;
-(id)selectionController;
-(void)_cleanupDeadGesturesIfNecessary;
-(void)configureOneFingerForcePressRecognizer:(id)arg0 ;
-(void)configureTwoFingerPanGestureRecognizer:(id)arg0 ;
-(void)configureTwoFingerTapGestureRecognizer:(id)arg0 ;
-(void)dealloc;
-(void)didRemoveSelectionController;
-(void)enableEnclosingScrollViewNestedPinching;
-(void)redisableEnclosingScrollViewNestedPinching;
-(void)removeDeallocationHandler:(id)arg0 ;
-(void)willRemoveSelectionController;


@end


#endif
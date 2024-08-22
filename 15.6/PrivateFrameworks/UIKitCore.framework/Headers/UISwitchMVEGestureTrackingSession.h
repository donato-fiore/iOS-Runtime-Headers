// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISWITCHMVEGESTURETRACKINGSESSION_H
#define UISWITCHMVEGESTURETRACKINGSESSION_H

@class UIView<UISwitchMVEGestureTrackingSessionElement>;

#import <Foundation/Foundation.h>

#import "UIGestureRecognizer.h"

@interface UISwitchMVEGestureTrackingSession : NSObject

@property (nonatomic) BOOL displayedOnValue; // ivar: _displayedOnValue
@property (readonly, nonatomic) BOOL lastCommitedOnValue; // ivar: _lastCommitedOnValue
@property (readonly, nonatomic) CGFloat movementVectorForPanInitiatedChangeTargetOnValue; // ivar: _movementVectorForPanInitiatedChangeTargetOnValue
@property (readonly, nonatomic) CGFloat movementVectorForPanInitiatedChangeY; // ivar: _movementVectorForPanInitiatedChangeY
@property (readonly, nonatomic) CGFloat naturalLayoutDirection; // ivar: _naturalLayoutDirection
@property (readonly, nonatomic) BOOL pendingDisplayedOnValue; // ivar: _pendingDisplayedOnValue
@property (readonly, nonatomic) UIGestureRecognizer *pendingDisplayedOnValueInitiatingGesture; // ivar: _pendingDisplayedOnValueInitiatingGesture
@property (weak, nonatomic) UIView<UISwitchMVEGestureTrackingSessionElement> *visualElement; // ivar: _visualElement


+(BOOL)gestureIsInEndState:(NSInteger)arg0 ;
-(BOOL)_isMovementDirectionAndMagnitudeEnoughToPerformOnOffChange:(CGFloat)arg0 ;
-(BOOL)_isMovementDirectionTrackableForPossibleOnOffChange:(CGFloat)arg0 ;
-(BOOL)canApplyPendingOnValueForGesture:(id)arg0 ;
-(BOOL)updatePendingDisplayedOnValueIfMovementIsEnoughToInitiateChange:(CGFloat)arg0 forGesture:(id)arg1 ;
-(id)initWithVisualElement:(id)arg0 ;
-(void)_applyPendingChangesIfNecessary;
-(void)_sendStateChangeActionsIfNecessary;
-(void)_updateMovementVectorForPanInitiatedChanges;
-(void)applyPendingDisplayedOnValueAndSendActions;
-(void)applyPendingDisplayedOnValueWithoutSendingActions;
-(void)invalidatePendingOnValue;
-(void)reset;


@end


#endif
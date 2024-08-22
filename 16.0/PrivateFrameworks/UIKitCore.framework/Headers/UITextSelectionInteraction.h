// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITEXTSELECTIONINTERACTION_H
#define UITEXTSELECTIONINTERACTION_H



#import "UITextInteraction.h"
#import "UITextGestureTuning.h"
#import "_UIKeyboardTextSelectionController.h"
#import "UITextSelectionGrabberSuppressionAssertion.h"
#import "UITextModernLoupeSession.h"

@interface UITextSelectionInteraction : UITextInteraction {
    CGFloat _lastTapTimestamp;
    CGPoint _lastTapLocation;
    UITextGestureTuning *_gestureTuning;
    BOOL _indirectSelectionType;
    BOOL _viewConformsToTextInput;
    CGRect _originalCaretRect;
    BOOL _wasOriginallyFirstResponder;
    NSInteger _granularityToHandOff;
    _UIKeyboardTextSelectionController *_activeSelectionController;
    UITextSelectionGrabberSuppressionAssertion *_grabberSuppressionAssertion;
    UITextModernLoupeSession *_activeLoupeSession;
}




-(BOOL)_isNowWithinRepeatedTapTime;
-(BOOL)_isRepeatedTap:(id)arg0 gestureLocationOut:(struct CGPoint *)arg1 ;
-(BOOL)_isShiftKeyBeingHeldForGesture:(id)arg0 ;
-(BOOL)_isWithinRepeatedTapTimeForTouch:(id)arg0 ;
-(BOOL)_shouldAllowEnforcedTouchTypeForTouch:(id)arg0 forGestureRecognizer:(id)arg1 ;
-(BOOL)_usesIndirectSelectionBehavior;
-(BOOL)_usesPencilSelectionBehaviorForGesture:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)interaction_gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)interaction_gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)shouldHandleOneFingerTapInUneditable:(id)arg0 ;
-(NSInteger)_textGranularityForNumberOfTaps:(NSUInteger)arg0 ;
-(NSInteger)handOffGranularity;
-(id)_transientState;
-(id)initWithMode:(NSInteger)arg0 ;
-(id)initWithMode:(NSInteger)arg0 indirect:(BOOL)arg1 ;
-(void)_applyTransientState:(id)arg0 ;
-(void)_checkForRepeatedTap:(id)arg0 gestureLocationOut:(struct CGPoint *)arg1 ;
-(void)_createGestureTuningIfNecessary;
-(void)_handleMultiTapGesture:(id)arg0 ;
-(void)_showSelectionCommandsIfApplicableAfterDelay:(CGFloat)arg0 ;
-(void)_updateTapGestureHistoryWithLocation:(struct CGPoint )arg0 ;
-(void)confirmMarkedText:(id)arg0 ;
-(void)didMoveToView:(id)arg0 ;
-(void)didUpdateSelectionWithGesture:(id)arg0 ;
-(void)finishSetup;
-(void)oneFingerTapSelectsAll:(id)arg0 ;
-(void)setHybridSelectionWithPoint:(struct CGPoint )arg0 ;
-(void)tapAndAHalf:(id)arg0 ;
-(void)tappedToPositionCursorWithGesture:(id)arg0 atPoint:(struct CGPoint )arg1 granularity:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)tappedToSelectTextWithGesture:(id)arg0 atPoint:(struct CGPoint )arg1 granularity:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)tappedToUpdateSelectionWithGesture:(id)arg0 atPoint:(struct CGPoint )arg1 granularity:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)toggleSelectionCommands;
-(void)twoFingerRangedSelectGesture:(id)arg0 ;
-(void)willUpdateSelectionWithGesture:(id)arg0 ;


@end


#endif
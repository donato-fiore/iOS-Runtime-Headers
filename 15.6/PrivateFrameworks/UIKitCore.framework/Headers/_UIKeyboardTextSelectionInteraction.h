// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIKEYBOARDTEXTSELECTIONINTERACTION_H
#define _UIKEYBOARDTEXTSELECTIONINTERACTION_H

@class NSMapTable, NSTimer, NSString;
@protocol _UIPanOrFlickGestureRecognizerDelegate;


#import "UITextInteraction.h"
#import "_UIKeyboardTextSelectionGestureController.h"
#import "_UITouchesObservingGestureRecognizer.h"
#import "_UIPanOrFlickGestureRecognizer.h"

@interface _UIKeyboardTextSelectionInteraction : UITextInteraction <_UIPanOrFlickGestureRecognizerDelegate>

 {
    _UIKeyboardTextSelectionGestureController *_owner;
    NSMapTable *_weakMap;
    id *_deallocToken;
    _UITouchesObservingGestureRecognizer *_addedTouchRecognizer;
    NSTimer *_touchPadTimer;
    id *_touchPadTimerCompletion;
    _UIPanOrFlickGestureRecognizer *_activePress;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)attachToExistingRecogniser:(id)arg0 owner:(id)arg1 forType:(NSInteger)arg2 ;
-(BOOL)forceTouchGestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)isPlacedCarefully;
-(CGFloat)additionalPressDurationForTypingCadence:(id)arg0 ;
-(NSInteger)layoutDirectionFromFlickDirection:(NSUInteger)arg0 ;
-(id)gestures;
-(id)initWithView:(id)arg0 owner:(id)arg1 forTypes:(NSInteger)arg2 ;
-(id)owner;
-(id)selectionController;
-(struct CGPoint )acceleratedTranslation:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 isActive:(BOOL)arg2 ;
-(struct CGPoint )boundedTranslation:(struct CGPoint )arg0 ;
-(struct CGPoint )cursorLocationForTranslation:(struct CGPoint )arg0 ;
-(void)_beginLongForcePressTimerForGesture:(id)arg0 ;
-(void)_cancelLongForcePressTimer;
-(void)_cancelTouchPadTimer;
-(void)_clearHiding;
-(void)_clearTouchPadCallback;
-(void)_configureLongPressAddedTouchRecognizer:(id)arg0 ;
-(void)_configureLongPressRecognizer:(id)arg0 ;
-(void)_configureOneFingerForcePressRecognizer:(id)arg0 ;
-(void)_configureTwoFingerPanGestureRecognizer:(id)arg0 ;
-(void)_configureTwoFingerTapGestureRecognizer:(id)arg0 ;
-(void)_didEndIndirectSelectionGesture:(id)arg0 ;
-(void)_gestureRecognizerFailed:(id)arg0 ;
-(void)_granularityExpandingGestureWithTimeInterval:(CGFloat)arg0 timeGranularity:(CGFloat)arg1 isMidPan:(BOOL)arg2 ;
-(void)_logTapCounts:(id)arg0 ;
-(void)_longForcePressDetected:(id)arg0 ;
-(void)_prepareForGesture;
-(void)_startTouchPadTimerWithCompletion:(id)arg0 ;
-(void)_tidyUpGesture;
-(void)_willBeginIndirectSelectionGesture:(id)arg0 ;
-(void)beginCursorManipulationFromRect:(struct CGRect )arg0 ;
-(void)beginIndirectBlockPanWithTranslation:(struct CGPoint )arg0 executionContext:(id)arg1 ;
-(void)beginLongPressWithTranslation:(struct CGPoint )arg0 touchCount:(NSUInteger)arg1 executionContext:(id)arg2 ;
-(void)beginTwoFingerCursorPanWithTranslation:(struct CGPoint )arg0 executionContext:(id)arg1 ;
-(void)beginTwoFingerPanWithTranslation:(struct CGPoint )arg0 executionContext:(id)arg1 ;
-(void)cancelLongPressWithExecutionContext:(id)arg0 ;
-(void)cancelTwoFingerPanWithExecutionContext:(id)arg0 ;
-(void)clearKeyboardTouchesForGesture:(id)arg0 ;
-(void)dealloc;
-(void)detach;
-(void)disableEnclosingScrollViewScrolling;
-(void)endIndirectBlockPanWithExecutionContext:(id)arg0 ;
-(void)endLongPressWithExecutionContext:(id)arg0 ;
-(void)endTwoFingerPanWithExecutionContext:(id)arg0 ;
-(void)finishLongPressWithExecutionContext:(id)arg0 ;
-(void)gestureRecognizerShouldBeginResponse:(id)arg0 ;
-(void)handleTwoFingerFlickInDirection:(NSInteger)arg0 executionContext:(id)arg1 ;
-(void)hideInsideRecogniser:(id)arg0 ;
-(void)hideRecogniser:(id)arg0 forKey:(id)arg1 ;
-(void)indirectBlockPanGestureWithState:(NSInteger)arg0 withTranslation:(struct CGPoint )arg1 ;
-(void)indirectCursorPanGestureWithState:(NSInteger)arg0 withTranslation:(struct CGPoint )arg1 withFlickDirection:(NSUInteger)arg2 ;
-(void)indirectPanGestureWithState:(NSInteger)arg0 withTranslation:(struct CGPoint )arg1 withFlickDirection:(NSUInteger)arg2 ;
-(void)longPressGestureWithState:(NSInteger)arg0 withTranslation:(struct CGPoint )arg1 touchCount:(NSUInteger)arg2 ;
-(void)oneFingerForcePan:(id)arg0 ;
-(void)oneFingerForcePress:(id)arg0 ;
-(void)panningGesture:(id)arg0 ;
-(void)panningGestureAddedTouch:(id)arg0 ;
-(void)registerOwner:(id)arg0 ;
-(void)removeTemporaryGesture;
-(void)twoFingerTap:(id)arg0 ;
-(void)updateIndirectBlockPanWithTranslation:(struct CGPoint )arg0 executionContext:(id)arg1 ;
-(void)updateLongPressWithTranslation:(struct CGPoint )arg0 executionContext:(id)arg1 ;
-(void)updateTwoFingerPanWithTranslation:(struct CGPoint )arg0 executionContext:(id)arg1 ;


@end


#endif
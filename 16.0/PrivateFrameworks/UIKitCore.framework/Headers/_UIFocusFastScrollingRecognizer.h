// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFOCUSFASTSCROLLINGRECOGNIZER_H
#define _UIFOCUSFASTSCROLLINGRECOGNIZER_H

@class NSMapTable, NSTimer, NSString;
@protocol _UIFocusEnginePanGestureTouchObserver, _UIFocusFastScrollingRecognizerDelegate;

#import <Foundation/Foundation.h>

#import "_UIFocusEnginePanGestureRecognizer.h"
#import "_UIRotaryGestureRecognizer.h"
#import "_UIFocusFastScrollingTouchSequence.h"
#import "UIScrollView.h"

@interface _UIFocusFastScrollingRecognizer : NSObject <_UIFocusEnginePanGestureTouchObserver>

 {
    _UIFocusEnginePanGestureRecognizer *_panGesture;
    _UIRotaryGestureRecognizer *_rotaryGesture;
    _UIFocusFastScrollingTouchSequence *_currentTouch;
    NSMapTable *_swipeSequences;
    NSTimer *_swipeIntervalTimer;
    UIScrollView *_previewingScrollView;
    NSTimer *_previewingTouchTimer;
    NSUInteger _spatialFocusUpdateCount;
    BOOL _persistFastScrollingPreviewThroughReset;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIFocusFastScrollingRecognizerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_attemptToImmediatelyRecognizeEdgeGesture;
-(BOOL)_canFastScrollWithEdgeSwipe;
-(BOOL)_scrollViewIsEligibleForFastScrolling:(id)arg0 alongHeading:(NSUInteger)arg1 withScrollingStyle:(NSInteger)arg2 ;
-(BOOL)_swipeSequenceCanBeginFastScrolling:(id)arg0 ;
-(BOOL)attemptToImmediatelyRecognizeRotaryGesture;
-(BOOL)canImmediatelyRecognizeRotaryGesture;
-(NSUInteger)_bestHeadingForAccumulator:(struct CGVector )arg0 ;
-(id)_deepestEligibleScrollViewContainingFocusedItem:(NSUInteger)arg0 withScrollingStyle:(NSInteger)arg1 ;
-(id)_scrollViewsContainingCurrentlyFocusedItem;
-(id)initWithPanGesture:(id)arg0 ;
-(id)initWithPanGesture:(id)arg0 rotaryGesture:(id)arg1 ;
-(void)_activatePreviewingScrollViewForEdgeGesture;
-(void)_activatePreviewingScrollViewForEdgeGestureAfterDelay;
-(void)_activatePreviewingScrollViewForScrollingStyle:(NSInteger)arg0 emphasisAnimation:(BOOL)arg1 overrideIndexDisplayMode:(BOOL)arg2 ;
-(void)_deactivatePreviewingScrollViewIfNecessary;
-(void)_focusDidUpate:(id)arg0 ;
-(void)_handlePanGesture:(id)arg0 ;
-(void)_notifyDelegateWithScrollView:(id)arg0 scrollingStyle:(NSInteger)arg1 heading:(NSUInteger)arg2 ;
-(void)_startSwipeIntervalTimer;
-(void)_stopSwipeIntervalTimer;
-(void)_swipeIntervalElapsed:(id)arg0 ;
-(void)_swipeOccuredAlongHeading:(NSUInteger)arg0 ;
-(void)_touchSequenceDidEnd:(id)arg0 ;
-(void)_updateActiveSwipeSequencesForScrollViews:(id)arg0 ;
-(void)activateRotaryGesturePreviewingScrollViewWithEmphasisAnimation:(BOOL)arg0 ;
-(void)deactivateRotaryGesturePreviewingScrollViewIfNecessary;
-(void)dealloc;
-(void)directionalPressWithHeading:(NSUInteger)arg0 didRepeat:(NSUInteger)arg1 ;
-(void)focusEnginePanGesture:(id)arg0 touchBeganAtDigitizerLocation:(struct CGPoint )arg1 ;
-(void)focusEnginePanGesture:(id)arg0 touchCancelledAtDigitizerLocation:(struct CGPoint )arg1 ;
-(void)focusEnginePanGesture:(id)arg0 touchEndedAtDigitizerLocation:(struct CGPoint )arg1 ;
-(void)focusEnginePanGesture:(id)arg0 touchMovedToDigitizerLocation:(struct CGPoint )arg1 ;
-(void)joystickMovementWithHeading:(NSUInteger)arg0 didRepeat:(NSUInteger)arg1 ;
-(void)pageButtonPressWithHeading:(NSUInteger)arg0 didRepeat:(NSUInteger)arg1 ;
-(void)reset;


@end


#endif
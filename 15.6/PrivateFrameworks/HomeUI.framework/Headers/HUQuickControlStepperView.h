// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUQUICKCONTROLSTEPPERVIEW_H
#define HUQUICKCONTROLSTEPPERVIEW_H

@class UIView, NSArray, NSString, UIImpactFeedbackGenerator, UILongPressGestureRecognizer, NSNumber;
@protocol UIGestureRecognizerDelegate, HUQuickControlInteractiveView, HUQuickControlViewInteractionDelegate;


#import "HUQuickControlStepperViewProfile.h"

@interface HUQuickControlStepperView : UIView <UIGestureRecognizerDelegate, HUQuickControlInteractiveView>



@property (nonatomic) CGFloat accumulatedTouchDistance; // ivar: _accumulatedTouchDistance
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator
@property (retain, nonatomic) UILongPressGestureRecognizer *gestureRecognizer; // ivar: _gestureRecognizer
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<HUQuickControlViewInteractionDelegate> *interactionDelegate; // ivar: _interactionDelegate
@property (nonatomic) CGPoint lastTouchLocation; // ivar: _lastTouchLocation
@property (copy, nonatomic) HUQuickControlStepperViewProfile *profile; // ivar: _profile
@property (nonatomic) NSUInteger reachabilityState; // ivar: _reachabilityState
@property (retain, nonatomic) id *secondaryValue;
@property (retain, nonatomic) NSArray *segmentViews; // ivar: _segmentViews
@property (retain, nonatomic) NSNumber *selectedSegmentIndex; // ivar: _selectedSegmentIndex
@property (retain, nonatomic) NSArray *separatorEffectViews; // ivar: _separatorEffectViews
@property (retain, nonatomic) NSArray *separatorViews; // ivar: _separatorViews
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *trackingSegmentIndex; // ivar: _trackingSegmentIndex
@property (nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive; // ivar: _userInteractionActive
@property (retain, nonatomic) id *value;


-(BOOL)_shouldRequireMinimumDragDistanceForGestureRecognizer:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)_stepperViewMetricsForControlSize:(NSUInteger)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(id)intrinsicSizeDescriptorForControlSize:(NSUInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_actuateTapticFeedback;
-(void)_createSegmentAndSeparatorViews;
-(void)_handleGesture:(id)arg0 ;
-(void)_layoutSegmentViews;
-(void)_prepareForTapticFeedback;
-(void)_updateSegmentHighlightedState;
-(void)_updateUIForReachabilityState:(NSUInteger)arg0 ;
-(void)_updateUserInteractionActive:(BOOL)arg0 forFirstTouch:(BOOL)arg1 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg0 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)updateConstraints;


@end


#endif
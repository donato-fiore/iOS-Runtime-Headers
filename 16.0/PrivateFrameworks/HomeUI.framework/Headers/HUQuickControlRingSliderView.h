// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLRINGSLIDERVIEW_H
#define HUQUICKCONTROLRINGSLIDERVIEW_H

@class UIView, NSMutableArray, NSString, UIImage, UIImpactFeedbackGenerator, UILongPressGestureRecognizer, NSMutableDictionary, UILabel, UIImageView, UISelectionFeedbackGenerator;
@protocol UIGestureRecognizerDelegate, HUQuickControlInteractiveView, HURingSliderStatusLabelUpdateDelegate, HUQuickControlViewInteractionDelegate;


#import "HUQuickControlRingSliderHandleView.h"
#import "HUQuickControlRingSliderViewProfile.h"

@interface HUQuickControlRingSliderView : UIView <UIGestureRecognizerDelegate, HUQuickControlInteractiveView, HURingSliderStatusLabelUpdateDelegate>



@property (retain, nonatomic) UIView *backgroundRingView; // ivar: _backgroundRingView
@property (retain, nonatomic) NSMutableArray *currentDirectionTapticValues; // ivar: _currentDirectionTapticValues
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didMaskBackgroundImageView; // ivar: _didMaskBackgroundImageView
@property (retain, nonatomic) UIView *edgesAndColoredSupplementaryValueLineView; // ivar: _edgesAndColoredSupplementaryValueLineView
@property (retain, nonatomic) NSMutableArray *gradationMarkingViews; // ivar: _gradationMarkingViews
@property (retain, nonatomic) UIImage *gradientRingImage; // ivar: _gradientRingImage
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator; // ivar: _impactFeedbackGenerator
@property (weak, nonatomic) NSObject<HUQuickControlViewInteractionDelegate> *interactionDelegate; // ivar: _interactionDelegate
@property (nonatomic) BOOL isDraggingPrimaryHandleView; // ivar: _isDraggingPrimaryHandleView
@property (nonatomic) BOOL isDraggingSecondaryHandleView; // ivar: _isDraggingSecondaryHandleView
@property (retain, nonatomic) UIView *labelsBackgroundView; // ivar: _labelsBackgroundView
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressPanGestureRecognizer; // ivar: _longPressPanGestureRecognizer
@property (retain, nonatomic) NSMutableDictionary *markingValuesAndViewsDictionary; // ivar: _markingValuesAndViewsDictionary
@property (nonatomic) ? modelRangeValue; // ivar: _modelRangeValue
@property (nonatomic) CGFloat outerRadius; // ivar: _outerRadius
@property (nonatomic) CGFloat prevSliderValue; // ivar: _prevSliderValue
@property (nonatomic) NSUInteger prevSlidingDirection; // ivar: _prevSlidingDirection
@property (nonatomic) NSUInteger prevTouchArea; // ivar: _prevTouchArea
@property (retain, nonatomic) HUQuickControlRingSliderHandleView *primaryHandleView; // ivar: _primaryHandleView
@property (retain, nonatomic) UILabel *primaryLabel; // ivar: _primaryLabel
@property (copy, nonatomic) HUQuickControlRingSliderViewProfile *profile; // ivar: _profile
@property (nonatomic) NSUInteger reachabilityState; // ivar: _reachabilityState
@property (retain, nonatomic) HUQuickControlRingSliderHandleView *secondaryHandleView; // ivar: _secondaryHandleView
@property (retain, nonatomic) id *secondaryValue;
@property (retain, nonatomic) UIImageView *selectedRangeImageView; // ivar: _selectedRangeImageView
@property (retain, nonatomic) UIImageView *selectedRangeImageViewForEdges; // ivar: _selectedRangeImageViewForEdges
@property (retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator; // ivar: _selectionFeedbackGenerator
@property (nonatomic) BOOL showOffState; // ivar: _showOffState
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *supplementaryLabel; // ivar: _supplementaryLabel
@property (nonatomic) CGFloat supplementaryValue; // ivar: _supplementaryValue
@property (retain, nonatomic) UIView *supplementaryValueMarkingView; // ivar: _supplementaryValueMarkingView
@property (nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive; // ivar: _userInteractionActive
@property (retain, nonatomic) id *value;


+(BOOL)requiresConstraintBasedLayout;
-(BOOL)_areHandleViewsAnimating;
-(BOOL)_isIncreasingOrDecreasing:(NSUInteger)arg0 ;
-(BOOL)_isPoint:(struct CGPoint )arg0 withInMarginOfRing:(CGFloat)arg1 ;
-(BOOL)_primaryHandleViewContainsPoint:(struct CGPoint )arg0 ;
-(BOOL)_secondaryHandleViewContainsPoint:(struct CGPoint )arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(CGFloat)_getAngleFrom12OClockForPoint:(struct CGPoint )arg0 ;
-(CGFloat)_getAngleFrom12OClockForValue:(CGFloat)arg0 ;
-(CGFloat)_getClosestMarkingValueToValue:(CGFloat)arg0 ;
-(CGFloat)_getInnerCircleRadius;
-(CGFloat)_getMaxAngleFrom12OClock;
-(CGFloat)_getMaximumMarkingValue;
-(CGFloat)_getMiddleCircleRadius;
-(CGFloat)_getMinAngleFrom12OClock;
-(CGFloat)_getMinimumMarkingValue;
-(CGFloat)_getOneMarkerValueDifference;
-(CGFloat)_getPrimarySliderValue;
-(CGFloat)_getSecondarySliderValue;
-(CGFloat)_getSliderValueForAngleFrom12OClock:(CGFloat)arg0 ;
-(CGFloat)_getSliderValueForPoint:(struct CGPoint )arg0 ;
-(CGFloat)_getStartAngleEdgeLocationShiftForBackgroundRing:(BOOL)arg0 ;
-(NSUInteger)_getRingSliderAreaForAngleFrom12Oclock:(CGFloat)arg0 ;
-(NSUInteger)_getRingSliderAreaForAngleFrom12Oclock:(CGFloat)arg0 minAngle:(CGFloat)arg1 maxAngle:(CGFloat)arg2 ;
-(NSUInteger)_getRingSliderAreaForHandleViewForAngleFrom12Oclock:(CGFloat)arg0 ;
-(NSUInteger)_getRingSliderAreaForPoint:(struct CGPoint )arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(id)intrinsicSizeDescriptorForControlSize:(NSUInteger)arg0 ;
-(struct ? )_getPossibleAngleRange12OClock;
-(struct CGPoint )_getCircleCenterPoint;
-(struct CGPoint )_getClosestPointOnMiddleCircleOfRing:(struct CGPoint )arg0 ;
-(struct CGPoint )_getHandleCenterOnRingForValue:(CGFloat)arg0 ;
-(struct CGPoint )_getPointForAngleFrom12OClock:(CGFloat)arg0 ;
-(struct CGSize )_getEdgeRectSize;
-(struct CGSize )intrinsicContentSize;
-(void)_actuateImpactTapticFeedback;
-(void)_actuateSelectionTapticFeedback;
-(void)_animateToEnlargeHandleView:(id)arg0 ;
-(void)_maskBackgroundImageViewToRingShape;
-(void)_prepareForTapticFeedback;
-(void)_redrawGradationMarkingViews;
-(void)_touchEnded;
-(void)_updateLabelsSize;
-(void)_updateModelValue:(struct ? )arg0 roundValue:(BOOL)arg1 notifyInteractionDelegate:(BOOL)arg2 ;
-(void)_updateModelValueWithNewPrimarySliderValue:(CGFloat)arg0 roundValue:(BOOL)arg1 notifyInteractionDelegate:(BOOL)arg2 ;
-(void)_updateModelValueWithNewSecondarySliderValue:(CGFloat)arg0 roundValue:(BOOL)arg1 notifyInteractionDelegate:(BOOL)arg2 ;
-(void)_updateModelValueWithSlidersPositions;
-(void)_updatePrimaryHandleViewPositionToSliderValue;
-(void)_updateRingViewAndHandleViews;
-(void)_updateSecondaryHandleViewPositionToSliderValue;
-(void)_updateSelectedRangeImageView;
-(void)_updateSupplementaryValueMarkingView;
-(void)_updateSupplementaryValueMarkingViewColor;
-(void)_updateTransform;
-(void)_updateUIForReachabilityState:(NSUInteger)arg0 ;
-(void)_updateUIForThresholdModeForPrimaryHandleViewWithTouchPoint:(struct CGPoint )arg0 didTouchBegin:(BOOL)arg1 ;
-(void)_updateUIForThresholdModeForSecondaryHandleViewWithTouchPoint:(struct CGPoint )arg0 didTouchBegin:(BOOL)arg1 ;
-(void)_updateUIForTouchPoint:(struct CGPoint )arg0 didTouchBegin:(BOOL)arg1 forHandleView:(id)arg2 minValue:(CGFloat)arg3 maxValue:(CGFloat)arg4 ;
-(void)_updateUIWithTouchAtPoint:(struct CGPoint )arg0 didTouchBegin:(BOOL)arg1 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg0 ;
-(void)handlePanGestureRecognizer:(id)arg0 ;
-(void)layoutSubviews;
-(void)updatePrimaryLabelWithString:(id)arg0 fontSize:(CGFloat)arg1 ;
-(void)updateSupplementaryLabelWithString:(id)arg0 ;


@end


#endif
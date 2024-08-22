// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLELASTICSLIDERINTERACTIONCOORDINATOR_H
#define HUQUICKCONTROLELASTICSLIDERINTERACTIONCOORDINATOR_H

@class NSString, NSDate, UILongPressGestureRecognizer, UITapGestureRecognizer, HUQuickControlViewProfile<HUQuickControlIncrementalConvertibleProfile>;
@protocol HUQuickControlSliderGestureTransformerDelegate, UIGestureRecognizerDelegate;


#import "HUQuickControlInteractionCoordinator.h"
#import "HUElasticApplier.h"
#import "HUDisplayLinkApplier.h"
#import "HUQuickControlSliderGestureTransformer.h"

@interface HUQuickControlElasticSliderInteractionCoordinator : HUQuickControlInteractionCoordinator <HUQuickControlSliderGestureTransformerDelegate, UIGestureRecognizerDelegate>



@property (nonatomic) CGFloat activeGestureValue; // ivar: _activeGestureValue
@property (nonatomic) NSUInteger activeGestureValueType; // ivar: _activeGestureValueType
@property (retain, nonatomic) HUElasticApplier *controlHorizontalCompressionApplier; // ivar: _controlHorizontalCompressionApplier
@property (retain, nonatomic) HUDisplayLinkApplier *controlVerticalStretchingApplier; // ivar: _controlVerticalStretchingApplier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFirstTouchDown) BOOL firstTouchDown; // ivar: _firstTouchDown
@property (retain, nonatomic) HUQuickControlSliderGestureTransformer *gestureTransformer; // ivar: _gestureTransformer
@property (nonatomic) BOOL hasSecondaryValue; // ivar: _hasSecondaryValue
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *interactableStartTime; // ivar: _interactableStartTime
@property (nonatomic) ? modelValue; // ivar: _modelValue
@property (retain, nonatomic) UILongPressGestureRecognizer *panGestureRecognizer; // ivar: _panGestureRecognizer
@property (retain, nonatomic) HUElasticApplier *primaryValueSmoothingApplier; // ivar: _primaryValueSmoothingApplier
@property (retain, nonatomic) HUElasticApplier *secondaryValueSmoothingApplier; // ivar: _secondaryValueSmoothingApplier
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive; // ivar: _userInteractionActive
@property (readonly, nonatomic) HUQuickControlViewProfile<HUQuickControlIncrementalConvertibleProfile> *viewProfile;


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(CGFloat)_rubberBandedStretchProgress;
-(CGFloat)_sliderValueForLocation:(struct CGPoint )arg0 ;
-(NSUInteger)_findClosestValueFromTouchLocation:(struct CGPoint )arg0 ;
-(id)_allAppliers;
-(id)_rubberBandingValueNormalizer;
-(id)_setupValueApplierForValueType:(NSUInteger)arg0 ;
-(id)_valueNormalizerWithOptions:(id)arg0 ;
-(id)initWithControlView:(id)arg0 delegate:(id)arg1 ;
-(id)value;
-(struct ? )_rawViewValueRange;
-(void)_beginReceivingTouchesWithGestureRecognizer:(id)arg0 isTouchContinuation:(BOOL)arg1 ;
-(void)_handleControlPanGesture:(id)arg0 ;
-(void)_handleControlTapGesture:(id)arg0 ;
-(void)_setupAllValueAppliersIfNecessary;
-(void)_setupStretchingAppliers;
-(void)_updateControlViewValueOfType:(NSUInteger)arg0 withValue:(CGFloat)arg1 ;
-(void)_updateModelValue:(struct ? )arg0 roundValue:(BOOL)arg1 notifyDelegate:(BOOL)arg2 ;
-(void)_updatePropertiesForControlValueSmoothingApplier:(id)arg0 ofType:(NSUInteger)arg1 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg0 ;
-(void)dealloc;
-(void)gestureDidEndForGestureTransformer:(id)arg0 ;
-(void)gestureTransformer:(id)arg0 sliderValueDidChange:(CGFloat)arg1 ;
-(void)recordInteractionStart;
-(void)setUserInteractionEnabled:(BOOL)arg0 ;
-(void)setValue:(id)arg0 ;
-(void)setViewVisible:(BOOL)arg0 ;


@end


#endif
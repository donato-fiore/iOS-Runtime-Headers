// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCUISTEPPEDSLIDERVIEW_H
#define CCUISTEPPEDSLIDERVIEW_H

@class NSArray, UIPanGestureRecognizer, UITapGestureRecognizer, UIHoverGestureRecognizer, UISelectionFeedbackGenerator, NSString;
@protocol UIGestureRecognizerDelegate, CCUIContentModuleExpandedStateListener, CCUIContentClipping;


#import "CCUIBaseSliderView.h"

@interface CCUISteppedSliderView : CCUIBaseSliderView <UIGestureRecognizerDelegate, CCUIContentModuleExpandedStateListener, CCUIContentClipping>

 {
    NSArray *_stepBackgroundViews;
    NSArray *_separatorViews;
    CGFloat _startingHeight;
    float _startingValue;
    BOOL _gestureStartedInside;
    BOOL _valueHasBeenAdjustedForSteppedSlider;
    UIPanGestureRecognizer *_valueChangeGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSUInteger _hoverStep;
    BOOL _isHoverHighlighting;
    UIHoverGestureRecognizer *_hoverGestureRecognizer;
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
}


@property (readonly, nonatomic, getter=isContentClippingRequired) BOOL contentClippingRequired;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL firstStepIsDisabled; // ivar: _firstStepIsDisabled
@property (nonatomic) BOOL firstStepIsOff; // ivar: _firstStepIsOff
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger numberOfSteps; // ivar: _numberOfSteps
@property (nonatomic) NSUInteger step; // ivar: _step
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(NSUInteger)_stepFromValue:(float)arg0 ;
-(NSUInteger)_stepFromValue:(float)arg0 avoidCurrentStep:(BOOL)arg1 ;
-(float)_valueForPanGestureRecognizer:(id)arg0 withAbsoluteReference:(BOOL)arg1 ;
-(float)_valueForTouchLocation:(struct CGPoint )arg0 ;
-(float)_valueForTouchTranslation:(struct CGPoint )arg0 ;
-(float)_valueFromStep:(NSUInteger)arg0 ;
-(id)_createBackgroundViewForStep:(NSUInteger)arg0 ;
-(id)_createSeparatorView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)topLevelBlockingGestureRecognizers;
-(void)_beginTrackingWithGestureRecognizer:(id)arg0 ;
-(void)_continueTrackingWithGestureRecognizer:(id)arg0 ;
-(void)_createSeparatorViewsForNumberOfSteps:(NSUInteger)arg0 ;
-(void)_createStepViewsForNumberOfSteps:(NSUInteger)arg0 ;
-(void)_endTrackingWithGestureRecognizer:(id)arg0 ;
-(void)_handleHoverGestureRecognizer:(id)arg0 ;
-(void)_handleValueChangeGestureRecognizer:(id)arg0 ;
-(void)_handleValueTapGestureRecognizer:(id)arg0 ;
-(void)_layoutStepViews;
-(void)_updateStepFromValue:(float)arg0 playHaptic:(BOOL)arg1 ;
-(void)_updateStepFromValue:(float)arg0 playHaptic:(BOOL)arg1 toggleCurrentStep:(BOOL)arg2 ;
-(void)_updateStepViewVisibility;
-(void)_updateValueForPanGestureRecognizer:(id)arg0 withAbsolutePosition:(BOOL)arg1 forContinuedGesture:(BOOL)arg2 ;
-(void)contentModuleWillTransitionToExpandedContentMode:(BOOL)arg0 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setValue:(float)arg0 ;
-(void)setValue:(float)arg0 andUpdateStep:(BOOL)arg1 ;


@end


#endif
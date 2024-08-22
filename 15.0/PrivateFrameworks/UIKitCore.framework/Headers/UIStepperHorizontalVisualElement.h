// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISTEPPERHORIZONTALVISUALELEMENT_H
#define UISTEPPERHORIZONTALVISUALELEMENT_H

@class NSTimer, NSMutableDictionary, NSString;
@protocol UIPointerInteractionDelegate, UIStepperVisualElement, UIStepperControl;


#import "UIView.h"
#import "UIImageView.h"
#import "UIButton.h"
#import "UIViewPropertyAnimator.h"

@interface UIStepperHorizontalVisualElement : UIView <UIPointerInteractionDelegate, UIStepperVisualElement>

 {
    BOOL _isRtoL;
    UIImageView *_leftBackground;
    UIImageView *_rightBackground;
    UIImageView *_leftHighlight;
    UIImageView *_rightHighlight;
    UIImageView *_middleView;
    UIButton *_plusButton;
    UIButton *_minusButton;
    NSTimer *_repeatTimer;
    NSInteger _repeatCount;
    NSMutableDictionary *_dividerImages;
    UIViewPropertyAnimator *_leftAlphaAnimator;
    UIViewPropertyAnimator *_rightAlphaAnimator;
    UIViewPropertyAnimator *_leftFrameAnimator;
    UIViewPropertyAnimator *_rightFrameAnimator;
}


@property (nonatomic) BOOL autorepeat; // ivar: _autorepeat
@property (nonatomic, getter=isContinuous) BOOL continuous; // ivar: _continuous
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maximumValue; // ivar: _maximumValue
@property (nonatomic) CGFloat minimumValue; // ivar: _minimumValue
@property (nonatomic) CGFloat stepValue; // ivar: _stepValue
@property (weak, nonatomic) NSObject<UIStepperControl> *stepperControl; // ivar: _stepperControl
@property (readonly) Class superclass;
@property (nonatomic) CGFloat value; // ivar: _value
@property (nonatomic) BOOL wraps; // ivar: _wraps


+(id)_highlightOpacityAnimation;
+(id)_highlightSizeAnimation;
+(struct CGSize )initialIntrinsicSize;
+(struct CGSize )initialSize;
+(struct UIEdgeInsets )initialAlignmentRectInsets;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)pointMostlyInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)_alphaAnimator:(BOOL)arg0 ;
-(id)backgroundImageForState:(NSUInteger)arg0 ;
-(id)decrementImageForState:(NSUInteger)arg0 ;
-(id)dividerImageForLeftSegmentState:(NSUInteger)arg0 rightSegmentState:(NSUInteger)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)incrementImageForState:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGRect )_leftHighlightFrame;
-(struct CGRect )_leftHighlightInsetFrame;
-(struct CGRect )_rightHighlightFrame;
-(struct CGRect )_rightHighlightInsetFrame;
-(struct CGSize )_intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(struct CGSize )intrinsicSizeWithinSize:(struct CGSize )arg0 forControl:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 forControl:(id)arg1 ;
-(struct UIEdgeInsets )alignmentRectInsetsForControl:(id)arg0 ;
-(void)_commonStepperInit;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_startTimer;
-(void)_stopTimer;
-(void)_updateBackgroundForButtonState;
-(void)_updateButton:(id)arg0 backgroundView:(id)arg1 highlightView:(id)arg2 backgroundImage:(id)arg3 highlightImage:(id)arg4 onRight:(BOOL)arg5 ;
-(void)_updateButtonEnabled;
-(void)_updateCount:(id)arg0 ;
-(void)_updateDividerImageForButtonState;
-(void)_updateHighlight:(id)arg0 button:(id)arg1 onRight:(BOOL)arg2 ;
-(void)_updateHighlightingAtPoint:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;
-(void)setBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setDecrementImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setDividerImage:(id)arg0 forLeftSegmentState:(NSUInteger)arg1 rightSegmentState:(NSUInteger)arg2 ;
-(void)setIncrementImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setTintColor:(id)arg0 ;


@end


#endif
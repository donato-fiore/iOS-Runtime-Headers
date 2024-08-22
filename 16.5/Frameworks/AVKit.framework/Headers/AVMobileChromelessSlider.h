// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVMOBILECHROMELESSSLIDER_H
#define AVMOBILECHROMELESSSLIDER_H

@class UIControl, UIView, UIVisualEffectView, NSMutableArray, UIVisualEffect, NSArray;
@protocol AVMobileChromelessSliderDelegate;



@interface AVMobileChromelessSlider : UIControl {
    UIView *_contentView;
    UIVisualEffectView *_filledBarView;
    UIVisualEffectView *_unfilledBarView;
    float _trackingStartNormalizedValue;
    float _trackingTouchStartNormalizedX;
    NSMutableArray *_sliderMarkViews;
    UIVisualEffect *_enabledFilledBarViewEffect;
    UIVisualEffect *_enabledUnfilledBarViewEffect;
    UIVisualEffect *_disabledFilledBarViewEffect;
    UIVisualEffect *_disabledUnfilledBarViewEffect;
}


@property (nonatomic) CGFloat barHeight; // ivar: _barHeight
@property (weak, nonatomic) NSObject<AVMobileChromelessSliderDelegate> *delegate; // ivar: _delegate
@property (nonatomic) float maximumValue; // ivar: _maximumValue
@property (nonatomic) float minimumValue; // ivar: _minimumValue
@property (retain, nonatomic) NSArray *sliderMarks; // ivar: _sliderMarks
@property (nonatomic) NSUInteger tintState; // ivar: _tintState
@property (nonatomic) float totalValue; // ivar: _totalValue
@property (nonatomic) float value; // ivar: _value


-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;
-(struct CGRect )frameForSliderMark:(id)arg0 ;
-(struct CGRect )hitRect;
-(struct CGSize )intrinsicContentSize;
-(void)_updateAccessibilityValue;
-(void)_updateBarTintStateAlpha;
-(void)accessibilityDecrement;
-(void)accessibilityIncrement;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)didMoveToWindow;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCUICONTINUOUSSLIDERVIEW_H
#define CCUICONTINUOUSSLIDERVIEW_H

@class UIView, UIPanGestureRecognizer, _UIEdgeFeedbackGenerator, NSString;
@protocol UIGestureRecognizerDelegate;


#import "CCUIBaseSliderView.h"

@interface CCUIContinuousSliderView : CCUIBaseSliderView <UIGestureRecognizerDelegate>

 {
    UIView *_backgroundView;
    CGFloat _startingLength;
    float _startingValue;
    BOOL _gestureStartedInside;
    UIPanGestureRecognizer *_valueChangeGestureRecognizer;
    _UIEdgeFeedbackGenerator *_edgeFeedbackGenerator;
}


@property (nonatomic) NSUInteger axis; // ivar: _axis
@property (nonatomic) CGFloat continuousSliderCornerRadius; // ivar: _continuousSliderCornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *valueIndicatorClippingView; // ivar: _valueIndicatorClippingView


-(CGFloat)sliderLengthForValue:(float)arg0 ;
-(float)_valueForTouchTranslation:(struct CGPoint )arg0 ;
-(float)filteredValueForValue:(float)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)topLevelBlockingGestureRecognizers;
-(struct CGPoint )glyphCenter;
-(void)_beginTrackingWithGestureRecognizer:(id)arg0 ;
-(void)_continueTrackingWithGestureRecognizer:(id)arg0 ;
-(void)_endTrackingWithGestureRecognizer:(id)arg0 ;
-(void)_handleValueChangeGestureRecognizer:(id)arg0 ;
-(void)_updateValueForPanGestureRecognizer:(id)arg0 forContinuedGesture:(BOOL)arg1 ;
-(void)layoutSubviews;


@end


#endif
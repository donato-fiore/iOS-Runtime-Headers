// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIDVRGBCAMERASHUTTERVIEW_H
#define CIDVRGBCAMERASHUTTERVIEW_H

@class UIView, UIColor, UIImpactFeedbackGenerator;



@interface CIDVRGBCameraShutterView : UIView {
    CGFloat _borderWidth;
    UIColor *_strokeColor;
    UIColor *_fillColor;
    UIImpactFeedbackGenerator *_shutterHapticFeedbackGenerator;
}


@property (copy, nonatomic) id *onShutterPress; // ivar: _onShutterPress
@property (nonatomic) BOOL pressed; // ivar: _pressed


-(BOOL)isAccessibilityElement;
-(NSUInteger)accessibilityTraits;
-(id)accessibilityLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_drawArcInRect:(struct CGRect )arg0 ;
-(void)_drawConcentricCirclesIn:(struct CGRect )arg0 ;
-(void)_setupGestureRecognizer;
-(void)_setupHapticFeedback;
-(void)_startAnimation;
-(void)_stopAnimation;
-(void)_triggerPressEvent:(id)arg0 ;
-(void)_triggerShutterHaptics;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif
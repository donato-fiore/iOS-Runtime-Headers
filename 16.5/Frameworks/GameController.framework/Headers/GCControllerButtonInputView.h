// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCCONTROLLERBUTTONINPUTVIEW_H
#define GCCONTROLLERBUTTONINPUTVIEW_H

@class UIView, UIVisualEffectView, UIButton, NSString, UIBezierPath;


#import "GCControllerButtonInput.h"

@interface GCControllerButtonInputView : UIView {
    CGRect _innerFrame;
    UIVisualEffectView *_background;
    UIVisualEffectView *_saturationVibrancyEffectView;
    UIVisualEffectView *_additiveVibrancyEffectView;
    UIButton *_button;
    NSString *_text;
}


@property (retain) GCControllerButtonInput *buttonInput; // ivar: _buttonInput
@property (retain, nonatomic) UIBezierPath *customImage; // ivar: _customImage


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithText:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)initUI;
-(void)setText;
-(void)setupActions;
-(void)triggerButtonWithValue:(float)arg0 ;


@end


#endif
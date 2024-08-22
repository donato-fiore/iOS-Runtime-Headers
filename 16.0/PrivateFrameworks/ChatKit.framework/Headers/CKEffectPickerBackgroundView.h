// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKEFFECTPICKERBACKGROUNDVIEW_H
#define CKEFFECTPICKERBACKGROUNDVIEW_H

@class UIView, CABackdropLayer, CALayer, UIVisualEffectView;



@interface CKEffectPickerBackgroundView : UIView

@property (retain, nonatomic) CABackdropLayer *backdrop; // ivar: _backdrop
@property (retain, nonatomic) CALayer *blueContrastLayer; // ivar: _blueContrastLayer
@property (retain, nonatomic) UIVisualEffectView *effectView; // ivar: _effectView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)updateBackgroundVisualEffect;


@end


#endif
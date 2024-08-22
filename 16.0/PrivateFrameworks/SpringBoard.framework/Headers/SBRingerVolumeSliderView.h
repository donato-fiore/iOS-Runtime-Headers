// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBRINGERVOLUMESLIDERVIEW_H
#define SBRINGERVOLUMESLIDERVIEW_H

@class UIView, UIViewFloatAnimatableProperty;



@interface SBRingerVolumeSliderView : UIView

@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UIView *fillView; // ivar: _fillView
@property (nonatomic) NSUInteger style; // ivar: _style
@property (nonatomic) CGFloat value; // ivar: _value
@property (retain, nonatomic) UIViewFloatAnimatableProperty *valueSpring; // ivar: _valueSpring


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif
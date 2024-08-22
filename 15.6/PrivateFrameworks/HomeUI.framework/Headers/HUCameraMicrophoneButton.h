// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCAMERAMICROPHONEBUTTON_H
#define HUCAMERAMICROPHONEBUTTON_H

@class UIControl, UIImage;



@interface HUCameraMicrophoneButton : UIControl

@property (retain, nonatomic) UIImage *microphoneImage; // ivar: _microphoneImage
@property (nonatomic, getter=isOn) BOOL on; // ivar: _on


-(id)_circleColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateAlpha;
-(void)_updateImage;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11EMOJIPOSTER19GRADIENTCOLORSLIDER_H
#define _TTC11EMOJIPOSTER19GRADIENTCOLORSLIDER_H

@class UIView;



@interface _TtC11EmojiPoster19GradientColorSlider : UIView {
    ? delegate;
    ? leftColor;
    ? rightColor;
    ? leftColorOffset;
    ? rightColorOffset;
    ? gradientLayer;
    ? leftColorView;
    ? rightColorView;
    ? leftColorTapGesture;
    ? rightColorTapGesture;
    ? leftColorPanGesture;
    ? rightColorPanGesture;
    ? startLeftColorOffset;
    ? startRightColorOffset;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)leftColorDidPanWithGr:(id)arg0 ;
-(void)leftColorWasTappedWithGr:(id)arg0 ;
-(void)rightColorDidPanWithGr:(id)arg0 ;
-(void)rightColorWasTappedWithGr:(id)arg0 ;


@end


#endif
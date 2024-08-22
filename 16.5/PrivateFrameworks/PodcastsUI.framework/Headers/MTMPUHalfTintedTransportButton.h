// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTMPUHALFTINTEDTRANSPORTBUTTON_H
#define MTMPUHALFTINTEDTRANSPORTBUTTON_H

@class UIControl, UIButton, UIImage, UIColor, UIImageView;


#import "MTMPUTransportButtonEventHandler.h"

@interface MTMPUHalfTintedTransportButton : UIControl {
    UIButton *_regularButton;
    UIButton *_tintedButton;
    MTMPUTransportButtonEventHandler *_transportButtonEventHandler;
}


@property (readonly, nonatomic, getter=_regularButton) UIButton *regularButton;
@property (retain, nonatomic) UIImage *regularImage; // ivar: _regularImage
@property (nonatomic) CGFloat regularImageAlpha;
@property (retain, nonatomic) UIColor *regularImageColor; // ivar: _regularImageColor
@property (readonly, nonatomic) UIImageView *regularImageView;
@property (readonly, nonatomic, getter=_tintedButton) UIButton *tintedButton;
@property (retain, nonatomic) UIImage *tintedImage; // ivar: _tintedImage
@property (nonatomic) CGFloat tintedImageAlpha;
@property (retain, nonatomic) UIColor *tintedImageColor;
@property (readonly, nonatomic) UIImageView *tintedImageView;


-(BOOL)_shouldForwardSelectedState;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)isEnabled;
-(BOOL)shouldTrack;
-(id)_handleButtonHitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)_newButton;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_applyImage:(id)arg0 toButton:(id)arg1 ;
-(void)_updateRegularImage;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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


+(id)transportButton;
-(BOOL)_shouldForwardSelectedState;
-(BOOL)adjustsImageWhenHighlighted;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)isEnabled;
-(BOOL)shouldTrack;
-(BOOL)wantsCustomHighlightAppearance;
-(NSInteger)transportButtonImageViewContentMode;
-(id)_handleButtonHitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)_newButton;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)transportButtonEventHandler;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_applyImage:(id)arg0 toButton:(id)arg1 ;
-(void)_updateRegularImage;
-(void)applyTransportButtonLayoutAttributes:(struct ? )arg0 ;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setAdjustsImageWhenHighlighted:(BOOL)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setTransportButtonImageViewContentMode:(NSInteger)arg0 ;


@end


#endif
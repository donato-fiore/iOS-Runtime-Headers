// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPUHALFTINTEDTRANSPORTBUTTON_H
#define MPUHALFTINTEDTRANSPORTBUTTON_H

@class UIControl, UIButton, NSString, UIImage, UIColor, UIImageView;
@protocol MPUTransportButton;


#import "MPUTransportButtonEventHandler.h"

@interface MPUHalfTintedTransportButton : UIControl <MPUTransportButton>

 {
    UIButton *_regularButton;
    UIButton *_tintedButton;
    MPUTransportButtonEventHandler *_transportButtonEventHandler;
}


@property (nonatomic) BOOL adjustsImageWhenHighlighted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_regularButton) UIButton *regularButton;
@property (retain, nonatomic) UIImage *regularImage; // ivar: _regularImage
@property (nonatomic) CGFloat regularImageAlpha;
@property (retain, nonatomic) UIColor *regularImageColor; // ivar: _regularImageColor
@property (readonly, nonatomic) UIImageView *regularImageView;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=_tintedButton) UIButton *tintedButton;
@property (retain, nonatomic) UIImage *tintedImage; // ivar: _tintedImage
@property (nonatomic) CGFloat tintedImageAlpha;
@property (retain, nonatomic) UIColor *tintedImageColor;
@property (readonly, nonatomic) UIImageView *tintedImageView;
@property (readonly, nonatomic) MPUTransportButtonEventHandler *transportButtonEventHandler;
@property (nonatomic) NSInteger transportButtonImageViewContentMode;


+(id)transportButton;
-(BOOL)_shouldForwardSelectedState;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)isEnabled;
-(BOOL)shouldTrack;
-(BOOL)wantsCustomHighlightAppearance;
-(id)_newButton;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_applyImage:(id)arg0 toButton:(id)arg1 ;
-(void)_updateRegularImage;
-(void)applyTransportButtonLayoutAttributes:(struct ? )arg0 ;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif
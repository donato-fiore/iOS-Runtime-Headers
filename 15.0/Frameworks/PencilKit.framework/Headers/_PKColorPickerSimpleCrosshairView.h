// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PKCOLORPICKERSIMPLECROSSHAIRVIEW_H
#define _PKCOLORPICKERSIMPLECROSSHAIRVIEW_H

@class UIView;



@interface _PKColorPickerSimpleCrosshairView : UIView

@property (nonatomic) CGFloat borderCornerRadius; // ivar: _borderCornerRadius
@property (retain, nonatomic) UIView *borderView; // ivar: _borderView
@property (retain, nonatomic) UIView *shadowView; // ivar: _shadowView


-(CGFloat)_cornerRadiusForBorderView;
-(CGFloat)_cornerRadiusForShadowView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureBorderView:(id)arg0 ;
-(void)configureShadowView:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif
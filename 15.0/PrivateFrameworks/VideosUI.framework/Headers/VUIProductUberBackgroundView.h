// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIPRODUCTUBERBACKGROUNDVIEW_H
#define VUIPRODUCTUBERBACKGROUNDVIEW_H

@class UIVisualEffectView, UIView, CAGradientLayer;


#import "VUIBaseView.h"

@interface VUIProductUberBackgroundView : VUIBaseView

@property (readonly, nonatomic) UIVisualEffectView *blurEffectView; // ivar: _blurEffectView
@property (nonatomic) NSUInteger configuredBlurInterfaceStyle; // ivar: _configuredBlurInterfaceStyle
@property (nonatomic) CGFloat contentOffset; // ivar: _contentOffset
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (retain, nonatomic) UIView *imageView; // ivar: _imageView
@property (nonatomic) BOOL isChannelBanner; // ivar: _isChannelBanner
@property (retain, nonatomic) CAGradientLayer *maskGradientLayer; // ivar: _maskGradientLayer


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(void)_configureGradientLayer:(id)arg0 currentSizeClass:(NSInteger)arg1 mainRect:(struct CGRect )arg2 ;
-(void)configureBlurWithInterfaceStyle:(NSUInteger)arg0 ;
-(void)setImageOffset:(CGFloat)arg0 ;
-(void)setMasksBlur:(BOOL)arg0 ;


@end


#endif
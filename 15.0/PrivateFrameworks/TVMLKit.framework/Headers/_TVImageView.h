// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVIMAGEVIEW_H
#define _TVIMAGEVIEW_H

@class UIControl, UIImage, UIImageView, CAFilter, UIColor, UIImageSymbolConfiguration;


#import "TVImageProxy.h"

@interface _TVImageView : UIControl {
    BOOL _rendersImageAsTemplates;
    UIImage *_image;
    UIImageView *_imageView;
    NSInteger _imageContentMode;
    UIImage *_flatImage;
    UIImage *_flatHighlightImage;
    BOOL _selected;
    CGFloat _cornerRadius;
    BOOL _continuousCorners;
    CAFilter *_highlightFilter;
}


@property (retain, nonatomic, setter=_setDarkTintColor:) UIColor *_darkTintColor; // ivar: __darkTintColor
@property (nonatomic, setter=_setEnableEdgeAntialiasingOnSelected:) BOOL _enableEdgeAntialiasingOnSelected; // ivar: __enableEdgeAntialiasingOnSelected
@property (retain, nonatomic, setter=_setFocusedColor:) UIColor *_focusedColor; // ivar: __focusedColor
@property (retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor; // ivar: __tintColor
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (nonatomic) CGFloat cornerRadius;
@property (copy, nonatomic) id *dynamicProxyProvider; // ivar: _dynamicProxyProvider
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL imageContainsCornerRadius; // ivar: _imageContainsCornerRadius
@property (nonatomic, getter=isImageLoaded) BOOL imageLoaded; // ivar: _imageLoaded
@property (retain, nonatomic) TVImageProxy *imageProxy; // ivar: _imageProxy
@property (retain, nonatomic) UIImage *placeholderImage; // ivar: _placeholderImage
@property (retain, nonatomic, setter=_setPreferredSymbolConfiguration:) UIImageSymbolConfiguration *preferredSymbolConfiguration; // ivar: _preferredSymbolConfiguration


-(CGFloat)_continuousCornerRadius;
-(NSInteger)contentMode;
-(id)_imageProxyWithSize:(struct CGSize )arg0 ;
-(id)backgroundColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_loadImage;
-(void)_reloadImageForLayoutDirectionChange;
-(void)_resetContentRect;
-(void)_setContentRectInPixels:(struct CGRect )arg0 forContentSize:(struct CGSize )arg1 ;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_updateCornerRadius;
-(void)_updateFlatImageWithImage:(id)arg0 ;
-(void)_updateImageView;
-(void)_updateTintColor;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setContentMode:(NSInteger)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif
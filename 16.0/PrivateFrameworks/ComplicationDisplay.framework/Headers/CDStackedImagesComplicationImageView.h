// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDSTACKEDIMAGESCOMPLICATIONIMAGEVIEW_H
#define CDSTACKEDIMAGESCOMPLICATIONIMAGEVIEW_H

@class UIView, CLKDevice, CLKUIColoringImageView, UIImageView, UIImage, UIColor, NSString, CLKImageProvider;
@protocol CDComplicationImageView, CLKUILegibilityView, CLKMonochromeComplicationView, CLKMonochromeFilterProvider;


#import "_CDComplicationImageViewProviderImageView.h"

@interface CDStackedImagesComplicationImageView : UIView <CDComplicationImageView, CLKUILegibilityView, CLKMonochromeComplicationView>

 {
    CLKDevice *_device;
    CLKUIColoringImageView *_foregroundImageView;
    CLKUIColoringImageView *_backgroundImageView;
    UIImageView *_foregroundAccentImageView;
    CLKUIColoringImageView *_monochromeImageView;
    UIImageView *_monochromeShadowView;
    UIImageView *_multipartShadowView;
    UIImage *_multipartShadowViewSource;
    _CDComplicationImageViewProviderImageView *_layerMaskImageView;
    BOOL _isUsingLegibility;
    BOOL _isShadowImagesStale;
}


@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (retain, nonatomic) UIColor *foregroundColor; // ivar: _foregroundColor
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLKImageProvider *imageProvider; // ivar: _imageProvider
@property (nonatomic) BOOL legibilityEnabled;
@property (nonatomic) CGFloat multicolorAlpha; // ivar: _multicolorAlpha
@property (retain, nonatomic) UIColor *overrideColor; // ivar: _overrideColor
@property (nonatomic) CGFloat shadowBlur; // ivar: _shadowBlur
@property (retain, nonatomic) UIColor *shadowColor; // ivar: _shadowColor
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesLegibility;


-(BOOL)_hasMultipartImages;
-(BOOL)_hasShadowViews;
-(BOOL)_shouldIgnoreTwoPieceImage;
-(BOOL)hasMonochromeImage;
-(NSInteger)_backgroundFilterStyle;
-(NSInteger)_foregroundFilterStyle;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_enumerateImageViewsWithBlock:(id)arg0 ;
-(void)_enumerateMultipartImageViewsWithBlock:(id)arg0 ;
-(void)_loadImageViewsIfNecessary;
-(void)_updateAlpha;
-(void)_updateColors;
-(void)_updateImageSubviewsMaxSize;
-(void)_updateImages;
-(void)_updateShadow;
-(void)_updateShadowViewImages;
-(void)layoutSubviews;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif
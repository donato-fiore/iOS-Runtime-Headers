// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKUPNEXTIMAGEVIEW_H
#define NTKUPNEXTIMAGEVIEW_H

@class UIView, UIImageView, CALayer, NSString, UIColor, CLKImageProvider, UIImage;
@protocol NTKUpNextBaseCellContentsLayerProvider, CLKMonochromeComplicationView, CLKMonochromeFilterProvider;


#import "NTKUpNextBaseCell.h"

@interface NTKUpNextImageView : UIView <NTKUpNextBaseCellContentsLayerProvider, CLKMonochromeComplicationView>

 {
    UIImageView *_foregroundImageView;
    UIImageView *_backgroundImageView;
    CALayer *_foregroundAccentBackdrop;
    UIImageView *_foregroundAccentImageView;
    UIImageView *_overrideImageView;
    NTKUpNextBaseCell *_parentCell;
}


@property (retain, nonatomic) NSString *compositingFilter; // ivar: _compositingFilter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIColor *fallbackTintColor; // ivar: _fallbackTintColor
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CLKImageProvider *imageProvider; // ivar: _imageProvider
@property (readonly, nonatomic) UIImage *overrideImage; // ivar: _overrideImage
@property (readonly) Class superclass;


-(BOOL)_hasMultipartImages;
-(id)contentsLayer;
-(id)initWithFrame:(struct CGRect )arg0 parentCell:(id)arg1 ;
-(struct CGRect )contentsLayerBoundsForLayout:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateColors;
-(void)layoutSubviews;
-(void)setContentMode:(NSInteger)arg0 ;
-(void)setFullColorImage:(id)arg0 tintableImageProvider:(id)arg1 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif
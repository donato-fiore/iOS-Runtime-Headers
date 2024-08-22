// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUISTYLEDIMAGEDATACONSUMER_H
#define SKUISTYLEDIMAGEDATACONSUMER_H

@class IKColor, UITraitCollection, UIColor;


#import "SKUIImageDataConsumer.h"

@interface SKUIStyledImageDataConsumer : SKUIImageDataConsumer {
    UIEdgeInsets _borderRadii;
    IKColor *_iKBackgroundColor;
    UITraitCollection *_startingTraitCollection;
}


@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) UIColor *borderColor; // ivar: _borderColor
@property (nonatomic) UIEdgeInsets borderMargins; // ivar: _borderMargins
@property (nonatomic) UIEdgeInsets borderWidths; // ivar: _borderWidths
@property (nonatomic) NSInteger imageContentMode; // ivar: _imageContentMode
@property (nonatomic) UIEdgeInsets imagePadding; // ivar: _imagePadding
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (nonatomic) NSInteger imageTreatment; // ivar: _imageTreatment
@property (retain, nonatomic) UIColor *shadowColor; // ivar: _shadowColor
@property (nonatomic) CGSize shadowOffset; // ivar: _shadowOffset
@property (nonatomic) CGFloat shadowRadius; // ivar: _shadowRadius


+(BOOL)isImageCompressionEnabled;
+(id)appIconConsumerWithSize:(struct CGSize )arg0 ;
+(id)applePackIconConsumer;
+(id)brickConsumer;
+(id)brickConsumerWithBrickSize:(struct CGSize )arg0 ;
+(id)cardIconConsumer;
+(id)cardProductImageConsumer;
+(id)categoriesMessagesConsumer;
+(id)categoryIconConsumer;
+(id)giftComposeProductImageConsumer;
+(id)giftResultIconConsumer;
+(id)giftResultProductImageConsumer;
+(id)giftThemeIconConsumer;
+(id)giftThemeProductImageConsumer;
+(id)gridIconConsumer;
+(id)listIconConsumer;
+(id)lockupIconConsumerWithSize:(NSInteger)arg0 ;
+(id)lockupProductImageConsumerWithSize:(NSInteger)arg0 ;
+(id)manageMessagesConsumer;
+(id)mixedTopChartsNewsstandConsumer;
+(id)newsstandRoomNewsstandConsumer;
+(id)newsstandSwooshNewsstandConsumer;
+(id)parentBundleIconConsumer;
+(id)productImageConsumerWithSize:(struct CGSize )arg0 ;
+(id)productPageProductImageConsumer;
+(id)purchasedIconConsumer;
+(id)purchasedMessagesConsumer;
+(id)purchasedProductImageConsumer;
+(id)roomIconConsumer;
+(id)roomProductImageConsumer;
+(id)safariBannerIconConsumer;
+(id)safariBannerProductImageConsumer;
+(id)shareSheetIconConsumer;
+(id)swooshNewsstandConsumer;
+(id)topChartsIconConsumer;
+(id)topChartsNewsstandConsumer;
+(id)updatesIconConsumer;
+(id)updatesProductImageConsumer;
+(id)wishlistIconConsumer;
+(id)wishlistProductImageConsumer;
-(BOOL)_backgroundIsOpaque;
-(BOOL)isImagePlaceholderAvailable;
-(id)_arcRoundedImageWithBounds:(struct CGRect )arg0 contentRect:(struct CGRect )arg1 cornerRadius:(CGFloat)arg2 drawBlock:(id)arg3 ;
-(id)_defaultPlaceholderColor;
-(id)_dynamicUberImageWithBounds:(struct CGRect )arg0 inputSize:(struct CGSize )arg1 drawBlock:(id)arg2 ;
-(id)_imageWithSize:(struct CGSize )arg0 isOpaque:(BOOL)arg1 drawBlock:(id)arg2 ;
-(id)_leftToRightGradient:(struct CGRect )arg0 contentRect:(struct CGRect )arg1 drawBlock:(id)arg2 ;
-(id)_outputImageWithInputSize:(struct CGSize )arg0 outputSize:(struct CGSize )arg1 drawBlock:(id)arg2 ;
-(id)_placeholderCornerPathBlock:(SEL)arg0 ;
-(id)_radialBlurImageWithBounds:(struct CGRect )arg0 contentRect:(struct CGRect )arg1 drawBlock:(id)arg2 ;
-(id)_roundedBorderWithBounds:(struct CGRect )arg0 contentRect:(struct CGRect )arg1 drawBlock:(id)arg2 ;
-(id)_scaledImageWithBounds:(struct CGRect )arg0 contentRect:(struct CGRect )arg1 drawBlock:(id)arg2 ;
-(id)_uberBannerImageWithBounds:(struct CGRect )arg0 inputSize:(struct CGSize )arg1 drawBlock:(id)arg2 ;
-(id)_uberImageWithBounds:(struct CGRect )arg0 inputSize:(struct CGSize )arg1 backgroundColor:(id)arg2 drawBlock:(id)arg3 ;
-(id)imageForColor:(id)arg0 ;
-(id)imageForColor:(id)arg0 size:(struct CGSize )arg1 ;
-(id)imageForImage:(id)arg0 ;
-(id)imagePlaceholderForColor:(id)arg0 ;
-(id)init;
-(id)initWithSize:(struct CGSize )arg0 treatment:(NSInteger)arg1 ;
-(id)initWithViewElement:(id)arg0 ;
-(void)_drawBordersWithImageRect:(struct CGRect )arg0 bounds:(struct CGRect )arg1 ;


@end


#endif
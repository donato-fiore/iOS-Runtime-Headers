// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIPRODUCTIMAGEDATACONSUMER_H
#define SKUIPRODUCTIMAGEDATACONSUMER_H

@class UIColor;
@protocol NSCopying;


#import "SKUIImageDataConsumer.h"
#import "SKUIColorScheme.h"

@interface SKUIProductImageDataConsumer : SKUIImageDataConsumer <NSCopying>



@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) SKUIColorScheme *colorScheme; // ivar: _colorScheme
@property (readonly, nonatomic) CGSize iconSize; // ivar: _iconSize
@property (readonly, nonatomic) CGSize imageSize;


+(id)cardConsumer;
+(id)chartsConsumer;
+(id)consumerWithSize:(struct CGSize )arg0 ;
+(id)giftComposeConsumer;
+(id)giftComposeLetterboxConsumer;
+(id)giftComposePosterConsumer;
+(id)giftResultConsumer;
+(id)giftThemeConsumer;
+(id)giftThemeLetterboxConsumer;
+(id)giftThemePosterConsumer;
+(id)gridConsumer;
+(id)lockupConsumerWithSize:(NSInteger)arg0 itemKind:(NSInteger)arg1 ;
+(id)productPageConsumer;
+(id)purchasedConsumer;
+(id)smartBannerConsumer;
+(id)swooshConsumer;
+(id)updatesConsumer;
+(id)wishlistConsumer;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)imageForColor:(id)arg0 ;
-(id)imageForColor:(id)arg0 size:(struct CGSize )arg1 ;
-(id)imageForImage:(id)arg0 ;


@end


#endif
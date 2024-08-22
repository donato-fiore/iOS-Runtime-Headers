// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIITEMARTWORKCONTEXT_H
#define SKUIITEMARTWORKCONTEXT_H

@class NSMutableDictionary, UIColor;

#import <Foundation/Foundation.h>

#import "SKUIColorScheme.h"
#import "SKUIProductImageDataConsumer.h"
#import "SKUIStyledImageDataConsumer.h"

@interface SKUIItemArtworkContext : NSObject {
    NSMutableDictionary *_placeholders;
}


@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) SKUIColorScheme *colorScheme; // ivar: _colorScheme
@property (retain, nonatomic) SKUIProductImageDataConsumer *generalConsumer; // ivar: _generalImageConsumer
@property (retain, nonatomic) SKUIStyledImageDataConsumer *iconConsumer; // ivar: _iconConsumer
@property (retain, nonatomic) SKUIProductImageDataConsumer *letterboxConsumer; // ivar: _letterboxConsumer
@property (retain, nonatomic) SKUIStyledImageDataConsumer *messagesIconConsumer; // ivar: _messagesIconConsumer
@property (retain, nonatomic) SKUIStyledImageDataConsumer *newsstandConsumer; // ivar: _newsstandConsumer
@property (retain, nonatomic) SKUIProductImageDataConsumer *posterConsumer; // ivar: _posterConsumer


+(id)lockupContextWithSize:(NSInteger)arg0 ;
+(id)roomContext;
+(id)wishlistContext;
-(id)URLForItem:(id)arg0 ;
-(id)artworkForItem:(id)arg0 ;
-(id)dataConsumerForItem:(id)arg0 ;
-(id)placeholderImageForItem:(id)arg0 ;
-(struct CGSize )imageSizeForItem:(id)arg0 ;
-(struct CGSize )largestImageSizeForItems:(id)arg0 ;
-(struct CGSize )largestImageSizeForLockups:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUILOCKUPSWOOSHARTWORKLOADER_H
#define SKUILOCKUPSWOOSHARTWORKLOADER_H

@class UIImage;


#import "SKUISwooshArtworkLoader.h"
#import "SKUIItemArtworkContext.h"
#import "SKUIVideoImageDataConsumer.h"
#import "SKUILockupSwooshViewController.h"

@interface SKUILockupSwooshArtworkLoader : SKUISwooshArtworkLoader {
    SKUIItemArtworkContext *_context;
    SKUIVideoImageDataConsumer *_videoImageConsumer;
    UIImage *_videoPlaceholderImage;
}


@property (readonly, nonatomic) SKUILockupSwooshViewController *swooshViewController;


-(BOOL)loadImageForItem:(id)arg0 reason:(NSInteger)arg1 ;
-(BOOL)loadImageForVideo:(id)arg0 reason:(NSInteger)arg1 ;
-(id)cachedImageForItem:(id)arg0 ;
-(id)cachedImageForVideo:(id)arg0 ;
-(id)initWithArtworkLoader:(id)arg0 swoosh:(id)arg1 ;
-(id)placeholderImageForItem:(id)arg0 ;
-(id)placeholderImageForVideo:(id)arg0 ;
-(void)loadImagesForNextPageWithReason:(NSInteger)arg0 ;
-(void)setImage:(id)arg0 forRequest:(id)arg1 ;


@end


#endif
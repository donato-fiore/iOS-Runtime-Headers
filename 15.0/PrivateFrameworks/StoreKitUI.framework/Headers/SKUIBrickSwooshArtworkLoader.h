// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIBRICKSWOOSHARTWORKLOADER_H
#define SKUIBRICKSWOOSHARTWORKLOADER_H



#import "SKUISwooshArtworkLoader.h"
#import "SKUIBrickSwooshViewController.h"

@interface SKUIBrickSwooshArtworkLoader : SKUISwooshArtworkLoader {
    NSInteger _artworkSize;
}


@property (readonly, nonatomic) SKUIBrickSwooshViewController *swooshViewController;


-(BOOL)loadImageForBrick:(id)arg0 reason:(NSInteger)arg1 ;
-(id)cachedImageForBrick:(id)arg0 ;
-(id)initWithArtworkLoader:(id)arg0 swoosh:(id)arg1 ;
-(void)loadImagesForNextPageWithReason:(NSInteger)arg0 ;
-(void)setImage:(id)arg0 forRequest:(id)arg1 ;


@end


#endif
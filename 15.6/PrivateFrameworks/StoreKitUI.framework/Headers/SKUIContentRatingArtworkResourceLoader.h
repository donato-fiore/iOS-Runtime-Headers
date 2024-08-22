// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUICONTENTRATINGARTWORKRESOURCELOADER_H
#define SKUICONTENTRATINGARTWORKRESOURCELOADER_H

@class NSMapTable, NSHashTable, UIImage, NSString;
@protocol SKUIArtworkRequestDelegate;

#import <Foundation/Foundation.h>

#import "SKUIResourceLoader.h"
#import "SKUIImageDataConsumer.h"

@interface SKUIContentRatingArtworkResourceLoader : NSObject <SKUIArtworkRequestDelegate>

 {
    NSMapTable *_artworkRequestIDs;
    NSHashTable *_observers;
    UIImage *_placeholderImage;
}


@property (readonly, nonatomic) SKUIResourceLoader *artworkLoader; // ivar: _loader
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SKUIImageDataConsumer *imageDataConsumer; // ivar: _imageDataConsumer
@property (readonly, nonatomic) CGSize imageSize;
@property (readonly, nonatomic) UIImage *placeholderImage;
@property (readonly) Class superclass;


-(id)_loadImage:(id)arg0 ;
-(id)_urlForContentRating:(id)arg0 clientContext:(id)arg1 ;
-(id)cachedImageForContentRating:(id)arg0 withClientContext:(id)arg1 ;
-(id)init;
-(id)initWithArtworkLoader:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)loadImageForContentRating:(id)arg0 clientContent:(id)arg1 reason:(NSInteger)arg2 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif
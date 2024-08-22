// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUICATEGORYARTWORKLOADER_H
#define SKUICATEGORYARTWORKLOADER_H

@class NSMapTable, NSHashTable, UIImage, NSString;
@protocol SKUIArtworkRequestDelegate;

#import <Foundation/Foundation.h>

#import "SKUIResourceLoader.h"
#import "SKUIImageDataConsumer.h"

@interface SKUICategoryArtworkLoader : NSObject <SKUIArtworkRequestDelegate>

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


-(id)cachedImageForCategory:(id)arg0 ;
-(id)init;
-(id)initWithArtworkLoader:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)loadImageForCategory:(id)arg0 reason:(NSInteger)arg1 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKIMAGESOURCE_H
#define GKIMAGESOURCE_H

@class GKThreadsafeCache, UIImage, NSString;

#import <Foundation/Foundation.h>

#import "GKImageBrush.h"

@interface GKImageSource : NSObject

@property (retain, nonatomic) GKThreadsafeCache *cache; // ivar: _cache
@property (retain, nonatomic) UIImage *defaultImage; // ivar: _defaultImage
@property (retain, nonatomic) GKImageBrush *imageBrush; // ivar: _imageBrush
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) UIImage *renderedDefaultImage; // ivar: _renderedDefaultImage
@property (nonatomic) BOOL shouldRenderDefaultImageWithBrush; // ivar: _shouldRenderDefaultImageWithBrush


+(id)cacheDirectoryForImageID:(id)arg0 ;
+(id)sharedCache;
+(id)syncQueue;
+(void)clearCache;
-(BOOL)shouldUseTestImage;
-(NSUInteger)cacheCostForImage:(id)arg0 ;
-(id)cachedImageForIdentifier:(id)arg0 ;
-(id)cachedImageForKey:(id)arg0 ;
-(id)fastCachedImageForIdentifier:(id)arg0 ;
-(id)fastCachedImageForKey:(id)arg0 ;
-(id)fastCachedOrDefaultImageForForKey:(id)arg0 ;
-(id)fastCachedOrDefaultImageForIdentifier:(id)arg0 ;
-(id)initWithName:(id)arg0 imageBrush:(id)arg1 ;
-(id)keyForImageIdentifier:(id)arg0 ;
-(id)processAndCacheImage:(id)arg0 forIdentifier:(id)arg1 ;
-(id)processAndCacheImage:(id)arg0 forKey:(id)arg1 ;
-(id)processAndCacheImageDataInContext:(id)arg0 withImage:(id)arg1 forIdentifier:(id)arg2 ;
-(id)processAndCacheImageDataInContext:(id)arg0 withImage:(id)arg1 forKey:(id)arg2 ;
-(id)renderedImageWithImage:(id)arg0 ;
-(id)renderedImageWithImage:(id)arg0 defaultSize:(struct CGSize )arg1 returnContext:(*id)arg2 ;
-(id)renderedImageWithImage:(id)arg0 returnContext:(*id)arg1 ;
-(id)renderedTestImage;
-(id)subsourceWithBrush:(id)arg0 ;
-(void)_storeImage:(id)arg0 cacheKey:(id)arg1 path:(id)arg2 context:(id)arg3 ;
-(void)cacheImageFromContext:(id)arg0 forIdentifier:(id)arg1 ;
-(void)clearCachedImageForIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)validateFileSystemCache;


@end


#endif
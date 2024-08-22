// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKARTWORKDATASOURCECACHE_H
#define MKARTWORKDATASOURCECACHE_H

@class NSCache;

#import <Foundation/Foundation.h>

#import "MKTransitArtworkManager.h"

@interface MKArtworkDataSourceCache : NSObject {
    NSCache *_artworkImageCache;
}


@property (readonly, nonatomic) MKTransitArtworkManager *artworkManager; // ivar: _artworkManager


+(id)sharedInstance;
-(id)_lookupArtworkInCacheWithKey:(id)arg0 ;
-(id)imageForArtwork:(id)arg0 size:(NSInteger)arg1 featureType:(NSUInteger)arg2 scale:(CGFloat)arg3 nightMode:(BOOL)arg4 ;
-(id)imageForArtwork:(id)arg0 size:(NSInteger)arg1 featureType:(NSUInteger)arg2 scale:(CGFloat)arg3 nightMode:(BOOL)arg4 widthPaddingMultiple:(CGFloat)arg5 ;
-(id)imageForSizedArtwork:(id)arg0 scale:(CGFloat)arg1 nightMode:(BOOL)arg2 ;
-(id)initWithArtworkManager:(id)arg0 ;
-(void)_setArtworkImageInCache:(id)arg0 forKey:(id)arg1 ;
-(void)_shieldPackDidUpdate;
-(void)purge;


@end


#endif
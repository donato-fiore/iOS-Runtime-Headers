// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPLACESIMAGECACHE_H
#define PXPLACESIMAGECACHE_H

@class NSCache;

#import <Foundation/Foundation.h>


@interface PXPlacesImageCache : NSObject {
    NSCache *_cache;
}




-(id)cachedRenderedImageForGeotaggble:(id)arg0 andKey:(id)arg1 ;
-(id)init;
-(void)cacheRenderedImage:(id)arg0 forGeotaggble:(id)arg1 andKey:(id)arg2 ;
-(void)removeAllObjects;
-(void)removeCachedRenderedImageForGeotaggble:(id)arg0 andKey:(id)arg1 ;


@end


#endif
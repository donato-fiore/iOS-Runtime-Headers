// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFMAPPEDIMAGECACHE_H
#define SBFMAPPEDIMAGECACHE_H

@class BSUIMappedImageCache;



@interface SBFMappedImageCache : BSUIMappedImageCache



+(id)systemAppPersistenteCache;
-(id)imageForKey:(id)arg0 cacheOptions:(NSUInteger)arg1 generateImageWithBlockIfNecessary:(id)arg2 ;
-(id)imageForKey:(id)arg0 generateImageWithBlockIfNecessary:(id)arg1 ;
-(id)imageForKey:(id)arg0 options:(int)arg1 ;
-(id)imageForKey:(id)arg0 options:(int)arg1 generateImageWithBlockIfNecessary:(id)arg2 ;
-(id)initWithDescription:(id)arg0 ;
-(void)warmupImageForKey:(id)arg0 ;


@end


#endif
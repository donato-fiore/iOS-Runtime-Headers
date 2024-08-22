// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FMFMAPIMAGECACHE_H
#define FMFMAPIMAGECACHE_H

@class NSCache;

#import <Foundation/Foundation.h>


@interface FMFMapImageCache : NSObject

@property (retain, nonatomic) NSCache *_cache; // ivar: __cache


+(id)sharedInstance;
-(id)_imageForMap:(id)arg0 ;
-(id)_keyForHandles:(id)arg0 ;
-(id)_orientationKey;
-(id)cachedMapForHandles:(id)arg0 ;
-(void)cacheMap:(id)arg0 forHandles:(id)arg1 ;
-(void)dealloc;


@end


#endif
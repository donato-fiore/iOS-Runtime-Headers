// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8STOCKSUI16SHAREDIMAGECACHE_H
#define _TTC8STOCKSUI16SHAREDIMAGECACHE_H

@class SwiftObject;
@protocol TSSharedImageCacheType;



@interface _TtC8StocksUI16SharedImageCache : SwiftObject <TSSharedImageCacheType>

 {
    ? memoryCache;
}




-(id)fetchImageForKey:(id)arg0 ;
-(void)cache:(id)arg0 forKey:(id)arg1 ;
-(void)cache:(id)arg0 forKey:(id)arg1 immediately:(BOOL)arg2 ;
-(void)pruneImagesOlderThan:(CGFloat)arg0 ;


@end


#endif
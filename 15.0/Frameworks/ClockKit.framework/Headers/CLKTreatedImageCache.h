// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKTREATEDIMAGECACHE_H
#define CLKTREATEDIMAGECACHE_H

@class NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CLKTreatedImageCache : NSObject {
    NSMutableDictionary *_cache;
    NSMutableArray *_recentlyUsedKeys;
    NSObject<OS_dispatch_queue> *_internalQueue;
}




+(id)sharedInstance;
-(id)_imageForKey:(id)arg0 ;
-(id)imageForRawImage:(id)arg0 maxSDKSize:(struct CGSize )arg1 maxDeviceSize:(struct CGSize )arg2 cornerRadius:(CGFloat)arg3 ;
-(id)imageForRawImage:(id)arg0 maxSDKSize:(struct CGSize )arg1 maxDeviceSize:(struct CGSize )arg2 maskMode:(NSInteger)arg3 ;
-(id)imageForRawImage:(id)arg0 scale:(CGFloat)arg1 sdkDeviceScale:(CGFloat)arg2 cornerRadius:(CGFloat)arg3 ;
-(id)imageForRawImage:(id)arg0 scale:(CGFloat)arg1 sdkDeviceScale:(CGFloat)arg2 maskMode:(NSInteger)arg3 ;
-(id)init;
-(void)_queue_pruneCacheIfNecessary;
-(void)purgeCache;


@end


#endif
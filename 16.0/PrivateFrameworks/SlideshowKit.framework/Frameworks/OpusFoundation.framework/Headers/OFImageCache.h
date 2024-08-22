// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OFIMAGECACHE_H
#define OFIMAGECACHE_H

@class NSString, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface OFImageCache : NSObject {
    NSObject<OS_dispatch_queue> *_serialDiskSaveQueue;
    NSString *_diskCacheDirectory;
    NSMutableDictionary *_diskCacheDirectoryForURLs;
}


@property (nonatomic) NSUInteger imageFormat; // ivar: _imageFormat
@property (nonatomic) BOOL useAsynchronousSerialDiskSaveQueue; // ivar: _useAsynchronousSerialDiskSaveQueue


+(NSUInteger)alignResolution:(NSUInteger)arg0 ;
+(NSUInteger)bestResolutionForSize:(struct CGSize )arg0 ;
-(BOOL)hasImageForURL:(id)arg0 withResolution:(NSUInteger)arg1 ;
-(id)_diskCacheDirectoryForURL:(id)arg0 ;
-(id)_diskCacheFilePathForURL:(id)arg0 withResolution:(NSUInteger)arg1 ;
-(id)_diskCacheResolutionsForURL:(id)arg0 ;
-(id)init;
-(id)initWithDiskCacheDirectory:(id)arg0 ;
-(struct CGImage *)bestImageDiskCacheForURL:(id)arg0 ;
-(struct CGImage *)imageForURL:(id)arg0 withResolution:(NSUInteger)arg1 ;
-(struct CGImage *)imageFromBestDiskCacheForURL:(id)arg0 withResolution:(NSUInteger)arg1 ;
-(void)_didEnterBackgroundNotification;
-(void)_didReceiveMemoryWarningNotification;
-(void)_willTerminateNotification;
-(void)dealloc;
-(void)invalidateDiskCacheForURL:(id)arg0 ;
-(void)invalidateDiskCaches;
-(void)invalidateMemoryCaches;
-(void)purgeDiskCache:(NSUInteger)arg0 progressBlock:(id)arg1 ;
-(void)setImage:(struct CGImage *)arg0 withResolution:(NSUInteger)arg1 forURL:(id)arg2 ;


@end


#endif
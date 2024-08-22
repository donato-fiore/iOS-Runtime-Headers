// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICIMAGECACHE_H
#define ICIMAGECACHE_H

@class ICLRUCache, ICCache;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface ICImageCache : NSObject

@property (retain, nonatomic) ICLRUCache *bigImageCache; // ivar: _bigImageCache
@property (retain, nonatomic) ICCache *imageCache; // ivar: _imageCache
@property (retain, nonatomic) NSObject<OS_dispatch_source> *memoryWarningEventSource; // ivar: _memoryWarningEventSource


+(CGFloat)bigImageSize;
+(NSUInteger)maxBigImageCount;
-(id)imageForKey:(id)arg0 ;
-(id)init;
-(void)receivedMemoryWarning;
-(void)registerForMemoryWarnings;
-(void)removeAllImages;
-(void)removeImageForKey:(id)arg0 ;
-(void)setImage:(id)arg0 forKey:(id)arg1 ;
-(void)unregisterForMemoryWarnings;


@end


#endif
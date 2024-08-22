// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFWALLPAPERCACHE_H
#define SBFWALLPAPERCACHE_H

@class NSString, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SBFMappedImageCache.h"

@interface SBFWallpaperCache : NSObject {
    NSString *_path;
    NSURL *_imageCachePath;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) SBFMappedImageCache *imageCache; // ivar: _imageCache


+(id)wallpaperCache;
-(id)colorBoxesForKey:(id)arg0 generatingIfNeceesaryFromImage:(id)arg1 ;
-(id)imageForKey:(id)arg0 generatingIfNecessaryWithBlock:(id)arg1 ;
// -(id)imageForKey:(id)arg0 generatingIfNecessaryWithBlock:(id)arg1 completion:(unk)arg2  ;
-(id)imageURLForKey:(id)arg0 ;
-(id)initWithOptions:(id)arg0 ;
-(void)removeEverythingWithCompletion:(id)arg0 ;
-(void)warmupForKey:(id)arg0 ;


@end


#endif
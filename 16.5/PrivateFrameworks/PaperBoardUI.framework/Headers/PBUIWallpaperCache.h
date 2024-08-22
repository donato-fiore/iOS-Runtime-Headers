// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUIWALLPAPERCACHE_H
#define PBUIWALLPAPERCACHE_H

@class NSString, NSURL, BSUIMappedImageCache;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PBUIWallpaperCache : NSObject {
    NSString *_path;
    NSURL *_imageCachePath;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) BSUIMappedImageCache *imageCache; // ivar: _imageCache


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
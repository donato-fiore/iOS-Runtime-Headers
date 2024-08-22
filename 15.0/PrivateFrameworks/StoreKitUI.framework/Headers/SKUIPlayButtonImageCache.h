// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIPLAYBUTTONIMAGECACHE_H
#define SKUIPLAYBUTTONIMAGECACHE_H

@class NSBundle, NSString, UIImage;

#import <Foundation/Foundation.h>


@interface SKUIPlayButtonImageCache : NSObject {
    os_unfair_lock_s _imageLock;
    NSBundle *_bundle;
    NSString *_playImageName;
    UIImage *_playImage;
    NSString *_pauseImageName;
    UIImage *_pauseImage;
    NSString *_stopImageName;
    UIImage *_stopImage;
}


@property (readonly) UIImage *pauseImage;
@property (readonly) UIImage *playImage;
@property (readonly) UIImage *stopImage;


+(id)imageCacheForStyle:(NSInteger)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(void)preloadImages;


@end


#endif
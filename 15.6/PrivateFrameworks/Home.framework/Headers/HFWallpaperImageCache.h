// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFWALLPAPERIMAGECACHE_H
#define HFWALLPAPERIMAGECACHE_H

@class BSUIMappedImageCache, NSArray;
@protocol HFProcessedWallpaperSource;

#import <Foundation/Foundation.h>


@interface HFWallpaperImageCache : NSObject

@property (retain, nonatomic) BSUIMappedImageCache *imageCache; // ivar: _imageCache
@property (retain) NSObject<HFProcessedWallpaperSource> *processedWallpaperSource; // ivar: _processedWallpaperSource
@property (readonly, nonatomic) NSArray *supportedProcessedVariants;


-(id)_cacheKeyForWallpaper:(id)arg0 withVariant:(NSInteger)arg1 ;
-(id)imageForVariant:(NSInteger)arg0 wallpaper:(id)arg1 withOriginalImageGenerator:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)pruneUnusedWallpaperVariants:(id)arg0 ;
-(void)saveVariantsForWallpaper:(id)arg0 originalImage:(id)arg1 ;


@end


#endif
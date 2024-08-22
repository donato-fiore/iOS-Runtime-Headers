// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8VIDEOSUI14LIBIMAGELOADER_H
#define _TTC8VIDEOSUI14LIBIMAGELOADER_H

@protocol VUIImageLoader;

#import <Foundation/Foundation.h>


@interface _TtC8VideosUI14LibImageLoader : NSObject <VUIImageLoader>

 {
    ? currentLoadingTasks;
    ? artworkResizeUtility;
}




-(BOOL)hasImageCache;
-(id)URLForObject:(id)arg0 ;
-(id)imageKeyForObject:(id)arg0 ;
-(id)init;
-(id)loadImageForObject:(id)arg0 scaleToSize:(struct CGSize )arg1 cropToFit:(BOOL)arg2 imageDirection:(NSInteger)arg3 requestLoader:(id)arg4 completionHandler:(id)arg5 ;
-(void)cancelLoad:(id)arg0 ;


@end


#endif
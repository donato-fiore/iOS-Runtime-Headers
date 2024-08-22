// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSSTARTPAGEBACKGROUNDIMAGESDATASOURCE_H
#define WBSSTARTPAGEBACKGROUNDIMAGESDATASOURCE_H

@class NSArray, NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSStartPageBackgroundImagesDataSource : NSObject {
    NSObject<OS_dispatch_queue> *_imageLoadingQueue;
    NSObject<OS_dispatch_queue> *_imageSavingQueue;
    NSArray *_defaultImageURLs;
    NSArray *_imageURLsWithLuminance;
    NSMutableDictionary *_pendingImageThumbnailRequests;
    Vector<WTF::RetainPtr<CGImage *>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> _imageCache;
    NSURL *_thumbnailsPath;
}


@property (readonly, nonatomic) NSInteger itemCount;


-(NSInteger)indexOfBackgroundImageWithName:(id)arg0 ;
-(id)_thumbnailURLWithItemIndex:(NSInteger)arg0 ;
-(id)imageURLAndLuminanceWithItemIndex:(NSInteger)arg0 ;
-(id)initWithBuiltInImageURLs:(id)arg0 localCachesDirectory:(id)arg1 ;
-(id)initWithBundle:(id)arg0 localCachesDirectory:(id)arg1 ;
-(struct RetainPtr<CGImage *> )_createThumbnail:(id)arg0 imageSource:(struct RetainPtr<CGImageSource *> )arg1 ;
-(void)imageThumbnailWithItemIndex:(NSInteger)arg0 completion:(id)arg1 ;


@end


#endif
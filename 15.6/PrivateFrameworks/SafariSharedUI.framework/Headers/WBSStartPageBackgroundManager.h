// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSSTARTPAGEBACKGROUNDMANAGER_H
#define WBSSTARTPAGEBACKGROUNDMANAGER_H

@class NSURL, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSStartPageBackgroundManager : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_imageSavingQueue;
    RetainPtr<CGImage *> _prefetchedImage;
    RetainPtr<CGImage *> _prefetchedImageThumbnail;
    NSURL *_prefetchedImageURL;
    NSString *_lastPrefetchedFilePath;
    uint8_t _prefetchingCoalescingDelay;
    CGFloat _prefetchedImageLuminance;
    NSURL *_imageURL;
    NSInteger _appearance;
}


@property (readonly, nonatomic) RetainPtr<CGImage *> image; // ivar: _image
@property (readonly, copy, nonatomic) NSString *prefetchedImageName;
@property (readonly, nonatomic) RetainPtr<CGImage *> prefetchedImageThumbnail;


+(id)ciColorKernel;
+(id)defaultManager;
+(void)warmUp;
-(NSInteger)appearanceForImage:(struct RetainPtr<CGImage *> )arg0 ;
-(NSInteger)appearanceForLuminance:(CGFloat)arg0 ;
-(NSInteger)appearanceIfImageExists:(BOOL)arg0 ;
-(id)ciContext;
-(id)initWithImageURL:(id)arg0 ;
-(struct RetainPtr<CGImage *> )analyzeImageAndThresholdIfNecessary:(struct CGImage *)arg0 thumbnail:(struct CGImage *)arg1 precomputedLuminance:(CGFloat)arg2 appearance:(*NSInteger)arg3 ;
-(struct RetainPtr<CGImage *> )assignImage:(struct RetainPtr<CGImage *> )arg0 oldImage:(struct RetainPtr<CGImage *> )arg1 ;
-(struct RetainPtr<CGImage *> )normalizeImage:(struct RetainPtr<CGImage *> )arg0 imageSource:(struct RetainPtr<CGImageSource> )arg1 properties:(id)arg2 ;
-(struct RetainPtr<CGImage *> )thresholdImage:(struct CGImage *)arg0 minValue:(CGFloat)arg1 maxValue:(CGFloat)arg2 multiplier:(CGFloat)arg3 ;
-(void)_clearPrefetchedImage;
-(void)_commitImage:(struct RetainPtr<CGImage *> )arg0 appearanceName:(NSInteger)arg1 ;
-(void)_loadImageFromDisk;
// -(void)_prefetchImage:(id)arg0 luminance:(CGFloat)arg1 completion:(id)arg2 withNanoSecondDelay:(unk)arg3  ;
-(void)_processImage;
-(void)_saveImage:(struct RetainPtr<CGImage *> )arg0 appearance:(NSInteger)arg1 completion:(id)arg2 ;
-(void)_setExtendedAttributesOnBackgroundImage;
-(void)_updateThumbnailIfNeeded;
-(void)cacheImageFromURL:(id)arg0 completion:(id)arg1 ;
-(void)clearImage;
-(void)clearPrefetchedImage;
-(void)commitPrefetchedImageWithLuminance:(CGFloat)arg0 ;
-(void)loadImageFromDisk;
-(void)prefetchImage:(id)arg0 completion:(id)arg1 ;
-(void)prefetchImage:(id)arg0 luminance:(CGFloat)arg1 completion:(id)arg2 ;
-(void)processImage;


@end


#endif
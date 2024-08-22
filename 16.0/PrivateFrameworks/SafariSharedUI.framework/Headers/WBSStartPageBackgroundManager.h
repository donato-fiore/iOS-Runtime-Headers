// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSSTARTPAGEBACKGROUNDMANAGER_H
#define WBSSTARTPAGEBACKGROUNDMANAGER_H

@class NSURL, NSString, NSMutableDictionary;
@protocol WBTabGroupManagerObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSStartPageBackgroundManager : NSObject <WBTabGroupManagerObserver>

 {
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
    NSMutableDictionary *_backgroundImageIdentifierToImage;
    NSMutableDictionary *_backgroundImageIdentifierToLuminance;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) RetainPtr<CGImage *> image; // ivar: _image
@property (readonly, copy, nonatomic) NSString *prefetchedImageName;
@property (readonly, nonatomic) RetainPtr<CGImage *> prefetchedImageThumbnail;
@property (readonly) Class superclass;


+(id)ciColorKernel;
+(id)defaultManager;
+(void)warmUp;
-(BOOL)_hasTabGroupSpecificBackgroundImage:(id)arg0 ;
-(BOOL)isCorrectBackgroundImageLoadedForIdentifier:(id)arg0 ;
-(NSInteger)appearanceForImage:(struct RetainPtr<CGImage *> )arg0 ;
-(NSInteger)appearanceForImageWithIdentifier:(id)arg0 ;
-(NSInteger)appearanceForLuminance:(CGFloat)arg0 ;
-(NSInteger)appearanceIfImageExists:(BOOL)arg0 ;
-(id)ciContext;
-(id)initWithImageURL:(id)arg0 ;
-(struct RetainPtr<CGImage *> )analyzeImageAndThresholdIfNecessary:(struct CGImage *)arg0 thumbnail:(struct CGImage *)arg1 precomputedLuminance:(CGFloat)arg2 getAppearance:(*NSInteger)arg3 luminance:(*CGFloat)arg4 ;
-(struct RetainPtr<CGImage *> )assignImage:(struct RetainPtr<CGImage *> )arg0 oldImage:(struct RetainPtr<CGImage *> )arg1 ;
-(struct RetainPtr<CGImage *> )imageForIdentifier:(id)arg0 ;
-(struct RetainPtr<CGImage *> )normalizeImage:(struct RetainPtr<CGImage *> )arg0 imageSource:(struct RetainPtr<CGImageSource> )arg1 properties:(id)arg2 ;
-(struct RetainPtr<CGImage *> )thresholdImage:(struct CGImage *)arg0 minValue:(CGFloat)arg1 maxValue:(CGFloat)arg2 multiplier:(CGFloat)arg3 ;
-(void)_clearPrefetchedImage;
-(void)_commitImage:(struct RetainPtr<CGImage *> )arg0 appearanceName:(NSInteger)arg1 luminance:(CGFloat)arg2 forIdentifier:(id)arg3 ;
-(void)_deleteImageWithIdentifier:(id)arg0 ;
-(void)_loadImageFromDiskForIdentifier:(id)arg0 ;
// -(void)_prefetchImage:(id)arg0 luminance:(CGFloat)arg1 completion:(id)arg2 withNanoSecondDelay:(unk)arg3  ;
-(void)_processImageForIdentifier:(id)arg0 ;
-(void)_readImagePropertiesFromImageSource:(struct RetainPtr<CGImageSource> )arg0 forImageIdentifier:(id)arg1 isTabGroupSpecificBackgroundImage:(BOOL)arg2 ;
-(void)_saveImage:(struct RetainPtr<CGImage *> )arg0 appearance:(NSInteger)arg1 luminance:(CGFloat)arg2 forIdentifier:(id)arg3 completion:(id)arg4 ;
-(void)_setExtendedAttributesOnBackgroundImage;
-(void)_setHasTabGroupSpecificBackgroundImage:(BOOL)arg0 forIdentifier:(id)arg1 ;
-(void)_updateThumbnailIfNeeded;
-(void)cacheImageFromURL:(id)arg0 completion:(id)arg1 ;
-(void)clearImage;
-(void)clearImageWithIdentifier:(id)arg0 ;
-(void)clearPrefetchedImage;
-(void)commitPrefetchedImageWithLuminance:(CGFloat)arg0 forIdentifier:(id)arg1 ;
-(void)loadImageFromDiskForIdentifier:(id)arg0 ;
-(void)prefetchImage:(id)arg0 completion:(id)arg1 ;
-(void)prefetchImage:(id)arg0 luminance:(CGFloat)arg1 completion:(id)arg2 ;
-(void)processImageForIdentifier:(id)arg0 ;
-(void)reloadTabGroupSpecificBackgroundImageFromDisk:(id)arg0 ;
-(void)tabGroupManager:(id)arg0 didRemoveTabGroup:(id)arg1 ;


@end


#endif
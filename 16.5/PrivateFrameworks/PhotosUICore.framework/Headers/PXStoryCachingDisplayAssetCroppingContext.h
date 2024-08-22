// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYCACHINGDISPLAYASSETCROPPINGCONTEXT_H
#define PXSTORYCACHINGDISPLAYASSETCROPPINGCONTEXT_H

@class NSArray;
@protocol PXStoryDisplayAssetCroppingContext, PXDisplayAsset;

#import <Foundation/Foundation.h>


@interface PXStoryCachingDisplayAssetCroppingContext : NSObject <PXStoryDisplayAssetCroppingContext>

 {
    id<PXStoryDisplayAssetCroppingContext> *_croppingContext;
    id<PXDisplayAsset> *_cachedAsset;
    NSUInteger _cachedOptions;
    NSInteger _cachedFaceCount;
    NSInteger _cachedFeaturedFaceCount;
    *CGRect _cachedNormalizedFaceRects;
    id<PXDisplayAsset> *_cachedPanoramaAsset;
    NSArray *_cachedPanoramaCropContentRects;
    NSInteger _cachedPanoramaAxis;
    CGFloat _cachedPanoramaCropContentsRectsApectRatio;
}




-(id)cropContentRectsForMultipartPanoramaAsset:(id)arg0 axis:(NSInteger)arg1 cropContentsRectsApectRatio:(CGFloat)arg2 ;
-(id)init;
-(id)initWithCroppingContext:(id)arg0 ;
-(void)dealloc;
-(void)requestIndividualFaceRectsInAsset:(id)arg0 options:(NSUInteger)arg1 resultHandler:(id)arg2 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYBASEDISPLAYASSETCROPPINGCONTEXT_H
#define PXSTORYBASEDISPLAYASSETCROPPINGCONTEXT_H

@class PHFetchOptions;
@protocol PXStoryDisplayAssetCroppingContext, OS_os_log;

#import <Foundation/Foundation.h>


@interface PXStoryBaseDisplayAssetCroppingContext : NSObject <PXStoryDisplayAssetCroppingContext>



@property (readonly, nonatomic) PHFetchOptions *fetchOptions; // ivar: _fetchOptions
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log


-(id)adjustOrderedFaces:(id)arg0 featuredFaceCount:(*NSInteger)arg1 ;
-(id)cropContentRectsForMultipartPanoramaAsset:(id)arg0 axis:(NSInteger)arg1 cropContentsRectsApectRatio:(CGFloat)arg2 ;
-(id)init;
-(id)orderedFacesForAsset:(id)arg0 featuredFaceCount:(*NSInteger)arg1 ;
-(void)requestIndividualFaceRectsInAsset:(id)arg0 options:(NSUInteger)arg1 resultHandler:(id)arg2 ;


@end


#endif
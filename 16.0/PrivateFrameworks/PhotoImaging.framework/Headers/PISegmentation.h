// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PISEGMENTATION_H
#define PISEGMENTATION_H


#import <Foundation/Foundation.h>


@interface PISegmentation : NSObject



+(BOOL)curatedSegmentationGatingDecisionForSegmentationScores:(id)arg0 ;
+(BOOL)layoutGatingDecisionForSegmentationScores:(id)arg0 ;
+(BOOL)manualSegmentationGatingDecisionForSegmentationScores:(id)arg0 ;
+(BOOL)tryLoadSegmentationForColdAsset:(id)arg0 ;
+(NSUInteger)_layerStackOptionsFromOptions:(id)arg0 ;
+(NSUInteger)currentVersion;
+(id)_styleFromOptions:(id)arg0 item:(id)arg1 ;
+(id)segmentationLoaderForAsset:(id)arg0 ;
+(void)_upgradeFullPosterAtURL:(id)arg0 exportToURL:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
+(void)_upgradeWallpaperAtURL:(id)arg0 exportToURL:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
+(void)cancelSegmentationForAsset:(id)arg0 ;
+(void)computeSegmentationScoresForAsset:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
+(void)ensureResources;
+(void)exportWallpaperForAsset:(id)arg0 toURL:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
+(void)freeResources;
+(void)loadSegmentationItemForAsset:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
+(void)setSegmentationLoader:(id)arg0 forAsset:(id)arg1 ;
+(void)upgradePosterConfiguration:(id)arg0 atURL:(id)arg1 exportTo:(id)arg2 options:(id)arg3 completion:(id)arg4 ;
+(void)upgradeWallpaperAtURL:(id)arg0 exportToURL:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
+(void)warmUpResources;


@end


#endif
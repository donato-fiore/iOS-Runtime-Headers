// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXMEDIAANALYSISVIDEOSTABILIZATIONRECIPESOURCE_H
#define PXMEDIAANALYSISVIDEOSTABILIZATIONRECIPESOURCE_H

@class PHAsset;


#import "PXVideoStabilizationRecipeSource.h"

@interface PXMediaAnalysisVideoStabilizationRecipeSource : PXVideoStabilizationRecipeSource {
    PHAsset *_asset;
    CGSize _videoDimensions;
}




+(id)cachedRecipeForAsset:(id)arg0 ;
+(void)cacheRecipe:(id)arg0 forAsset:(id)arg1 ;
-(id)_loadStabilizationRecipe:(*id)arg0 analysisType:(*NSUInteger)arg1 ;
-(id)analyticsPayload;
-(id)initWithAsset:(id)arg0 videoDimensions:(struct CGSize )arg1 ;


@end


#endif
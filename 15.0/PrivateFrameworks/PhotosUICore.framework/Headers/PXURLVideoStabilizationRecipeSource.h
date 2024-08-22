// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXURLVIDEOSTABILIZATIONRECIPESOURCE_H
#define PXURLVIDEOSTABILIZATIONRECIPESOURCE_H

@class NSURL, PIVideoStabilizeRequest;


#import "PXVideoStabilizationRecipeSource.h"

@interface PXURLVideoStabilizationRecipeSource : PXVideoStabilizationRecipeSource {
    NSURL *_inputVideoURL;
    PIVideoStabilizeRequest *_stabilizeRequest;
}




-(id)_loadStabilizationRecipe:(*id)arg0 analysisType:(*NSUInteger)arg1 ;
-(id)analyticsPayload;
-(id)initWithVideoURL:(id)arg0 ;


@end


#endif
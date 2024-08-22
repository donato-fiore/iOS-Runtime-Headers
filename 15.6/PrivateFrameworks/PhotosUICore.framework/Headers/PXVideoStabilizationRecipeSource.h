// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXVIDEOSTABILIZATIONRECIPESOURCE_H
#define PXVIDEOSTABILIZATIONRECIPESOURCE_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PXVideoStabilizationRecipeSource : NSObject {
    NSInteger _recipeLoadSignpost;
}


@property (nonatomic) NSUInteger allowedAnalysisTypes; // ivar: _allowedAnalysisTypes
@property (nonatomic) BOOL allowsOnDemandPixelAnalysis; // ivar: _allowsOnDemandPixelAnalysis
@property (copy, nonatomic) NSDictionary *analyticsPayload; // ivar: _analyticsPayload
@property (copy, nonatomic) NSDictionary *debugInfo; // ivar: _debugInfo


-(id)_loadStabilizationRecipe:(*id)arg0 analysisType:(*NSUInteger)arg1 ;
-(id)init;
-(id)loadStabilizationRecipe:(*id)arg0 analysisType:(*NSUInteger)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYCROPQUALITYCOMPOSABILITYSCORER_H
#define PXSTORYCROPQUALITYCOMPOSABILITYSCORER_H

@class NSString;
@protocol PXStoryAutoEditComposabilityScorer;

#import <Foundation/Foundation.h>


@interface PXStoryCropQualityComposabilityScorer : NSObject <PXStoryAutoEditComposabilityScorer>

 {
    vector<(anonymous namespace)::_PXStoryAutoEditCropScoreInfo, std::allocator<(anonymous namespace)::_PXStoryAutoEditCropScoreInfo>> _scores;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)computeComposabilityScoresForDisplayAssets:(id)arg0 error:(*id)arg1 ;
-(id)diagnosticDescription;
-(struct _PXStoryAutoEditCropScoreInfo )_computeCropScoreForDisplayAsset:(id)arg0 diptychAspectRatio:(CGFloat)arg1 triptychAspectRatio:(CGFloat)arg2 ;


@end


#endif
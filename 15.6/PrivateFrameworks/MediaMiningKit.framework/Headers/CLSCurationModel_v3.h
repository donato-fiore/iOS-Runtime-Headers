// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSCURATIONMODEL_V3_H
#define CLSCURATIONMODEL_V3_H

@class v2;


#import "CLSNSFWModel.h"
#import "CLSTabooEventModel.h"
#import "CLSPotentialLandmarkModel.h"
#import "CLSSDModel.h"

@interface CLSCurationModel_v3 : v2 {
    BOOL _r14j9IsAvailable;
    CLSNSFWModel *_nsfwModel;
    CLSTabooEventModel *_tabooEventModel;
    CLSPotentialLandmarkModel *_potentialLandmarkModel;
    CLSSDModel *_sdModel;
}




+(NSUInteger)minimumRequiredSceneAnalysisVersion;
-(BOOL)avoidIfPossibleForKeyAssetWithAsset:(id)arg0 ;
-(BOOL)avoidIfPossibleForKeyAssetWithProcessedSignals:(id)arg0 ;
-(BOOL)avoidIfPossibleForKeyAssetWithSignals:(id)arg0 ;
-(BOOL)filterForFoodieWithClassification:(id)arg0 ;
-(BOOL)hasPoorResolutionWithAsset:(id)arg0 ;
-(BOOL)isJunkWithJunkClassification:(id)arg0 ;
-(BOOL)isShowcasingFoodWithSceneClassification:(id)arg0 ;
-(BOOL)isTragicFailureWithImageAsset:(id)arg0 ;
-(BOOL)isUtilityForMemoriesWithAsset:(id)arg0 curationContext:(id)arg1 ;
-(BOOL)isUtilityForMemoriesWithProcessedSignals:(id)arg0 ;
-(id)initWithCurationModelSpecification:(id)arg0 ;
-(id)newProcessedSignals;
-(void)enumerateClassificationBasedSignalModelsUsingBlock:(id)arg0 ;
-(void)enumerateSignalModelsUsingBlock:(id)arg0 ;


@end


#endif
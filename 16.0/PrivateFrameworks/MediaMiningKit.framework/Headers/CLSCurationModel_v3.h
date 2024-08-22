// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSCURATIONMODEL_V3_H
#define CLSCURATIONMODEL_V3_H

@class v1;


#import "CLSNSFWModel.h"
#import "CLSPotentialLandmarkModel.h"
#import "CLSSDModel.h"
#import "CLSTabooEventModel.h"

@interface CLSCurationModel_v3 : v1 {
    BOOL _r14j9IsAvailable;
}


@property (readonly) CLSNSFWModel *nsfwModel; // ivar: _nsfwModel
@property (readonly) CLSPotentialLandmarkModel *potentialLandmarkModel; // ivar: _potentialLandmarkModel
@property (readonly) CLSSDModel *sdModel; // ivar: _sdModel
@property (readonly) CLSTabooEventModel *tabooEventModel; // ivar: _tabooEventModel


+(id)baseSpecificationWithSpecification:(id)arg0 ;
-(BOOL)avoidIfPossibleForKeyAssetWithAsset:(id)arg0 statistics:(struct ? *)arg1 ;
-(BOOL)avoidIfPossibleForKeyAssetWithProcessedSignals:(id)arg0 statistics:(struct ? *)arg1 ;
-(BOOL)avoidIfPossibleForKeyAssetWithSignals:(id)arg0 statistics:(struct ? *)arg1 ;
-(BOOL)filterForFoodieWithClassification:(id)arg0 ;
-(BOOL)hasPoorResolutionWithAsset:(id)arg0 ;
-(BOOL)isJunkWithJunkClassification:(id)arg0 ;
-(BOOL)isShowcasingFoodWithSceneClassification:(id)arg0 ;
-(BOOL)isTragicFailureWithImageAsset:(id)arg0 ;
-(BOOL)isUtilityForMemoriesWithAsset:(id)arg0 curationContext:(id)arg1 ;
-(BOOL)isUtilityForMemoriesWithProcessedSignals:(id)arg0 ;
-(id)initWithCurationModelSpecification:(id)arg0 ;
-(id)processedSignalsFromSignals:(id)arg0 ;
-(void)enumerateClassificationBasedSignalModelsUsingBlock:(id)arg0 ;
-(void)enumerateSignalModelsUsingBlock:(id)arg0 ;


@end


#endif
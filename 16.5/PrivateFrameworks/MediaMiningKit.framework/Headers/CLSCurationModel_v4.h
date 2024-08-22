// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSCURATIONMODEL_V4_H
#define CLSCURATIONMODEL_V4_H

@class v3;


#import "CLSIVSNSFWModel.h"
#import "CLSMemeModel.h"
#import "CLSTrendsSceneModel.h"

@interface CLSCurationModel_v4 : v3

@property (readonly) CLSIVSNSFWModel *ivsNSFWModel; // ivar: _ivsNSFWModel
@property (readonly) CLSMemeModel *memeModel; // ivar: _memeModel
@property (readonly) CLSTrendsSceneModel *trendsSceneModel; // ivar: _trendsSceneModel


+(id)baseSpecificationWithSpecification:(id)arg0 ;
-(BOOL)assetIsJunkWithSceneClassifications:(id)arg0 confidenceThresholdBySceneIdentifierForScenesPreventingJunking:(id)arg1 confidenceThresholdBySceneIdentifierForJunkingScenes:(id)arg2 confidenceThresholdBySceneIdentifierForScenesPreventingSceneBasedJunking:(id)arg3 forMemories:(BOOL)arg4 ;
-(BOOL)avoidIfPossibleForKeyAssetWithAsset:(id)arg0 statistics:(struct ? *)arg1 ;
-(BOOL)isMemeWithAsset:(id)arg0 ;
-(BOOL)isSemDevSceneDetectedForIdentifier:(unsigned int)arg0 withSceneClassification:(id)arg1 ;
-(BOOL)isUtilityForMemoriesForImageAsset:(id)arg0 ;
-(BOOL)isUtilityForMemoriesWithAsset:(id)arg0 curationContext:(id)arg1 ;
-(BOOL)isUtilityForMemoriesWithVideoAsset:(id)arg0 ;
-(BOOL)isUtilityForSyndicationWithAsset:(id)arg0 ;
-(BOOL)isUtilityForVideoAsset:(id)arg0 ;
-(BOOL)isVeryPreciselyIVSNSFWExplicitWithAsset:(id)arg0 ;
-(id)faceInformationSummaryWithFaces:(id)arg0 detectionTraitsByFaceLocalIdentifier:(id)arg1 verifiedPersonUUIDs:(id)arg2 hiddenPersonUUIDs:(id)arg3 personUUIDByMergeCandidateUUID:(id)arg4 ;
-(id)initWithCurationModelSpecification:(id)arg0 ;
-(void)enumerateClassificationBasedSignalModelsUsingBlock:(id)arg0 ;
-(void)enumerateSignalModelsUsingBlock:(id)arg0 ;


@end


#endif
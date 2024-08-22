// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSCURATIONMODEL_V1_H
#define CLSCURATIONMODEL_V1_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "CLSAestheticsModel.h"
#import "CLSFaceModel.h"
#import "CLSJunkClassificationModel.h"
#import "CLSMediaAnalysisModel.h"
#import "CLSMediaPreAnalysisModel.h"
#import "CLSSceneModel.h"

@interface CLSCurationModel_v1 : NSObject

@property (readonly) CLSAestheticsModel *aestheticsModel; // ivar: _aestheticsModel
@property (readonly) NSDictionary *confidenceThresholdBySceneIdentifierForBabyChildTeenAdultAndPetScenes; // ivar: _confidenceThresholdBySceneIdentifierForBabyChildTeenAdultAndPetScenes
@property (readonly) NSDictionary *confidenceThresholdBySceneIdentifierForBabyScenes; // ivar: _confidenceThresholdBySceneIdentifierForBabyScenes
@property (readonly) NSDictionary *confidenceThresholdBySceneIdentifierForInterestingScenes; // ivar: _confidenceThresholdBySceneIdentifierForInterestingScenes
@property (readonly) NSDictionary *confidenceThresholdBySceneIdentifierForUtilityScenes; // ivar: _confidenceThresholdBySceneIdentifierForUtilityScenes
@property (readonly) NSDictionary *confidenceThresholdBySceneIdentifierForWhiteboardScenes; // ivar: _confidenceThresholdBySceneIdentifierForWhiteboardScenes
@property (readonly) CLSFaceModel *faceModel; // ivar: _faceModel
@property (readonly) CGFloat faceSizeLowerLimit; // ivar: _faceSizeLowerLimit
@property (readonly) CGFloat faceSizeUpperLimit; // ivar: _faceSizeUpperLimit
@property (readonly) CLSJunkClassificationModel *junkClassificationModel; // ivar: _junkClassificationModel
@property (readonly) CLSMediaAnalysisModel *mediaAnalysisModel; // ivar: _mediaAnalysisModel
@property (readonly) CLSMediaPreAnalysisModel *mediaPreAnalysisModel; // ivar: _mediaPreAnalysisModel
@property (readonly) CGFloat minimumDurationForHighFramerateVideoToNotBeJunk;
@property (readonly) CGFloat minimumDurationForTimelapseVideoToNotBeJunk;
@property (readonly) CGFloat minimumDurationForVideoToNotBeJunk;
@property (readonly) CLSSceneModel *sceneModel; // ivar: _sceneModel


+(id)baseSpecificationWithSpecification:(id)arg0 ;
+(short)uninterestingAudioClassifications;
-(BOOL)asset:(id)arg0 isAestheticallyAwesomeWithContext:(id)arg1 ;
-(BOOL)assetIsJunkWithSceneClassifications:(id)arg0 confidenceThresholdBySceneIdentifierForScenesPreventingJunking:(id)arg1 confidenceThresholdBySceneIdentifierForJunkingScenes:(id)arg2 confidenceThresholdBySceneIdentifierForScenesPreventingSceneBasedJunking:(id)arg3 forMemories:(BOOL)arg4 ;
-(BOOL)avoidIfPossibleForKeyAssetWithAsset:(id)arg0 statistics:(struct ? *)arg1 ;
-(BOOL)avoidIfPossibleForMemoryKeyAssetWithAsset:(id)arg0 ;
-(BOOL)hasInterestingAudioClassificationWithAsset:(id)arg0 ;
-(BOOL)hasInterestingScenesWithAsset:(id)arg0 ;
-(BOOL)hasPoorResolutionWithAsset:(id)arg0 ;
-(BOOL)imageAssetIsJunkForMemoriesFromSceneAndJunkClassifications:(id)arg0 forKeyAsset:(BOOL)arg1 forMemories:(BOOL)arg2 ;
-(BOOL)imageAssetIsJunkFromSceneAndJunkClassifications:(id)arg0 ;
-(BOOL)isAestheticallyAwesomeWithAsset:(id)arg0 ;
-(BOOL)isAestheticallyPrettyGoodWithAsset:(id)arg0 ;
-(BOOL)isBadQualityForImageKeyAssetWithAsset:(id)arg0 statistics:(struct ? *)arg1 ;
-(BOOL)isBlurryWithAsset:(id)arg0 ;
-(BOOL)isGoldWithAsset:(id)arg0 ;
-(BOOL)isInhabitedWithAsset:(id)arg0 ;
-(BOOL)isInterestingHDRWithAsset:(id)arg0 ;
-(BOOL)isInterestingLivePhotoWithAsset:(id)arg0 ;
-(BOOL)isInterestingPanoramaWithAsset:(id)arg0 ;
-(BOOL)isInterestingReframeWithAsset:(id)arg0 ;
-(BOOL)isInterestingSDOFWithAsset:(id)arg0 ;
-(BOOL)isInterestingVideoWithAsset:(id)arg0 ;
-(BOOL)isJunkWithJunkClassification:(id)arg0 ;
-(BOOL)isJunkWithSignal:(id)arg0 isReliable:(*BOOL)arg1 ;
-(BOOL)isNonMemorableWithAsset:(id)arg0 ;
-(BOOL)isRegularGemWithAsset:(id)arg0 ;
-(BOOL)isShinyGemWithAsset:(id)arg0 ;
-(BOOL)isTragicFailureWithImageAsset:(id)arg0 ;
-(BOOL)isUtilityForImageAsset:(id)arg0 ;
-(BOOL)isUtilityForMemoriesForImageAsset:(id)arg0 ;
-(BOOL)isUtilityForMemoriesWithAsset:(id)arg0 curationContext:(id)arg1 ;
-(BOOL)isUtilityForMemoriesWithVideoAsset:(id)arg0 ;
-(BOOL)isUtilityForSyndicationWithAsset:(id)arg0 ;
-(BOOL)isUtilityForVideoAsset:(id)arg0 ;
-(BOOL)isUtilityWithAsset:(id)arg0 ;
-(CGFloat)scoreWithAsset:(id)arg0 inContext:(id)arg1 ;
-(float)interactionScoreWithAsset:(id)arg0 ;
-(id)faceInformationSummaryWithFaces:(id)arg0 detectionTraitsByFaceLocalIdentifier:(id)arg1 verifiedPersonUUIDs:(id)arg2 hiddenPersonUUIDs:(id)arg3 personUUIDByMergeCandidateUUID:(id)arg4 ;
-(id)initForTesting;
-(id)initWithCurationModelSpecification:(id)arg0 ;
-(id)sceneIdentifiersOfInterestingScenes;
-(short)interestingAudioClassificationsWithAsset:(id)arg0 ;
-(void)enumerateClassificationBasedSignalModelsUsingBlock:(id)arg0 ;
-(void)enumerateSignalModelsUsingBlock:(id)arg0 ;


@end


#endif
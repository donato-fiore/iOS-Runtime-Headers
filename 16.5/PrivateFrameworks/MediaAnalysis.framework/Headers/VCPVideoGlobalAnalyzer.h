// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPVIDEOGLOBALANALYZER_H
#define VCPVIDEOGLOBALANALYZER_H


#import <Foundation/Foundation.h>


@interface VCPVideoGlobalAnalyzer : NSObject



-(BOOL)checkCameraZoom:(struct ? )arg0 cameraMotionResults:(id)arg1 ;
-(BOOL)hasMeaningfulSceneSegment:(id)arg0 withFpsRate:(float)arg1 ;
-(BOOL)isJunkTimeRange:(struct ? )arg0 basedOnResults:(id)arg1 ;
-(float)analyzeOverallQuality:(id)arg0 withFpsRate:(float)arg1 ;
-(float)assetActionScoreFromAnalysis:(id)arg0 ;
-(float)assetActivityLevelFromAnalysisResults:(id)arg0 ;
-(float)assetCameraMotionScoreFromAnalysis:(id)arg0 ;
-(float)assetExpressionScoreFromAnalysis:(id)arg0 ;
-(float)assetJunkScoreFromAnalysis:(id)arg0 ;
-(float)assetQualityScoreFromAnalysis:(id)arg0 withFpsRate:(float)arg1 ;
-(float)assetVoiceScoreFromAnalysis:(id)arg0 ;
-(float)cameraActivityfromQuality:(float)arg0 ;
-(float)scaleForTimeRange:(struct ? )arg0 basedOnFace:(id)arg1 ;
-(float)subjectActivityInTimeRange:(struct ? )arg0 fromResults:(id)arg1 ;
-(int)generateLivePhotoRecommendationForResults:(id)arg0 andPrivateResults:(id)arg1 usingFaceAction:(BOOL)arg2 ;
-(int)setActivityLevel:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPPROTOASSETANALYSIS_H
#define VCPPROTOASSETANALYSIS_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface VCPProtoAssetAnalysis : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *assetAdjustedFingerprint; // ivar: _assetAdjustedFingerprint
@property (retain, nonatomic) NSString *assetIdentifier; // ivar: _assetIdentifier
@property (retain, nonatomic) NSString *assetMasterFingerprint; // ivar: _assetMasterFingerprint
@property (nonatomic) CGFloat assetModificationDate; // ivar: _assetModificationDate
@property (nonatomic) CGFloat date; // ivar: _date
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (readonly, nonatomic) BOOL hasAssetAdjustedFingerprint;
@property (nonatomic) BOOL hasQuality;
@property (nonatomic) BOOL hasStatsFlags;
@property (nonatomic) BOOL hasTypesWide;
@property (retain, nonatomic) NSMutableArray *imageBlurResults; // ivar: _imageBlurResults
@property (retain, nonatomic) NSMutableArray *imageCompositionResults; // ivar: _imageCompositionResults
@property (retain, nonatomic) NSMutableArray *imageExposureResults; // ivar: _imageExposureResults
@property (retain, nonatomic) NSMutableArray *imageFaceResults; // ivar: _imageFaceResults
@property (retain, nonatomic) NSMutableArray *imageFeatureResults; // ivar: _imageFeatureResults
@property (retain, nonatomic) NSMutableArray *imageHumanPoseResults; // ivar: _imageHumanPoseResults
@property (retain, nonatomic) NSMutableArray *imageJunkResults; // ivar: _imageJunkResults
@property (retain, nonatomic) NSMutableArray *imagePetsFaceResults; // ivar: _imagePetsFaceResults
@property (retain, nonatomic) NSMutableArray *imagePetsResults; // ivar: _imagePetsResults
@property (retain, nonatomic) NSMutableArray *imageSaliencyResults; // ivar: _imageSaliencyResults
@property (retain, nonatomic) NSMutableArray *imageSceneprintResults; // ivar: _imageSceneprintResults
@property (retain, nonatomic) NSMutableArray *imageShotTypeResults; // ivar: _imageShotTypeResults
@property (retain, nonatomic) NSMutableArray *livePhotoEffectsResults; // ivar: _livePhotoEffectsResults
@property (retain, nonatomic) NSMutableArray *livePhotoHumanActionClassificationResults; // ivar: _livePhotoHumanActionClassificationResults
@property (retain, nonatomic) NSMutableArray *livePhotoKeyFrameResults; // ivar: _livePhotoKeyFrameResults
@property (retain, nonatomic) NSMutableArray *livePhotoKeyFrameStillResults; // ivar: _livePhotoKeyFrameStillResults
@property (retain, nonatomic) NSMutableArray *livePhotoRecommendationResults; // ivar: _livePhotoRecommendationResults
@property (retain, nonatomic) NSMutableArray *livePhotoSharpnessResults; // ivar: _livePhotoSharpnessResults
@property (retain, nonatomic) NSMutableArray *movieActivityLevelResults; // ivar: _movieActivityLevelResults
@property (retain, nonatomic) NSMutableArray *movieApplauseResults; // ivar: _movieApplauseResults
@property (retain, nonatomic) NSMutableArray *movieBabbleResults; // ivar: _movieBabbleResults
@property (retain, nonatomic) NSMutableArray *movieCameraMotionResults; // ivar: _movieCameraMotionResults
@property (retain, nonatomic) NSMutableArray *movieCheeringResults; // ivar: _movieCheeringResults
@property (retain, nonatomic) NSMutableArray *movieClassificationResults; // ivar: _movieClassificationResults
@property (retain, nonatomic) NSMutableArray *movieFaceResults; // ivar: _movieFaceResults
@property (retain, nonatomic) NSMutableArray *movieFaceprintResults; // ivar: _movieFaceprintResults
@property (retain, nonatomic) NSMutableArray *movieFeatureResults; // ivar: _movieFeatureResults
@property (retain, nonatomic) NSMutableArray *movieFineSubjectMotionResults; // ivar: _movieFineSubjectMotionResults
@property (retain, nonatomic) NSMutableArray *movieHighlightResults; // ivar: _movieHighlightResults
@property (retain, nonatomic) NSMutableArray *movieHighlightScoreResults; // ivar: _movieHighlightScoreResults
@property (retain, nonatomic) NSMutableArray *movieHumanActionResults; // ivar: _movieHumanActionResults
@property (retain, nonatomic) NSMutableArray *movieHumanPoseResults; // ivar: _movieHumanPoseResults
@property (retain, nonatomic) NSMutableArray *movieInterestingnessResults; // ivar: _movieInterestingnessResults
@property (retain, nonatomic) NSMutableArray *movieLaughterResults; // ivar: _movieLaughterResults
@property (retain, nonatomic) NSMutableArray *movieLoudnessResults; // ivar: _movieLoudnessResults
@property (retain, nonatomic) NSMutableArray *movieMovingObjectResults; // ivar: _movieMovingObjectResults
@property (retain, nonatomic) NSMutableArray *movieMusicResults; // ivar: _movieMusicResults
@property (retain, nonatomic) NSMutableArray *movieObstructionResults; // ivar: _movieObstructionResults
@property (retain, nonatomic) NSMutableArray *movieOrientationResults; // ivar: _movieOrientationResults
@property (retain, nonatomic) NSMutableArray *moviePetsFaceResults; // ivar: _moviePetsFaceResults
@property (retain, nonatomic) NSMutableArray *moviePetsResults; // ivar: _moviePetsResults
@property (retain, nonatomic) NSMutableArray *moviePreEncodeResults; // ivar: _moviePreEncodeResults
@property (retain, nonatomic) NSMutableArray *movieQualityResults; // ivar: _movieQualityResults
@property (retain, nonatomic) NSMutableArray *movieSaliencyResults; // ivar: _movieSaliencyResults
@property (retain, nonatomic) NSMutableArray *movieSceneResults; // ivar: _movieSceneResults
@property (retain, nonatomic) NSMutableArray *movieSceneprintResults; // ivar: _movieSceneprintResults
@property (retain, nonatomic) NSMutableArray *movieStabilizationResults; // ivar: _movieStabilizationResults
@property (retain, nonatomic) NSMutableArray *movieSubjectMotionResults; // ivar: _movieSubjectMotionResults
@property (retain, nonatomic) NSMutableArray *movieSubtleMotionResults; // ivar: _movieSubtleMotionResults
@property (retain, nonatomic) NSMutableArray *movieSummaryResults; // ivar: _movieSummaryResults
@property (retain, nonatomic) NSMutableArray *movieUtteranceResults; // ivar: _movieUtteranceResults
@property (retain, nonatomic) NSMutableArray *movieVoiceResults; // ivar: _movieVoiceResults
@property (nonatomic) CGFloat quality; // ivar: _quality
@property (nonatomic) NSUInteger statsFlags; // ivar: _statsFlags
@property (nonatomic) unsigned int types; // ivar: _types
@property (nonatomic) NSUInteger typesWide; // ivar: _typesWide
@property (nonatomic) unsigned int version; // ivar: _version


+(id)imageAnalysisFromLegacyDictionary:(id)arg0 ;
+(id)movieAnalysisFromLegacyDictionary:(id)arg0 ;
-(BOOL)exportResultsWithPropertyKey:(id)arg0 toLegacyDictionary:(id)arg1 withKey:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(BOOL)setAttributesFromLegacyDictionary:(id)arg0 ;
-(BOOL)setResults:(id)arg0 withClass:(Class)arg1 forPropertyKey:(id)arg2 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)exportToLegacyDictionary;
-(id)imageBlurResultsAtIndex:(NSUInteger)arg0 ;
-(id)imageCompositionResultsAtIndex:(NSUInteger)arg0 ;
-(id)imageExposureResultsAtIndex:(NSUInteger)arg0 ;
-(id)imageFaceResultsAtIndex:(NSUInteger)arg0 ;
-(id)imageFeatureResultsAtIndex:(NSUInteger)arg0 ;
-(id)imageHumanPoseResultsAtIndex:(NSUInteger)arg0 ;
-(id)imageJunkResultsAtIndex:(NSUInteger)arg0 ;
-(id)imagePetsFaceResultsAtIndex:(NSUInteger)arg0 ;
-(id)imagePetsResultsAtIndex:(NSUInteger)arg0 ;
-(id)imageSaliencyResultsAtIndex:(NSUInteger)arg0 ;
-(id)imageSceneprintResultsAtIndex:(NSUInteger)arg0 ;
-(id)imageShotTypeResultsAtIndex:(NSUInteger)arg0 ;
-(id)livePhotoEffectsResultsAtIndex:(NSUInteger)arg0 ;
-(id)livePhotoHumanActionClassificationResultsAtIndex:(NSUInteger)arg0 ;
-(id)livePhotoKeyFrameResultsAtIndex:(NSUInteger)arg0 ;
-(id)livePhotoKeyFrameStillResultsAtIndex:(NSUInteger)arg0 ;
-(id)livePhotoRecommendationResultsAtIndex:(NSUInteger)arg0 ;
-(id)livePhotoSharpnessResultsAtIndex:(NSUInteger)arg0 ;
-(id)movieActivityLevelResultsAtIndex:(NSUInteger)arg0 ;
-(id)movieApplauseResultsAtIndex:(NSUInteger)arg0 ;
-(id)movieBabbleResultsAtIndex:(NSUInteger)arg0 ;
-(id)movieCameraMotionResultsAtIndex:(NSUInteger)arg0 ;
-(id)movieCheeringResultsAtIndex:(NSUInteger)arg0 ;
-(id)movieClassificationResultsAtIndex:(NSUInteger)arg0 ;
-(id)movieFaceResultsAtIndex:(NSUInteger)arg0 ;
-(id)movieFaceprintResultsAtIndex:(NSUInteger)arg0 ;
-(id)movieFeatureResultsAtIndex:(NSUInteger)arg0 ;
-(id)movieFineSubjectMotionResultsAtIndex:(NSUInteger)arg0 ;
-(id)movieHighlightResultsAtIndex:(NSUInteger)arg0 ;
-(id)movieHighlightScoreResultsAtIndex:(NSUInteger)arg0 ;
-(id)movieHumanActionResultsAtIndex:(NSUInteger)arg0 ;
-(id)movieHumanPoseResultsAtIndex:(NSUInteger)arg0 ;
-(id)movieInterestingnessResultsAtIndex:(NSUInteger)arg0 ;
-(id)movieLaughterResultsAtIndex:(NSUInteger)arg0 ;
-(id)movieLoudnessResultsAtIndex:(NSUInteger)arg0 ;
-(id)movieMovingObjectResultsAtIndex:(NSUInteger)arg0 ;
-(id)movieMusicResultsAtIndex:(NSUInteger)arg0 ;
-(id)movieObstructionResultsAtIndex:(NSUInteger)arg0 ;
-(id)movieOrientationResultsAtIndex:(NSUInteger)arg0 ;
-(id)moviePetsFaceResultsAtIndex:(NSUInteger)arg0 ;
-(id)moviePetsResultsAtIndex:(NSUInteger)arg0 ;
-(id)moviePreEncodeResultsAtIndex:(NSUInteger)arg0 ;
-(id)movieQualityResultsAtIndex:(NSUInteger)arg0 ;
-(id)movieSaliencyResultsAtIndex:(NSUInteger)arg0 ;
-(id)movieSceneResultsAtIndex:(NSUInteger)arg0 ;
-(id)movieSceneprintResultsAtIndex:(NSUInteger)arg0 ;
-(id)movieStabilizationResultsAtIndex:(NSUInteger)arg0 ;
-(id)movieSubjectMotionResultsAtIndex:(NSUInteger)arg0 ;
-(id)movieSubtleMotionResultsAtIndex:(NSUInteger)arg0 ;
-(id)movieSummaryResultsAtIndex:(NSUInteger)arg0 ;
-(id)movieUtteranceResultsAtIndex:(NSUInteger)arg0 ;
-(id)movieVoiceResultsAtIndex:(NSUInteger)arg0 ;
-(void)addImageBlurResults:(id)arg0 ;
-(void)addImageCompositionResults:(id)arg0 ;
-(void)addImageExposureResults:(id)arg0 ;
-(void)addImageFaceResults:(id)arg0 ;
-(void)addImageFeatureResults:(id)arg0 ;
-(void)addImageHumanPoseResults:(id)arg0 ;
-(void)addImageJunkResults:(id)arg0 ;
-(void)addImagePetsFaceResults:(id)arg0 ;
-(void)addImagePetsResults:(id)arg0 ;
-(void)addImageSaliencyResults:(id)arg0 ;
-(void)addImageSceneprintResults:(id)arg0 ;
-(void)addImageShotTypeResults:(id)arg0 ;
-(void)addLivePhotoEffectsResults:(id)arg0 ;
-(void)addLivePhotoHumanActionClassificationResults:(id)arg0 ;
-(void)addLivePhotoKeyFrameResults:(id)arg0 ;
-(void)addLivePhotoKeyFrameStillResults:(id)arg0 ;
-(void)addLivePhotoRecommendationResults:(id)arg0 ;
-(void)addLivePhotoSharpnessResults:(id)arg0 ;
-(void)addMovieActivityLevelResults:(id)arg0 ;
-(void)addMovieApplauseResults:(id)arg0 ;
-(void)addMovieBabbleResults:(id)arg0 ;
-(void)addMovieCameraMotionResults:(id)arg0 ;
-(void)addMovieCheeringResults:(id)arg0 ;
-(void)addMovieClassificationResults:(id)arg0 ;
-(void)addMovieFaceResults:(id)arg0 ;
-(void)addMovieFaceprintResults:(id)arg0 ;
-(void)addMovieFeatureResults:(id)arg0 ;
-(void)addMovieFineSubjectMotionResults:(id)arg0 ;
-(void)addMovieHighlightResults:(id)arg0 ;
-(void)addMovieHighlightScoreResults:(id)arg0 ;
-(void)addMovieHumanActionResults:(id)arg0 ;
-(void)addMovieHumanPoseResults:(id)arg0 ;
-(void)addMovieInterestingnessResults:(id)arg0 ;
-(void)addMovieLaughterResults:(id)arg0 ;
-(void)addMovieLoudnessResults:(id)arg0 ;
-(void)addMovieMovingObjectResults:(id)arg0 ;
-(void)addMovieMusicResults:(id)arg0 ;
-(void)addMovieObstructionResults:(id)arg0 ;
-(void)addMovieOrientationResults:(id)arg0 ;
-(void)addMoviePetsFaceResults:(id)arg0 ;
-(void)addMoviePetsResults:(id)arg0 ;
-(void)addMoviePreEncodeResults:(id)arg0 ;
-(void)addMovieQualityResults:(id)arg0 ;
-(void)addMovieSaliencyResults:(id)arg0 ;
-(void)addMovieSceneResults:(id)arg0 ;
-(void)addMovieSceneprintResults:(id)arg0 ;
-(void)addMovieStabilizationResults:(id)arg0 ;
-(void)addMovieSubjectMotionResults:(id)arg0 ;
-(void)addMovieSubtleMotionResults:(id)arg0 ;
-(void)addMovieSummaryResults:(id)arg0 ;
-(void)addMovieUtteranceResults:(id)arg0 ;
-(void)addMovieVoiceResults:(id)arg0 ;
-(void)clearImageBlurResults;
-(void)clearImageCompositionResults;
-(void)clearImageExposureResults;
-(void)clearImageFaceResults;
-(void)clearImageFeatureResults;
-(void)clearImageHumanPoseResults;
-(void)clearImageJunkResults;
-(void)clearImagePetsFaceResults;
-(void)clearImagePetsResults;
-(void)clearImageSaliencyResults;
-(void)clearImageSceneprintResults;
-(void)clearImageShotTypeResults;
-(void)clearLivePhotoEffectsResults;
-(void)clearLivePhotoHumanActionClassificationResults;
-(void)clearLivePhotoKeyFrameResults;
-(void)clearLivePhotoKeyFrameStillResults;
-(void)clearLivePhotoRecommendationResults;
-(void)clearLivePhotoSharpnessResults;
-(void)clearMovieActivityLevelResults;
-(void)clearMovieApplauseResults;
-(void)clearMovieBabbleResults;
-(void)clearMovieCameraMotionResults;
-(void)clearMovieCheeringResults;
-(void)clearMovieClassificationResults;
-(void)clearMovieFaceResults;
-(void)clearMovieFaceprintResults;
-(void)clearMovieFeatureResults;
-(void)clearMovieFineSubjectMotionResults;
-(void)clearMovieHighlightResults;
-(void)clearMovieHighlightScoreResults;
-(void)clearMovieHumanActionResults;
-(void)clearMovieHumanPoseResults;
-(void)clearMovieInterestingnessResults;
-(void)clearMovieLaughterResults;
-(void)clearMovieLoudnessResults;
-(void)clearMovieMovingObjectResults;
-(void)clearMovieMusicResults;
-(void)clearMovieObstructionResults;
-(void)clearMovieOrientationResults;
-(void)clearMoviePetsFaceResults;
-(void)clearMoviePetsResults;
-(void)clearMoviePreEncodeResults;
-(void)clearMovieQualityResults;
-(void)clearMovieSaliencyResults;
-(void)clearMovieSceneResults;
-(void)clearMovieSceneprintResults;
-(void)clearMovieStabilizationResults;
-(void)clearMovieSubjectMotionResults;
-(void)clearMovieSubtleMotionResults;
-(void)clearMovieSummaryResults;
-(void)clearMovieUtteranceResults;
-(void)clearMovieVoiceResults;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
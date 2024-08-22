// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGPHOTOSCHALLENGEMETRICEVENT_H
#define PGPHOTOSCHALLENGEMETRICEVENT_H

@class NSDictionary, NSString;


#import "PGAbstractMetricEvent.h"
#import "PGManagerWorkingContext.h"
#import "PGPhotosChallengeMetricEvent.h"
#import "PGPrecisionRecallEvaluation.h"
#import "PGPhotosChallengeMetricEventFetchHelper.h"

@interface PGPhotosChallengeMetricEvent : PGAbstractMetricEvent {
    PGManagerWorkingContext *_workingContext;
    PGPhotosChallengeMetricEvent *_subMetricEvent;
    NSDictionary *_payload;
}


@property (nonatomic) NSUInteger algorithmVersion; // ivar: _algorithmVersion
@property (retain, nonatomic) PGPrecisionRecallEvaluation *evaluation; // ivar: _evaluation
@property (nonatomic) NSUInteger graphSchemaVersion; // ivar: _graphSchemaVersion
@property (retain, nonatomic) PGPhotosChallengeMetricEventFetchHelper *metricsCache; // ivar: _metricsCache
@property (readonly, nonatomic) NSString *photoLibrarySize; // ivar: _photoLibrarySize
@property (nonatomic) NSUInteger photosModelVersion; // ivar: _photosModelVersion
@property (nonatomic) unsigned short questionMetricType; // ivar: _questionMetricType
@property (retain, nonatomic) NSString *questionTypeString; // ivar: _questionTypeString
@property (nonatomic) NSUInteger questionVersion; // ivar: _questionVersion


+(BOOL)_isHighPrecisionCityscapeAsset:(id)arg0 ;
+(BOOL)_isHighPrecisionLandscapeAsset:(id)arg0 ;
+(NSUInteger)algorithmVersionFromQuestionMetricType:(unsigned short)arg0 ;
+(id)_isVIPStringForResult:(BOOL)arg0 ;
+(id)_passedFilteringStringForResult:(BOOL)arg0 ;
+(id)_passedHighPrecisionStringForResult:(BOOL)arg0 ;
+(id)allMetricEventsWithGraphManager:(id)arg0 ;
+(id)meaningLabelFromMeaningQuestionMetricType:(unsigned short)arg0 ;
+(id)personActivityMeaningLabelFromMeaningQuestionMetricType:(unsigned short)arg0 ;
+(id)questionEntityTypesFromQuestionMetricType:(unsigned short)arg0 ;
+(id)relationshipLabelFromRelationshipQuestionMetricType:(unsigned short)arg0 ;
+(id)stringFromQuestionMetricType:(unsigned short)arg0 ;
+(unsigned short)questionTypeFromQuestionMetricType:(unsigned short)arg0 ;
+(unsigned short)wallpaperSuggestionSubtypeForQuestionMetricType:(unsigned short)arg0 ;
-(BOOL)_inferenceResultForPersonNode:(id)arg0 questionMetricType:(unsigned short)arg1 ;
-(id)_ageCategoryInferenceResultsForAgeCategoryByPersonUUIDs:(id)arg0 ;
-(id)_businessInferenceResultsForBusinessIdByAssetIds:(id)arg0 ;
-(id)_featuredPhotoInferenceResultsForAnswerDateByAssetIds:(id)arg0 questionMetricType:(unsigned short)arg1 ;
-(id)_fetchPersonFromAsset:(id)arg0 detectionType:(short)arg1 ;
-(id)_frequentLocationInferenceResultsForLocationByAssetIds:(id)arg0 locationType:(id)arg1 ;
-(id)_groundTruthByAssetIdentifiersFromQuestions:(id)arg0 ;
-(id)_groundTruthByPersonUUIDFromQuestions:(id)arg0 ;
-(id)_groundTruthForAgeCategoryFromQuestions:(id)arg0 ;
-(id)_groundTruthForBusinessFromQuestions:(id)arg0 ;
-(id)_groundTruthForFeaturedPhotoFromQuestions:(id)arg0 ;
-(id)_groundTruthForFrequentLocationFromQuestions:(id)arg0 ;
-(id)_groundTruthForHolidayFromQuestions:(id)arg0 ;
-(id)_groundTruthForNamingFromQuestions:(id)arg0 ;
-(id)_groundTruthForPublicEventFromQuestions:(id)arg0 ;
-(id)_holidayInferenceResultsForHolidayNameByAssetIds:(id)arg0 ;
-(id)_meaningInferenceResultsForMeaningLabel:(id)arg0 assetIds:(id)arg1 ;
-(id)_namingInferenceResultsForContactIdentifierByPersonUUIDs:(id)arg0 ;
-(id)_personActivityMeaningInferenceResultsForPersonActivityMeaningLabel:(id)arg0 assetIds:(id)arg1 ;
-(id)_petInferenceResultsForAssetIds:(id)arg0 ;
-(id)_publicEventInferenceResultsForPublicEventIdByAssetIds:(id)arg0 ;
-(id)_reasonResultByAssetSyndicationIdentifierForQuestions:(id)arg0 ;
-(id)_relationshipInferenceResultsForQuestionMetricType:(unsigned short)arg0 personUUIDs:(id)arg1 ;
-(id)_syndicatedAssetFromQuestion:(id)arg0 ;
-(id)_syndicatedAssetsGroundTruthByAssetIdentifiersFromQuestions:(id)arg0 ;
-(id)_syndicatedAssetsInferenceResultsForAssetSyndicationIdentifiers:(id)arg0 ;
-(id)_vipPersonIdentifiersWithCurationContext:(id)arg0 ;
-(id)_vipPetIdentifiers;
-(id)identifier;
-(id)initWithWorkingContext:(id)arg0 questionMetricType:(unsigned short)arg1 metricEventFetchHelper:(id)arg2 ;
-(id)memoryCategorySubCategoryByQuestionMetricType;
-(id)payload;
-(id)payloadForVerification;
-(void)_gatherMetricsForAgeCategoryQuestions:(id)arg0 progressBlock:(id)arg1 ;
-(void)_gatherMetricsForBusinessQuestions:(id)arg0 progressBlock:(id)arg1 ;
-(void)_gatherMetricsForCameraLibrarySwitchQuestions:(id)arg0 progressBlock:(id)arg1 ;
-(void)_gatherMetricsForFeaturedPhotoQuestions:(id)arg0 questionMetricType:(unsigned short)arg1 progressBlock:(id)arg2 ;
-(void)_gatherMetricsForFrequentLocationQuestions:(id)arg0 questionMetricType:(unsigned short)arg1 progressBlock:(id)arg2 ;
-(void)_gatherMetricsForHolidayQuestions:(id)arg0 progressBlock:(id)arg1 ;
-(void)_gatherMetricsForMeaningQuestions:(id)arg0 questionMetricType:(unsigned short)arg1 progressBlock:(id)arg2 ;
-(void)_gatherMetricsForMemoryQuestions:(id)arg0 questionMetricType:(unsigned short)arg1 progressBlock:(id)arg2 ;
-(void)_gatherMetricsForNamingQuestions:(id)arg0 progressBlock:(id)arg1 ;
-(void)_gatherMetricsForPersonActivityMeaningQuestions:(id)arg0 questionMetricType:(unsigned short)arg1 progressBlock:(id)arg2 ;
-(void)_gatherMetricsForPetKnowledgeQuestions:(id)arg0 progressBlock:(id)arg1 ;
-(void)_gatherMetricsForPetQuestions:(id)arg0 progressBlock:(id)arg1 ;
-(void)_gatherMetricsForPublicEventQuestions:(id)arg0 progressBlock:(id)arg1 ;
-(void)_gatherMetricsForRelationshipQuestions:(id)arg0 questionMetricType:(unsigned short)arg1 progressBlock:(id)arg2 ;
-(void)_gatherMetricsForSharedLibraryAssetsQuestions:(id)arg0 progressBlock:(id)arg1 ;
-(void)_gatherMetricsForSharedLibraryStartQuestions:(id)arg0 progressBlock:(id)arg1 ;
-(void)_gatherMetricsForSyndicatedAssetsQuestions:(id)arg0 progressBlock:(id)arg1 ;
-(void)_gatherMetricsForTripKeyQuestions:(id)arg0 progressBlock:(id)arg1 ;
-(void)_gatherMetricsForWallpaperQuestions:(id)arg0 questionMetricType:(unsigned short)arg1 progressBlock:(id)arg2 ;
-(void)gatherMetricsWithProgressBlock:(id)arg0 ;
-(void)setSubMetricEvent:(id)arg0 ;


@end


#endif
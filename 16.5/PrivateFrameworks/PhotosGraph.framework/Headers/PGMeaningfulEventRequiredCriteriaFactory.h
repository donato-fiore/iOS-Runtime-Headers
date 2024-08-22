// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGMEANINGFULEVENTREQUIREDCRITERIAFACTORY_H
#define PGMEANINGFULEVENTREQUIREDCRITERIAFACTORY_H


#import <Foundation/Foundation.h>


@interface PGMeaningfulEventRequiredCriteriaFactory : NSObject



+(id)_amusementParkCriteriaArrayWithGraph:(id)arg0 sceneTaxonomy:(id)arg1 ;
+(id)_anniversaryCriteriaWithGraph:(id)arg0 ;
+(id)_beachingCriteriaWithGraph:(id)arg0 sceneTaxonomy:(id)arg1 ;
+(id)_beachingSceneNodesWithGraph:(id)arg0 ;
+(id)_celebrationCriteriaWithGraph:(id)arg0 ;
+(id)_climbingCriteriaWithGraph:(id)arg0 sceneTaxonomy:(id)arg1 ;
+(id)_concertCriteriaArrayForInferenceType:(NSUInteger)arg0 graph:(id)arg1 ;
+(id)_concertCriteriaArrayForMeaningInferenceWithGraph:(id)arg0 ;
+(id)_concertCriteriaArrayForPublicEventInferenceWithGraph:(id)arg0 ;
+(id)_concertSceneNodesInGraph:(id)arg0 ;
+(id)_danceCriteriaWithGraph:(id)arg0 ;
+(id)_divingCriteriaWithGraph:(id)arg0 sceneTaxonomy:(id)arg1 ;
+(id)_divingSceneNodesWithGraph:(id)arg0 ;
+(id)_entertainmentCriteriaWithGraph:(id)arg0 ;
+(id)_festivalCriteriaArrayWithGraph:(id)arg0 ;
+(id)_hikingCriteriaWithGraph:(id)arg0 sceneTaxonomy:(id)arg1 ;
+(id)_hikingSceneNodesWithGraph:(id)arg0 ;
+(id)_museumCriteriaArrayForInferenceType:(NSUInteger)arg0 graph:(id)arg1 ;
+(id)_museumCriteriaArrayForMeaningInferenceWithGraph:(id)arg0 ;
+(id)_museumCriteriaArrayForPublicEventInferenceWithGraph:(id)arg0 ;
+(id)_museumSceneNodesInGraph:(id)arg0 ;
+(id)_museumSceneTraitInGraph:(id)arg0 minimumNumberOfHighConfidenceAssets:(NSUInteger)arg1 ;
+(id)_negativeHikingSceneNodesWithGraph:(id)arg0 ;
+(id)_negativeMuseumSceneNodesInGraph:(id)arg0 ;
+(id)_negativeSceneNodesForBeachingWithGraph:(id)arg0 ;
+(id)_nightOutCriteriaArrayWithGraph:(id)arg0 sceneTaxonomy:(id)arg1 ;
+(id)_performanceCriteriaWithGraph:(id)arg0 ;
+(id)_publicEventCriteriaForCategoryWithName:(id)arg0 inGraph:(id)arg1 ;
+(id)_requiredCriteriaForIdentifiers:(id)arg0 inferenceType:(NSUInteger)arg1 graph:(id)arg2 sceneTaxonomy:(id)arg3 ;
+(id)_restaurantCriteriaByCriteriaForIdentifiers:(id)arg0 withGraph:(id)arg1 sceneTaxonomy:(id)arg2 ;
+(id)_socialGroupGatheringCriteriaWithGraph:(id)arg0 ;
+(id)_specialAmusementParkCriteriaWithGraph:(id)arg0 ;
+(id)_sportEventCriteriaArrayForInferenceType:(NSUInteger)arg0 graph:(id)arg1 ;
+(id)_sportEventCriteriaArrayForMeaningInferenceWithGraph:(id)arg0 ;
+(id)_sportEventCriteriaArrayForPublicEventInferenceWithGraph:(id)arg0 ;
+(id)_sportEventScenesTraitWithGraph:(id)arg0 ;
+(id)_theaterCriteriaWithGraph:(id)arg0 ;
+(id)_weddingCriteriaWithGraph:(id)arg0 sceneTaxonomy:(id)arg1 ;
+(id)_weddingSceneNodesWithGraph:(id)arg0 includeWedding:(BOOL)arg1 sceneTaxonomy:(id)arg2 ;
+(id)_winterSportCriteriaWithGraph:(id)arg0 sceneTaxonomy:(id)arg1 ;
+(id)_winterSportSceneNodesWithGraph:(id)arg0 sceneTaxonomy:(id)arg1 ;
+(id)availableMeaningLabels;
+(id)availablePersonActivityMeaningLabels;
+(id)locationsTraitNotMatchingFrequentLocationsForGraph:(id)arg0 ;
+(id)locationsTraitNotMatchingPeopleHomeWorkLocationsForGraph:(id)arg0 ;
+(id)requiredCriteriaByIdentifierWithGraph:(id)arg0 inferenceType:(NSUInteger)arg1 sceneTaxonomy:(id)arg2 ;
+(id)requiredCriteriaForIdentifiers:(id)arg0 inferenceType:(NSUInteger)arg1 graph:(id)arg2 sceneTaxonomy:(id)arg3 ;
+(void)_birthdayCriteriaWithGraph:(id)arg0 strongBirthdayCriteria:(*id)arg1 weakBirthdayCriteria:(*id)arg2 sceneTaxonomy:(id)arg3 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGCURATIONCRITERIAFACTORY_H
#define PGCURATIONCRITERIAFACTORY_H

@class NSMutableDictionary, CLSSceneTaxonomyHierarchy;

#import <Foundation/Foundation.h>


@interface PGCurationCriteriaFactory : NSObject {
    NSMutableDictionary *_holidayServiceByLocale;
    CLSSceneTaxonomyHierarchy *_sceneTaxonomy;
}




-(id)_anniversaryCriteriaWithPersonLocalIdentifier:(id)arg0 client:(NSUInteger)arg1 ;
-(id)_babyScenesTrait;
-(id)_beachingCriteriaWithClient:(NSUInteger)arg0 ;
-(id)_birthdayCriteriaWithPersonLocalIdentifiers:(id)arg0 client:(NSUInteger)arg1 ;
-(id)_breakfastCriteriaWithClient:(NSUInteger)arg0 ;
-(id)_climbingCriteriaWithClient:(NSUInteger)arg0 ;
-(id)_compulsoryRequiredTraitsFromBaseSceneNames:(id)arg0 leafSceneNames:(id)arg1 ;
-(id)_concertCriteriaWithClient:(NSUInteger)arg0 ;
-(id)_dinnerCriteriaWithClient:(NSUInteger)arg0 ;
-(id)_divingCriteriaWithClient:(NSUInteger)arg0 ;
-(id)_entertainmentCriteriaWithClient:(NSUInteger)arg0 ;
-(id)_festivalCriteriaWithClient:(NSUInteger)arg0 ;
-(id)_hikingCriteriaWithClient:(NSUInteger)arg0 ;
-(id)_holidayEventCriteriaWithGraph:(id)arg0 featureNodes:(id)arg1 client:(NSUInteger)arg2 ;
-(id)_longTripCriteriaWithClient:(NSUInteger)arg0 ;
-(id)_lunchCriteriaWithClient:(NSUInteger)arg0 ;
-(id)_memoriesRestaurantScenesTrait;
-(id)_museumCriteriaWithClient:(NSUInteger)arg0 ;
-(id)_nightOutCriteriaWithClient:(NSUInteger)arg0 ;
-(id)_performanceCriteriaWithClient:(NSUInteger)arg0 ;
-(id)_petScenesTrait;
-(id)_sceneNamesFromBaseSceneNames:(id)arg0 leafSceneNames:(id)arg1 ;
-(id)_searchFallCriteria;
-(id)_searchRestaurantCompulsoryScenesTrait;
-(id)_searchRestaurantScenesTrait;
-(id)_searchSpringCriteria;
-(id)_searchSummerCriteria;
-(id)_searchWinterCriteria;
-(id)_shortTripCriteriaWithClient:(NSUInteger)arg0 ;
-(id)_sportEventCriteriaWithClient:(NSUInteger)arg0 ;
-(id)_tripScenesTrait;
-(id)_weddingCriteriaWithClient:(NSUInteger)arg0 ;
-(id)_winterSportCriteriaWithClient:(NSUInteger)arg0 ;
-(id)_yourBabyCriteriaWithClient:(NSUInteger)arg0 ;
-(id)_yourPetCriteriaWithClient:(NSUInteger)arg0 ;
-(id)babyCurationCriteriaWithCollection:(id)arg0 client:(NSUInteger)arg1 ;
-(id)curationCriteriaWithCollection:(id)arg0 meaningLabel:(id)arg1 inGraph:(id)arg2 client:(NSUInteger)arg3 ;
-(id)curationCriteriaWithMeaningLabel:(id)arg0 featureNodes:(id)arg1 inGraph:(id)arg2 client:(NSUInteger)arg3 ;
-(id)curationCriteriaWithSeasonName:(id)arg0 client:(NSUInteger)arg1 ;
-(id)foodieCurationCriteriaWithClient:(NSUInteger)arg0 ;
-(id)foodieCurationCriteriaWithPersonLocalIdentifier:(id)arg0 client:(NSUInteger)arg1 ;
-(id)holidayServiceWithGraph:(id)arg0 ;
-(id)init;
-(id)petCurationCriteriaWithCollection:(id)arg0 client:(NSUInteger)arg1 ;
-(id)tripCurationCriteriaWithCollection:(id)arg0 client:(NSUInteger)arg1 ;


@end


#endif
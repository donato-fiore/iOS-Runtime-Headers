// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC24INTELLIGENCEPLATFORMCORE25ENTITYRELEVANCEMODELINPUT_H
#define _TTC24INTELLIGENCEPLATFORMCORE25ENTITYRELEVANCEMODELINPUT_H

@class SwiftObject, NSSet;
@protocol MLFeatureProvider;



@interface _TtC24IntelligencePlatformCore25EntityRelevanceModelInput : SwiftObject <MLFeatureProvider>

 {
    ? behaviorPopularityGivenContext_coarseGeoHash;
    ? behaviorPopularityGivenContext_coarseTimeOfDay;
    ? behaviorPopularityGivenContext_dayOfWeek;
    ? behaviorPopularityGivenContext_largeGeoHash;
    ? behaviorPopularityGivenContext_microLocation;
    ? behaviorPopularityGivenSequence;
    ? behaviorPopularityGivenContext_specificGeoHash;
    ? behaviorPopularityGivenContext_timeOfDay;
    ? behaviorPopularityGivenContext_wifi;
    ? posteriorProbabilityGivenContext_coarseGeoHash_coarseTimeOfDay;
    ? posteriorProbabilityGivenContext_coarseGeoHash_dayOfWeek;
    ? posteriorProbabilityGivenContext_coarseGeoHash_timeOfDay;
    ? contextPopularityGivenBehavior_coarseGeoHash;
    ? posteriorProbabilityGivenContext_coarseGeoHash;
    ? posteriorProbabilityGivenContext_coarseTimeOfDay_dayOfWeek;
    ? contextPopularityGivenBehavior_coarseTimeOfDay;
    ? posteriorProbabilityGivenContext_coarseTimeOfDay;
    ? dailyDoseL1Error;
    ? dailyDoseL2Error;
    ? contextPopularityGivenBehavior_dayOfWeek;
    ? posteriorProbabilityGivenContext_dayOfWeek;
    ? posteriorProbabilityGivenContext_coarseTimeOfDay_largeGeoHash;
    ? posteriorProbabilityGivenContext_dayOfWeek_largeGeoHash;
    ? posteriorProbabilityGivenContext_largeGeoHash_timeOfDay;
    ? contextPopularityGivenBehavior_largeGeoHash;
    ? posteriorProbabilityGivenContext_largeGeoHash;
    ? lastExecutionAge;
    ? longTermTrendingPopularity;
    ? medianTimeIntervalBetweenExecution;
    ? posteriorProbabilityGivenContext_coarseTimeOfDay_microLocation;
    ? posteriorProbabilityGivenContext_dayOfWeek_microLocation;
    ? posteriorProbabilityGivenContext_microLocation_timeOfDay;
    ? contextPopularityGivenBehavior_microLocation;
    ? posteriorProbabilityGivenContext_microLocation;
    ? sequencePopularityGivenBehavior;
    ? shortTermTrendingPopularity;
    ? posteriorProbabilityGivenContext_coarseTimeOfDay_specificGeoHash;
    ? posteriorProbabilityGivenContext_dayOfWeek_specificGeoHash;
    ? posteriorProbabilityGivenContext_specificGeoHash_timeOfDay;
    ? contextPopularityGivenBehavior_specificGeoHash;
    ? posteriorProbabilityGivenContext_specificGeoHash;
    ? posteriorProbabilityGivenContext_dayOfWeek_timeOfDay;
    ? contextPopularityGivenBehavior_timeOfDay;
    ? posteriorProbabilityGivenContext_timeOfDay;
    ? trendingPopularity;
    ? posteriorProbabilityGivenContext_coarseTimeOfDay_wifi;
    ? posteriorProbabilityGivenContext_dayOfWeek_wifi;
    ? posteriorProbabilityGivenContext_timeOfDay_wifi;
    ? posteriorProbabilityGivenContext_wifi;
    ? contextPopularityGivenBehavior_wifi;
}


@property (nonatomic, readonly) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;


@end


#endif
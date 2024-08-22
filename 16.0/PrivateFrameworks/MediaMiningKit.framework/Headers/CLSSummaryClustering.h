// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSSUMMARYCLUSTERING_H
#define CLSSUMMARYCLUSTERING_H


#import <Foundation/Foundation.h>


@interface CLSSummaryClustering : NSObject

@property (nonatomic) NSUInteger adaptiveElectionMaximumNumberOfItemsByCluster; // ivar: _adaptiveElectionMaximumNumberOfItemsByCluster
@property (nonatomic) NSUInteger adaptiveElectionMinimumNumberOfItemsByCluster; // ivar: _adaptiveElectionMinimumNumberOfItemsByCluster
@property (nonatomic) NSUInteger adaptiveElectionSmootherMaximumLimit; // ivar: _adaptiveElectionSmootherMaximumLimit
@property (nonatomic) NSUInteger adaptiveElectionSmootherMinimumLimit; // ivar: _adaptiveElectionSmootherMinimumLimit
@property (nonatomic) CGFloat conciseDensityClusteringMaximumDistance; // ivar: _conciseDensityClusteringMaximumDistance
@property (nonatomic) NSUInteger conciseDensityClusteringMinimumNumberOfObjects; // ivar: _conciseDensityClusteringMinimumNumberOfObjects
@property (nonatomic) NSUInteger densityClusteringLocationsDistanceUnit; // ivar: _densityClusteringLocationsDistanceUnit
@property (nonatomic) CGFloat diffuseDensityClusteringMaximumDistance; // ivar: _diffuseDensityClusteringMaximumDistance
@property (nonatomic) NSUInteger diffuseDensityClusteringMinimumNumberOfObjects; // ivar: _diffuseDensityClusteringMinimumNumberOfObjects
@property (nonatomic) BOOL enableAdaptiveElectionSmoother; // ivar: _enableAdaptiveElectionSmoother
@property (nonatomic) BOOL enableAdaptiveElectionSmootherAutomaticLimit; // ivar: _enableAdaptiveElectionSmootherAutomaticLimit
@property (nonatomic) BOOL enableConcurrency; // ivar: _enableConcurrency
@property (nonatomic) BOOL enableDensityClusteringLocationsDistance; // ivar: _enableDensityClusteringLocationsDistance
@property (nonatomic) BOOL enableMultipassDensityClustering; // ivar: _enableMultipassDensityClustering
@property (nonatomic) CGFloat optimalDayDistributionThreshold; // ivar: _optimalDayDistributionThreshold
@property (nonatomic) NSUInteger timeSpanDensityAverageNumberOfObjects; // ivar: _timeSpanDensityAverageNumberOfObjects


+(CGFloat)maximumScoreForItems:(id)arg0 ;
+(CGFloat)meanScoreForItems:(id)arg0 ;
+(CGFloat)scoreForItems:(id)arg0 ;
+(id)clustering;
-(id)_densityClustersWithItems:(id)arg0 progressBlock:(id)arg1 ;
-(id)adaptiveElection:(id)arg0 identifiersOfEligibleItems:(id)arg1 maximumNumberOfItemsToElect:(NSUInteger)arg2 debugInfo:(id)arg3 progressBlock:(id)arg4 ;
-(id)densityClusteringDistanceBlock:(SEL)arg0 ;
-(id)densityClustersWithItems:(id)arg0 progressBlock:(id)arg1 ;
-(id)init;
-(id)performWithItems:(id)arg0 identifiersOfEligibleItems:(id)arg1 maximumNumberOfItemsToElect:(NSUInteger)arg2 debugInfo:(id)arg3 progressBlock:(id)arg4 ;
-(id)performWithItems:(id)arg0 identifiersOfEligibleItems:(id)arg1 maximumNumberOfItemsToElect:(NSUInteger)arg2 progressBlock:(id)arg3 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSHADOWMETRICS_H
#define ATXSHADOWMETRICS_H


#import <Foundation/Foundation.h>


@interface ATXShadowMetrics : NSObject

@property (readonly, nonatomic) CGFloat meanReciprocalRank;
@property (nonatomic) NSUInteger numberOfCachedHighConfidencePredictions; // ivar: _numberOfCachedHighConfidencePredictions
@property (nonatomic) NSUInteger numberOfCachedLowConfidencePredictions; // ivar: _numberOfCachedLowConfidencePredictions
@property (nonatomic) NSUInteger numberOfCachedMediumConfidencePredictions; // ivar: _numberOfCachedMediumConfidencePredictions
@property (nonatomic) NSUInteger numberOfCachedPredictions; // ivar: _numberOfCachedPredictions
@property (nonatomic) NSUInteger numberOfCorrectCachedPredictions; // ivar: _numberOfCorrectCachedPredictions
@property (nonatomic) NSUInteger numberOfCorrectHighConfidenceCachedPredictions; // ivar: _numberOfCorrectHighConfidenceCachedPredictions
@property (nonatomic) NSUInteger numberOfCorrectLowConfidenceCachedPredictions; // ivar: _numberOfCorrectLowConfidenceCachedPredictions
@property (nonatomic) NSUInteger numberOfCorrectMediumConfidenceCachedPredictions; // ivar: _numberOfCorrectMediumConfidenceCachedPredictions
@property (nonatomic) NSUInteger numberOfCorrectTop1CachedPrediction; // ivar: _numberOfCorrectTop1CachedPrediction
@property (nonatomic) NSUInteger numberOfCorrectTop2CachedPredictions; // ivar: _numberOfCorrectTop2CachedPredictions
@property (nonatomic) NSUInteger numberOfCorrectTop4CachedPredictions; // ivar: _numberOfCorrectTop4CachedPredictions
@property (nonatomic) NSUInteger numberOfCorrectTop8CachedPredictions; // ivar: _numberOfCorrectTop8CachedPredictions
@property (nonatomic) NSUInteger numberOfPredictionCacheRefreshes; // ivar: _numberOfPredictionCacheRefreshes
@property (nonatomic) NSUInteger numberOfShadowEventCacheHits; // ivar: _numberOfShadowEventCacheHits
@property (nonatomic) NSUInteger numberOfShadowEventHighConfidenceCacheHits; // ivar: _numberOfShadowEventHighConfidenceCacheHits
@property (nonatomic) NSUInteger numberOfShadowEventLowConfidenceCacheHits; // ivar: _numberOfShadowEventLowConfidenceCacheHits
@property (nonatomic) NSUInteger numberOfShadowEventMediumConfidenceCacheHits; // ivar: _numberOfShadowEventMediumConfidenceCacheHits
@property (nonatomic) NSUInteger numberOfShadowEventTop1CacheHits; // ivar: _numberOfShadowEventTop1CacheHits
@property (nonatomic) NSUInteger numberOfShadowEventTop2CacheHits; // ivar: _numberOfShadowEventTop2CacheHits
@property (nonatomic) NSUInteger numberOfShadowEventTop4CacheHits; // ivar: _numberOfShadowEventTop4CacheHits
@property (nonatomic) NSUInteger numberOfShadowEventTop8CacheHits; // ivar: _numberOfShadowEventTop8CacheHits
@property (nonatomic) NSUInteger numberOfShadowEvents; // ivar: _numberOfShadowEvents
@property (readonly, nonatomic) CGFloat precisionAllCachedPredictions;
@property (readonly, nonatomic) CGFloat precisionAtTop1CachedPrediction;
@property (readonly, nonatomic) CGFloat precisionAtTop2CachedPredictions;
@property (readonly, nonatomic) CGFloat precisionAtTop4CachedPredictions;
@property (readonly, nonatomic) CGFloat precisionAtTop8CachedPredictions;
@property (readonly, nonatomic) CGFloat precisionOfHighConfidenceCachedPredictions;
@property (readonly, nonatomic) CGFloat precisionOfLowConfidenceCachedPredictions;
@property (readonly, nonatomic) CGFloat precisionOfMediumConfidenceCachedPredictions;
@property (readonly, nonatomic) CGFloat recallAllCachedPredictions;
@property (readonly, nonatomic) CGFloat recallAtTop1CachedPrediction;
@property (readonly, nonatomic) CGFloat recallAtTop2CachedPredictions;
@property (readonly, nonatomic) CGFloat recallAtTop4CachedPredictions;
@property (readonly, nonatomic) CGFloat recallAtTop8CachedPredictions;
@property (readonly, nonatomic) CGFloat recallOfHighConfidenceCachedPredictions;
@property (readonly, nonatomic) CGFloat recallOfLowConfidenceCachedPredictions;
@property (readonly, nonatomic) CGFloat recallOfMediumConfidenceCachedPredictions;
@property (nonatomic) CGFloat sumOfShadowEventCacheHitReciprocalRanks; // ivar: _sumOfShadowEventCacheHitReciprocalRanks


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXShadowMetrics:(id)arg0 ;
-(NSUInteger)hash;
-(id)asCoreAnalyticsMessageWithModelId:(id)arg0 executableType:(NSInteger)arg1 ;


@end


#endif
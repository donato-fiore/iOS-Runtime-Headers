// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGMEMORYPLANNER_H
#define PGMEMORYPLANNER_H

@class NSArray, NSDate, NSSet, NSMutableDictionary, MARelation;
@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "PGMemoryElectorConfiguration.h"

@interface PGMemoryPlanner : NSObject {
    NSArray *_pastMemories;
    NSArray *_memoriesToAvoid;
    NSArray *_futureMemoriesGroupedByTrigger;
    NSObject<OS_os_log> *_loggingConnection;
    NSDate *_currentUniversalMemoryDate;
    NSSet *_similarCategorySets;
    NSMutableDictionary *_timeDecayScoreByPastMemoryCreationDate;
    NSMutableDictionary *_maximumTimeDecayScoreByPastMemoryIdentifier;
    MARelation *_secondaryFeatureOfFeature;
    NSSet *_similarFeatureSets;
}


@property (readonly, nonatomic) PGMemoryElectorConfiguration *configuration; // ivar: _configuration


+(BOOL)_isFallbackMemory:(id)arg0 ;
+(BOOL)canElectEndOfYearTriggeredMemory:(id)arg0 withAlreadyElectedMemories:(id)arg1 ;
+(BOOL)canElectTriggeredMemory:(id)arg0 withAlreadyElectedMemories:(id)arg1 ;
+(CGFloat)_momentCommonalityScoreComparingMomentNodes:(id)arg0 toMomentNodes:(id)arg1 ;
+(id)groupFutureMemoriesPerTrigger:(id)arg0 ;
-(BOOL)tooSoonToElectMemory:(id)arg0 ;
-(CGFloat)_commonalityScoreComparingMemory:(id)arg0 toMemory:(id)arg1 momentWeight:(CGFloat)arg2 featureWeight:(CGFloat)arg3 memoryCategoryWeight:(CGFloat)arg4 ;
-(CGFloat)avoidScoreForMemory:(id)arg0 ;
-(CGFloat)categorySimilarityScoreBetweenMemory:(id)arg0 andMemory:(id)arg1 ;
-(CGFloat)collisionScoreForMemory:(id)arg0 ;
-(CGFloat)commonalityScoreComparingMemory:(id)arg0 toAlreadyElectedMemory:(id)arg1 ;
-(CGFloat)commonalityScoreComparingMemory:(id)arg0 toMemory:(id)arg1 ;
-(CGFloat)featureCommonalityScoreComparingFeatureNodes:(id)arg0 toFeatureNodes:(id)arg1 ;
-(CGFloat)timeDecayScoreForTriggeredMemory:(id)arg0 numberOfDaysToLook:(NSUInteger)arg1 ;
-(NSUInteger)numberOfDaysSinceMemoryUpgrade;
-(id)_overallDateIntervalForTriggeredMemories:(id)arg0 ;
-(id)creationDateOfLastMemory;
-(id)filterMemories:(id)arg0 forTriggerCollisionsWithTriggerHandler:(id)arg1 graph:(id)arg2 progressReporter:(id)arg3 ;
-(id)initWithPastSource:(id)arg0 futureSource:(id)arg1 configuration:(id)arg2 graph:(id)arg3 loggingConnection:(id)arg4 progressReporter:(id)arg5 ;
-(id)maximumTimeDecayScoreByPastMemoryIdentifier;
-(id)similarCategorySets;
-(id)similarFeatureSets;
-(id)timeDecayScoreByPastMemoryCreationDate;
-(void)_computeIfNeededTimeDecayScoreForPastMemories;


@end


#endif
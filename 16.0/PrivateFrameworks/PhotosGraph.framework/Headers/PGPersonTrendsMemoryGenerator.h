// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGPERSONTRENDSMEMORYGENERATOR_H
#define PGPERSONTRENDSMEMORYGENERATOR_H



#import "PGTrendsMemoryGenerator.h"
#import "PGMemoryMomentRequirements.h"

@interface PGPersonTrendsMemoryGenerator : PGTrendsMemoryGenerator {
    BOOL _requireFaceProcessingMeetsThresholdOverTime;
    BOOL _intersectRelevantAssetsForFeatures;
    PGMemoryMomentRequirements *_momentRequirements;
}




-(BOOL)intersectRelevantAssetsForFeatures;
-(BOOL)requireFaceProcessingMeetsThresholdOverTime;
-(NSUInteger)memoryCategorySubcategoryForOverTimeType:(NSUInteger)arg0 ;
-(id)childOnlyPersonTrends;
-(id)initWithMemoryGenerationContext:(id)arg0 configurations:(id)arg1 ;
-(id)momentRequirements;
-(id)trendType;
-(void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg0 usingBlock:(id)arg1 ;
-(void)setRequireFaceProcessingMeetsThresholdOverTime:(BOOL)arg0 ;


@end


#endif
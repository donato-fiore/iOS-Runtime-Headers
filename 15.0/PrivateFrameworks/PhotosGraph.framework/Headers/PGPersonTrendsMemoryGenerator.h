// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
-(id)initWithMemoryGenerationContext:(id)arg0 ;
-(id)momentRequirements;
-(void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif
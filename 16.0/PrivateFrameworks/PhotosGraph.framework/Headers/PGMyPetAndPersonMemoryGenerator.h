// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGMYPETANDPERSONMEMORYGENERATOR_H
#define PGMYPETANDPERSONMEMORYGENERATOR_H



#import "PGMyPetMemoryGenerator.h"
#import "PGMemoryMomentRequirements.h"
#import "PGFeaturedTimePeriodMemoryConfiguration.h"

@interface PGMyPetAndPersonMemoryGenerator : PGMyPetMemoryGenerator {
    BOOL _intersectRelevantAssetsForFeatures;
    PGMemoryMomentRequirements *_momentRequirements;
    PGFeaturedTimePeriodMemoryConfiguration *_featuredSeasonConfiguration;
    PGFeaturedTimePeriodMemoryConfiguration *_featuredYearConfiguration;
}




-(BOOL)intersectRelevantAssetsForFeatures;
-(NSUInteger)memoryCategorySubcategoryForOverTimeType:(NSUInteger)arg0 ;
-(id)featuredSeasonConfiguration;
-(id)featuredYearConfiguration;
-(id)initWithMemoryGenerationContext:(id)arg0 ;
-(id)momentRequirements;
-(void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif
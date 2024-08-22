// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGPERSONFOODIEMEMORYGENERATOR_H
#define PGPERSONFOODIEMEMORYGENERATOR_H



#import "PGFoodieMemoryGenerator.h"

@interface PGPersonFoodieMemoryGenerator : PGFoodieMemoryGenerator {
    BOOL _requireFaceProcessingMeetsThresholdOverTime;
}




-(BOOL)requireFaceProcessingMeetsThresholdOverTime;
-(NSUInteger)memoryCategorySubcategoryForOverTimeType:(NSUInteger)arg0 ;
-(id)initWithMemoryGenerationContext:(id)arg0 ;
-(void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg0 usingBlock:(id)arg1 ;
-(void)setRequireFaceProcessingMeetsThresholdOverTime:(BOOL)arg0 ;


@end


#endif
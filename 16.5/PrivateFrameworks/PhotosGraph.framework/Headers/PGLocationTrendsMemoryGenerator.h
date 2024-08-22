// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGLOCATIONTRENDSMEMORYGENERATOR_H
#define PGLOCATIONTRENDSMEMORYGENERATOR_H



#import "PGTrendsMemoryGenerator.h"
#import "PGMemoryMomentRequirements.h"

@interface PGLocationTrendsMemoryGenerator : PGTrendsMemoryGenerator {
    PGMemoryMomentRequirements *_momentRequirements;
}




-(NSUInteger)memoryCategorySubcategoryForOverTimeType:(NSUInteger)arg0 ;
-(id)initWithMemoryGenerationContext:(id)arg0 configurations:(id)arg1 ;
-(id)momentRequirements;
-(id)trendType;
-(void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif
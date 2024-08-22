// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGHOLIDAYMEANINGAGGREGATIONMEMORYGENERATOR_H
#define PGHOLIDAYMEANINGAGGREGATIONMEMORYGENERATOR_H



#import "PGMeaningAggregationMemoryGenerator.h"
#import "PGMemoryMomentRequirements.h"

@interface PGHolidayMeaningAggregationMemoryGenerator : PGMeaningAggregationMemoryGenerator {
    PGMemoryMomentRequirements *_momentRequirements;
}




+(id)requiredFeatureRelation;
+(id)supportedMeaningLabels;
-(id)initWithMemoryGenerationContext:(id)arg0 ;
-(id)momentRequirements;
-(void)setMomentRequirements:(id)arg0 ;


@end


#endif
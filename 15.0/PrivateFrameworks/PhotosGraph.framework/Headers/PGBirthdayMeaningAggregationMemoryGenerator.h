// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGBIRTHDAYMEANINGAGGREGATIONMEMORYGENERATOR_H
#define PGBIRTHDAYMEANINGAGGREGATIONMEMORYGENERATOR_H



#import "PGMeaningAggregationMemoryGenerator.h"

@interface PGBirthdayMeaningAggregationMemoryGenerator : PGMeaningAggregationMemoryGenerator {
    BOOL _requireFaceProcessingMeetsThresholdOverTime;
}




+(id)requiredFeatureRelation;
+(id)supportedMeaningLabels;
-(BOOL)requireFaceProcessingMeetsThresholdOverTime;
-(id)initWithMemoryGenerationContext:(id)arg0 ;


@end


#endif
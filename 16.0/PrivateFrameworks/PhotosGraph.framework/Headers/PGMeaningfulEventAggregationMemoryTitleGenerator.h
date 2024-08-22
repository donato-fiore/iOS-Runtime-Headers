// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGMEANINGFULEVENTAGGREGATIONMEMORYTITLEGENERATOR_H
#define PGMEANINGFULEVENTAGGREGATIONMEMORYTITLEGENERATOR_H

@class NSSet;


#import "PGTitleGenerator.h"

@interface PGMeaningfulEventAggregationMemoryTitleGenerator : PGTitleGenerator

@property (readonly, nonatomic) NSSet *features; // ivar: _features
@property (readonly, nonatomic) NSUInteger meaning; // ivar: _meaning
@property (readonly, nonatomic) NSSet *meaningfulEvents; // ivar: _meaningfulEvents
@property (nonatomic) CGFloat unreliableMeaningRatioThresholdForSpecificTitle; // ivar: _unreliableMeaningRatioThresholdForSpecificTitle


+(id)_momentNodesFromMeaningfulEvents:(id)arg0 ;
-(id)_subtitle;
-(id)initWithMeaning:(NSUInteger)arg0 features:(id)arg1 meaningfulEvents:(id)arg2 titleGenerationContext:(id)arg3 ;
-(void)_generateTitleAndSubtitleWithResult:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGMEANINGFULEVENTMATCHINGCRITERIA_H
#define PGMEANINGFULEVENTMATCHINGCRITERIA_H



#import "PGMeaningfulEventCriteria.h"
#import "PGMeaningfulEventProcessorCache.h"
#import "PGGraphMomentNode.h"

@interface PGMeaningfulEventMatchingCriteria : PGMeaningfulEventCriteria {
    PGMeaningfulEventProcessorCache *_cache;
}


@property (nonatomic) BOOL interestingForMeaningInference; // ivar: _interestingForMeaningInference
@property (readonly, nonatomic) PGGraphMomentNode *momentNode; // ivar: _momentNode


-(CGFloat)_calculateMatchingScoreForPartOfDayWithMatchingTrait:(id)arg0 requiredTrait:(id)arg1 requiresStrictMatching:(BOOL)arg2 ;
-(CGFloat)matchingScoreWithCriteria:(id)arg0 failed:(*BOOL)arg1 isReliable:(*BOOL)arg2 ;
-(id)debugDescription;
-(id)initWithMoment:(id)arg0 cache:(id)arg1 ;
-(id)matchingResultWithCriteria:(id)arg0 ;
-(void)_calculateMatchingScoreForLocationsWithMatchingTrait:(id)arg0 requiredTrait:(id)arg1 result:(id)arg2 ;
-(void)_calculateMatchingScoreForPOIROIWithMatchingTrait:(id)arg0 requiredTrait:(id)arg1 result:(id)arg2 ;
-(void)_calculateMatchingScoreForScenesWithRequiredCriteria:(id)arg0 result:(id)arg1 ;


@end


#endif
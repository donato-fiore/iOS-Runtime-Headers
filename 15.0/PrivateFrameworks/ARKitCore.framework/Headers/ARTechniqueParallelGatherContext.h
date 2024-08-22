// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARTECHNIQUEPARALLELGATHERCONTEXT_H
#define ARTECHNIQUEPARALLELGATHERCONTEXT_H

@class NSIndexSet, NSMutableDictionary, NSMutableIndexSet, NSMapTable;


#import "ARTechniqueGatherContext.h"
#import "ARTechniqueParallelGatherContext.h"

@interface ARTechniqueParallelGatherContext : ARTechniqueGatherContext {
    ARTechniqueParallelGatherContext *_previousContext;
    NSIndexSet *_requiredTechniqueIndices;
    NSIndexSet *_deterministicTechniqueIndices;
    NSMutableDictionary *_gatheredDataByTechniqueIndex;
    os_unfair_lock_s _gatherLock;
    NSMutableIndexSet *_lateResultTechniqueIndices;
    NSMapTable *_techniquesByIndex;
    BOOL _resultsCaptured;
}


@property BOOL requiredTimeIntervalComplete; // ivar: _requiredTimeIntervalComplete
@property (readonly, nonatomic) NSUInteger techniqueCount; // ivar: _techniqueCount


-(BOOL)deterministicResultsCaptured;
-(NSUInteger)indexForTechnique:(id)arg0 ;
-(id)_allGatheredDataByTechniqueIndex;
-(id)addResultData:(id)arg0 forTechniqueAtIndex:(NSUInteger)arg1 ;
-(id)captureGatheredData;
-(id)description;
-(id)gatheredData;
-(id)initWithParentContext:(id)arg0 previousContext:(id)arg1 requiredTechniqueIndices:(id)arg2 deterministicTechniqueIndices:(id)arg3 techniques:(id)arg4 ;
-(id)lateResultDataForTechniqueAtIndex:(NSUInteger)arg0 ;


@end


#endif
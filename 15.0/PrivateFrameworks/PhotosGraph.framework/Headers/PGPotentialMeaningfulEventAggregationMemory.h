// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPOTENTIALMEANINGFULEVENTAGGREGATIONMEMORY_H
#define PGPOTENTIALMEANINGFULEVENTAGGREGATIONMEMORY_H

@class NSMutableSet, NSString, NSSet, NSArray;


#import "PGPotentialMemory.h"

@interface PGPotentialMeaningfulEventAggregationMemory : PGPotentialMemory {
    NSMutableSet *_mutableMomentNodes;
}


@property (retain, nonatomic) NSString *key; // ivar: _key
@property (readonly) NSUInteger meaning; // ivar: _meaning
@property (retain, nonatomic) NSSet *meaningfulEvents; // ivar: _meaningfulEvents
@property (retain, nonatomic) NSArray *relevantAssetLocalIdentifiers; // ivar: _relevantAssetLocalIdentifiers
@property (readonly, nonatomic) NSInteger year; // ivar: _year


-(CGFloat)score;
-(NSUInteger)memoryCategory;
-(id)initWithMeaning:(NSUInteger)arg0 features:(id)arg1 year:(NSInteger)arg2 ;
-(id)memoryFeatureNodesInGraph:(id)arg0 ;
-(id)peopleUUIDs;
-(id)supportedFeatureTypesForMeaning:(NSUInteger)arg0 ;
-(void)addMeaningfulEvent:(id)arg0 controller:(id)arg1 ;


@end


#endif
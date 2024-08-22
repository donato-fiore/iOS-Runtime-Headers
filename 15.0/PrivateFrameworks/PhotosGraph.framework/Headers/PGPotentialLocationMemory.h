// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPOTENTIALLOCATIONMEMORY_H
#define PGPOTENTIALLOCATIONMEMORY_H

@class NSMutableSet, NSDate;


#import "PGPotentialMemory.h"
#import "PGGraphLocationCityNode.h"

@interface PGPotentialLocationMemory : PGPotentialMemory {
    NSMutableSet *_mutableMomentNodes;
}


@property (readonly) PGGraphLocationCityNode *cityNode; // ivar: _cityNode
@property (retain) NSDate *endDate; // ivar: _endDate
@property (retain) NSDate *startDate; // ivar: _startDate
@property (readonly) NSInteger year; // ivar: _year


-(NSUInteger)memoryCategory;
-(id)initWithCityNode:(id)arg0 year:(NSInteger)arg1 ;
-(id)memoryFeatureNodesInGraph:(id)arg0 ;
-(void)addMomentNode:(id)arg0 ;


@end


#endif
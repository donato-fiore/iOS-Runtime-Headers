// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPOTENTIALAREAMEMORY_H
#define PGPOTENTIALAREAMEMORY_H

@class NSMutableSet, NSDate;


#import "PGPotentialMemory.h"
#import "PGGraphAreaNode.h"

@interface PGPotentialAreaMemory : PGPotentialMemory {
    NSMutableSet *_mutableMomentNodes;
}


@property (readonly) PGGraphAreaNode *areaNode; // ivar: _areaNode
@property (retain) NSDate *endDate; // ivar: _endDate
@property (retain) NSDate *startDate; // ivar: _startDate
@property (readonly) NSInteger year; // ivar: _year


-(NSUInteger)memoryCategory;
-(id)initWithAreaNode:(id)arg0 year:(NSInteger)arg1 ;
-(id)memoryFeatureNodesInGraph:(id)arg0 ;
-(void)addMomentNode:(id)arg0 ;


@end


#endif
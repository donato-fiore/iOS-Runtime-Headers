// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGPOTENTIALREGIONMEMORY_H
#define PGPOTENTIALREGIONMEMORY_H

@class NSMutableSet, NSDate, NSString, NSArray;


#import "PGPotentialMemory.h"
#import "PGGraphROINode.h"

@interface PGPotentialRegionMemory : PGPotentialMemory {
    NSMutableSet *_mutableMomentNodes;
}


@property (retain) NSDate *endDate; // ivar: _endDate
@property (readonly) NSString *region;
@property (readonly) PGGraphROINode *regionNode; // ivar: _regionNode
@property (retain) NSArray *scenedAssetLocalIdentifiers; // ivar: _scenedAssetLocalIdentifiers
@property (retain) NSDate *startDate; // ivar: _startDate
@property (readonly) NSInteger year; // ivar: _year


-(NSUInteger)memoryCategory;
-(id)initWithRegionNode:(id)arg0 year:(NSInteger)arg1 ;
-(id)memoryFeatureNodesInGraph:(id)arg0 ;
-(void)addMomentNode:(id)arg0 ;


@end


#endif
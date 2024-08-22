// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAMEMORYFOOTPRINT_H
#define MAMEMORYFOOTPRINT_H

@class NSMutableSet;

#import <Foundation/Foundation.h>

#import "MABaseGraph.h"

@interface MAMemoryFootprint : NSObject {
    MABaseGraph *_graph;
    NSMutableSet *_allKeys;
    NSMutableSet *_allValues;
    NSUInteger _halfEdgeCount;
    NSUInteger _orderedSetCount;
    NSUInteger _arrayCount;
    NSUInteger _dictionaryCount;
    NSUInteger _basicHashCount;
    NSUInteger _basicHashValueStoreCount;
}


@property (readonly, nonatomic) NSUInteger actualKeyCount;
@property (readonly, nonatomic) NSUInteger actualKeysSize;
@property (readonly, nonatomic) NSUInteger actualValueCount;
@property (readonly, nonatomic) NSUInteger actualValuesSize;
@property (readonly, nonatomic) NSUInteger allEdgesSize; // ivar: _allEdgesSize
@property (readonly, nonatomic) NSUInteger allNodesSize; // ivar: _allNodesSize
@property (readonly, nonatomic) float averageEdgeCountPerNode;
@property (readonly, nonatomic) NSUInteger averageEdgeSize;
@property (readonly, nonatomic) NSUInteger averageNodeSize;
@property (readonly, nonatomic) NSUInteger countOfNodesWithAtMostEightEdges; // ivar: _countOfNodesWithAtMostEightEdges
@property (readonly, nonatomic) NSUInteger edgeCount; // ivar: _edgeCount
@property (readonly, nonatomic) NSUInteger graphSize; // ivar: _graphSize
@property (readonly, nonatomic) NSUInteger maximumEdgeCountInNode; // ivar: _maximumEdgeCountInNode
@property (readonly, nonatomic) NSUInteger nodeCount; // ivar: _nodeCount
@property (readonly, nonatomic) NSUInteger optimalKeyCount;
@property (readonly, nonatomic) NSUInteger optimalKeysSize;
@property (readonly, nonatomic) NSUInteger optimalValueCount;
@property (readonly, nonatomic) NSUInteger optimalValuesSize;
@property (readonly, nonatomic) NSUInteger totalSize;


-(NSUInteger)_reportArray:(id)arg0 ;
-(NSUInteger)_reportDictionary:(id)arg0 ;
-(NSUInteger)_reportOrderedSet:(id)arg0 ;
-(NSUInteger)version;
-(id)initWithGraph:(id)arg0 ;
-(void)_reportEdge:(id)arg0 withSize:(NSUInteger)arg1 ;
-(void)_reportGraph:(id)arg0 withSize:(NSUInteger)arg1 ;
-(void)_reportKey:(id)arg0 ;
-(void)_reportNode:(id)arg0 withSize:(NSUInteger)arg1 edgeCount:(NSUInteger)arg2 ;
-(void)_reportValue:(id)arg0 ;
-(void)dump;
-(void)update;


@end


#endif
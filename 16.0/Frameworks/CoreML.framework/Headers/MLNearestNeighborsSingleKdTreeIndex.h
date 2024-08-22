// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLNEARESTNEIGHBORSSINGLEKDTREEINDEX_H
#define MLNEARESTNEIGHBORSSINGLEKDTREEINDEX_H

@protocol MLNearestNeighborsIndex, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_KDNode.h"

@interface MLNearestNeighborsSingleKdTreeIndex : NSObject <MLNearestNeighborsIndex, NSSecureCoding>

 {
    vector<float, std::allocator<float>> vData;
    vector<unsigned long, std::allocator<unsigned long>> vIndices;
}


@property (nonatomic) NSUInteger leafSize; // ivar: _leafSize
@property (nonatomic) NSUInteger numDimensions; // ivar: _numDimensions
@property (retain, nonatomic) _KDNode *root; // ivar: _root


+(BOOL)supportsSecureCoding;
-(BOOL)updateWithData:(*void)arg0 error:(*id)arg1 ;
-(NSUInteger)dataPointCount;
-(id)constructTree;
-(id)constructTreeForPointsBoundedBy:(*void)arg0 startingIndex:(NSUInteger)arg1 count:(NSUInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDataset:(*void)arg0 numberOfDimensions:(NSUInteger)arg1 leafSize:(NSUInteger)arg2 error:(*id)arg3 ;
-(struct vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>> )calculateDistancesForNodesBetweenLeft:(NSUInteger)arg0 andRight:(NSUInteger)arg1 toQueryPoint:(*void)arg2 ;
-(struct vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>> )findNearestNeighbors:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(struct vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>> )findNearestNeighbors:(NSUInteger)arg0 toQueryPoint:(*void)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)findK:(NSUInteger)arg0 nearestNeighbors:(*void)arg1 toQueryPoint:(*void)arg2 inTree:(id)arg3 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSDBSCAN_H
#define _PSDBSCAN_H

@class NSMutableSet, NSMutableArray;

#import <Foundation/Foundation.h>


@interface _PSDBSCAN : NSObject

@property (retain) NSMutableSet *clusteredPoints; // ivar: _clusteredPoints
@property (retain) NSMutableArray *clusters; // ivar: _clusters
@property (readonly) CGFloat eps; // ivar: _eps
@property (readonly) NSUInteger minPts; // ivar: _minPts
@property (retain) NSMutableArray *noisePoints; // ivar: _noisePoints
@property (retain) NSMutableArray *pointsArray; // ivar: _pointsArray
@property (retain) NSMutableSet *visitedPoints; // ivar: _visitedPoints


-(id)expandClusterForPoint:(id)arg0 withNeighborIndices:(id)arg1 ;
-(id)getNeighborIndices:(NSUInteger)arg0 ;
-(id)initWithMinimumPointsForClustering:(NSUInteger)arg0 MaxNeighborDistance:(CGFloat)arg1 ;
-(void)emptyCollections;
-(void)fitData:(id)arg0 ;
-(void)mergeCurrNeighbors:(id)arg0 withArray:(id)arg1 andUpdateSet:(id)arg2 ;


@end


#endif
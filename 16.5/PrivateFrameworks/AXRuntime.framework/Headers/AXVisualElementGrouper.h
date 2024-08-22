// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXVISUALELEMENTGROUPER_H
#define AXVISUALELEMENTGROUPER_H



#import "AXElementGrouper.h"

@interface AXVisualElementGrouper : AXElementGrouper

@property (nonatomic) CGFloat maximumDistanceForAligningEdges; // ivar: _maximumDistanceForAligningEdges
@property (nonatomic) CGFloat maximumNeighbourDistance; // ivar: _maximumNeighbourDistance


-(id)_groupablesForItems:(id)arg0 ;
-(id)initWithHeuristics:(NSInteger)arg0 ;


@end


#endif
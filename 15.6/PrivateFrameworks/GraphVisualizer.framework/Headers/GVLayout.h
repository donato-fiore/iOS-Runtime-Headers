// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GVLAYOUT_H
#define GVLAYOUT_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "GVGraph.h"

@interface GVLayout : NSObject {
    *NSUInteger savedOrder;
    NSUInteger currentCrossings;
}


@property (nonatomic) int direction; // ivar: direction
@property (nonatomic) GVGraph *graph; // ivar: graph
@property (retain, nonatomic) NSMutableArray *ranks; // ivar: ranks
@property (retain, nonatomic) NSMutableArray *selfEdges; // ivar: selfEdges
@property (nonatomic) CGSize separation; // ivar: separation


+(struct CGSize )layoutGraph:(id)arg0 withDirection:(int)arg1 separation:(struct CGSize )arg2 ;
-(NSUInteger)crossings;
-(NSUInteger)medianValueOf:(id)arg0 withRespectTo:(id)arg1 ;
-(struct CGSize )doLayout:(id)arg0 direction:(int)arg1 separation:(struct CGSize )arg2 ;
-(void)_removeCycleDFS:(id)arg0 visistedNodes:(id)arg1 nodesInStack:(id)arg2 ;
-(void)assignCoordinates;
-(void)assignNodeCoordinates;
-(void)assignNodePriorities;
-(void)assignRankCoordinates;
-(void)assignRanks;
-(void)balanceRanks;
-(void)buildRankIterators;
-(void)commitOrder;
-(void)dealloc;
-(void)initializeNodeCoordinates;
-(void)initializeOrder;
-(void)initializeRanks;
-(void)makeFeasibleTree;
-(void)medianPosition:(NSUInteger)arg0 ;
-(void)medianSort:(id)arg0 withRespectTo:(id)arg1 ;
-(void)minimizeCutValues;
-(void)normalizeRanks;
-(void)orderVertices;
-(void)packCutX:(NSUInteger)arg0 ;
-(void)packCutY:(NSUInteger)arg0 ;
-(void)removeCycles;
-(void)removeSelfEdges;
-(void)restoreOrder;
-(void)saveOrder;
-(void)straightenX;
-(void)straightenY;
-(void)transpose;
-(void)undoRemoveCycles;
-(void)undoRemoveSelfEdges;
-(void)weightedMedian:(NSUInteger)arg0 ;


@end


#endif
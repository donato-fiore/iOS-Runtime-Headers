// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MANODELEGACYIMPLEMENTATION_H
#define MANODELEGACYIMPLEMENTATION_H

@class NSMutableArray, NSString;
@protocol MANodeImplementationProtocol;

#import <Foundation/Foundation.h>

#import "MANode.h"

@interface MANodeLegacyImplementation : NSObject <MANodeImplementationProtocol>

 {
    NSMutableArray *_edges;
    MANode *_node;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasEdgeOfType:(NSUInteger)arg0 matchingFilter:(id)arg1 ;
-(BOOL)hasEdgeOfType:(NSUInteger)arg0 withNode:(id)arg1 ;
-(NSUInteger)countOfEdgesOfType:(NSUInteger)arg0 matchingFilter:(id)arg1 ;
-(NSUInteger)memoryFootprint:(id)arg0 ;
-(id)initWithNode:(id)arg0 ;
-(void)addEdge:(id)arg0 ;
-(void)enumerateEdgesOfType:(NSUInteger)arg0 matchingFilter:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateEdgesOfType:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateEdgesOfType:(NSUInteger)arg0 withNode:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateNeighborEdgesAndNodesMatchingFilter:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateNeighborEdgesAndNodesThroughEdgesOfType:(NSUInteger)arg0 matchingFilter:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateNeighborNodesMatchingFilter:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateNeighborNodesThroughEdgesOfType:(NSUInteger)arg0 matchingFilter:(id)arg1 usingBlock:(id)arg2 ;
-(void)removeEdge:(id)arg0 ;


@end


#endif
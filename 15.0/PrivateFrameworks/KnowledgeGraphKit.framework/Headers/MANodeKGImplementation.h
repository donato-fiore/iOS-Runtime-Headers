// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MANODEKGIMPLEMENTATION_H
#define MANODEKGIMPLEMENTATION_H

@class NSString;
@protocol MANodeImplementationProtocol;

#import <Foundation/Foundation.h>

#import "MANode.h"

@interface MANodeKGImplementation : NSObject <MANodeImplementationProtocol>

 {
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
-(id)edgeIdentifiersOfType:(NSUInteger)arg0 matchingFilter:(id)arg1 ;
-(id)initWithNode:(id)arg0 ;
-(void)enumerateEdgesOfType:(NSUInteger)arg0 matchingFilter:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateEdgesOfType:(NSUInteger)arg0 withNode:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateNeighborEdgesAndNodesMatchingFilter:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateNeighborEdgesAndNodesThroughEdgesOfType:(NSUInteger)arg0 matchingFilter:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateNeighborNodesMatchingFilter:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateNeighborNodesThroughEdgesOfType:(NSUInteger)arg0 matchingFilter:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateNodesRelatedWithRelation:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif
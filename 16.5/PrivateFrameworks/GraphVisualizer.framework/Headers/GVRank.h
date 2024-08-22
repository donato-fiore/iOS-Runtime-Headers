// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GVRANK_H
#define GVRANK_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "GVRank.h"

@interface GVRank : NSObject {
    NSMutableArray *nodes;
    CGFloat separation;
}


@property (readonly, nonatomic) CGFloat height;
@property (nonatomic) GVRank *next; // ivar: next
@property (nonatomic) GVRank *prev; // ivar: prev
@property (readonly, nonatomic) CGFloat width;


-(NSUInteger)inCrossings;
-(NSUInteger)outCrossings;
-(id)initWithSeparation:(struct CGSize )arg0 ;
-(id)neighborsOfNode:(id)arg0 ;
-(id)nodes;
-(struct CGSize )sizeForDummy;
-(void)addNode:(id)arg0 ;
-(void)buildNodeIterators;
-(void)centerNode:(id)arg0 at:(CGFloat)arg1 ;
-(void)centerNodesWithRespectoTo:(id)arg0 ;
-(void)dealloc;
-(void)exchangeNodeAtIndex:(NSUInteger)arg0 withNodeAtIndex:(NSUInteger)arg1 ;
-(void)removeNode:(id)arg0 ;
-(void)sortByIndex;


@end


#endif
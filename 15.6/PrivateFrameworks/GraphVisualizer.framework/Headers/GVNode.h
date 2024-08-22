// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GVNODE_H
#define GVNODE_H

@class NSMutableOrderedSet;

#import <Foundation/Foundation.h>

#import "GVNode.h"

@interface GVNode : NSObject

@property (nonatomic) CGPoint center;
@property (nonatomic) CGFloat cx;
@property (nonatomic) CGFloat cy;
@property (nonatomic) CGRect frame;
@property (nonatomic) CGFloat h; // ivar: h
@property (readonly) NSUInteger inDegree;
@property (retain, nonatomic) NSMutableOrderedSet *inNodes; // ivar: inNodes
@property (nonatomic) NSUInteger inPriority; // ivar: inPriority
@property (nonatomic) NSInteger index; // ivar: index
@property (nonatomic) GVNode *next; // ivar: next
@property (nonatomic) CGPoint origin;
@property (readonly) NSUInteger outDegree;
@property (retain, nonatomic) NSMutableOrderedSet *outNodes; // ivar: outNodes
@property (nonatomic) NSUInteger outPriority; // ivar: outPriority
@property (nonatomic) GVNode *prev; // ivar: prev
@property (nonatomic) NSInteger rank; // ivar: rank
@property (nonatomic) CGSize size;
@property (nonatomic) CGFloat w; // ivar: w
@property (nonatomic) CGFloat x; // ivar: x
@property (nonatomic) CGFloat y; // ivar: y


-(BOOL)hasEdgeFrom:(id)arg0 ;
-(BOOL)hasEdgeTo:(id)arg0 ;
-(id)description;
-(id)init;
-(void)addEdgeFrom:(id)arg0 ;
-(void)addEdgeTo:(id)arg0 ;
-(void)dealloc;
-(void)removeEdgeFrom:(id)arg0 ;
-(void)removeEdgeTo:(id)arg0 ;
// -(void)traversePostorder:(int)arg0 withCallback:(id)arg1 stopper:(unk)arg2 randomize:(id)arg3  ;
// -(void)traversePreorder:(int)arg0 withCallback:(id)arg1 randomize:(unk)arg2  ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __NSSKGRAPH_H
#define __NSSKGRAPH_H


#import <Foundation/Foundation.h>


@interface __NSSKGraph : NSObject {
    *edge _edges;
    *vertex _vertices;
    NSUInteger _numV;
    NSUInteger _numE;
    NSUInteger _currE;
    NSUInteger _dump;
    NSUInteger _l_end;
}




-(?)isAcyclic;
-(BOOL)addEdgeWithH1:(NSUInteger)arg0 withH2:(NSUInteger)arg1 ;
-(BOOL)isEmpty;
-(NSUInteger)numOfEdges;
-(id)initWithNumberOfVertices:(NSInteger)arg0 numberOfEdges:(NSInteger)arg1 ;
-(void)dealloc;


@end


#endif
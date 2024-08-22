// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPATH_H
#define MAPATH_H

@class NSMutableArray, NSMutableSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MAPath : NSObject <NSCopying>

 {
    NSMutableArray *_edges;
    NSMutableSet *_nodes;
}




+(id)path;
+(id)pathWithEdges:(id)arg0 ;
-(BOOL)containsEdge:(id)arg0 ;
-(BOOL)containsNode:(id)arg0 ;
-(BOOL)isEmpty;
-(BOOL)isEqualToPath:(id)arg0 ;
-(CGFloat)edgesWeight;
-(NSUInteger)edgesCount;
-(NSUInteger)nodesCount;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)edgeAtIndex:(NSUInteger)arg0 ;
-(id)edgesForLabel:(id)arg0 ;
-(id)graphRepresentation;
-(id)init;
-(id)nodeAtIndex:(NSUInteger)arg0 ;
-(id)nodesForLabel:(id)arg0 ;
-(id)sourceNode;
-(id)targetNode;
-(void)addFirstEdge:(id)arg0 ;
-(void)addLastEdge:(id)arg0 ;
-(void)enumerateWithBlock:(id)arg0 ;
-(void)removeAllEdges;
-(void)removeFirstEdge;
-(void)removeLastEdge;
-(void)setEdges:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPCOMPOUNDGRAPHICMAKER_H
#define CPCOMPOUNDGRAPHICMAKER_H

@protocol CPDisposable;

#import <Foundation/Foundation.h>

#import "CPChunk.h"
#import "CPCluster.h"

@interface CPCompoundGraphicMaker : NSObject <CPDisposable>

 {
    CPChunk *parentChunk;
    BOOL shapesAreVectorGraphics;
    unsigned int shapeCount;
    *id shapes;
    CGFloat pageSpread;
    CPCluster *cluster;
    unsigned int groupInfoCount;
    *? groupInfoArray;
    BOOL disposed;
}




+(BOOL)makeCompoundGraphicsInZonesOf:(id)arg0 ;
-(BOOL)findClusterLevel;
-(BOOL)groupOverlappingGraphics;
-(BOOL)makeCompoundGraphics;
-(BOOL)makeCompoundGraphicsFromShapeGroups;
-(id)initWithGraphicsIn:(id)arg0 ofClass:(Class)arg1 ;
-(void)addGroupInfoWithIndex:(unsigned int)arg0 bounds:(struct CGRect )arg1 ;
-(void)coalesceShapeGroups;
-(void)dealloc;
-(void)dispose;
-(void)finalize;
-(void)makeCompoundGraphicFromShapesAtIndex:(unsigned int)arg0 count:(unsigned int)arg1 ;


@end


#endif
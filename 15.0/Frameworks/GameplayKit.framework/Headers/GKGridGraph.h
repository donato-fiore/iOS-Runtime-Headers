// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKGRIDGRAPH_H
#define GKGRIDGRAPH_H



#import "GKGraph.h"

@interface GKGridGraph : GKGraph {
    *void _cGridGraph;
}


@property (readonly, nonatomic) BOOL diagonalsAllowed; // ivar: _diagonalsAllowed
@property (readonly, nonatomic) NSUInteger gridHeight;
@property ? gridOrigin;
@property (readonly, nonatomic) NSUInteger gridWidth;


+(id)graphFromGridStartingAt:(int)arg0 width:(int)arg1 height:(BOOL)arg2 diagonalsAllowed;
+(id)graphFromGridStartingAt:(int)arg0 width:(int)arg1 height:(BOOL)arg2 diagonalsAllowed:(Class)arg3 nodeClass;
-(Class)classForGenericArgumentAtIndex:(NSUInteger)arg0 ;
-(id)initFromGridStartingAt:(int)arg0 width:(int)arg1 height:(BOOL)arg2 diagonalsAllowed;
-(id)initFromGridStartingAt:(int)arg0 width:(int)arg1 height:(BOOL)arg2 diagonalsAllowed:(Class)arg3 nodeClass;
-(id)initWithCoder:(id)arg0 ;
-(id)nodeAtGridPosition;
-(id)nodeAtGridPositionNoNilCheck;
-(void)connectNodeToAdjacentNodes:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeNodes:(id)arg0 ;


@end


#endif
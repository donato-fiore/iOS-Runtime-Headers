// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKQUADTREE_H
#define GKQUADTREE_H


#import <Foundation/Foundation.h>


@interface GKQuadtree : NSObject {
    *void _cQuadTree;
}




+(id)quadtreeWithBoundingQuad:(struct GKQuad )arg0 minimumCellSize:(float)arg1 ;
-(BOOL)removeElement:(id)arg0 ;
-(BOOL)removeElement:(id)arg0 withNode:(id)arg1 ;
-(id)addElement:(id)arg0 withPoint;
-(id)addElement:(id)arg0 withQuad:(struct GKQuad )arg1 ;
-(id)elementsAtPoint;
-(id)elementsInQuad:(struct GKQuad )arg0 ;
-(id)init;
-(id)initWithBoundingQuad:(struct GKQuad )arg0 minimumCellSize:(float)arg1 ;
-(void)dealloc;


@end


#endif
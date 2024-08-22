// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMDIAGRAMSHAPECYCLEMAPPER_H
#define CMDIAGRAMSHAPECYCLEMAPPER_H



#import "CMDiagramShapeMapper.h"

@interface CMDiagramShapeCycleMapper : CMDiagramShapeMapper {
    float mScale;
    BOOL mCircularArrows;
    int mDiagramType;
    int mArrowShapeType;
}




-(id)initWithOddDiagram:(id)arg0 drawingContext:(id)arg1 orientedBounds:(id)arg2 identifier:(id)arg3 parent:(id)arg4 ;
-(struct CGRect )circumscribedBounds;
-(struct CGRect )nodeBoundsWithIndex:(NSUInteger)arg0 ;
-(struct CGSize )nodeSize;
-(struct CGSize )sizeForNode:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)mapChildrenAt:(id)arg0 withState:(id)arg1 ;
-(void)mapTransitionArrowsAt:(id)arg0 index:(unsigned int)arg1 withState:(id)arg2 ;
-(void)mapTransitionPointAt:(id)arg0 index:(unsigned int)arg1 withState:(id)arg2 ;


@end


#endif
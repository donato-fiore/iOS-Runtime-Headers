// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMDIAGRAMSEGMENTEDPIEMAPPER_H
#define CMDIAGRAMSEGMENTEDPIEMAPPER_H



#import "CMDiagramShapeMapper.h"

@interface CMDiagramSegmentedPieMapper : CMDiagramShapeMapper {
    BOOL mDrawArrows;
}




-(id)_suggestedBoundsForNodeAtIndex:(NSUInteger)arg0 ;
-(int)pointCount;
-(struct CGSize )sizeForNode:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;
-(void)mapChildrenAt:(id)arg0 withState:(id)arg1 ;
-(void)setDrawArrows:(BOOL)arg0 ;


@end


#endif
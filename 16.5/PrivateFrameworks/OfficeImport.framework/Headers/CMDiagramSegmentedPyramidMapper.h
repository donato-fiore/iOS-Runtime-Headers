// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMDIAGRAMSEGMENTEDPYRAMIDMAPPER_H
#define CMDIAGRAMSEGMENTEDPYRAMIDMAPPER_H



#import "CMDiagramShapeMapper.h"

@interface CMDiagramSegmentedPyramidMapper : CMDiagramShapeMapper



-(NSUInteger)layerCount;
-(NSUInteger)pointCount;
-(id)_suggestedBoundsForPyramidLayerWithIndex:(NSUInteger)arg0 inLayer:(NSUInteger)arg1 andSlice:(NSUInteger)arg2 ;
-(struct CGSize )sizeForNode:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;
-(void)mapChildrenAt:(id)arg0 withState:(id)arg1 ;


@end


#endif
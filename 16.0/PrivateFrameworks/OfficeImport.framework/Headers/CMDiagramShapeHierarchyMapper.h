// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMDIAGRAMSHAPEHIERARCHYMAPPER_H
#define CMDIAGRAMSHAPEHIERARCHYMAPPER_H

@class NSMutableDictionary;


#import "CMDiagramShapeMapper.h"

@interface CMDiagramShapeHierarchyMapper : CMDiagramShapeMapper {
    NSMutableDictionary *mNodeInfoMap;
    BOOL mIsLayered;
}




-(*void)mapRangesForNode:(id)arg0 ;
-(id)infoForNode:(id)arg0 ;
-(id)initWithOddDiagram:(id)arg0 drawingContext:(id)arg1 orientedBounds:(id)arg2 identifier:(id)arg3 parent:(id)arg4 ;
-(struct CGRect )boundsForNode:(id)arg0 ;
-(struct CGRect )mapLogicalBoundsWithXRanges:(*void)arg0 ;
-(struct CGSize )sizeForNode:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)copyInfoForNode:(id)arg0 depth:(int)arg1 ;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;
-(void)mapChildrenAt:(id)arg0 withState:(id)arg1 ;
-(void)mapLayerNodes:(id)arg0 at:(id)arg1 scale:(float)arg2 offsetX:(float)arg3 offsetY:(float)arg4 withState:(id)arg5 ;
-(void)mapNode:(id)arg0 at:(id)arg1 scale:(float)arg2 offsetX:(float)arg3 offsetY:(float)arg4 withState:(id)arg5 ;
-(void)setAbsolutePositionOfNode:(id)arg0 parentRow:(int)arg1 parentXOffset:(float)arg2 index:(NSUInteger)arg3 ;
-(void)setUpLayers;


@end


#endif
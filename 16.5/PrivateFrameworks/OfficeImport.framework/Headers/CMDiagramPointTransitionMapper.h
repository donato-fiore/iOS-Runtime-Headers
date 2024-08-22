// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMDIAGRAMPOINTTRANSITIONMAPPER_H
#define CMDIAGRAMPOINTTRANSITIONMAPPER_H

@class NSDictionary;


#import "CMDiagramPointMapper.h"

@interface CMDiagramPointTransitionMapper : CMDiagramPointMapper {
    int mShapeType;
    NSDictionary *mAdjustValues;
}




-(id)initWithPoint:(id)arg0 drawingContext:(id)arg1 orientedBounds:(id)arg2 shapeType:(int)arg3 adjustValues:(id)arg4 parent:(id)arg5 ;
-(id)initWithPoint:(id)arg0 drawingContext:(id)arg1 orientedBounds:(id)arg2 shapeType:(int)arg3 parent:(id)arg4 ;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;


@end


#endif
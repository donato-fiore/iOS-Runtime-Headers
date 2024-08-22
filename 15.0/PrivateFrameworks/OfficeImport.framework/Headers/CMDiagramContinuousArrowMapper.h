// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMDIAGRAMCONTINUOUSARROWMAPPER_H
#define CMDIAGRAMCONTINUOUSARROWMAPPER_H



#import "CMDiagramShapeMapper.h"

@interface CMDiagramContinuousArrowMapper : CMDiagramShapeMapper



-(id)_suggestedBoundsForNodeAtIndex:(NSInteger)arg0 ;
-(id)fill;
-(id)stroke;
-(struct CGSize )sizeForNode:(id)arg0 ;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;
-(void)mapChildrenAt:(id)arg0 withState:(id)arg1 ;


@end


#endif
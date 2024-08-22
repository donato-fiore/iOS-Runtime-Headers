// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DCHARTADDROTATIONBOUNDSSCENEOBJECTMODE_H
#define TSCH3DCHARTADDROTATIONBOUNDSSCENEOBJECTMODE_H



#import "TSCH3DChartAddBoundsSceneObjectMode.h"

@interface TSCH3DChartAddRotationBoundsSceneObjectMode : TSCH3DChartAddBoundsSceneObjectMode

@property (nonatomic) int rotationType; // ivar: _rotationType


-(CGFloat)p_radiusFromBounds:(*void)arg0 pivot:(*void)arg1 ;
-(void)getBounds:(id)arg0 ;
-(void)p_submitGeometryForChartBounds:(*void)arg0 pivot:(*void)arg1 thicknessIndex:(NSUInteger)arg2 pipeline:(id)arg3 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DCHARTLINESCENEOBJECT_H
#define TSCH3DCHARTLINESCENEOBJECT_H



#import "TSCH3DChartSeriesSceneObject.h"

@interface TSCH3DChartLineSceneObject : TSCH3DChartSeriesSceneObject



+(BOOL)supportsChartSeriesDepthOffset;
+(float)chartSeriesDepth;
+(id)chartSeriesType;
+(id)createMeshForSeries:(id)arg0 ;
-(BOOL)shouldRenderSeries:(id)arg0 ;
-(struct EdgeDetectionParameters )edgeDetectionParameters;
-(void)updateTilingEffect:(*void)arg0 properties:(id)arg1 textureTiling:(id)arg2 size:(*void)arg3 ;


@end


#endif
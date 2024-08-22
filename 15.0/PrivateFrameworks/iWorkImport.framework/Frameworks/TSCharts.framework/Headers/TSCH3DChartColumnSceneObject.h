// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DCHARTCOLUMNSCENEOBJECT_H
#define TSCH3DCHARTCOLUMNSCENEOBJECT_H



#import "TSCH3DChartAbstractBarSceneObject.h"

@interface TSCH3DChartColumnSceneObject : TSCH3DChartAbstractBarSceneObject



+(BOOL)isHorizontalChart;
+(BOOL)isStacked;
+(id)chartSeriesType;


@end


#endif
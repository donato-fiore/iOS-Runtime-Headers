// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DCHARTSTACKEDCOLUMNSCENEOBJECT_H
#define TSCH3DCHARTSTACKEDCOLUMNSCENEOBJECT_H



#import "TSCH3DChartColumnSceneObject.h"

@interface TSCH3DChartStackedColumnSceneObject : TSCH3DChartColumnSceneObject



+(BOOL)isHorizontalChart;
+(BOOL)isStacked;
+(id)chartSeriesType;
-(void)sortElements:(*id)arg0 pipeline:(id)arg1 ;


@end


#endif
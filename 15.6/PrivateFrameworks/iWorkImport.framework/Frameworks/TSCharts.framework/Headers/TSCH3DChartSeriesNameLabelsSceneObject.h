// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DCHARTSERIESNAMELABELSSCENEOBJECT_H
#define TSCH3DCHARTSERIESNAMELABELSSCENEOBJECT_H



#import "TSCH3DChartLabelsContainingSceneObject.h"

@interface TSCH3DChartSeriesNameLabelsSceneObject : TSCH3DChartLabelsContainingSceneObject



-(id)p_axisLabelsFromScene:(id)arg0 ;
-(id)selectionPathForInfo:(id)arg0 scene:(id)arg1 pickedPoint:(id)arg2 ;
-(int)knobsModeForLabelType:(int)arg0 scene:(id)arg1 ;
-(void)dispatchElementLabelHandler:(id)arg0 ;
-(void)renderAnnotatedLabels:(id)arg0 ;


@end


#endif
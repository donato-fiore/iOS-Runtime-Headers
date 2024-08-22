// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DCHARTVALUELABELSSCENEOBJECT_H
#define TSCH3DCHARTVALUELABELSSCENEOBJECT_H



#import "TSCH3DChartLabelsContainingSceneObject.h"

@interface TSCH3DChartValueLabelsSceneObject : TSCH3DChartLabelsContainingSceneObject



-(id)convertSelectionPathTo3D:(id)arg0 path:(id)arg1 ;
-(id)selectionPathForInfo:(id)arg0 scene:(id)arg1 pickedPoint:(id)arg2 ;
-(void)dispatchElementLabelHandler:(id)arg0 ;
-(void)renderAnnotatedLabels:(id)arg0 ;


@end


#endif
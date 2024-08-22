// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DCHARTAXISTITLESCENEOBJECT_H
#define TSCH3DCHARTAXISTITLESCENEOBJECT_H



#import "TSCH3DChartTitleSceneObject.h"

@interface TSCH3DChartAxisTitleSceneObject : TSCH3DChartTitleSceneObject



+(NSUInteger)styleIndexForInfo:(id)arg0 ;
+(id)paragraphStyleForTitleFontForInfo:(id)arg0 ;
-(BOOL)canEditTextForSelectionPath:(id)arg0 forInfo:(id)arg1 ;
-(BOOL)canRenderSelectionPath:(id)arg0 forInfo:(id)arg1 ;
-(BOOL)enabledForInfo:(id)arg0 ;
-(id)convertSelectionPathTo3D:(id)arg0 path:(id)arg1 ;
-(id)selectionPathForInfo:(id)arg0 scene:(id)arg1 pickedPoint:(id)arg2 ;
-(id)textForInfo:(id)arg0 ;
-(struct LabelTransform )labelTransformForPositioner:(id)arg0 ;


@end


#endif
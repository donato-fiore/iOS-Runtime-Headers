// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DCHARTLABELSCONTAININGSCENEOBJECT_H
#define TSCH3DCHARTLABELSCONTAININGSCENEOBJECT_H



#import "TSCH3DSceneObject.h"
#import "TSCH3DLabelsRenderer.h"

@interface TSCH3DChartLabelsContainingSceneObject : TSCH3DSceneObject {
    TSCH3DLabelsRenderer *_labelsRenderer;
}




-(id)init;
-(id)labelsRenderer;
-(int)knobsModeForLabelType:(int)arg0 scene:(id)arg1 ;
-(void)dispatchElementLabelHandler:(id)arg0 ;
-(void)getBounds:(id)arg0 ;
-(void)getSceneObjectElementsBounds:(id)arg0 ;
-(void)getSelectionKnobsPositions:(id)arg0 ;
-(void)p_renderWithPipeline:(id)arg0 block:(id)arg1 ;
-(void)postGetBounds:(id)arg0 ;
-(void)postRenderBounds:(id)arg0 ;
-(void)postrender:(id)arg0 ;
-(void)primeRenderCaches:(id)arg0 ;
-(void)rayPick:(id)arg0 ;
-(void)render:(id)arg0 ;
-(void)renderAnnotatedLabels:(id)arg0 ;
-(void)renderLabelRenderInfo:(id)arg0 ;
-(void)renderLabels:(id)arg0 ;
-(void)renderLabelsResourcesSessionWithResources:(id)arg0 expectedSize:(*void)arg1 pipeline:(id)arg2 renderBlock:(id)arg3 ;


@end


#endif
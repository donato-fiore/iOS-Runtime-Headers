// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DCHARTAXISLABELSSCENEOBJECT_H
#define TSCH3DCHARTAXISLABELSSCENEOBJECT_H

@protocol TSCH3DAxisLabelPositioner;


#import "TSCH3DChartLabelsContainingSceneObject.h"

@interface TSCH3DChartAxisLabelsSceneObject : TSCH3DChartLabelsContainingSceneObject

@property (retain) NSObject<TSCH3DAxisLabelPositioner> *categoryLabelPositioner; // ivar: _categoryLabelPositioner
@property (retain) NSObject<TSCH3DAxisLabelPositioner> *valueLabelPositioner; // ivar: _valueLabelPositioner


+(id)partWithEnumerator:(id)arg0 chartInfo:(id)arg1 styleIndex:(NSUInteger)arg2 ;
+(unsigned int)valueAxisLabelAlignmentForScene:(id)arg0 ;
+(void)cacheValueAxisLabelAlignmentForScene:(id)arg0 ;
+(void)setSelectionPath:(id)arg0 selectionMode:(int)arg1 forScene:(id)arg2 ;
-(BOOL)canEditTextForSelectionPath:(id)arg0 forInfo:(id)arg1 ;
-(BOOL)canRenderSelectionPath:(id)arg0 forInfo:(id)arg1 ;
-(NSInteger)p_categoryStride:(id)arg0 ;
-(id)convertSelectionPathTo3D:(id)arg0 path:(id)arg1 ;
-(id)effects;
-(id)renderInfoForSelectionPath:(id)arg0 info:(id)arg1 ;
-(id)selectionPathForInfo:(id)arg0 axis:(id)arg1 selectionPathLabelIndex:(NSUInteger)arg2 ;
-(id)selectionPathForInfo:(id)arg0 scene:(id)arg1 pickedPoint:(id)arg2 ;
-(int)knobsModeForLabelType:(int)arg0 scene:(id)arg1 ;
-(struct tvec3<float> )labelPositionDirectionForScene:(id)arg0 enumerator:(id)arg1 ;
-(struct tvec3<float> )p_categoryLabelsOffsetFromAccessor:(id)arg0 ;
-(struct tvec3<float> )p_valueLabelsOffsetFromAccessor:(id)arg0 ;
-(unsigned int)alignmentForPositioner:(id)arg0 scene:(id)arg1 enumerator:(id)arg2 returningDirection:(*void)arg3 ;
-(void)p_renderCategoryLabels:(id)arg0 ;
// -(void)p_renderLabels:(id)arg0 labelType:(int)arg1 part:(id)arg2 positioner:(id)arg3 offset:(*void)arg4 offset2DBlock:(id)arg5 strideBlock:(unk)arg6 skipFirst:(id)arg7 showLast:(unk)arg8  ;
-(void)p_renderValueLabels:(id)arg0 ;
-(void)p_setOffset:(*void)arg0 forLabelType:(int)arg1 pipeline:(id)arg2 part:(id)arg3 positioner:(id)arg4 ;
-(void)postRenderBounds:(id)arg0 ;
-(void)renderAnnotatedLabels:(id)arg0 ;
-(void)renderLabels:(id)arg0 ;


@end


#endif
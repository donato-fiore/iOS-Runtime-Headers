// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DCHARTTITLESCENEOBJECT_H
#define TSCH3DCHARTTITLESCENEOBJECT_H



#import "TSCH3DChartLabelsContainingSceneObject.h"

@interface TSCH3DChartTitleSceneObject : TSCH3DChartLabelsContainingSceneObject



+(BOOL)setLabelWrapBounds:(*void)arg0 forScene:(id)arg1 ;
+(BOOL)supportsStyleProvidingSource;
+(id)partWithChartInfo:(id)arg0 styleProvidingSource:(id)arg1 ;
+(struct CGSize )labelWrapSizeForScene:(id)arg0 ;
+(struct CGSize )p_labelWrapSizeForScene:(id)arg0 returningSizeValue:(*id)arg1 ;
+(void)setSelectionPath:(id)arg0 selectionMode:(int)arg1 forScene:(id)arg2 ;
-(BOOL)isAnnotated;
-(id)renderInfoForSelectionPath:(id)arg0 info:(id)arg1 ;
-(void)p_renderLabel:(id)arg0 ;
-(void)renderAnnotatedLabels:(id)arg0 ;
-(void)renderLabels:(id)arg0 ;


@end


#endif
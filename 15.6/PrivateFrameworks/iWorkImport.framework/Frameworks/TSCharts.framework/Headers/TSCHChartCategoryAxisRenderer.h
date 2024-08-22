// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHCHARTCATEGORYAXISRENDERER_H
#define TSCHCHARTCATEGORYAXISRENDERER_H



#import "TSCHChartAxisRenderer.h"

@interface TSCHChartCategoryAxisRenderer : TSCHChartAxisRenderer



-(BOOL)canEditTextForSelectionPath:(id)arg0 ;
-(BOOL)canRenderSelectionPath:(id)arg0 ;
-(BOOL)p_doesSelectionPathReferToAxisLabel:(id)arg0 ;
-(BOOL)p_doesSelectionPathReferToAxisSeriesLabel:(id)arg0 ;
-(NSUInteger)p_categoryIndexForSelectionPath:(id)arg0 ;
-(NSUInteger)p_seriesIndexForSelectionPath:(id)arg0 ;
-(id)categoryAxisLayoutItem;
-(id)p_labelGeometryForSelectionPath:(id)arg0 ;
-(id)transparencyLayers;
-(struct CGRect )frameForEditingTextForSelectionPath:(id)arg0 ;
-(void)addSelection:(id)arg0 toCGPath:(struct CGPath *)arg1 useWrapWidth:(BOOL)arg2 ;
-(void)drawIntoLayer:(int)arg0 inContext:(struct CGContext *)arg1 visible:(struct CGRect )arg2 ;
-(void)p_drawIntoLayer:(int)arg0 inContext:(struct CGContext *)arg1 visible:(struct CGRect )arg2 limitRenderLabels:(int)arg3 limitLabelIndex:(NSUInteger)arg4 rangePtr:(struct _NSRange *)arg5 ;
-(void)renderIntoContext:(struct CGContext *)arg0 selection:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHMULTIDATABARCHARTREP_H
#define TSCHMULTIDATABARCHARTREP_H



#import "TSCHMultiDataChartRep.h"

@interface TSCHMultiDataBarChartRep : TSCHMultiDataChartRep



-(BOOL)p_repElementIsAboveInterceptForSeriesIndex:(NSUInteger)arg0 groupIndex:(NSUInteger)arg1 ;
-(NSUInteger)p_currentGroupIndex;
-(NSUInteger)p_currentSeriesIndex;
-(id)p_barElementsRenderer;
-(id)p_currentBarSeriesModelCache;
-(struct CGRect )currentRepElementBoundsInNaturalSpace;
-(struct CGRect )p_clampRenderingElementFrame:(struct CGRect )arg0 barElementFrame:(struct CGRect )arg1 ;
-(struct CGRect )p_renderingElementFrameForBarElementFrame:(struct CGRect )arg0 ;
-(void)p_calculateInterceptForElementFrame:(struct CGRect )arg0 elementLayer:(id)arg1 animationInfo:(id)arg2 ;
-(void)updateAppearanceForElementLayer:(id)arg0 seriesIndex:(NSUInteger)arg1 ;
-(void)updateElementFrame:(struct CGRect )arg0 forElementLayer:(id)arg1 series:(id)arg2 addingAnimationsToAnimationInfo:(id)arg3 ;
-(void)updateElementLayerLayoutForCurrentRepElementIndexAnimationInfo:(id)arg0 ;


@end


#endif
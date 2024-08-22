// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHELEMENTBUILDER_H
#define TSCHELEMENTBUILDER_H


#import <Foundation/Foundation.h>


@interface TSCHElementBuilder : NSObject



+(CGFloat)referenceLineLabelRightAxisPadding;
+(CGFloat)referenceLineLabelTopAxisPadding;
+(struct CGRect )clipRectForElementsDrawnByRenderState:(id)arg0 ;
+(struct CGRect )elementsRectForElementsDrawnByRenderState:(id)arg0 ;
+(struct CGRect )p_chartLayoutSpaceClipRectUnionForElementsDrawnByRenderState:(id)arg0 returningItemCount:(*NSUInteger)arg1 ;
-(?)countOfElementsInSeries:(?)arg0 forGroups:(?)arg1 forBodyLayout:(?)arg2 outNewElementBounds:(?)arg3 outNewClipRects:(?)arg4 outNewElementPaths:(?)arg5 outSelectionKnobLocationsforHighlightPath;
-(?)countOfElementsInSeries:(?)arg0 forGroups:(?)arg1 forBodyLayout:(?)arg2 outNewElementBounds:(?)arg3 outNewClipRects:(?)arg4 outNewElementPaths:(?)arg5 outSelectionKnobLocationswithInnerRadius;
-(?)countOfErrorBarsInSeries:(?)arg0 forGroups:(?)arg1 forAxisID:(?)arg2 forBodyLayout:(?)arg3 outClipRectoutNewErrorBarDescriptors;
-(?)countOfGridLinesInBody:(?)arg0 forAxis:(?)arg1 minoroutNewLineDescriptors;
-(?)countOfHitCheckRegionsInSeries:(?)arg0 forGroups:(?)arg1 forBodyLayout:(?)arg2 outNewElementPaths:(?)arg3 outSelectionKnobLocationsforHighlightPath;
-(?)countOfHitCheckRegionsInSeries:(?)arg0 forGroups:(?)arg1 forBodyLayout:(?)arg2 outNewElementPaths:(?)arg3 outSelectionKnobLocationswithInnerRadius;
-(?)countOfLabelsForSeries:(?)arg0 forGroups:(?)arg1 forBodyLayout:(?)arg2 outNewTransforms:(?)arg3 outNewElementSizes:(?)arg4 outNewClipRectoutNewStrings;
-(?)countOfReferenceLineLabelsForAxisID:(?)arg0 model:(?)arg1 forRefLineLabelsLayout:(?)arg2 outNewTransforms:(?)arg3 outNewElementSizes:(?)arg4 outNewClipRects:(?)arg5 outNewParagraphStyles:(?)arg6 outNewStrings:(?)arg7 outNewLabelTypes:(?)arg8 outReferenceLines:(?)arg9 includeOutsideChartBodyBoundsoutOutsideChartBodyBounds;
-(?)countOfReferenceLineLabelsForReferenceLine:(?)arg0 forRefLineLabelsLayout:(?)arg1 outNewTransforms:(?)arg2 outNewElementSizes:(?)arg3 outNewClipRects:(?)arg4 outNewParagraphStyles:(?)arg5 outNewStrings:(?)arg6 outNewLabelTypes:(?)arg7 includeOutsideChartBodyBoundsoutOutsideChartBodyBounds;
-(?)countOfReferenceLinesForAxisID:(?)arg0 model:(?)arg1 forBodyLayout:(?)arg2 outClipRect:(?)arg3 outNewClipRects:(?)arg4 outNewLineDescriptors:(?)arg5 outReferenceLines:(?)arg6 includeOutsideChartBodyBoundsoutOutsideChartBodyBounds;
-(?)p_countOfReferenceLineLabelsForReferenceLine:(?)arg0 forRefLineLabelsLayout:(?)arg1 substringRange:(?)arg2 outNewTransforms:(?)arg3 outNewElementSizes:(?)arg4 outNewClipRects:(?)arg5 outNewParagraphStyles:(?)arg6 outNewStrings:(?)arg7 outNewLabelTypes:(?)arg8 includeOutsideChartBodyBoundsoutOutsideChartBodyBounds;
-(?)p_transformForRenderingTrendlineTextNotR2:(?)arg0 forSeries:(?)arg1 forAreaLayout:(?)arg2 outElementSize:(?)arg3 outClipRect:(?)arg4 outParagraphStyleoutString;
-(?)transformForRenderingTrendlineTextForSeries:(?)arg0 forAreaLayout:(?)arg1 outElementSize:(?)arg2 outClipRect:(?)arg3 outParagraphStyleoutNewString;
-(BOOL)hasAxisLineInBody:(id)arg0 forAxis:(id)arg1 outTransform:(struct CGAffineTransform *)arg2 outLine:(struct ? *)arg3 ;
-(BOOL)p_testIntersectionOfRect:(struct CGRect )arg0 againstSortedRects:(id)arg1 withInset:(CGFloat)arg2 isVertical:(BOOL)arg3 ;
-(NSInteger)hitCheckPoint:(struct CGPoint )arg0 inSeries:(id)arg1 withBodyLayout:(id)arg2 ;
-(NSUInteger)countOfCalloutLinesForSeries:(id)arg0 forGroups:(id)arg1 forBodyLayout:(id)arg2 outNewClipRect:(struct CGRect *)arg3 ;
-(struct CGAffineTransform )transformForRenderingLabelForReferenceLine:(id)arg0 ofType:(NSUInteger)arg1 range:(struct _NSRange )arg2 inLayoutItem:(id)arg3 outElementSize:(struct CGSize *)arg4 outClipRect:(struct CGRect *)arg5 ;
-(struct CGAffineTransform )transformForRenderingLabelInBody:(id)arg0 forSeries:(NSUInteger)arg1 forGroup:(NSUInteger)arg2 outElementSize:(struct CGSize *)arg3 outClipRect:(struct CGRect *)arg4 ;
-(struct CGAffineTransform )transformForRenderingR2TextForSeries:(id)arg0 forAreaLayout:(id)arg1 outElementSize:(struct CGSize *)arg2 outClipRect:(struct CGRect *)arg3 outParagraphStyle:(*id)arg4 outString:(*id)arg5 ;
-(struct CGPoint )labelPointForPosition:(unsigned int)arg0 rect:(struct CGRect )arg1 stringSize:(struct CGSize )arg2 ;
-(struct CGPoint )labelPointForPosition:(unsigned int)arg0 rect:(struct CGRect )arg1 stringSize:(struct CGSize )arg2 offset:(CGFloat)arg3 ;
-(struct CGRect )p_strideTestingRectFromRect:(struct CGRect )arg0 withOffset:(CGFloat)arg1 isVertical:(BOOL)arg2 ;
-(void)p_insertRectValue:(id)arg0 intoArray:(id)arg1 isVertical:(BOOL)arg2 showAll:(BOOL)arg3 ;
-(void)p_trendlineInfoForSeries:(id)arg0 forBodyLayout:(id)arg1 outVertical:(*BOOL)arg2 outOffsetInBody:(*CGFloat)arg3 ;
-(void)trendlineElementForSeries:(id)arg0 forBodyLayout:(id)arg1 outElementBounds:(struct CGRect *)arg2 outElementClipRect:(struct CGRect *)arg3 outElementPath:(*id)arg4 ;


@end


#endif
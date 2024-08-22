// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHPIEELEMENTBUILDER_H
#define TSCHPIEELEMENTBUILDER_H



#import "TSCHElementBuilder.h"

@interface TSCHPieElementBuilder : TSCHElementBuilder



-(?)countOfElementsInSeries:(?)arg0 forGroups:(?)arg1 forBodyLayout:(?)arg2 outNewElementBounds:(?)arg3 outNewClipRects:(?)arg4 outNewElementPaths:(?)arg5 outSelectionKnobLocationsforHighlightPath;
-(?)countOfElementsInSeries:(?)arg0 forGroups:(?)arg1 forBodyLayout:(?)arg2 outNewElementBounds:(?)arg3 outNewClipRects:(?)arg4 outNewElementPaths:(?)arg5 outSelectionKnobLocationswithInnerRadius;
-(?)countOfGridLinesInBody:(?)arg0 forAxis:(?)arg1 minoroutNewLineDescriptors;
-(?)countOfLabelsForSeries:(?)arg0 forGroups:(?)arg1 forBodyLayout:(?)arg2 outNewTransforms:(?)arg3 outNewElementSizes:(?)arg4 outNewClipRectoutNewStrings;
-(BOOL)hasAxisLineInBody:(id)arg0 forAxis:(id)arg1 outTransform:(struct CGAffineTransform *)arg2 outLine:(struct ? *)arg3 ;
-(NSUInteger)countOfCalloutLinesForSeries:(id)arg0 forGroups:(id)arg1 forBodyLayout:(id)arg2 outNewClipRect:(struct CGRect *)arg3 ;
-(struct CGPath *)newElementPathInBody:(id)arg0 forSeries:(id)arg1 outTransform:(struct CGAffineTransform *)arg2 outElementSize:(struct CGSize *)arg3 outClipRect:(struct CGRect *)arg4 outWedgeCenterPoint:(struct CGPoint *)arg5 outSelectionKnobLocations:(*id)arg6 withInnerRadius:(id)arg7 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHRADARAREAELEMENTBUILDER_H
#define TSCHRADARAREAELEMENTBUILDER_H



#import "TSCHAreaElementBuilder.h"

@interface TSCHRadarAreaElementBuilder : TSCHAreaElementBuilder



-(BOOL)p_addBottomStroke:(struct ? *)arg0 toPath:(struct CGPath *)arg1 seriesIndex:(NSUInteger)arg2 withPointsArray:(struct ? *)arg3 withCount:(NSUInteger)arg4 ;
-(BOOL)p_shouldAddSelectionKnobWithPoint:(struct CGPoint )arg0 previousPoint:(struct CGPoint )arg1 minimumDistanceSquared:(CGFloat)arg2 selectionKnobRadius:(CGFloat)arg3 ;
-(BOOL)p_testIntersectionOfRect:(struct CGRect )arg0 againstSortedRects:(id)arg1 withInset:(CGFloat)arg2 isVertical:(BOOL)arg3 ;
-(BOOL)p_topStrokeShouldBeClosed;
-(NSInteger)p_hitCheckPoint:(struct CGPoint )arg0 inSeries:(id)arg1 withSeriesElementPath:(struct CGPath *)arg2 ;
-(id)coordinateAdapter;
-(void)p_addTopStroke:(struct ? *)arg0 toPath:(struct CGPath *)arg1 withPointsArray:(struct ? *)arg2 withCount:(NSUInteger)arg3 lineType:(int)arg4 ;


@end


#endif
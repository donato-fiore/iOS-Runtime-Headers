// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHSTACKEDAREAELEMENTBUILDER_H
#define TSCHSTACKEDAREAELEMENTBUILDER_H



#import "TSCHAreaElementBuilder.h"

@interface TSCHStackedAreaElementBuilder : TSCHAreaElementBuilder



-(BOOL)p_addBottomStroke:(struct ? *)arg0 toPath:(struct CGPath *)arg1 seriesIndex:(NSUInteger)arg2 withPointsArray:(struct ? *)arg3 withCount:(NSUInteger)arg4 ;
-(struct ? *)p_centerPointsForSeries:(id)arg0 groupIndexSet:(id)arg1 nullsUseIntercept:(BOOL)arg2 plotAreaFrame:(struct CGRect )arg3 ;
-(struct ? *)p_createPointArrayForSeries:(id)arg0 inAreaFrame:(struct CGRect )arg1 groupIndexSet:(id)arg2 outCount:(*NSUInteger)arg3 ;


@end


#endif
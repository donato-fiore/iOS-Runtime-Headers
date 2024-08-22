// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHAREAELEMENTBUILDER_H
#define TSCHAREAELEMENTBUILDER_H



#import "TSCHLineElementBuilder.h"

@interface TSCHAreaElementBuilder : TSCHLineElementBuilder



-(BOOL)needsSeparateHitTestingPaths;
-(BOOL)p_addBottomStroke:(struct ? *)arg0 toPath:(struct CGPath *)arg1 seriesIndex:(NSUInteger)arg2 withPointsArray:(struct ? *)arg3 withCount:(NSUInteger)arg4 ;
-(struct ? *)p_createPointArrayForSeries:(id)arg0 inAreaFrame:(struct CGRect )arg1 groupIndexSet:(id)arg2 outCount:(*NSUInteger)arg3 ;
-(void)p_addTopStroke:(struct ? *)arg0 toPath:(struct CGPath *)arg1 withPointsArray:(struct ? *)arg2 withCount:(NSUInteger)arg3 lineType:(int)arg4 ;


@end


#endif
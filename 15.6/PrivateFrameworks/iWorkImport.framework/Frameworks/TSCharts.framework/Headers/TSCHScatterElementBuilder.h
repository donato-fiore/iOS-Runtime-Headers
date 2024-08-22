// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHSCATTERELEMENTBUILDER_H
#define TSCHSCATTERELEMENTBUILDER_H



#import "TSCHLineAreaScatterElementBuilder.h"

@interface TSCHScatterElementBuilder : TSCHLineAreaScatterElementBuilder



-(?)countOfHitCheckRegionsInSeries:(?)arg0 forGroups:(?)arg1 forBodyLayout:(?)arg2 outNewElementPathsoutSelectionKnobLocations;
-(BOOL)needsSeparateHitTestingPaths;
-(void)p_addKnobsForPoint:(struct CGPoint )arg0 strokedUnitSymbolRect:(struct CGRect )arg1 toKnobSet:(id)arg2 symbolsShowing:(BOOL)arg3 includePoint:(BOOL)arg4 ;
-(void)p_addTopStroke:(struct ? *)arg0 toPath:(struct CGPath *)arg1 withPointsArray:(struct ? *)arg2 withCount:(NSUInteger)arg3 lineType:(int)arg4 ;
-(void)p_addZeroToSinglePointWithState:(struct ? *)arg0 toPath:(struct CGPath *)arg1 withPointsArray:(struct ? *)arg2 withCount:(NSUInteger)arg3 lineType:(int)arg4 ;


@end


#endif
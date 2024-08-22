// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHLINEAREASCATTERELEMENTBUILDER_H
#define TSCHLINEAREASCATTERELEMENTBUILDER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;


#import "TSCHElementBuilder.h"
#import "TSCHElementBuilderCoordinateAdapter.h"

@interface TSCHLineAreaScatterElementBuilder : TSCHElementBuilder {
    NSMutableDictionary *_pathCache;
    NSObject<OS_dispatch_queue> *_pathCacheQueue;
}


@property (readonly, nonatomic) TSCHElementBuilderCoordinateAdapter *coordinateAdapter;


-(?)countOfElementsInSeries:(?)arg0 forGroups:(?)arg1 forBodyLayout:(?)arg2 outNewElementBounds:(?)arg3 outNewClipRects:(?)arg4 outNewElementPaths:(?)arg5 outSelectionKnobLocationsforHighlightPath;
-(?)countOfErrorBarsInSeries:(?)arg0 forGroups:(?)arg1 forAxisID:(?)arg2 forBodyLayout:(?)arg3 outClipRectoutNewErrorBarDescriptors;
-(?)countOfHitCheckRegionsInSeries:(?)arg0 forGroups:(?)arg1 forBodyLayout:(?)arg2 outNewElementPathsoutSelectionKnobLocations;
-(?)countOfLabelsForSeries:(?)arg0 forGroups:(?)arg1 forBodyLayout:(?)arg2 outNewTransforms:(?)arg3 outNewElementSizes:(?)arg4 outNewClipRectoutNewStrings;
-(?)countOfPointsForSeries:(?)arg0 forGroups:(?)arg1 forBodyLayout:(?)arg2 outElementSize:(?)arg3 outClipRect:(?)arg4 outUnitSymbolPath:(?)arg5 outNewTransformArrayoutNewGroupIndexArray;
-(?)p_createElementsForSeries:(?)arg0 forGroups:(?)arg1 inBodyLayout:(?)arg2 outTopStrokePath:(?)arg3 outTopStrokeClipRect:(?)arg4 outSeriesElementPath:(?)arg5 outSeriesElementClipRect:(?)arg6 outSymbolElementPath:(?)arg7 outSymbolElementClipRect:(?)arg8 outSymbolElementHitCheckPathoutSelectionKnobLocations;
-(?)transformForRenderingSeriesElementForSeries:(?)arg0 forGroups:(?)arg1 forBodyLayout:(?)arg2 outElementSize:(?)arg3 outClipRectoutNewElementPath;
-(?)transformForRenderingSeriesElementSymbolsForSeries:(?)arg0 forGroups:(?)arg1 forBodyLayout:(?)arg2 outElementSize:(?)arg3 outClipRectoutNewElementPath;
-(?)transformForRenderingSeriesElementTopStrokeForSeries:(?)arg0 forGroups:(?)arg1 forBodyLayout:(?)arg2 outElementSize:(?)arg3 outClipRectoutNewElementPath;
-(BOOL)needsSeparateHitTestingPaths;
-(BOOL)p_addBottomStroke:(struct ? *)arg0 toPath:(struct CGPath *)arg1 seriesIndex:(NSUInteger)arg2 withPointsArray:(struct ? *)arg3 withCount:(NSUInteger)arg4 ;
-(BOOL)p_hitCheckPoint:(struct CGPoint )arg0 inSymbolsOfSeries:(id)arg1 withBodyLayout:(id)arg2 ;
-(BOOL)p_shouldAddSelectionKnobWithPoint:(struct CGPoint )arg0 previousPoint:(struct CGPoint )arg1 minimumDistanceSquared:(CGFloat)arg2 selectionKnobRadius:(CGFloat)arg3 ;
-(BOOL)p_topStrokeShouldBeClosed;
-(BOOL)symbolTypeIsClosed:(int)arg0 ;
-(CGFloat)p_bubbleMaxForSeries:(id)arg0 inChartBodyLayoutSize:(struct CGSize )arg1 ;
-(NSInteger)hitCheckPoint:(struct CGPoint )arg0 inSeries:(id)arg1 withBodyLayout:(id)arg2 ;
-(NSInteger)p_hitCheckPoint:(struct CGPoint )arg0 inSeries:(id)arg1 withSeriesElementPath:(struct CGPath *)arg2 ;
-(NSInteger)p_hitCheckPointByDistance:(struct CGPoint )arg0 inSeries:(id)arg1 withSeriesElementPath:(struct CGPath *)arg2 ;
-(float)dataPointDimension:(id)arg0 symbolType:(int)arg1 stroke:(id)arg2 ;
-(id)init;
-(id)p_calculateSelectionKnobSet:(id)arg0 bodyLayoutItem:(id)arg1 series:(id)arg2 pointsArray:(struct ? *)arg3 withCount:(NSUInteger)arg4 ;
-(id)p_symbolKnobLocationsForSeries:(id)arg0 forGroups:(id)arg1 inBodyLayout:(id)arg2 ;
-(id)p_uncachedUnitPathForSymbol:(int)arg0 symbolSize:(CGFloat)arg1 stroke:(id)arg2 forHitCheck:(BOOL)arg3 ;
-(struct ? *)p_centerPointsForSeries:(id)arg0 groupIndexSet:(id)arg1 nullsUseIntercept:(BOOL)arg2 plotAreaFrame:(struct CGRect )arg3 ;
-(struct ? *)p_createPointArrayForSeries:(id)arg0 inAreaFrame:(struct CGRect )arg1 groupIndexSet:(id)arg2 cullBadPoints:(BOOL)arg3 outCount:(*NSUInteger)arg4 ;
-(struct ? *)p_createPointArrayForSeries:(id)arg0 inAreaFrame:(struct CGRect )arg1 groupIndexSet:(id)arg2 outCount:(*NSUInteger)arg3 ;
-(struct CGAffineTransform )transformForRenderingLabelInBody:(id)arg0 forSeries:(NSUInteger)arg1 forGroup:(NSUInteger)arg2 outElementSize:(struct CGSize *)arg3 outClipRect:(struct CGRect *)arg4 ;
-(struct CGPath *)p_newCirclePath:(struct CGPoint )arg0 width:(CGFloat)arg1 pathLocation:(NSInteger)arg2 stroke:(id)arg3 ;
-(struct CGPath *)p_newCrossPath:(struct CGPoint )arg0 width:(CGFloat)arg1 pathLocation:(NSInteger)arg2 stroke:(id)arg3 ;
-(struct CGPath *)p_newDiamondPath:(struct CGPoint )arg0 width:(CGFloat)arg1 pathLocation:(NSInteger)arg2 stroke:(id)arg3 ;
-(struct CGPath *)p_newPathForSymbol:(int)arg0 context:(struct CGContext *)arg1 at:(struct CGPoint )arg2 width:(CGFloat)arg3 pathLocation:(NSInteger)arg4 stroke:(id)arg5 ;
-(struct CGPath *)p_newPlusPath:(struct CGPoint )arg0 width:(CGFloat)arg1 pathLocation:(NSInteger)arg2 stroke:(id)arg3 context:(struct CGContext *)arg4 ;
-(struct CGPath *)p_newSquarePath:(struct CGPoint )arg0 width:(CGFloat)arg1 pathLocation:(NSInteger)arg2 stroke:(id)arg3 context:(struct CGContext *)arg4 ;
-(struct CGPath *)p_newTrianglePath:(struct CGPoint )arg0 width:(CGFloat)arg1 pathLocation:(NSInteger)arg2 stroke:(id)arg3 ;
-(struct CGPath *)p_newUnitPathForSymbol:(int)arg0 symbolSize:(CGFloat)arg1 stroke:(id)arg2 forHitCheck:(BOOL)arg3 ;
-(struct CGPath *)p_newYieldPath:(struct CGPoint )arg0 width:(CGFloat)arg1 pathLocation:(NSInteger)arg2 stroke:(id)arg3 ;
-(struct CGPoint )labelPointForPosition:(unsigned int)arg0 rect:(struct CGRect )arg1 stringSize:(struct CGSize )arg2 symbolType:(int)arg3 ;
-(void)p_addCurvedTopStroke:(struct ? *)arg0 toPath:(struct CGPath *)arg1 withPointsArray:(struct ? *)arg2 withCount:(NSUInteger)arg3 ;
-(void)p_addKnobsForPoint:(struct CGPoint )arg0 strokedUnitSymbolRect:(struct CGRect )arg1 toKnobSet:(id)arg2 symbolsShowing:(BOOL)arg3 includePoint:(BOOL)arg4 ;
-(void)p_addStraightTopStroke:(struct ? *)arg0 toPath:(struct CGPath *)arg1 withPointsArray:(struct ? *)arg2 withCount:(NSUInteger)arg3 ;
-(void)p_addTopStroke:(struct ? *)arg0 toPath:(struct CGPath *)arg1 withPointsArray:(struct ? *)arg2 withCount:(NSUInteger)arg3 lineType:(int)arg4 ;
-(void)p_cullLastValidPointIfEqualToFirstValidPointInArray:(struct ? *)arg0 pointsArrayCount:(*NSUInteger)arg1 ;
-(void)p_trendlineInfoForSeries:(id)arg0 forBodyLayout:(id)arg1 outVertical:(*BOOL)arg2 outOffsetInBody:(*CGFloat)arg3 ;


@end


#endif
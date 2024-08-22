// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHXAUTOSTYLING_H
#define CHXAUTOSTYLING_H

@class NSString;
@protocol CHAutoStyling;


#import "CHAutoStyling.h"

@interface CHXAutoStyling : CHAutoStyling <CHAutoStyling>



@property BOOL _autoChartFillIsHollow; // ivar: __autoChartFillIsHollow
@property BOOL _autoChartStrokeIsHollow; // ivar: __autoChartStrokeIsHollow
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)colorWithSchemeColorId:(int)arg0 shade:(float)arg1 ;
+(id)colorWithSchemeColorId:(int)arg0 tint:(float)arg1 ;
+(id)colorWithSchemeColorId:(int)arg0 transformType:(int)arg1 transformValue:(float)arg2 ;
+(int)styleColumnWithStyleId:(int)arg0 ;
+(int)styleIdWithStyleRow:(int)arg0 styleColumn:(int)arg1 ;
+(int)styleRowWithStyleId:(int)arg0 ;
-(id)autoAxisAndMajorGridColor;
-(id)autoChartAreaAndDataTableAndFloorStrokeColor;
-(id)autoChartAreaFillColor;
-(id)autoColorOfFirstColumnSeriesWithIndex:(NSUInteger)arg0 seriesCount:(NSUInteger)arg1 ;
-(id)autoColorOfSeriesWithIndex:(NSUInteger)arg0 ;
-(id)autoFloorAndWallsAndPlotArea2DFillColor;
-(id)autoMinorGridColor;
-(id)autoOtherStrokeColor;
-(id)autoStrokeForSeriesIndex:(NSUInteger)arg0 ;
-(id)autoTextFill;
-(int)styleColumn;
-(int)styleId;
-(int)styleRow;
-(unsigned int)autoFloorAndChartAreaStrokeIndex;
-(unsigned int)autoFloorAndWallsFillIndex;
-(void)resolveAxisGraphicProperties:(id)arg0 ;
-(void)resolveChartAreaGraphicProperties:(id)arg0 ;
-(void)resolveFloorGraphicProperties:(id)arg0 ;
-(void)resolveGraphicPropertiesOfErrorBar:(id)arg0 forSeriesIndex:(NSUInteger)arg1 ;
-(void)resolveGraphicPropertiesOfSeries:(id)arg0 forSeriesIndex:(NSUInteger)arg1 ;
-(void)resolveGraphicPropertiesOfSeries:(id)arg0 forSeriesIndex:(NSUInteger)arg1 isLine:(BOOL)arg2 ;
-(void)resolveGraphicPropertiesOfTrendline:(id)arg0 forSeriesIndex:(NSUInteger)arg1 ;
-(void)resolveLegendGraphicProperties:(id)arg0 ;
-(void)resolveMajorGridLinesGraphicProperties:(id)arg0 ;
-(void)resolveMarker:(id)arg0 withSeriesGraphicProperties:(id)arg1 forSeriesIndex:(NSUInteger)arg2 clientGraphicPropertyDefaults:(id)arg3 ;
-(void)resolveMinorGridLinesGraphicProperties:(id)arg0 ;
-(void)resolvePlotAreaGraphicProperties:(id)arg0 ;
-(void)resolveWallGraphicProperties:(id)arg0 ;
-(void)setAutoChartFillIsHollow:(BOOL)arg0 ;
-(void)setAutoChartStrokeIsHollow:(BOOL)arg0 ;
-(void)setDefaultErrorBarPropertiesInGraphicProperties:(id)arg0 ;


@end


#endif
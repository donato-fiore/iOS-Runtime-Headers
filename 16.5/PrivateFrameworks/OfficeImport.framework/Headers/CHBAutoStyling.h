// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHBAUTOSTYLING_H
#define CHBAUTOSTYLING_H

@class NSString;
@protocol CHAutoStyling;


#import "CHAutoStyling.h"

@interface CHBAutoStyling : CHAutoStyling <CHAutoStyling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)autoFill;
-(id)autoSeriesBorderStroke;
-(id)autoSeriesFill:(NSUInteger)arg0 ;
-(id)autoStroke;
-(id)autoStrokeForSeriesIndex:(NSUInteger)arg0 ;
-(id)autoTextFill;
-(id)fillWithColorIndex:(NSUInteger)arg0 ;
-(id)strokeWithColorIndex:(int)arg0 ;
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
-(void)resolvedGraphicProperties:(id)arg0 autoFill:(id)arg1 autoStroke:(id)arg2 autoShadow:(BOOL)arg3 nullFill:(id)arg4 nullStroke:(id)arg5 nullShadow:(BOOL)arg6 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKLEVELOVERLAYSERIES_H
#define HKLEVELOVERLAYSERIES_H



#import "HKLineSeries.h"

@interface HKLevelOverlaySeries : HKLineSeries {
    NSUInteger _options;
}




+(id)levelOverlaySeriesWithDisplayType:(id)arg0 dataSource:(id)arg1 options:(NSUInteger)arg2 ;
-(BOOL)shouldDisplayLowerBound;
-(BOOL)shouldDisplayUpperBound;
-(NSInteger)overlayType;
-(id)_chartDataFromBlockCoordinates:(id)arg0 ;
-(id)_visibleBlockCoordinatesFromBlockCoordinates:(id)arg0 pointTransform:(struct CGAffineTransform )arg1 screenRect:(struct CGRect )arg2 strict:(BOOL)arg3 ;
-(id)initWithOptions:(NSUInteger)arg0 ;
-(void)_drawLevelBoundsInContext:(struct CGContext *)arg0 coordinates:(id)arg1 pointTransform:(struct CGAffineTransform )arg2 seriesRect:(struct CGRect )arg3 extendFirstPoint:(BOOL)arg4 seriesRenderingDelegate:(id)arg5 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 seriesRenderingDelegate:(id)arg6 ;


@end


#endif
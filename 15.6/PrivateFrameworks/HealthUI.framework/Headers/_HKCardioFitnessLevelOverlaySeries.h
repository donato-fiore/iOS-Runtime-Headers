// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKCARDIOFITNESSLEVELOVERLAYSERIES_H
#define _HKCARDIOFITNESSLEVELOVERLAYSERIES_H



#import "HKLineSeries.h"

@interface _HKCardioFitnessLevelOverlaySeries : HKLineSeries {
    NSInteger _cardioFitnessLevel;
    BOOL _shouldDisplayUpperBound;
    BOOL _shouldDisplayLowerBound;
}




-(NSInteger)overlayType;
-(id)_cardioFitnessDataFromBlockCoordinates:(id)arg0 ;
-(id)_visibleCardioFitnessBlockCoordinatesFromBlockCoordinates:(id)arg0 pointTransform:(struct CGAffineTransform )arg1 screenRect:(struct CGRect )arg2 strict:(BOOL)arg3 ;
-(id)initWithCardioLevel:(NSInteger)arg0 ;
-(void)_drawCardioFitnessBoundsInContext:(struct CGContext *)arg0 coordinates:(id)arg1 pointTransform:(struct CGAffineTransform )arg2 seriesRect:(struct CGRect )arg3 extendFirstPoint:(BOOL)arg4 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 ;


@end


#endif
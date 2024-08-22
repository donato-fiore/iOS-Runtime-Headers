// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKSLEEPDURATIONAVERAGESERIES_H
#define _HKSLEEPDURATIONAVERAGESERIES_H

@class NSString;


#import "HKSleepDurationSeries.h"

@interface _HKSleepDurationAverageSeries : HKSleepDurationSeries

@property (copy, nonatomic) NSString *averageDescription; // ivar: _averageDescription
@property (nonatomic) CGFloat averageValue; // ivar: _averageValue


-(NSInteger)overlayType;
-(id)init;
-(void)drawOverlayInContext:(struct CGContext *)arg0 seriesOverlayData:(id)arg1 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 ;


@end


#endif
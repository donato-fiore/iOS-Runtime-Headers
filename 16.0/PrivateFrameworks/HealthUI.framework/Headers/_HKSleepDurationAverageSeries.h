// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKSLEEPDURATIONAVERAGESERIES_H
#define _HKSLEEPDURATIONAVERAGESERIES_H

@class NSString, NSNumber, NSLock;


#import "HKSleepDurationSeries.h"

@interface _HKSleepDurationAverageSeries : HKSleepDurationSeries

@property (copy, nonatomic) NSString *averageDescriptionStorage; // ivar: _averageDescriptionStorage
@property (nonatomic) CGFloat averageValueStorage; // ivar: _averageValueStorage
@property (retain, nonatomic) NSNumber *averageValueType;
@property (retain, nonatomic) NSNumber *averageValueTypeStorage; // ivar: _averageValueTypeStorage
@property (readonly, nonatomic) NSLock *seriesMutableStateLock; // ivar: _seriesMutableStateLock


-(NSInteger)overlayType;
-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(id)init;
-(void)drawOverlayInContext:(struct CGContext *)arg0 seriesOverlayData:(id)arg1 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 seriesRenderingDelegate:(id)arg6 ;
-(void)setAverageValue:(CGFloat)arg0 averageDescription:(id)arg1 ;


@end


#endif
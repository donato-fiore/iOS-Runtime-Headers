// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKHEARTRATERICHCOMPLICATIONRECTANGULARVIEW_H
#define NTKHEARTRATERICHCOMPLICATIONRECTANGULARVIEW_H

@class NSArray, NSNumber, NSDate, NSDateInterval;


#import "NTKRichComplicationRectangularDailyGraphView.h"

@interface NTKHeartRateRichComplicationRectangularView : NTKRichComplicationRectangularDailyGraphView

@property (retain, nonatomic) NSArray *chartPoints; // ivar: _chartPoints
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) NSNumber *highBPM; // ivar: _highBPM
@property (nonatomic) NSNumber *lowBPM; // ivar: _lowBPM
@property (retain, nonatomic) NSDate *measurementDate; // ivar: _measurementDate
@property (retain, nonatomic) NSDateInterval *measurementDateDayInterval; // ivar: _measurementDateDayInterval


-(CGFloat)_xValueForPointFromChartPoint:(id)arg0 inRect:(struct CGRect )arg1 ;
-(CGFloat)_yValueForPointFromChartPointValue:(id)arg0 betweenHigh:(id)arg1 andLow:(id)arg2 inRect:(struct CGRect )arg3 ;
-(id)init;
-(void)_loadLockedState;
-(void)_loadNoDataState;
-(void)_loadWithMetadata:(id)arg0 ;
-(void)_updateDailyLabel:(id)arg0 withBPM:(id)arg1 ;
-(void)drawGraph:(struct CGContext *)arg0 rect:(struct CGRect )arg1 ;
-(void)loadWithMetadata:(id)arg0 ;


@end


#endif
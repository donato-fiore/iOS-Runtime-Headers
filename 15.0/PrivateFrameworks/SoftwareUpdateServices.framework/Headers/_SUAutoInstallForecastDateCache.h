// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SUAUTOINSTALLFORECASTDATECACHE_H
#define _SUAUTOINSTALLFORECASTDATECACHE_H

@class NSCalendar, NSDate;

#import <Foundation/Foundation.h>

#import "SUAutoInstallForecast.h"

@interface _SUAutoInstallForecastDateCache : NSObject {
    NSInteger _scheduleType;
    SUAutoInstallForecast *_weak_forecast;
    NSCalendar *_calendar;
    NSDate *_roundedStartDate;
    NSDate *_roundedEndDate;
    BOOL _parsed;
}


@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) NSDate *roundedEndTime;
@property (readonly, nonatomic) NSDate *roundedStartTime;
@property (readonly, nonatomic) NSInteger scheduleType;


-(BOOL)_isStart:(id)arg0 end:(id)arg1 withinDateRange:(id)arg2 end:(id)arg3 ;
-(id)_componentsFromDate:(id)arg0 ;
-(id)description;
-(id)initWithForecast:(id)arg0 ;
-(void)_computeTonightRangeRelativeToDate:(id)arg0 extraDayOffset:(NSInteger)arg1 outStart:(*id)arg2 outEnd:(*id)arg3 ;
-(void)_parseForecast;
-(void)dealloc;


@end


#endif
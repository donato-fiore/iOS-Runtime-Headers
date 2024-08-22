// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ATXAPPHISTORICALAVERAGEDOSE_H
#define _ATXAPPHISTORICALAVERAGEDOSE_H

@class NSDate, NSTimeZone;

#import <Foundation/Foundation.h>

#import "_ATXMovingAverage.h"

@interface _ATXAppHistoricalAverageDose : NSObject {
    NSDate *_currentDay;
    CGFloat _currentDuration;
    int _dayCount;
    NSTimeZone *_timeZone;
}


@property (readonly, nonatomic) _ATXMovingAverage *movingAverage; // ivar: _movingAverage


-(id)initWith:(id)arg0 endDate:(id)arg1 timeZone:(id)arg2 alpha:(CGFloat)arg3 ;
-(void)_finishCurrentDay;
-(void)_updateMovingAverageForOneDay:(CGFloat)arg0 ;
-(void)addDuration:(id)arg0 endDate:(id)arg1 ;
-(void)skipTo:(id)arg0 ;


@end


#endif
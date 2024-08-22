// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALENDARMODELSCENESTATE_H
#define CALENDARMODELSCENESTATE_H


#import <Foundation/Foundation.h>


@interface CalendarModelSceneState : NSObject

@property (nonatomic) int dayViewFirstVisibleSecond; // ivar: _dayViewFirstVisibleSecond
@property (nonatomic) CGFloat dayViewHourScale; // ivar: _dayViewHourScale
@property (nonatomic) NSInteger lastUsedNonYearView; // ivar: _lastUsedNonYearView
@property (nonatomic) BOOL showDayAsList; // ivar: _showDayAsList
@property (nonatomic) BOOL showMonthAsDivided; // ivar: _showMonthAsDivided
@property (nonatomic) NSInteger weekViewFirstVisibleSecond; // ivar: _weekViewFirstVisibleSecond
@property (nonatomic) CGFloat weekViewHourScale; // ivar: _weekViewHourScale


-(id)init;


@end


#endif
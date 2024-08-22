// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDATEPICKERCALENDARVIEWDATASOURCECONTROLLER_H
#define _UIDATEPICKERCALENDARVIEWDATASOURCECONTROLLER_H

@class NSCalendar;

#import <Foundation/Foundation.h>

#import "UICollectionViewDiffableDataSource.h"
#import "_UIDatePickerCalendarMonthSet.h"
#import "_UIDatePickerCalendarDaySet.h"

@interface _UIDatePickerCalendarViewDataSourceController : NSObject {
    NSCalendar *_calendar;
    UICollectionViewDiffableDataSource *_dataSource;
    _UIDatePickerCalendarMonthSet *_loadedMonthSet;
    _UIDatePickerCalendarDaySet *_loadedDaySet;
}




-(NSInteger)cleanupDataSourceWithScrollPositionIfNecessary:(id)arg0 ;
-(NSInteger)prepareDataSourceWithScrollPositionIfNecessary:(id)arg0 ;
-(id)_loadedDays;
-(id)_loadedMonths;
-(id)initWithCalendar:(id)arg0 dataSource:(id)arg1 ;
-(void)_reloadDataSourceWithScrollPosition:(id)arg0 ;
-(void)reloadDataSourceAroundMonth:(id)arg0 ;


@end


#endif
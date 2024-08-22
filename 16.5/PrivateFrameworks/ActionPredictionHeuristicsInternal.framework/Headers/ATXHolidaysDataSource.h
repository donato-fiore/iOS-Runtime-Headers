// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXHOLIDAYSDATASOURCE_H
#define ATXHOLIDAYSDATASOURCE_H


#import <Foundation/Foundation.h>

#import "ATXHeuristicDevice.h"

@interface ATXHolidaysDataSource : NSObject {
    ATXHeuristicDevice *_device;
}




-(id)_holidayCalendarForEventStore:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(void)holidaysFromStartDate:(id)arg0 toEndDate:(id)arg1 callback:(id)arg2 ;


@end


#endif
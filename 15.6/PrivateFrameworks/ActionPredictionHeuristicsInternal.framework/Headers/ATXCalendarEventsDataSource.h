// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXCALENDAREVENTSDATASOURCE_H
#define ATXCALENDAREVENTSDATASOURCE_H


#import <Foundation/Foundation.h>

#import "ATXHeuristicDevice.h"

@interface ATXCalendarEventsDataSource : NSObject {
    ATXHeuristicDevice *_device;
}




-(id)initWithDevice:(id)arg0 ;
-(void)calendarEventsFromStartDate:(id)arg0 toEndDate:(id)arg1 callback:(id)arg2 ;
-(void)visibleCalendarsWithCallback:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCALENDAREVENTSDATASOURCE_H
#define ATXCALENDAREVENTSDATASOURCE_H


#import <Foundation/Foundation.h>

#import "ATXHeuristicDevice.h"

@interface ATXCalendarEventsDataSource : NSObject {
    ATXHeuristicDevice *_device;
}




+(id)contactForParticipant:(id)arg0 ;
+(id)contactStore;
+(id)eventsFromStartDate:(id)arg0 endDate:(id)arg1 ;
+(id)eventsFromStartDate:(id)arg0 endDate:(id)arg1 category:(id)arg2 ;
+(id)flightEventsFromStartDate:(id)arg0 endDate:(id)arg1 ;
+(id)hotelEventsFromStartDate:(id)arg0 endDate:(id)arg1 ;
+(id)organizerContactWithEvent:(id)arg0 ;
+(id)sortEkEvents:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(void)calendarEventsFromStartDate:(id)arg0 toEndDate:(id)arg1 callback:(id)arg2 ;
-(void)visibleCalendarsWithCallback:(id)arg0 ;


@end


#endif
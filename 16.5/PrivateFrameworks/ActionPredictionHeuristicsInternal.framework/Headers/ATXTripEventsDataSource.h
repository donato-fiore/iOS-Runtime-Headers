// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXTRIPEVENTSDATASOURCE_H
#define ATXTRIPEVENTSDATASOURCE_H

@class PPEventStore;

#import <Foundation/Foundation.h>

#import "ATXHeuristicDevice.h"

@interface ATXTripEventsDataSource : NSObject {
    ATXHeuristicDevice *_device;
    PPEventStore *_eventStore;
}




-(id)fetchTripEventsFromStartDate:(id)arg0 endDate:(id)arg1 error:(*id)arg2 ;
-(id)initWithDevice:(id)arg0 ;
-(void)getLocationForMostRelevantTripInRangeFrom:(id)arg0 to:(id)arg1 callback:(id)arg2 ;


@end


#endif
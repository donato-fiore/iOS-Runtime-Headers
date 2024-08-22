// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXEXTRAORDINARYEVENTSDATASOURCE_H
#define ATXEXTRAORDINARYEVENTSDATASOURCE_H

@class PPEventStore;

#import <Foundation/Foundation.h>

#import "ATXHeuristicDevice.h"

@interface ATXExtraordinaryEventsDataSource : NSObject {
    ATXHeuristicDevice *_device;
    PPEventStore *_extraordinaryEventStore;
}




+(id)_endOfDayAfterDate:(id)arg0 numberOfDays:(NSInteger)arg1 ;
-(id)_ekEventForHighlight:(id)arg0 eventStore:(id)arg1 ;
-(id)_fetchExtraordinaryEvents;
-(id)initWithDevice:(id)arg0 ;
-(void)getEventsWithProminentFeature:(id)arg0 callback:(id)arg1 ;


@end


#endif
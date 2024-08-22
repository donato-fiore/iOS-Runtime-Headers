// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXEVENTTRAVELTIMEDATASOURCE_H
#define ATXEVENTTRAVELTIMEDATASOURCE_H


#import <Foundation/Foundation.h>

#import "ATXHeuristicDevice.h"

@interface ATXEventTravelTimeDataSource : NSObject {
    ATXHeuristicDevice *_device;
}




-(id)initWithDevice:(id)arg0 ;
-(void)travelTimeInfoForEventID:(id)arg0 location:(id)arg1 expectedArrivalDate:(id)arg2 transportType:(id)arg3 localOnlyAfterFirstUpdate:(BOOL)arg4 callback:(id)arg5 ;


@end


#endif
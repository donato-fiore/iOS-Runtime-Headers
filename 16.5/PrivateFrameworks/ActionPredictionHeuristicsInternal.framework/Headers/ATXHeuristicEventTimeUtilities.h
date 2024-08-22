// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXHEURISTICEVENTTIMEUTILITIES_H
#define ATXHEURISTICEVENTTIMEUTILITIES_H

@class CLPlacemark, EKEvent, NSDictionary, NSString;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "ATXEventTravelTimeDataSource.h"

@interface ATXHeuristicEventTimeUtilities : NSObject

@property (retain, nonatomic) ATXEventTravelTimeDataSource *dataSource; // ivar: _dataSource
@property (retain, nonatomic) CLPlacemark *destination; // ivar: _destination
@property (retain, nonatomic) EKEvent *event; // ivar: _event
@property (retain, nonatomic) NSDictionary *resolvedTimeInformation; // ivar: _resolvedTimeInformation
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // ivar: _semaphore
@property (retain, nonatomic) NSString *transportType; // ivar: _transportType


-(id)init;
-(id)travelTimeToEvent:(id)arg0 destination:(id)arg1 transportType:(id)arg2 heuristicDevice:(id)arg3 ;


@end


#endif
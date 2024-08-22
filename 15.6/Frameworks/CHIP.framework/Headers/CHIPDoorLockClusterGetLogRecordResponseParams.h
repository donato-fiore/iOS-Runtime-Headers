// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPDOORLOCKCLUSTERGETLOGRECORDRESPONSEPARAMS_H
#define CHIPDOORLOCKCLUSTERGETLOGRECORDRESPONSEPARAMS_H

@class NSNumber, NSData;

#import <Foundation/Foundation.h>


@interface CHIPDoorLockClusterGetLogRecordResponseParams : NSObject

@property (retain, nonatomic) NSNumber *eventIdOrAlarmCode; // ivar: _eventIdOrAlarmCode
@property (retain, nonatomic) NSNumber *eventType; // ivar: _eventType
@property (retain, nonatomic) NSNumber *logEntryId; // ivar: _logEntryId
@property (retain, nonatomic) NSData *pin; // ivar: _pin
@property (retain, nonatomic) NSNumber *source; // ivar: _source
@property (retain, nonatomic) NSNumber *timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSNumber *userId; // ivar: _userId


-(id)init;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OSACTIVITYEVENT_H
#define OSACTIVITYEVENT_H

@class NSString, NSUUID, NSDate, NSTimeZone;

#import <Foundation/Foundation.h>


@interface OSActivityEvent : NSObject

@property (readonly, nonatomic) NSUInteger activityID; // ivar: _activityID
@property (copy, nonatomic) NSString *eventMessage; // ivar: _eventMessage
@property (readonly, nonatomic) NSUInteger eventType; // ivar: _eventType
@property (readonly, nonatomic) NSUInteger machTimestamp; // ivar: _machTimestamp
@property (readonly, nonatomic) NSUInteger parentActivityID; // ivar: _parentActivityID
@property (readonly, nonatomic) BOOL persisted; // ivar: _persisted
@property (readonly, copy, nonatomic) NSString *process;
@property (readonly, nonatomic) int processID; // ivar: _processID
@property (readonly, copy, nonatomic) NSString *processImagePath; // ivar: _processImagePath
@property (readonly, copy, nonatomic) NSUUID *processImageUUID; // ivar: _processImageUUID
@property (readonly, nonatomic) NSUInteger processUniqueID; // ivar: _processUniqueID
@property (readonly, copy, nonatomic) NSString *sender;
@property (readonly, copy, nonatomic) NSString *senderImagePath; // ivar: _senderImagePath
@property (readonly, copy, nonatomic) NSUUID *senderImageUUID; // ivar: _senderImageUUID
@property (readonly, nonatomic) NSUInteger threadID; // ivar: _threadID
@property (readonly, nonatomic) timeval timeGMT; // ivar: _timeGMT
@property (readonly, copy, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (readonly, copy, nonatomic) NSTimeZone *timezone; // ivar: _timezone
@property (retain, nonatomic) NSString *timezoneName; // ivar: _timezoneName
@property (readonly, nonatomic) NSUInteger traceID; // ivar: _traceID
@property (readonly, nonatomic) timezone tz; // ivar: _tz


+(id)activityEventFromStreamEntry:(struct os_activity_stream_entry_s *)arg0 ;
-(id)description;
-(id)properties;
-(void)_addProperties:(id)arg0 ;
-(void)_initWithProperties:(id)arg0 ;
-(void)fillFromStreamEntry:(struct os_activity_stream_entry_s *)arg0 eventMessage:(char *)arg1 persisted:(BOOL)arg2 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDALARMEVENT_H
#define HDALARMEVENT_H

@class NSTimeZone, NSString, NSDate, NSDateComponents;

#import <Foundation/Foundation.h>


@interface HDAlarmEvent : NSObject

@property (copy, nonatomic) NSTimeZone *_unitTest_localTimeZoneOverride; // ivar: __unitTest_localTimeZoneOverride
@property (readonly, copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy, nonatomic) NSDate *currentDueDate;
@property (readonly, copy, nonatomic) NSDate *dueDate; // ivar: _dueDate
@property (readonly, copy, nonatomic) NSDateComponents *dueDateComponents; // ivar: _dueDateComponents
@property (readonly, copy, nonatomic) NSString *eventIdentifier; // ivar: _eventIdentifier
@property (readonly, nonatomic) NSUInteger eventOptions; // ivar: _eventOptions
@property (readonly, nonatomic) BOOL requiresDeviceOnWrist;
@property (readonly, nonatomic) BOOL requiresDeviceUnlocked;


-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithClientIdentifier:(id)arg0 eventIdentifier:(id)arg1 dueDate:(id)arg2 dueDateComponents:(id)arg3 eventOptions:(NSUInteger)arg4 ;
-(id)description;
-(id)initWithClientIdentifier:(id)arg0 eventIdentifier:(id)arg1 dueDate:(id)arg2 eventOptions:(NSUInteger)arg3 ;
-(id)initWithClientIdentifier:(id)arg0 eventIdentifier:(id)arg1 dueDateComponents:(id)arg2 eventOptions:(NSUInteger)arg3 ;


@end


#endif
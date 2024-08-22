// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKWORKOUTEVENT_H
#define _HKWORKOUTEVENT_H

@class NSDateInterval, NSError, NSDictionary, NSUUID;
@protocol NSSecureCoding, HKPersistableWorkoutEvent;

#import <Foundation/Foundation.h>


@interface _HKWorkoutEvent : NSObject <NSSecureCoding, HKPersistableWorkoutEvent>



@property (readonly, copy, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSInteger eventType; // ivar: _eventType
@property (readonly, copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSUUID *sessionId; // ivar: _sessionId
@property (readonly, copy, nonatomic) NSUUID *sessionUUID;
@property (readonly, nonatomic) NSInteger workoutEventType;


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventType:(NSInteger)arg0 sessionId:(id)arg1 dateInterval:(id)arg2 metadata:(id)arg3 ;
-(id)initWithSessionId:(id)arg0 error:(id)arg1 ;
-(id)initWithWorkoutEventType:(NSInteger)arg0 sessionUUID:(id)arg1 dateInterval:(id)arg2 metadata:(id)arg3 error:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
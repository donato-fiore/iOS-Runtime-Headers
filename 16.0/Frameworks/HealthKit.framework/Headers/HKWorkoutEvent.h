// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKWORKOUTEVENT_H
#define HKWORKOUTEVENT_H

@class NSDate, NSDateInterval, NSError, NSDictionary, NSUUID;
@protocol HKPersistableWorkoutEvent, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HKWorkoutEvent : NSObject <HKPersistableWorkoutEvent, NSSecureCoding, NSCopying>

 {
    NSInteger _type;
}


@property (readonly, copy) NSDate *date;
@property (readonly, copy) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, copy) NSDictionary *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSUUID *sessionUUID;
@property (readonly) NSInteger type;
@property (readonly, nonatomic) NSInteger workoutEventType;


+(BOOL)supportsSecureCoding;
+(id)_newWorkoutEventWithType:(NSInteger)arg0 dateInterval:(id)arg1 metadata:(id)arg2 ;
+(id)_unvalidatedWorkoutEventWithType:(NSInteger)arg0 dateInterval:(id)arg1 metadata:(id)arg2 ;
+(id)_workoutEventWithInternalEvent:(id)arg0 ;
+(id)_workoutEventWithType:(NSInteger)arg0 date:(id)arg1 metadata:(id)arg2 ;
+(id)_workoutEventWithType:(NSInteger)arg0 dateInterval:(id)arg1 metadata:(id)arg2 ;
+(id)workoutEventWithType:(NSInteger)arg0 date:(id)arg1 ;
+(id)workoutEventWithType:(NSInteger)arg0 date:(id)arg1 metadata:(id)arg2 ;
+(id)workoutEventWithType:(NSInteger)arg0 dateInterval:(id)arg1 metadata:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)_init;
-(id)_validateWithConfiguration:(struct HKObjectValidationConfiguration )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWorkoutEventType:(NSInteger)arg0 sessionUUID:(id)arg1 dateInterval:(id)arg2 metadata:(id)arg3 error:(id)arg4 ;
-(void)_assertPropertiesValid;
-(void)_setWorkoutEventMetadata:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMEDICATIONSCHEDULE_H
#define HKMEDICATIONSCHEDULE_H

@class NSUUID, NSTimeZone, NSDateComponents, NSDate, NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKMedicationSchedule : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy, nonatomic) NSTimeZone *createdUTCOffset; // ivar: _createdUTCOffset
@property (readonly, nonatomic) CGFloat creationTimestamp; // ivar: _creationTimestamp
@property (readonly, copy, nonatomic) NSDateComponents *cycleStartDate; // ivar: _cycleStartDate
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted; // ivar: _deleted
@property (readonly, copy, nonatomic) NSDate *endDateTime; // ivar: _endDateTime
@property (readonly, nonatomic) NSInteger frequencyType; // ivar: _frequencyType
@property (readonly, copy, nonatomic) NSString *medicationIdentifier; // ivar: _medicationIdentifier
@property (readonly, copy, nonatomic) NSUUID *medicationUUID; // ivar: _medicationUUID
@property (readonly, copy, nonatomic) NSString *note; // ivar: _note
@property (readonly, copy, nonatomic) NSDate *startDateTime; // ivar: _startDateTime
@property (readonly, copy, nonatomic) NSArray *timeIntervals; // ivar: _timeIntervals


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deletedSchedule;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 medicationIdentifier:(id)arg1 createdUTCOffset:(id)arg2 startDateTime:(id)arg3 endDateTime:(id)arg4 timeIntervals:(id)arg5 frequencyType:(NSInteger)arg6 cycleStartDateComponent:(id)arg7 note:(id)arg8 ;
-(id)initWithUUID:(id)arg0 medicationUUID:(id)arg1 medicationIdentifier:(id)arg2 createdUTCOffset:(id)arg3 startDateTime:(id)arg4 endDateTime:(id)arg5 timeIntervals:(id)arg6 frequencyType:(NSInteger)arg7 cycleStartDateComponent:(id)arg8 note:(id)arg9 creationTimestamp:(CGFloat)arg10 deleted:(BOOL)arg11 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
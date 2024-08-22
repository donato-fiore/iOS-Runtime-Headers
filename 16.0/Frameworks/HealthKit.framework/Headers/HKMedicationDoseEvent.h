// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMEDICATIONDOSEEVENT_H
#define HKMEDICATIONDOSEEVENT_H

@class NSString, NSUUID, NSNumber, NSDate;
@protocol NSSecureCoding, NSCopying;


#import "HKSample.h"
#import "HKMedicationDoseEventType.h"

@interface HKMedicationDoseEvent : HKSample <NSSecureCoding, NSCopying>

 {
    NSInteger _logOrigin;
    NSString *_scheduleItemIdentifier;
    NSUUID *_medicationUUID;
    NSString *_medicationIdentifier;
    NSNumber *_scheduledDoseQuantity;
    NSNumber *_doseQuantity;
    NSDate *_scheduledDate;
    NSInteger _status;
}


@property (readonly, copy, nonatomic) NSNumber *doseQuantity;
@property (readonly, nonatomic) NSInteger logOrigin;
@property (readonly, copy) HKMedicationDoseEventType *medicationDoseEventType;
@property (readonly, copy, nonatomic) NSString *medicationIdentifier;
@property (readonly, copy, nonatomic) NSUUID *medicationUUID;
@property (readonly, copy, nonatomic) NSString *scheduleItemIdentifier;
@property (readonly, copy, nonatomic) NSDate *scheduledDate;
@property (readonly, copy, nonatomic) NSNumber *scheduledDoseQuantity;
@property (readonly, nonatomic) NSInteger status;


+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsEquivalence;
+(BOOL)supportsSecureCoding;
+(id)_newMedicationDoseEventWithType:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 device:(id)arg3 metadata:(id)arg4 logOrigin:(NSInteger)arg5 scheduleItemIdentifier:(id)arg6 medicationUUID:(id)arg7 medicationIdentifier:(id)arg8 scheduledDoseQuantity:(id)arg9 doseQuantity:(id)arg10 scheduledDate:(id)arg11 status:(NSInteger)arg12 config:(id)arg13 ;
+(id)medicationDoseEventWithLogOrigin:(NSInteger)arg0 scheduleItemIdentifier:(id)arg1 medicationIdentifier:(id)arg2 scheduledDoseQuantity:(id)arg3 doseQuantity:(id)arg4 scheduledDate:(id)arg5 startDate:(id)arg6 status:(NSInteger)arg7 metadata:(id)arg8 ;
+(id)medicationDoseEventWithType:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 device:(id)arg3 metadata:(id)arg4 logOrigin:(NSInteger)arg5 scheduleItemIdentifier:(id)arg6 medicationIdentifier:(id)arg7 scheduledDoseQuantity:(CGFloat)arg8 doseQuantity:(CGFloat)arg9 scheduledDate:(id)arg10 status:(NSInteger)arg11 medicationUuid:(id)arg12 ;
-(BOOL)isEquivalent:(id)arg0 ;
-(id)_validateWithConfiguration:(struct HKObjectValidationConfiguration )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
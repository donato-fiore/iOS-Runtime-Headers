// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMEDICATIONSCHEDULEITEMDOSE_H
#define HKMEDICATIONSCHEDULEITEMDOSE_H

@class NSNumber, NSString, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKMedicationScheduleItemDose : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSNumber *dose; // ivar: _dose
@property (readonly, copy, nonatomic) NSString *medicationIdentifier; // ivar: _medicationIdentifier
@property (readonly, copy, nonatomic) NSUUID *scheduleUUID; // ivar: _scheduleUUID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithScheduleUUID:(id)arg0 dose:(id)arg1 medicationIdentifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
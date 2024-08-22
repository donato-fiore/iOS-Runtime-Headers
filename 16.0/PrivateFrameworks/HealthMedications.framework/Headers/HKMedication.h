// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMEDICATION_H
#define HKMEDICATION_H

@class NSString, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKMedicationSchedule.h"

@interface HKMedication : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL hasActiveReminder; // ivar: _hasActiveReminder
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *nickname; // ivar: _nickname
@property (readonly, weak, nonatomic) HKMedicationSchedule *schedule; // ivar: _schedule
@property (readonly, copy, nonatomic) NSNumber *strength; // ivar: _strength
@property (readonly, copy, nonatomic) NSString *unit; // ivar: _unit


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init:(id)arg0 nickname:(id)arg1 hasActiveReminder:(BOOL)arg2 schedule:(id)arg3 unit:(id)arg4 strength:(id)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
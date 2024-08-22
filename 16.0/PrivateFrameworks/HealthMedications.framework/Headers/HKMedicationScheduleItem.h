// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMEDICATIONSCHEDULEITEM_H
#define HKMEDICATIONSCHEDULEITEM_H

@class NSArray, NSString, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKMedicationScheduleItem : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *doses; // ivar: _doses
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL notificationSent; // ivar: _notificationSent
@property (readonly, copy, nonatomic) NSDate *scheduledDateTime; // ivar: _scheduledDateTime


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithScheduledDateTime:(id)arg0 notificationSent:(BOOL)arg1 doses:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
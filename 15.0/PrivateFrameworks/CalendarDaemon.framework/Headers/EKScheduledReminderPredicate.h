// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKSCHEDULEDREMINDERPREDICATE_H
#define EKSCHEDULEDREMINDERPREDICATE_H

@class NSDate;


#import "EKPredicate.h"

@interface EKScheduledReminderPredicate : EKPredicate

@property (retain, nonatomic) NSDate *day; // ivar: _day
@property (nonatomic) NSUInteger maxResults; // ivar: _maxResults


+(BOOL)supportsSecureCoding;
+(id)predicateForScheduledRemindersInCalendars:(id)arg0 onDay:(id)arg1 ;
-(id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
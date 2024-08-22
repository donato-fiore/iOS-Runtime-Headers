// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCLSCHEDULE_H
#define SCLSCHEDULE_H

@class NSArray;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SCLSchedule : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) NSArray *recurrences;
@property (readonly, nonatomic) NSInteger scheduledDays;
@property (readonly, nonatomic) NSArray *uniformTimeIntervals;
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isScheduledForDay:(NSInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)endTimeForDay:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)recurrencesForDay:(NSInteger)arg0 ;
-(id)startTimeForDay:(NSInteger)arg0 ;
-(id)timeIntervalsForDay:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
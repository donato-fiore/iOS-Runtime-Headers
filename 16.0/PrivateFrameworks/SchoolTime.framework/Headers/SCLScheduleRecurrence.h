// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCLSCHEDULERECURRENCE_H
#define SCLSCHEDULERECURRENCE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SCLTimeInterval.h"

@interface SCLScheduleRecurrence : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger day; // ivar: _day
@property (readonly, copy, nonatomic) SCLTimeInterval *timeInterval; // ivar: _timeInterval


+(BOOL)supportsSecureCoding;
-(BOOL)intersectsRecurrence:(id)arg0 ;
-(BOOL)isActiveAtDate:(id)arg0 calendar:(id)arg1 ;
-(BOOL)isContiguousWithRecurrence:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dateIntervalForActiveScheduleOnOrAfterDate:(id)arg0 calendar:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimeInterval:(id)arg0 day:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCDATERANGE_H
#define FCDATERANGE_H

@class NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FCDateRange : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CGFloat absoluteTimeInterval;
@property (readonly, nonatomic) NSDate *earlierDate;
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) BOOL isFinite;
@property (readonly, nonatomic) BOOL isFromInfinity;
@property (readonly, nonatomic) BOOL isToInfinity;
@property (readonly, nonatomic) NSDate *laterDate;
@property (readonly, nonatomic) NSUInteger maxMillisecondsTimeIntervalSince1970;
@property (readonly, nonatomic) NSUInteger minMillisecondsTimeIntervalSince1970;
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) CGFloat timeInterval;


+(BOOL)supportsSecureCoding;
+(id)dateRangeWithEarlierDate:(id)arg0 laterDate:(id)arg1 ;
+(id)dateRangeWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(BOOL)containsDate:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isWithinTimeInterval:(CGFloat)arg0 ofDateRange:(id)arg1 ;
-(BOOL)startsLaterThanDateRange:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)sliceIndexForDate:(id)arg0 withInterval:(CGFloat)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEarlierDate:(id)arg0 laterDate:(id)arg1 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)initWithStartDate:(id)arg0 timeInterval:(CGFloat)arg1 ;
-(id)intersectionWithDateRange:(id)arg0 ;
-(id)sliceForDate:(id)arg0 withInterval:(CGFloat)arg1 ;
-(id)slicesWithTimeInterval:(CGFloat)arg0 ;
-(id)timestampDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
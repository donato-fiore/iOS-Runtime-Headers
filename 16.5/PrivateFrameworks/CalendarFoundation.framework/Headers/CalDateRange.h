// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDATERANGE_H
#define CALDATERANGE_H

@class NSString, NSDate;
@protocol NSCopying, CalDateRangeProtocol, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CalDateRange : NSObject <NSCopying, CalDateRangeProtocol, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration;
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;


+(BOOL)range:(id)arg0 intersectsRange:(id)arg1 ;
+(BOOL)range:(id)arg0 intersectsRange:(id)arg1 allowSinglePointIntersection:(BOOL)arg2 ;
+(BOOL)range:(id)arg0 intersectsRangeWithStartDate:(id)arg1 endDate:(id)arg2 ;
+(BOOL)range:(id)arg0 intersectsRangeWithStartDate:(id)arg1 endDate:(id)arg2 allowSinglePointIntersection:(BOOL)arg3 ;
+(BOOL)rangesIntersectWithStartDate1:(id)arg0 endDate1:(id)arg1 startDate2:(id)arg2 endDate2:(id)arg3 ;
+(BOOL)rangesIntersectWithStartDate1:(id)arg0 endDate1:(id)arg1 startDate2:(id)arg2 endDate2:(id)arg3 allowSinglePointIntersection:(BOOL)arg4 ;
+(BOOL)supportsSecureCoding;
+(id)rangeByExpandingRange:(id)arg0 direction:(NSInteger)arg1 components:(id)arg2 calendar:(id)arg3 ;
+(id)rangeByExpandingRange:(id)arg0 direction:(NSInteger)arg1 duration:(CGFloat)arg2 ;
+(id)rangeByExpandingRange:(id)arg0 direction:(NSInteger)arg1 multiplier:(NSUInteger)arg2 ;
+(id)rangeWithRange:(id)arg0 ;
+(id)rangeWithStartDate:(id)arg0 duration:(CGFloat)arg1 ;
+(id)rangeWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(BOOL)containsDate:(id)arg0 ;
-(BOOL)containsRange:(id)arg0 ;
-(BOOL)intersectsRange:(id)arg0 ;
-(BOOL)intersectsRange:(id)arg0 allowSinglePointIntersection:(BOOL)arg1 ;
-(BOOL)intersectsRangeWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(BOOL)intersectsRangeWithStartDate:(id)arg0 endDate:(id)arg1 allowSinglePointIntersection:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(id)_calculateMidnightsInCalendar:(id)arg0 ;
-(id)briefDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 duration:(CGFloat)arg1 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)intersectionWithRange:(id)arg0 ;
-(id)midnightsForRangeInTimeZoneString:(id)arg0 ;
-(id)midpoint;
-(id)subtractRange:(id)arg0 ;
-(id)unionRange:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
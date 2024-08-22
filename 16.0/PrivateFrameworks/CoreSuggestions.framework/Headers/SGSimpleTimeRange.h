// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGSIMPLETIMERANGE_H
#define SGSIMPLETIMERANGE_H

@class NSTimeZone, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SGSimpleTimeRange : NSObject <NSCopying, NSSecureCoding>

 {
    NSTimeZone *_startTimeZone;
    NSTimeZone *_endTimeZone;
}


@property (readonly, nonatomic) SGUnixTimestamp_ end; // ivar: _end
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSTimeZone *endTimeZone;
@property (readonly, nonatomic) NSInteger endUTCOffsetSeconds; // ivar: _endUTCOffsetSeconds
@property (readonly, nonatomic, getter=isFloating) BOOL floating; // ivar: _floating
@property (readonly, nonatomic) SGUnixTimestamp_ start; // ivar: _start
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSTimeZone *startTimeZone;
@property (readonly, nonatomic) NSInteger startUTCOffsetSeconds; // ivar: _startUTCOffsetSeconds


+(BOOL)hasYearMonthDayComponents:(id)arg0 ;
+(BOOL)isAllDayComponents:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)dateFromGregorianComponents:(id)arg0 ;
+(id)floatingRangeWithLocalStart:(struct SGUnixTimestamp_ )arg0 end:(struct SGUnixTimestamp_ )arg1 ;
+(id)floatingRangeWithLocalStartDate:(id)arg0 endDate:(id)arg1 ;
+(id)floatingRangeWithUTCStart:(struct SGUnixTimestamp_ )arg0 end:(struct SGUnixTimestamp_ )arg1 ;
+(id)floatingRangeWithUTCStartDate:(id)arg0 endDate:(id)arg1 ;
+(id)rangeWithGregorianStartComponents:(id)arg0 endComponents:(id)arg1 ;
+(id)rangeWithStart:(struct SGUnixTimestamp_ )arg0 duration:(CGFloat)arg1 timeZone:(id)arg2 ;
+(id)rangeWithStart:(struct SGUnixTimestamp_ )arg0 end:(struct SGUnixTimestamp_ )arg1 timeZone:(id)arg2 ;
+(id)rangeWithStart:(struct SGUnixTimestamp_ )arg0 startTimeZone:(id)arg1 end:(struct SGUnixTimestamp_ )arg2 endTimeZone:(id)arg3 ;
+(id)rangeWithStartDate:(id)arg0 startTimeZone:(id)arg1 endDate:(id)arg2 endTimeZone:(id)arg3 ;
+(id)utcRangeWithStart:(struct SGUnixTimestamp_ )arg0 duration:(CGFloat)arg1 ;
+(id)utcRangeWithStart:(struct SGUnixTimestamp_ )arg0 end:(struct SGUnixTimestamp_ )arg1 ;
+(struct SGUnixTimestamp_ )fromFloatingTime:(struct SGUnixTimestamp_ )arg0 ;
+(struct SGUnixTimestamp_ )toFloatingTime:(struct SGUnixTimestamp_ )arg0 ;
+(struct SGUnixTimestamp_ )toFloatingTime:(struct SGUnixTimestamp_ )arg0 withDSTAmbiguityPreferences:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSimpleTimeRange:(id)arg0 ;
-(BOOL)isValidAllDayRange;
-(NSUInteger)hash;
-(id)_componentsForDate:(id)arg0 timeZone:(id)arg1 ;
-(id)absoluteRange;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initUTCFloatingWithStart:(struct SGUnixTimestamp_ )arg0 end:(struct SGUnixTimestamp_ )arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStart:(struct SGUnixTimestamp_ )arg0 startUTCOffsetSeconds:(NSInteger)arg1 end:(struct SGUnixTimestamp_ )arg2 endUTCOffsetSeconds:(NSInteger)arg3 ;
-(id)stableStringRepresentation;
-(void)applyToEKEvent:(id)arg0 isAllDay:(BOOL)arg1 isFloating:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
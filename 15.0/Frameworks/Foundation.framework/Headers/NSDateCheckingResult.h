// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSDATECHECKINGRESULT_H
#define NSDATECHECKINGRESULT_H

@class NSDate, NSTimeZone;


#import "NSTextCheckingResult.h"
#import "NSString.h"

@interface NSDateCheckingResult : NSTextCheckingResult {
    _NSRange _range;
    NSDate *_date;
    NSTimeZone *_timeZone;
    CGFloat _duration;
    NSDate *_referenceDate;
    id *_underlyingResult;
    BOOL _timeIsSignificant;
    BOOL _timeIsApproximate;
    BOOL _timeIsPast;
    NSString *_leadingText;
    NSString *_trailingText;
}


@property (readonly) CGFloat duration;
@property (readonly) NSDate *referenceDate;
@property (readonly) BOOL timeIsApproximate;
@property (readonly) BOOL timeIsPast;
@property (readonly) BOOL timeIsSignificant;
@property (readonly) NSTimeZone *timeZone;
@property (readonly) *void underlyingResult;


+(BOOL)supportsSecureCoding;
-(BOOL)_adjustRangesWithOffset:(NSInteger)arg0 ;
-(NSUInteger)resultType;
-(id)date;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRange:(struct _NSRange )arg0 date:(id)arg1 ;
-(id)initWithRange:(struct _NSRange )arg0 date:(id)arg1 timeZone:(id)arg2 duration:(CGFloat)arg3 ;
-(id)initWithRange:(struct _NSRange )arg0 date:(id)arg1 timeZone:(id)arg2 duration:(CGFloat)arg3 referenceDate:(id)arg4 ;
-(id)initWithRange:(struct _NSRange )arg0 date:(id)arg1 timeZone:(id)arg2 duration:(CGFloat)arg3 referenceDate:(id)arg4 underlyingResult:(*void)arg5 ;
-(id)initWithRange:(struct _NSRange )arg0 date:(id)arg1 timeZone:(id)arg2 duration:(CGFloat)arg3 referenceDate:(id)arg4 underlyingResult:(*void)arg5 timeIsSignificant:(BOOL)arg6 timeIsApproximate:(BOOL)arg7 ;
-(id)initWithRange:(struct _NSRange )arg0 date:(id)arg1 timeZone:(id)arg2 duration:(CGFloat)arg3 referenceDate:(id)arg4 underlyingResult:(*void)arg5 timeIsSignificant:(BOOL)arg6 timeIsApproximate:(BOOL)arg7 timeIsPast:(BOOL)arg8 ;
-(id)initWithRange:(struct _NSRange )arg0 date:(id)arg1 timeZone:(id)arg2 duration:(CGFloat)arg3 referenceDate:(id)arg4 underlyingResult:(*void)arg5 timeIsSignificant:(BOOL)arg6 timeIsApproximate:(BOOL)arg7 timeIsPast:(BOOL)arg8 leadingText:(id)arg9 trailingText:(id)arg10 ;
-(id)leadingText;
-(id)resultByAdjustingRangesWithOffset:(NSInteger)arg0 ;
-(id)trailingText;
-(struct _NSRange )range;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
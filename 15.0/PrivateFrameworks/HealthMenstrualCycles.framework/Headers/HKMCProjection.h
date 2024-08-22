// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKMCPROJECTION_H
#define HKMCPROJECTION_H

@class NSString;
@protocol HKRedactedDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HKMCProjection : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying>



@property (readonly, nonatomic) ? allDays; // ivar: _allDays
@property (readonly, nonatomic) NSInteger daysOffsetFromCalendarMethod; // ivar: _daysOffsetFromCalendarMethod
@property (readonly) CGFloat endMean; // ivar: _endMean
@property (readonly) CGFloat endStandardDeviation; // ivar: _endStandardDeviation
@property (readonly, copy) NSString *hk_redactedDescription;
@property (readonly, nonatomic) ? mostLikelyDays;
@property (readonly, nonatomic, getter=isPartiallyLogged) BOOL partiallyLogged; // ivar: _partiallyLogged
@property (readonly) CGFloat startMean; // ivar: _startMean
@property (readonly) CGFloat startStandardDeviation; // ivar: _startStandardDeviation


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_dayIndexFromMean:(CGFloat)arg0 standardDeviation:(CGFloat)arg1 coefficient:(CGFloat)arg2 ;
-(NSInteger)dayIndexFromEndWithCoefficient:(CGFloat)arg0 ;
-(NSInteger)dayIndexFromStartWithCoefficient:(CGFloat)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartMean:(CGFloat)arg0 startStandardDeviation:(CGFloat)arg1 endMean:(CGFloat)arg2 endStandardDeviation:(CGFloat)arg3 allDays:(struct ? )arg4 partiallyLogged:(BOOL)arg5 daysOffsetFromCalendarMethod:(NSInteger)arg6 ;
-(struct ? )startDayRange;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
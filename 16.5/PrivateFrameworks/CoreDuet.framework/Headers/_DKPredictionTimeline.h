// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKPREDICTIONTIMELINE_H
#define _DKPREDICTIONTIMELINE_H

@class NSDate, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_DKHistogram.h"

@interface _DKPredictionTimeline : NSObject <NSCopying, NSSecureCoding>

 {
    NSDate *_startDate;
    NSArray *_transitionDates;
    NSArray *_values;
}


@property (readonly, nonatomic) NSDate *endDate;
@property (retain, nonatomic) _DKHistogram *endHistogram; // ivar: _endHistogram
@property (readonly, nonatomic) NSDate *startDate;
@property (retain, nonatomic) _DKHistogram *startHistogram; // ivar: _startHistogram
@property (readonly, nonatomic) NSArray *transitionDates;


+(BOOL)supportsSecureCoding;
+(id)predictionUnavailable;
+(id)timelineWithValues:(id)arg0 eachWithDuration:(CGFloat)arg1 startingAt:(id)arg2 ;
+(id)timelineWithValues:(id)arg0 forDurations:(id)arg1 startingAt:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isUnavailable;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)largestDateRangeWithValuesBetween:(CGFloat)arg0 and:(CGFloat)arg1 ofMinimumDuration:(CGFloat)arg2 ;
-(id)nextDateRangeWithValuesBetween:(CGFloat)arg0 and:(CGFloat)arg1 ofMinimumDuration:(CGFloat)arg2 ;
-(id)valueAtDate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
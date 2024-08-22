// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHRAFIBBURDENHISTOGRAMRESULT_H
#define HKHRAFIBBURDENHISTOGRAMRESULT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKHRAFibBurdenDayOfWeekHistogram.h"
#import "HKHRAFibBurdenTimeOfDayHistogram.h"

@interface HKHRAFibBurdenHistogramResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) HKHRAFibBurdenDayOfWeekHistogram *dayOfWeekHistogram; // ivar: _dayOfWeekHistogram
@property (readonly, nonatomic) HKHRAFibBurdenTimeOfDayHistogram *timeOfDayHistogram; // ivar: _timeOfDayHistogram


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDayOfWeekHistogram:(id)arg0 timeOfDayHistogram:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
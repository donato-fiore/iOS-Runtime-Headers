// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKSLEEPQUERYRESULT_H
#define _HKSLEEPQUERYRESULT_H

@class NSDictionary, NSDateInterval, NSString;
@protocol _HKDateBounded, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _HKSleepQueryResult : NSObject <_HKDateBounded, NSSecureCoding>

 {
    NSDictionary *_resultsByCategoryValue;
    NSDateInterval *_dateInterval;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDateInterval *resultInterval; // ivar: _resultInterval
@property (readonly, copy, nonatomic) NSDictionary *samplesBySource; // ivar: _samplesBySource
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_preferredSourceFromSources:(id)arg0 sourceOrder:(id)arg1 ;
+(id)dateIntervalForSamples:(id)arg0 ;
+(id)samplesForSamplesBySource:(id)arg0 ;
-(BOOL)_calculatePreferredDuration:(*CGFloat)arg0 categoryValue:(*NSInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dateInterval;
-(id)dateIntervalsForCategoryValue:(NSInteger)arg0 ;
-(id)endDate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResultInterval:(id)arg0 dateIntervalsByCategoryValue:(id)arg1 samplesBySource:(id)arg2 ;
-(id)preferredDateIntervals;
-(id)startDate;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
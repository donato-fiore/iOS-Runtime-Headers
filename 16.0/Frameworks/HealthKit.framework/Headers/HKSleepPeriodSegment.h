// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSLEEPPERIODSEGMENT_H
#define HKSLEEPPERIODSEGMENT_H

@class NSDateInterval, NSString, NSArray;
@protocol HKRedactedDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HKSleepPeriodSegment : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSInteger category; // ivar: _category
@property (readonly, nonatomic) BOOL containsAppleSleepTrackingData; // ivar: _containsAppleSleepTrackingData
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, copy) NSString *hk_redactedDescription;
@property (readonly, copy, nonatomic) NSArray *sampleIntervals; // ivar: _sampleIntervals


+(BOOL)supportsSecureCoding;
+(id)sleepPeriodSegmentWithDateInterval:(id)arg0 category:(NSInteger)arg1 ;
+(id)sleepPeriodSegmentWithDateInterval:(id)arg0 sampleIntervals:(id)arg1 category:(NSInteger)arg2 ;
+(id)sleepPeriodSegmentWithDateInterval:(id)arg0 sampleIntervals:(id)arg1 category:(NSInteger)arg2 containsAppleSleepTrackingData:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)mergingSleepPeriodSegment:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
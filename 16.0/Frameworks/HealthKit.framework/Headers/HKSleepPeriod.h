// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSLEEPPERIOD_H
#define HKSLEEPPERIOD_H

@class NSDateInterval, NSString, NSArray;
@protocol HKRedactedDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HKSleepPeriod : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying>



@property (readonly, nonatomic) BOOL containsSegmentsWithAppleSleepTrackingData;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, copy) NSString *hk_redactedDescription;
@property (readonly, copy, nonatomic) NSArray *segments; // ivar: _segments


+(BOOL)supportsSecureCoding;
+(id)sleepPeriodWithDateInterval:(id)arg0 segments:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)durationForCategory:(NSInteger)arg0 overlappingDateInterval:(id)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
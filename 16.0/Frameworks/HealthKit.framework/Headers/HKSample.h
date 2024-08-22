// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSAMPLE_H
#define HKSAMPLE_H

@class NSString, NSDate;
@protocol NSCopying, _HKDateBounded;


#import "HKObject.h"
#import "HKSampleType.h"

@interface HKSample : HKObject <NSCopying, _HKDateBounded>

 {
    HKSampleType *_sampleType;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDate *endDate;
@property (nonatomic, getter=_endTimestamp, setter=_setEndTimestamp:) CGFloat endTimestamp; // ivar: _endTimestamp
@property (readonly) BOOL hasUndeterminedDuration;
@property (readonly) NSUInteger hash;
@property (readonly, copy) HKSampleType *sampleType;
@property (readonly) NSDate *startDate;
@property (nonatomic, getter=_startTimestamp, setter=_setStartTimestamp:) CGFloat startTimestamp; // ivar: _startTimestamp
@property (readonly) Class superclass;


+(BOOL)supportsEquivalence;
+(BOOL)supportsSecureCoding;
+(id)_enumerateValidIntervalsWithStartDate:(id)arg0 endDate:(id)arg1 sampleType:(id)arg2 block:(id)arg3 ;
+(id)_newSampleFromDatesWithType:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 device:(id)arg3 metadata:(id)arg4 config:(id)arg5 ;
+(id)_newSampleWithType:(id)arg0 startDate:(CGFloat)arg1 endDate:(CGFloat)arg2 device:(id)arg3 metadata:(id)arg4 config:(id)arg5 ;
-(BOOL)_requiresPrivateEntitlementForQueries;
-(BOOL)isEquivalent:(id)arg0 ;
-(NSInteger)_externalSyncObjectCode;
-(id)_init;
-(id)_timeZone;
-(id)_validateWithConfiguration:(struct HKObjectValidationConfiguration )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(struct ? )hk_dayIndexRangeWithCalendar:(id)arg0 ;
-(struct ? )hk_morningIndexRangeWithCalendarWithCalendar:(id)arg0 ;
-(void)_enumerateTimePeriodsWithBlock:(id)arg0 ;
-(void)_setType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
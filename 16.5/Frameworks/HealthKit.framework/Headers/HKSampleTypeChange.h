// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSAMPLETYPECHANGE_H
#define HKSAMPLETYPECHANGE_H

@class NSDateInterval;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKSampleType.h"

@interface HKSampleTypeChange : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) CGFloat endTime; // ivar: _endTime
@property (readonly, nonatomic) BOOL hasUnfrozenSeries; // ivar: _hasUnfrozenSeries
@property (readonly, nonatomic) NSInteger queryStrategy; // ivar: _queryStrategy
@property (readonly, copy, nonatomic) HKSampleType *sampleType; // ivar: _sampleType
@property (readonly, nonatomic) CGFloat startTime; // ivar: _startTime


+(BOOL)supportsSecureCoding;
+(id)sampleTypeChangeWithSampleType:(id)arg0 dateInterval:(id)arg1 hasUnfrozenSeries:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithSampleType:(id)arg0 startTime:(CGFloat)arg1 endTime:(CGFloat)arg2 hasUnfrozenSeries:(BOOL)arg3 queryStrategy:(NSInteger)arg4 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)_extendDateIntervalWithSample:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
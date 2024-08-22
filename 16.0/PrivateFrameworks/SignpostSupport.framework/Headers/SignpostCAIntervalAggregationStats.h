// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIGNPOSTCAINTERVALAGGREGATIONSTATS_H
#define SIGNPOSTCAINTERVALAGGREGATIONSTATS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SignpostCAIntervalAggregationStats : NSObject <NSCopying>



@property (readonly, nonatomic) float averageIntervalDurationNs;
@property (readonly, nonatomic) NSUInteger intervalCount; // ivar: _intervalCount
@property (readonly, nonatomic) float maxIntervalDurationNs; // ivar: _maxIntervalDurationNs
@property (readonly, nonatomic) NSUInteger totalIntervalDurationNs; // ivar: _totalIntervalDurationNs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(void)_addAggregationStats:(id)arg0 ;
-(void)_addDurationNsToAggregation:(NSUInteger)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCHARTSUMMARYTRENDSPAN_H
#define HKCHARTSUMMARYTRENDSPAN_H

@class HKQuantity, NSDateInterval;

#import <Foundation/Foundation.h>


@interface HKChartSummaryTrendSpan : NSObject

@property (readonly, nonatomic) HKQuantity *trendAverage; // ivar: _trendAverage
@property (readonly, nonatomic) NSDateInterval *trendDateInterval; // ivar: _trendDateInterval


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithTrendDateInterval:(id)arg0 trendAverage:(id)arg1 ;


@end


#endif
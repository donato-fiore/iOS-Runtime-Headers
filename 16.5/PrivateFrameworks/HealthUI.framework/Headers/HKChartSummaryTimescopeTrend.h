// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCHARTSUMMARYTIMESCOPETREND_H
#define HKCHARTSUMMARYTIMESCOPETREND_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface HKChartSummaryTimescopeTrend : NSObject

@property (readonly, nonatomic) NSString *localizableTrendDescription; // ivar: _localizableTrendDescription
@property (readonly, nonatomic) NSInteger timeScope; // ivar: _timeScope
@property (readonly, nonatomic) NSArray *trendSpans; // ivar: _trendSpans


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initForTimeScope:(NSInteger)arg0 trendSpans:(id)arg1 localizableTrendDescription:(id)arg2 ;


@end


#endif
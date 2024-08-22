// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSLEEPANALYSISDATASOURCECONTEXT_H
#define HKSLEEPANALYSISDATASOURCECONTEXT_H


#import <Foundation/Foundation.h>


@interface HKSleepAnalysisDataSourceContext : NSObject

@property (nonatomic) NSInteger chartType; // ivar: _chartType
@property (nonatomic) NSInteger timeScope; // ivar: _timeScope


+(id)sleepAnalysisDataSourceContextWithChartType:(NSInteger)arg0 timeScope:(NSInteger)arg1 ;


@end


#endif
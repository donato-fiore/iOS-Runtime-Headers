// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSHADOWMETRICSCOMPUTER_H
#define ATXSHADOWMETRICSCOMPUTER_H

@protocol ATXShadowMetricsDataSource;

#import <Foundation/Foundation.h>


@interface ATXShadowMetricsComputer : NSObject

@property (readonly, nonatomic) NSObject<ATXShadowMetricsDataSource> *dataSource; // ivar: _dataSource


-(id)computeResultAsTrendPlotFromStartDate:(id)arg0 toEndDate:(id)arg1 resultGranularity:(NSInteger)arg2 ;
-(id)computeResultFromStartDate:(id)arg0 toEndDate:(id)arg1 ;
-(id)initWithDataSource:(id)arg0 ;


@end


#endif
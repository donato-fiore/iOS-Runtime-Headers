// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKREMOTEDATASOURCES_H
#define _HKREMOTEDATASOURCES_H


#import <Foundation/Foundation.h>

#import "HKHealthQueryChartCacheDataSource.h"

@interface _HKRemoteDataSources : NSObject

@property (readonly, nonatomic) HKHealthQueryChartCacheDataSource *monthDataSource; // ivar: _monthDataSource
@property (readonly, nonatomic) HKHealthQueryChartCacheDataSource *sixMonthDataSource; // ivar: _sixMonthDataSource
@property (readonly, nonatomic) BOOL supportsChartQueryDataGeneration; // ivar: _supportsChartQueryDataGeneration


-(id)initWithSupportsChartQueryDataGeneration:(BOOL)arg0 montDataSource:(id)arg1 sixMonthDataSource:(id)arg2 ;


@end


#endif
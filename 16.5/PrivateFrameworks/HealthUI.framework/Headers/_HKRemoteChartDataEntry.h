// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKREMOTECHARTDATAENTRY_H
#define _HKREMOTECHARTDATAENTRY_H


#import <Foundation/Foundation.h>

#import "HKHealthQueryChartCacheDataSource.h"
#import "HKGraphSeriesDataBlock.h"

@interface _HKRemoteChartDataEntry : NSObject

@property (readonly, nonatomic) HKHealthQueryChartCacheDataSource *dataSourceForMapping; // ivar: _dataSourceForMapping
@property (readonly, nonatomic) HKGraphSeriesDataBlock *seriesData; // ivar: _seriesData
@property (readonly, nonatomic) id *seriesDataSourceContext; // ivar: _seriesDataSourceContext


-(id)initWithSeriesData:(id)arg0 dataSourceForMapping:(id)arg1 seriesDataSourceContext:(id)arg2 ;


@end


#endif
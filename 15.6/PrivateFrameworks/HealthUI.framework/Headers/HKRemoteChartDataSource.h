// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKREMOTECHARTDATASOURCE_H
#define HKREMOTECHARTDATASOURCE_H

@class NSMutableDictionary;


#import "HKGraphSeriesDataSource.h"

@interface HKRemoteChartDataSource : HKGraphSeriesDataSource

@property (retain, nonatomic) NSMutableDictionary *dataBlocksForTimescopes; // ivar: _dataBlocksForTimescopes


-(id)cachedBlockForPath:(struct ? )arg0 context:(id)arg1 ;
-(id)init;
-(struct ? )blockPathForX:(id)arg0 zoom:(NSInteger)arg1 ;
-(void)blocksRequestedFromPath:(struct ? )arg0 toPath:(struct ? )arg1 priorityDelegate:(id)arg2 ;
-(void)setDataForTimeScope:(NSInteger)arg0 seriesData:(id)arg1 dataSourceForMapping:(id)arg2 seriesDataSourceContext:(id)arg3 ;


@end


#endif
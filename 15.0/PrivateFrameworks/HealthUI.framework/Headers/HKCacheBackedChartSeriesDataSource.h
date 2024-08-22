// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCACHEBACKEDCHARTSERIESDATASOURCE_H
#define HKCACHEBACKEDCHARTSERIESDATASOURCE_H

@class NSString;
@protocol HKChartDataCacheObserver;


#import "HKGraphSeriesDataSource.h"
#import "HKChartCache.h"

@interface HKCacheBackedChartSeriesDataSource : HKGraphSeriesDataSource <HKChartDataCacheObserver>

 {
    ? _lastStartPath;
    ? _lastEndPath;
}


@property (retain, nonatomic) HKChartCache *chartCache; // ivar: _chartCache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasAllBlocksAvailableBetweenStartPath:(struct ? )arg0 endPath:(struct ? )arg1 ;
-(BOOL)hasAvailableBlocksBetweenStartPath:(struct ? )arg0 endPath:(struct ? )arg1 ;
-(BOOL)hasPendingQueriesBetweenStartPath:(struct ? )arg0 endPath:(struct ? )arg1 ;
-(id)cachedBlockForPath:(struct ? )arg0 context:(id)arg1 ;
-(id)init;
-(void)_resetCachedPaths;
-(void)blocksRequestedFromPath:(struct ? )arg0 toPath:(struct ? )arg1 priorityDelegate:(id)arg2 ;
-(void)chartCacheDidUpdate:(id)arg0 ;
-(void)invalidateCache;


@end


#endif
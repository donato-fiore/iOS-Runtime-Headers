// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKDATERANGEDATASOURCE_H
#define HKDATERANGEDATASOURCE_H

@class NSMutableDictionary;
@protocol HKDateRangeDataUpdateDelegate, HKDateRangeDataSourceDelegate;


#import "HKGraphSeriesDataSource.h"

@interface HKDateRangeDataSource : HKGraphSeriesDataSource <HKDateRangeDataUpdateDelegate>



@property (retain, nonatomic) NSMutableDictionary *pathToDataBlock; // ivar: _pathToDataBlock
@property (readonly, nonatomic) NSObject<HKDateRangeDataSourceDelegate> *sourceDelegate; // ivar: _sourceDelegate


-(id)_fetchAndCacheDataForPath:(struct ? )arg0 ;
-(id)cachedBlockForPath:(struct ? )arg0 context:(id)arg1 ;
-(id)initWithSourceDelegate:(id)arg0 ;
-(void)blocksRequestedFromPath:(struct ? )arg0 toPath:(struct ? )arg1 priorityDelegate:(id)arg2 ;
-(void)dateRangeDataUpdated;
-(void)invalidateCache;


@end


#endif
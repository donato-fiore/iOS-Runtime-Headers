// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHEARTBEATSEQUENCEDATASOURCE_H
#define HKHEARTBEATSEQUENCEDATASOURCE_H



#import "HKGraphSeriesDataSource.h"
#import "HKGraphSeriesDataBlock.h"

@interface HKHeartbeatSequenceDataSource : HKGraphSeriesDataSource

@property (readonly, nonatomic) HKGraphSeriesDataBlock *dataBlock; // ivar: _dataBlock


-(id)cachedBlockForPath:(struct ? )arg0 context:(id)arg1 ;
-(id)init;
-(struct ? )blockPathForX:(id)arg0 zoom:(NSInteger)arg1 ;
-(struct CGRect )unionWithExtent:(struct CGRect )arg0 ;
-(void)blocksRequestedFromPath:(struct ? )arg0 toPath:(struct ? )arg1 priorityDelegate:(id)arg2 ;
-(void)setHeartbeatSequencePoints:(id)arg0 ;


@end


#endif
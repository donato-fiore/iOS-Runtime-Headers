// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSCALARDATASOURCE_H
#define HKSCALARDATASOURCE_H

@class HKGraphSeriesDataSource, HKGraphSeriesDataBlock;



@interface HKScalarDataSource : HKGraphSeriesDataSource

@property (readonly, nonatomic) HKGraphSeriesDataBlock *dataBlock; // ivar: _dataBlock


-(id)cachedBlockForPath:(struct ? )arg0 context:(id)arg1 ;
-(id)initWithCGPoints:(struct CGPoint *)arg0 count:(NSInteger)arg1 unitForY:(id)arg2 ;
-(id)initWithValuePoints:(id)arg0 unitForY:(id)arg1 ;
-(struct ? )blockPathForX:(id)arg0 zoom:(NSInteger)arg1 ;
-(void)blocksRequestedFromPath:(struct ? )arg0 toPath:(struct ? )arg1 priorityDelegate:(id)arg2 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKAUDIOGRAMDATASOURCE_H
#define HKAUDIOGRAMDATASOURCE_H



#import "HKGraphSeriesDataSource.h"
#import "HKGraphSeriesDataBlock.h"

@interface HKAudiogramDataSource : HKGraphSeriesDataSource

@property (readonly, nonatomic) HKGraphSeriesDataBlock *dataBlock; // ivar: _dataBlock


-(id)_chartPointsFromSensitivityData:(id)arg0 leftEarSeries:(BOOL)arg1 ;
-(id)_flatPointsFromSensitivityData:(id)arg0 leftEarSeries:(BOOL)arg1 ;
-(id)cachedBlockForPath:(struct ? )arg0 context:(id)arg1 ;
-(id)initWithFlatSensitivityData:(id)arg0 forLeftEar:(BOOL)arg1 ;
-(id)initWithSensitivityData:(id)arg0 forLeftEar:(BOOL)arg1 ;
-(struct ? )blockPathForX:(id)arg0 zoom:(NSInteger)arg1 ;
-(void)blocksRequestedFromPath:(struct ? )arg0 toPath:(struct ? )arg1 priorityDelegate:(id)arg2 ;


@end


#endif
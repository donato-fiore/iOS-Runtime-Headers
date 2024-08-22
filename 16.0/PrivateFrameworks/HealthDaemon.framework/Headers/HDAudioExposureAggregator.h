// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDAUDIOEXPOSUREAGGREGATOR_H
#define HDAUDIOEXPOSUREAGGREGATOR_H



#import "HDSeriesQuantityDataAggregator.h"

@interface HDAudioExposureAggregator : HDSeriesQuantityDataAggregator



-(BOOL)shouldFreezeCurrentSeries:(id)arg0 lastDatum:(id)arg1 seriesLength:(NSInteger)arg2 configuration:(id)arg3 aggregationInterval:(CGFloat)arg4 ;
-(void)addDatum:(id)arg0 toAccumulatedData:(id)arg1 ;


@end


#endif
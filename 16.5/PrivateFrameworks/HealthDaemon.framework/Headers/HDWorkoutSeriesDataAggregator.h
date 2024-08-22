// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDWORKOUTSERIESDATAAGGREGATOR_H
#define HDWORKOUTSERIESDATAAGGREGATOR_H



#import "HDSeriesQuantityDataAggregator.h"

@interface HDWorkoutSeriesDataAggregator : HDSeriesQuantityDataAggregator



-(BOOL)shouldAggregateToSeriesForState:(id)arg0 collector:(id)arg1 device:(id)arg2 requestedAggregationDate:(id)arg3 mode:(NSInteger)arg4 options:(NSUInteger)arg5 ;
-(void)setConfiguration:(id)arg0 ;


@end


#endif
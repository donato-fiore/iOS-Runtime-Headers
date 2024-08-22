// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHEARTBEATSERIESBUILDER_H
#define HKHEARTBEATSERIESBUILDER_H

@class NSDate, NSMutableDictionary, NSMutableData;


#import "HKSeriesBuilder.h"

@interface HKHeartbeatSeriesBuilder : HKSeriesBuilder {
    NSDate *_startDate;
    NSMutableDictionary *_mutableMetadata;
    NSMutableData *_mutableHeartbeats;
    NSUInteger _count;
    CGFloat _lastHeartbeatTimeInterval;
}




+(NSUInteger)maximumCount;
-(id)initWithHealthStore:(id)arg0 device:(id)arg1 startDate:(id)arg2 ;
-(void)_resourceQueue_addHeartbeatWithTimeIntervalSinceSeriesStartDate:(CGFloat)arg0 precededByGap:(BOOL)arg1 completion:(id)arg2 ;
-(void)_resourceQueue_addMetadata:(id)arg0 completion:(id)arg1 ;
-(void)_resourceQueue_finishSeriesWithCompletion:(id)arg0 ;
-(void)addHeartbeatWithTimeIntervalSinceSeriesStartDate:(CGFloat)arg0 precededByGap:(BOOL)arg1 completion:(id)arg2 ;
-(void)addMetadata:(id)arg0 completion:(id)arg1 ;
-(void)discard;
-(void)finishSeriesWithCompletion:(id)arg0 ;


@end


#endif
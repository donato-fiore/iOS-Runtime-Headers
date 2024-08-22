// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLRACINGROUTEPERFORMANCERESULTS_H
#define CLRACINGROUTEPERFORMANCERESULTS_H


#import <Foundation/Foundation.h>


@interface CLRacingRoutePerformanceResults : NSObject

@property (readonly, nonatomic) CGFloat currentAveragePace_s_per_m; // ivar: _currentAveragePace_s_per_m
@property (readonly, nonatomic) CGFloat currentDistance_m; // ivar: _currentDistance_m
@property (readonly, nonatomic) CGFloat referenceDistance_m; // ivar: _referenceDistance_m
@property (readonly, nonatomic) NSUInteger state; // ivar: _state
@property (readonly, nonatomic) CGFloat timeAhead_s; // ivar: _timeAhead_s
@property (readonly, nonatomic) CGFloat totalOverlapDistance_m; // ivar: _totalOverlapDistance_m


-(id)initWithTimeAhead:(CGFloat)arg0 currentDistance:(CGFloat)arg1 referenceDistance:(CGFloat)arg2 currentAveragePace:(CGFloat)arg3 totalOverlapDistance:(CGFloat)arg4 state:(NSUInteger)arg5 ;


@end


#endif
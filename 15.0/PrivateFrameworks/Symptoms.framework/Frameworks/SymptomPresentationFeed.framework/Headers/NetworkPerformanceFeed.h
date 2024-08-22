// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NETWORKPERFORMANCEFEED_H
#define NETWORKPERFORMANCEFEED_H

@class AnalyticsWorkspace;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NetworkPerformanceFeed : NSObject {
    AnalyticsWorkspace *workspace;
    NSObject<OS_dispatch_queue> *internalQueue;
    NSObject<OS_dispatch_queue> *callerQueue;
}


@property (nonatomic) id *delegate; // ivar: _delegate


-(BOOL)_rollFlowMetricsValuesFromDict:(id)arg0 toDict:(id)arg1 forKey:(id)arg2 andRequest:(id)arg3 ;
-(BOOL)_rollRouteMetricsValuesFromDict:(id)arg0 toDict:(id)arg1 forKey:(id)arg2 ;
-(BOOL)fullScorecardFor:(int)arg0 options:(id)arg1 reply:(id)arg2 ;
-(BOOL)predictWaitUntilKnownGoodNetworkFor:(int)arg0 matchSignature:(BOOL)arg1 reply:(id)arg2 ;
-(BOOL)resetDataForKeys:(id)arg0 reply:(id)arg1 ;
-(BOOL)setReferencePoint:(int)arg0 reply:(id)arg1 ;
-(BOOL)usageConsultOn:(int)arg0 onlyRelativeToReferencePoint:(id)arg1 reply:(id)arg2 ;
-(BOOL)watchpointOn:(int)arg0 forIdentifier:(id)arg1 andKey:(id)arg2 onThreshold:(CGFloat)arg3 withOptions:(id)arg4 uponHit:(id)arg5 ;
-(id)_flowMetricsPresentationFromRoll:(id)arg0 source:(struct flow_stats_stuct *)arg1 ;
-(id)_formatInstantRouteMetrics:(id)arg0 ;
-(id)_formatWatchpointHit:(id)arg0 ;
-(id)_normalizedOpts:(id)arg0 toNetwork:(int)arg1 ;
-(id)_routeMetricsPresentationFromRoll:(id)arg0 source:(struct route_stats_stuct *)arg1 since:(id)arg2 isKnownGood:(id)arg3 isLowInternetDL:(id)arg4 isLowInternetUL:(id)arg5 isHotSpot:(id)arg6 ;
-(id)initWithWorkspace:(id)arg0 ;
// -(void)_consultReturn:(id)arg0 advice:(unk)arg1  ;
-(void)dealloc;
-(void)setQueue:(id)arg0 ;


@end


#endif
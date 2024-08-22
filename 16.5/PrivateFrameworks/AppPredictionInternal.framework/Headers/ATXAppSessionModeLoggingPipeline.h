// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXAPPSESSIONMODELOGGINGPIPELINE_H
#define ATXAPPSESSIONMODELOGGINGPIPELINE_H

@class BPSPublisher, NSString;

#import <Foundation/Foundation.h>


@interface ATXAppSessionModeLoggingPipeline : NSObject {
    CGFloat _lastEventTimestamp;
    NSUInteger _lastActivityType;
}


@property (readonly, nonatomic) BPSPublisher *appLaunchPublisher; // ivar: _appLaunchPublisher
@property (readonly, nonatomic) NSString *bookmarkFilepath; // ivar: _bookmarkFilepath
@property (readonly, nonatomic) BPSPublisher *modeTransitionPublisher; // ivar: _modeTransitionPublisher
@property (readonly, nonatomic) BPSPublisher *notificationEventPublisher; // ivar: _notificationEventPublisher


-(CGFloat)lastPipelineRunTimestampFromStore;
-(NSUInteger)lastKnownActivityFromStore;
-(id)init;
-(id)initWithModeTransitionPublisher:(id)arg0 appLaunchPublisher:(id)arg1 notificationEventPublisher:(id)arg2 lastEventTimestamp:(CGFloat)arg3 lastActivityType:(NSUInteger)arg4 ;
-(id)timeMergedPublisherFromEventPublishers:(id)arg0 modeTransitionPublisher:(id)arg1 ;
-(void)logAppSessionMetrics;
-(void)logAppSessionMetricsWithXPCActivity:(id)arg0 ;
-(void)persistState;


@end


#endif
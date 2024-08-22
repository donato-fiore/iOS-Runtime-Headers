// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASANALYTICS_H
#define SASANALYTICS_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SASAnalytics : NSObject {
    NSObject<OS_dispatch_queue> *_analyticsEventQueue;
}


@property (retain, nonatomic) NSMutableArray *pendingAnalyticsEventQueue; // ivar: _pendingAnalyticsEventQueue
@property (nonatomic) BOOL shouldLogAnalyticsEvents; // ivar: _shouldLogAnalyticsEvents


+(id)analytics;
+(id)new;
-(id)_init;
-(id)init;
-(void)_enqueueAnalyticsEvent:(id)arg0 ;
-(void)enqueueCurrentAnalyticsEventWithType:(NSInteger)arg0 context:(id)arg1 ;
-(void)flushPendingAnalyticsEventQueue;


@end


#endif
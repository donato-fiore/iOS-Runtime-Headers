// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VIAENTRYPOINTLOGGER_H
#define VIAENTRYPOINTLOGGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, SFFeedbackListener, VIAnalyticsTestingDelegate;

#import <Foundation/Foundation.h>


@interface VIAEntryPointLogger : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id<SFFeedbackListener> *_feedbackListener;
    NSMutableDictionary *_appToQueryIDMap;
    NSMutableDictionary *_appToWaitingEventMap;
}


@property (weak, nonatomic) NSObject<VIAnalyticsTestingDelegate> *testingDelegate; // ivar: _testingDelegate


-(BOOL)_preconditionCheckEvent:(id)arg0 ;
-(id)_cachedEventsForEvent:(id)arg0 ;
-(id)initWithQueue:(id)arg0 feedbackListener:(id)arg1 ;
-(void)_cacheEvent:(id)arg0 ;
-(void)_logEndEvent:(id)arg0 ;
-(void)_logFeedback:(id)arg0 queryID:(NSUInteger)arg1 ;
-(void)_logStartEvent:(id)arg0 ;
-(void)logDependentEvent:(id)arg0 ;
-(void)logEvent:(id)arg0 ;


@end


#endif
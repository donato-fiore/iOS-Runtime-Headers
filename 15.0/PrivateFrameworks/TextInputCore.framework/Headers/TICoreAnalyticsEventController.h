// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TICOREANALYTICSEVENTCONTROLLER_H
#define TICOREANALYTICSEVENTCONTROLLER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TICoreAnalyticsEventController : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
}




+(void)registerScheduledEventsActivity;
-(id)adjustValue:(id)arg0 forFieldSpec:(id)arg1 ;
-(id)adjustValues:(id)arg0 forFieldSpec:(id)arg1 ;
-(id)init;
-(void)dispatchEventWithDescriptor:(id)arg0 andSpec:(id)arg1 withProvider:(id)arg2 andContext:(id)arg3 andMetrics:(id)arg4 completionHandler:(id)arg5 ;
-(void)dispatchEventWithName:(id)arg0 payload:(id)arg1 testingParameters:(id)arg2 eventSpec:(id)arg3 completionHandler:(id)arg4 ;
-(void)dispatchEventsFromRegistry:(id)arg0 withProvider:(id)arg1 andContext:(id)arg2 andMetrics:(id)arg3 completionHandler:(id)arg4 ;
-(void)dispatchScheduledEventsWithCompletionHandler:(id)arg0 ;
-(void)queueScheduledEventsWithCompletionHandler:(id)arg0 ;


@end


#endif
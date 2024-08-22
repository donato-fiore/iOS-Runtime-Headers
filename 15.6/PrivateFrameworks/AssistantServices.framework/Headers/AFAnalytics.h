// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFANALYTICS_H
#define AFANALYTICS_H

@protocol OS_dispatch_queue, OS_dispatch_group, AFAnalyticsService;

#import <Foundation/Foundation.h>


@interface AFAnalytics : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    id<AFAnalyticsService> *_service;
}




+(id)sharedAnalytics;
-(id)_service:(BOOL)arg0 ;
-(id)init;
-(id)initWithInstanceContext:(id)arg0 ;
-(id)newTurnBasedInstrumentationContext;
-(void)_stageEvent:(id)arg0 ;
-(void)_stageEvents:(id)arg0 ;
-(void)barrier:(id)arg0 ;
-(void)beginEventsGrouping;
-(void)boostQueuedEvents:(id)arg0 ;
-(void)endEventsGrouping;
-(void)logClientFeedbackPresented:(id)arg0 ;
-(void)logClientFeedbackPresented:(id)arg0 dialogIdentifierProvider:(id)arg1 ;
-(void)logEvent:(id)arg0 ;
-(void)logEventWithType:(NSInteger)arg0 context:(id)arg1 ;
-(void)logEventWithType:(NSInteger)arg0 context:(id)arg1 contextNoCopy:(BOOL)arg2 ;
-(void)logEventWithType:(NSInteger)arg0 contextProvider:(id)arg1 ;
// -(void)logEventWithType:(NSInteger)arg0 contextProvider:(id)arg1 contextProvidingQueue:(unk)arg2  ;
-(void)logEventWithType:(NSInteger)arg0 contextResolver:(id)arg1 ;
-(void)logEventWithType:(NSInteger)arg0 machAbsoluteTime:(NSUInteger)arg1 context:(id)arg2 ;
-(void)logEventWithType:(NSInteger)arg0 machAbsoluteTime:(NSUInteger)arg1 context:(id)arg2 contextNoCopy:(BOOL)arg3 ;
// -(void)logEventWithType:(NSInteger)arg0 machAbsoluteTime:(NSUInteger)arg1 contextProvider:(id)arg2 contextProvidingQueue:(unk)arg3  ;
-(void)logEventWithType:(NSInteger)arg0 machAbsoluteTime:(NSUInteger)arg1 contextResolver:(id)arg2 ;
-(void)logEvents:(id)arg0 ;
-(void)logInstrumentation:(id)arg0 machAbsoluteTime:(NSUInteger)arg1 turnContext:(id)arg2 ;
-(void)logInstrumentation:(id)arg0 machAbsoluteTime:(NSUInteger)arg1 turnIdentifier:(id)arg2 ;
-(void)logInstrumentation:(id)arg0 turnContext:(id)arg1 ;
-(void)logInstrumentationOfType:(Class)arg0 machAbsoluteTime:(NSUInteger)arg1 turnIdentifier:(id)arg2 ;
-(void)logInstrumentationOfType:(Class)arg0 turnIdentifier:(id)arg1 ;
-(void)setService:(id)arg0 ;


@end


#endif
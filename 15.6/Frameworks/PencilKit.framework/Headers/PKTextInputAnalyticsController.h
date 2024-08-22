// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTEXTINPUTANALYTICSCONTROLLER_H
#define PKTEXTINPUTANALYTICSCONTROLLER_H

@class NSString, NSTimer;
@protocol UITextInputSessionActionAnalyticsEndingObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKTextInputAnalyticsController : NSObject <UITextInputSessionActionAnalyticsEndingObserver>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSInteger _lastEventSource;
    NSUInteger _lastEventSourceChangeTimestamp;
    NSUInteger _eventSourceUsage;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSTimer *eventSourceTimer; // ivar: _eventSourceTimer
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
+(void)beginObservingSessionAnalytics;
-(id)init;
-(id)matchingAccumulatorNames;
-(void)_dispatchAnalytics;
-(void)_setupAnalyticsTimer;
-(void)_updateAnalyticsTracking;
-(void)dealloc;
-(void)didBeginSession;
-(void)didEndMatchingAccumulatorName:(id)arg0 ;
-(void)didUpdateToEventSource:(NSInteger)arg0 ;
-(void)eventSourceDidChange:(id)arg0 ;
-(void)messageHandwritingAnalyticsWithProxyBlock:(id)arg0 ;
-(void)q_didBeginSession;
-(void)q_didEndMatchingAccumulatorName:(id)arg0 inputMode:(id)arg1 ;


@end


#endif
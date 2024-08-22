// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDREMOTEEVENTROUTERPROCESSSTATECHANGEASSERTION_H
#define HMDREMOTEEVENTROUTERPROCESSSTATECHANGEASSERTION_H

@class NSDictionary, NSString;
@protocol HMFLogging, HMETimer, HMDRemoteEventRouterProcessStateChangeAssertionDelegate, OS_dispatch_queue, HMETimerProvider;

#import <Foundation/Foundation.h>


@interface HMDRemoteEventRouterProcessStateChangeAssertion : NSObject <HMFLogging>



@property (readonly, copy, nonatomic) NSDictionary *applicationsAndIntervals; // ivar: _applicationsAndIntervals
@property (retain, nonatomic) NSObject<HMETimer> *backgroundTimer; // ivar: _backgroundTimer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HMDRemoteEventRouterProcessStateChangeAssertionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isProcessForeground; // ivar: _isProcessForeground
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) NSObject<HMETimerProvider> *timerProvider; // ivar: _timerProvider


+(id)logCategory;
-(id)initWithQueue:(id)arg0 timerProvider:(id)arg1 applicationsAndIntervals:(id)arg2 delegate:(id)arg3 ;
-(void)_enableBackgroundTimerIfNeeded:(CGFloat)arg0 ;
-(void)_removeBackgroundTimer;
-(void)foregroundStateChangedWithBundleIdentifier:(id)arg0 applicationState:(NSUInteger)arg1 ;


@end


#endif
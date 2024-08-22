// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDREMOTEEVENTROUTERPROCESSSTATECHANGEASSERTION_H
#define HMDREMOTEEVENTROUTERPROCESSSTATECHANGEASSERTION_H

@class NSDictionary, NSMutableDictionary, NSString, NSMutableSet;
@protocol HMFLogging, HMDRemoteEventRouterProcessStateChangeAssertionDataSource, HMFCancellable, OS_dispatch_queue, HMETimerProvider;

#import <Foundation/Foundation.h>


@interface HMDRemoteEventRouterProcessStateChangeAssertion : NSObject <HMFLogging>



@property (readonly, copy, nonatomic) NSDictionary *applicationsAndIntervals; // ivar: _applicationsAndIntervals
@property (readonly, nonatomic) NSMutableDictionary *backgroundProcesses; // ivar: _backgroundProcesses
@property (readonly, weak, nonatomic) NSObject<HMDRemoteEventRouterProcessStateChangeAssertionDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<HMFCancellable> *eventRouterActiveAssertion; // ivar: _eventRouterActiveAssertion
@property (readonly, nonatomic) NSMutableSet *foregroundProcesses; // ivar: _foregroundProcesses
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) NSObject<HMETimerProvider> *timerProvider; // ivar: _timerProvider


+(id)logCategory;
-(id)_enableBackgroundTimerWithBundleIdentifier:(id)arg0 ;
-(id)initWithQueue:(id)arg0 timerProvider:(id)arg1 applicationsAndIntervals:(id)arg2 dataSource:(id)arg3 ;
-(void)_backgroundTimerDidExpire:(id)arg0 ;
-(void)_removeBackgroundTimer:(id)arg0 ;
-(void)foregroundStateChangedWithBundleIdentifier:(id)arg0 applicationState:(NSUInteger)arg1 ;


@end


#endif
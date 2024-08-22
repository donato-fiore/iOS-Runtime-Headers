// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNREPLAYSUBJECT_H
#define CNREPLAYSUBJECT_H

@class NSString, NSMutableArray;
@protocol CNObserver, CNScheduler, CNSchedulerProvider;


#import "CNObservable.h"
#import "CNObservableContractEnforcement.h"
#import "_CNObservableEventBufferingStrategy.h"

@interface CNReplaySubject : CNObservable <CNObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CNObservableContractEnforcement *enforcement; // ivar: _enforcement
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableArray *observers; // ivar: _observers
@property (retain, nonatomic) _CNObservableEventBufferingStrategy *recentEventStrategy; // ivar: _recentEventStrategy
@property (readonly, nonatomic) NSObject<CNScheduler> *resourceLock; // ivar: _resourceLock
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (readonly) Class superclass;


-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 schedulerProvider:(id)arg1 ;
-(id)initWithQueue:(id)arg0 schedulerProvider:(id)arg1 ;
-(id)initWithSchedulerProvider:(id)arg0 ;
-(id)resourceLock_upToDateObserverFromObserver:(id)arg0 ;
-(id)resultWithResourceLock:(id)arg0 ;
-(id)subscribe:(id)arg0 ;
-(void)_removeObserver:(id)arg0 ;
-(void)observerDidComplete;
-(void)observerDidFailWithError:(id)arg0 ;
-(void)observerDidReceiveResult:(id)arg0 ;
-(void)performWithResourceLock:(id)arg0 ;
-(void)resourceLock_scheduleReplayToObserver:(id)arg0 ;
-(void)resourceLock_swapBufferingStrategiesGivenNewTerminatingEvent:(id)arg0 ;


@end


#endif
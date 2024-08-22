// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNBEHAVIORSUBJECT_H
#define CNBEHAVIORSUBJECT_H

@class NSString, NSMutableArray;
@protocol CNObserver, CNScheduler, CNSchedulerProvider;


#import "CNObservable.h"
#import "CNObservableContractEnforcement.h"
#import "CNObservableEvent.h"

@interface CNBehaviorSubject : CNObservable <CNObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CNObservableContractEnforcement *enforcement; // ivar: _enforcement
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNObservableEvent *mostRecentEvent; // ivar: _mostRecentEvent
@property (retain, nonatomic) NSMutableArray *observers; // ivar: _observers
@property (readonly, nonatomic) NSObject<CNScheduler> *resourceLock; // ivar: _resourceLock
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (readonly) Class superclass;


-(id)_addObserver:(id)arg0 ;
-(id)initWithSeed:(id)arg0 schedulerProvider:(id)arg1 ;
-(id)resultWithResourceLock:(id)arg0 ;
-(id)subscribe:(id)arg0 ;
-(void)_removeObserver:(id)arg0 ;
-(void)observerDidComplete;
-(void)observerDidFailWithError:(id)arg0 ;
-(void)observerDidReceiveResult:(id)arg0 ;
-(void)performWithResourceLock:(id)arg0 ;


@end


#endif
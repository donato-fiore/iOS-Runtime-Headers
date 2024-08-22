// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDASSERTIONMANAGER_H
#define HDASSERTIONMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface HDAssertionManager : NSObject {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSMutableDictionary *_assertionRecordsByIdentifier;
    NSMutableDictionary *_observerSetsByAssertionIdentifier;
    BOOL _invalidated;
    BOOL _consumeBudgets;
    NSObject<OS_dispatch_source> *_budgetConsumptionTimer;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *budgetTimerQueue; // ivar: _budgetTimerQueue


-(BOOL)hasActiveAssertion:(id)arg0 ;
-(BOOL)hasActiveAssertionForIdentifier:(id)arg0 ;
-(BOOL)takeAssertion:(id)arg0 ;
-(id)activeAssertionsForIdentifier:(id)arg0 ;
-(id)allAssertionsForIdentifier:(id)arg0 ;
-(id)init;
-(id)ownerIdentifiersForAssertionIdentifier:(id)arg0 ;
-(void)_releaseAssertion:(id)arg0 ;
-(void)addObserver:(id)arg0 forAssertionIdentifier:(id)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 forAssertionIdentifier:(id)arg1 ;
-(void)resumeBudgetConsumption;
-(void)suspendBudgetConsumption;


@end


#endif
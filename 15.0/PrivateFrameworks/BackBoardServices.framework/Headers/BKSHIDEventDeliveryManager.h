// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKSHIDEVENTDELIVERYMANAGER_H
#define BKSHIDEVENTDELIVERYMANAGER_H

@class NSHashTable, NSMutableDictionary, NSMutableArray, BSMutableIntegerMap, NSDictionary, NSArray, NSSet, NSString;
@protocol BSDebugDescriptionProviding, BKSHIDEventDeliveryService, OS_dispatch_queue, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface BKSHIDEventDeliveryManager : NSObject <BSDebugDescriptionProviding>

 {
    id<BKSHIDEventDeliveryService> *_service;
    BOOL _forTesting;
    os_unfair_lock_s _lock;
    NSHashTable *_lock_assertions;
    NSInteger _lock_discreteDispatchingSeed;
    NSMutableDictionary *_lock_discreteDispatchingRules;
    NSInteger _lock_keyCommandsDispatchingSeed;
    NSMutableDictionary *_lock_keyCommandsDispatchingRules;
    NSInteger _lock_deferringSeed;
    NSMutableArray *_lock_deferringRules;
    NSInteger _lock_keyCommandsRegistrationSeed;
    NSMutableDictionary *_lock_keyCommandsRegistrations;
    NSObject<OS_dispatch_queue> *_implicitFlushQueue;
    *__CFBoolean _lock_needsFlush;
    NSInteger _lock_preventFlushingSeed;
    BSMutableIntegerMap *_lock_preventFlushingReasons;
    id<BSInvalidatable> *_lock_implicitPreventFlushingAssertion;
    NSDictionary *_lock_lastSentDiscreteDispatchingRules;
    NSDictionary *_lock_lastSentKeyCommandsDispatchingRules;
    NSArray *_lock_lastSentDeferringRules;
    NSDictionary *_lock_lastSentKeyCommandsRegistrations;
    NSSet *_lock_lastSentSetOfKeyCommandsRegistrations;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(NSInteger)authenticateMessage:(id)arg0 ;
-(id)_initForTestingWithService:(id)arg0 ;
-(id)_initWithService:(id)arg0 ;
-(id)_lock_stateDescription;
-(id)_lock_transactionAssertionWithReason:(id)arg0 ;
-(id)debugDescriptionWithMultilinePrefix:(id)arg0 ;
-(id)deferEventsMatchingPredicate:(id)arg0 toTarget:(id)arg1 withReason:(id)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)dispatchDiscreteEventsForReason:(id)arg0 withRules:(id)arg1 ;
-(id)dispatchKeyCommandsForReason:(id)arg0 withRule:(id)arg1 ;
-(id)init;
-(id)registerKeyCommands:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)transactionAssertionWithReason:(id)arg0 ;
-(void)_lock_flushIfNeeded;
-(void)_lock_implicitFlush;
-(void)_syncServiceFlushState;
-(void)dealloc;


@end


#endif
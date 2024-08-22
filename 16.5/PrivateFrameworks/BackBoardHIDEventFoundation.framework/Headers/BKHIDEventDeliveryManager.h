// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKHIDEVENTDELIVERYMANAGER_H
#define BKHIDEVENTDELIVERYMANAGER_H

@class NSMutableArray, NSMutableDictionary, BSMutableIntegerMap, NSSet, BKSHIDEventAuthenticationOriginator, NSDictionary, NSString, BKSHIDEventDisplay;
@protocol BKHIDEventClientDelegate, BKHIDEventBufferingHIDSystem, BKHIDEventDeliveryResolutionObserver;

#import <Foundation/Foundation.h>


@interface BKHIDEventDeliveryManager : NSObject <BKHIDEventClientDelegate>

 {
    os_unfair_lock_s _lock;
    NSMutableArray *_deliveryRoots;
    NSMutableArray *_keyCommandDeliveryRoots;
    NSMutableDictionary *_buffersByDispatchTarget;
    BSMutableIntegerMap *_deferringRulesByPID;
    BSMutableIntegerMap *_bufferingPredicatesByPID;
    BSMutableIntegerMap *_clientsByPID;
    NSSet *_deferringResolutions;
    NSMutableDictionary *_destinationCacheBySender;
}


@property (readonly, nonatomic) BKSHIDEventAuthenticationOriginator *authenticationOriginator; // ivar: _authenticationOriginator
@property (retain, nonatomic) NSObject<BKHIDEventBufferingHIDSystem> *bufferingDispatcher; // ivar: _bufferingDispatcher
@property (readonly, nonatomic) NSDictionary *currentBuffersPerDispatchTarget;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BKSHIDEventDisplay *mainDisplay; // ivar: _mainDisplay
@property (nonatomic) BOOL observeClientDeath; // ivar: _observeClientDeath
@property (retain, nonatomic) NSObject<BKHIDEventDeliveryResolutionObserver> *resolutionObserver; // ivar: _resolutionObserver
@property (readonly) Class superclass;


-(id)_test_deliveryRootForIdentifier:(id)arg0 ;
-(id)descriptionOfResolutionPathForEventDescriptor:(id)arg0 senderDescriptor:(id)arg1 ;
-(id)descriptionOfResolutionPathForKeyCommand:(id)arg0 senderDescriptor:(id)arg1 ;
-(id)destinationsForEvent:(struct __IOHIDEvent *)arg0 sender:(id)arg1 ;
-(id)destinationsForKeyCommand:(id)arg0 sender:(id)arg1 ;
-(id)destinationsStartingFromPID:(int)arg0 deferringPredicate:(id)arg1 ;
-(id)init;
-(id)initWithObserverService:(id)arg0 ;
-(id)sequenceForFirstEvent:(struct __IOHIDEvent *)arg0 sender:(id)arg1 processor:(id)arg2 dispatcher:(id)arg3 additionalContext:(id)arg4 ;
-(id)sequenceForKeyCommand:(id)arg0 sender:(id)arg1 processor:(id)arg2 dispatcher:(id)arg3 additionalContext:(id)arg4 ;
-(void)_fireTimeoutForPID:(int)arg0 bufferingPredicates:(id)arg1 client:(id)arg2 ;
-(void)_test_terminateClientPID:(int)arg0 ;
-(void)clientDied:(id)arg0 ;
-(void)dealloc;
-(void)reevaluateBufferingWithContext:(id)arg0 ;
-(void)repostFirstEventToNewlyBufferedSequences:(id)arg0 targetToNewBuffer:(id)arg1 ;
-(void)setDeferringRules:(id)arg0 forClientWithPID:(int)arg1 ;
-(void)setDispatchingRuleSets:(id)arg0 forClientWithPID:(int)arg1 ;
-(void)setEventBufferingPredicates:(id)arg0 forClientWithPID:(int)arg1 ;
-(void)setKeyCommandDispatchingRules:(id)arg0 forClientWithPID:(int)arg1 ;
-(void)setKeyCommandsRegistrations:(id)arg0 forClientWithPID:(int)arg1 ;


@end


#endif
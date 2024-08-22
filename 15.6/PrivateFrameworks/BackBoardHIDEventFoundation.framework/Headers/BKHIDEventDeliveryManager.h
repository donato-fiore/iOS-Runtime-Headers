// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKHIDEVENTDELIVERYMANAGER_H
#define BKHIDEVENTDELIVERYMANAGER_H

@class NSMutableArray, BSMutableIntegerMap, NSSet, NSMutableDictionary, BKSHIDEventAuthenticationOriginator, NSString, BKSHIDEventDisplay;
@protocol BKHIDEventClientDelegate, BKHIDEventDeliveryResolutionObserver;

#import <Foundation/Foundation.h>


@interface BKHIDEventDeliveryManager : NSObject <BKHIDEventClientDelegate>

 {
    os_unfair_lock_s _lock;
    NSMutableArray *_deliveryRoots;
    NSMutableArray *_keyCommandDeliveryRoots;
    BSMutableIntegerMap *_deferringRulesByPID;
    BSMutableIntegerMap *_clientsByPID;
    NSSet *_deferringResolutions;
    NSMutableDictionary *_destinationCacheBySender;
}


@property (readonly, nonatomic) BKSHIDEventAuthenticationOriginator *authenticationOriginator; // ivar: _authenticationOriginator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BKSHIDEventDisplay *mainDisplay; // ivar: _mainDisplay
@property (nonatomic) BOOL observeClientDeath; // ivar: _observeClientDeath
@property (retain, nonatomic) NSObject<BKHIDEventDeliveryResolutionObserver> *resolutionObserver; // ivar: _resolutionObserver
@property (readonly) Class superclass;


-(id)descriptionOfResolutionPathForEventDescriptor:(id)arg0 senderDescriptor:(id)arg1 ;
-(id)destinationsForEvent:(struct __IOHIDEvent *)arg0 sender:(id)arg1 ;
-(id)destinationsForKeyCommand:(id)arg0 sender:(id)arg1 ;
-(id)destinationsStartingFromPID:(int)arg0 deferringPredicate:(id)arg1 ;
-(id)init;
-(id)initWithObserverService:(id)arg0 ;
-(void)clientDied:(id)arg0 ;
-(void)dealloc;
-(void)setDeferringRules:(id)arg0 forClientWithPID:(int)arg1 ;
-(void)setDispatchingRuleSets:(id)arg0 forClientWithPID:(int)arg1 ;
-(void)setKeyCommandDispatchingRules:(id)arg0 forClientWithPID:(int)arg1 ;
-(void)setKeyCommandsRegistrations:(id)arg0 forClientWithPID:(int)arg1 ;


@end


#endif
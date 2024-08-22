// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFMOBILEKEYBAG_H
#define SBFMOBILEKEYBAG_H

@class NSMutableArray, NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SBFMobileKeyBagState.h"

@interface SBFMobileKeyBag : NSObject {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_observerStateChangedCallbackBlocks;
    NSHashTable *_queue_observers;
    NSMutableArray *_queue_performAfterFirstUnlockBlocks;
    BOOL _queue_hasPasscodeSet;
    BOOL _queue_hasUnlockedSinceBoot;
    *_MKBEvent _mbkEvent;
}


@property (readonly, copy, nonatomic) SBFMobileKeyBagState *extendedState;
@property (readonly, nonatomic) BOOL hasBeenUnlockedSinceBoot;
@property (readonly, nonatomic) BOOL hasPasscodeSet;
@property (readonly, nonatomic) NSInteger maxUnlockAttempts;
@property (readonly, copy, nonatomic) SBFMobileKeyBagState *state;


+(id)sharedInstance;
-(BOOL)_queue_verifyExpectedStashState:(NSInteger)arg0 ;
-(BOOL)beginRecovery:(id)arg0 error:(*id)arg1 ;
-(BOOL)unlockWithPasscode:(id)arg0 error:(*id)arg1 ;
-(id)_queue_lockStateExtended:(BOOL)arg0 ;
-(id)init;
-(void)_queue_createStashBag:(id)arg0 ;
-(void)_queue_firstUnlockOccurred;
-(void)_queue_handleKeybagStatusChanged;
-(void)_queue_setHasPasscodeIfNecessary:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)createStashBag:(id)arg0 completion:(id)arg1 ;
// -(void)createStashBag:(id)arg0 completion:(id)arg1 completionQueue:(unk)arg2  ;
-(void)dealloc;
-(void)lockSkippingGracePeriod:(BOOL)arg0 ;
-(void)performAfterFirstUnlockSinceBootUsingBlock:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)waitForUnlockWithTimeout:(float)arg0 ;


@end


#endif
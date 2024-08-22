// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKSHIDEVENTDELIVERYPOLICYOBSERVER_H
#define BKSHIDEVENTDELIVERYPOLICYOBSERVER_H

@class NSSet, NSHashTable, NSString;
@protocol BKSHIDEventDeferringObserving, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "BKSHIDEventObserver.h"
#import "BKSHIDEventDisplay.h"
#import "BKSHIDEventDeferringEnvironment.h"
#import "BKSHIDEventDeferringToken.h"

@interface BKSHIDEventDeliveryPolicyObserver : NSObject <BKSHIDEventDeferringObserving>

 {
    BKSHIDEventObserver *_observer;
    id<BSInvalidatable> *_observingAssertion;
    os_unfair_lock_s _lock;
    BKSHIDEventDisplay *_lock_display;
    BKSHIDEventDeferringEnvironment *_lock_environment;
    BKSHIDEventDeferringToken *_lock_token;
    NSSet *_lock_resolutions;
    BOOL _lock_canReceiveEvents;
    NSHashTable *_lock_observers;
}


@property (readonly, nonatomic) BOOL canReceiveEvents;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) BKSHIDEventDeferringEnvironment *deferringEnvironment;
@property (copy, nonatomic) BKSHIDEventDeferringToken *deferringToken;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) BKSHIDEventDisplay *display;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_initWithObserver:(id)arg0 ;
-(id)_lock_updateStateWithBlock:(id)arg0 ;
-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)deferringResolutionsChanged;
-(void)removeObserver:(id)arg0 ;


@end


#endif
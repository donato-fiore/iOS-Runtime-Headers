// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHEARTRATERECOVERYMANAGER_H
#define HDHEARTRATERECOVERYMANAGER_H

@class HDAssertionManager, NSString;
@protocol HDAssertionObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDPowerAssertion.h"

@interface HDHeartRateRecoveryManager : NSObject <HDAssertionObserver>

 {
    NSObject<OS_dispatch_queue> *_queue;
    HDAssertionManager *_assertionManager;
    HDPowerAssertion *_powerAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createAndTakeAssertionForOwnerIdentifier:(id)arg0 sessionStateController:(id)arg1 ;
-(id)init;
-(void)assertionManager:(id)arg0 assertionInvalidated:(id)arg1 ;
-(void)assertionManager:(id)arg0 assertionTaken:(id)arg1 ;
-(void)dealloc;


@end


#endif
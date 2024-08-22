// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFPOWERASSERTIONMANAGER_H
#define AFPOWERASSERTIONMANAGER_H

@class NSString, NSMutableDictionary;
@protocol AFAssertionCoordinatorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AFAssertionCoordinator.h"
#import "AFWatchdogTimer.h"

@interface AFPowerAssertionManager : NSObject <AFAssertionCoordinatorDelegate>

 {
    NSString *_identifier;
    NSObject<OS_dispatch_queue> *_queue;
    AFAssertionCoordinator *_assertionCoordinator;
    unsigned int _powerAssertion;
    NSMutableDictionary *_assertionsByName;
    AFWatchdogTimer *_watchdogTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithIdentifier:(id)arg0 ;
-(void)_createPowerAssertion;
-(void)_releasePowerAssertion;
-(void)_reportLeakedPowerAssertion;
-(void)_watchdogTimedOut;
-(void)assertionCoordinator:(id)arg0 didActivateAssertion:(id)arg1 isFirstAssertion:(BOOL)arg2 ;
-(void)assertionCoordinator:(id)arg0 didAddAssertion:(id)arg1 isFirstAssertion:(BOOL)arg2 ;
-(void)assertionCoordinator:(id)arg0 didDeactivateAssertion:(id)arg1 isLastAssertion:(BOOL)arg2 ;
-(void)assertionCoordinator:(id)arg0 didRemoveAssertion:(id)arg1 isLastAssertion:(BOOL)arg2 ;
-(void)dealloc;
-(void)releaseAllPowerAssertions;
-(void)releasePowerAssertionWithName:(id)arg0 ;
-(void)takePowerAssertionWithName:(id)arg0 ;


@end


#endif
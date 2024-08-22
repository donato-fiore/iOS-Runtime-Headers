// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBPOWERASSERTIONMANAGER_H
#define RBPOWERASSERTIONMANAGER_H

@class NSString;
@protocol RBPowerAssertionManaging, RBStateCapturing, OS_dispatch_queue, RBPowerAssertionManagerDelegate;

#import <Foundation/Foundation.h>

#import "RBProcessMap.h"
#import "RBSystemPowerAssertion.h"

@interface RBPowerAssertionManager : NSObject <RBPowerAssertionManaging, RBStateCapturing>

 {
    RBProcessMap *_stateMap;
    RBProcessMap *_assertionMap;
    RBSystemPowerAssertion *_systemAssertion;
    NSUInteger _assertionCount;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RBPowerAssertionManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;
@property (readonly) Class superclass;


-(BOOL)_unitTest_hasPowerAssertionForProcess:(id)arg0 ;
-(BOOL)_unitTest_hasSystemPowerAssertion;
-(id)_unitTest_nameOfPowerAssertionForProcess:(id)arg0 ;
-(id)_unitTest_nameOfPowerAssertionForSystem;
-(id)captureState;
-(id)init;
-(void)addProcess:(id)arg0 ;
-(void)applySystemState:(id)arg0 ;
-(void)dealloc;
-(void)didUpdateProcessStates:(id)arg0 ;
-(void)removeProcess:(id)arg0 ;
-(void)removeStateForProcessIdentity:(id)arg0 ;


@end


#endif
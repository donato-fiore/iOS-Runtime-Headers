// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHIDINTERFACE_H
#define SBHIDINTERFACE_H

@class NSMutableArray, NSString;
@protocol SBProximitySensorControlling, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBHIDUILockAssertion.h"

@interface SBHIDInterface : NSObject <SBProximitySensorControlling>

 {
    NSUInteger _lockState;
    NSMutableArray *_assertions;
    id<BSInvalidatable> *_dispatchingAssertion;
    id<BSInvalidatable> *_dispatchingAssertionForVoiceCommand;
    id<BSInvalidatable> *_keyCommandDispatchingAssertion;
    SBHIDUILockAssertion *_pocketTouchesAssertion;
    BOOL _proximityDetectionEnabled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL pocketTouchesExpected;
@property (nonatomic, getter=isProximityDetectionEnabled) BOOL proximityDetectionEnabled;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_suspendProximity:(BOOL)arg0 suspendMultitouch:(BOOL)arg1 disableTapToWake:(BOOL)arg2 source:(NSInteger)arg3 reason:(id)arg4 ;
-(id)addStartupHIDLockAssertion;
-(id)init;
-(id)suspendMultitouchForSource:(NSInteger)arg0 reason:(id)arg1 ;
-(id)suspendProximityDetectionAndMultitouchForSource:(NSInteger)arg0 disableTapToWake:(BOOL)arg1 reason:(id)arg2 ;
-(id)suspendProximityDetectionForSource:(NSInteger)arg0 reason:(id)arg1 ;
-(void)_reevaluateLockStateForSource:(NSInteger)arg0 ;
-(void)_setLockState:(NSUInteger)arg0 source:(NSInteger)arg1 ;
-(void)reevaluateHIDLockAssertionsForSource:(NSInteger)arg0 ;
-(void)removeHIDLockAssertion:(id)arg0 source:(NSInteger)arg1 ;
-(void)resetProximityCalibration;


@end


#endif
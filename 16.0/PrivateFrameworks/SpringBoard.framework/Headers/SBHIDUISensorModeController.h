// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHIDUISENSORMODECONTROLLER_H
#define SBHIDUISENSORMODECONTROLLER_H

@class BKSHIDUISensorService, BKSHIDUISensorMode, BSCompoundAssertion, NSMutableArray, NSString;
@protocol SBProximitySensorControlling, SBAVSystemControllerCacheObserver, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBHIDUISensorModeAssertion.h"
#import "SBAVSystemControllerCache.h"

@interface SBHIDUISensorModeController : NSObject <SBProximitySensorControlling, SBAVSystemControllerCacheObserver, BSInvalidatable>

 {
    BKSHIDUISensorService *_sensorService;
    BKSHIDUISensorMode *_sensorMode;
    id<BSInvalidatable> *_sensorModeAssertion;
    BSCompoundAssertion *_digitizerModeBaselineAssertion;
    NSMutableArray *_assertions;
    SBHIDUISensorModeAssertion *_pocketTouchesAssertion;
    NSInteger _sensorModeTransactionCount;
    BOOL _proximityDetectionEnabled;
    BOOL _shouldUseLowPowerActiveProxDetectionMode;
    SBAVSystemControllerCache *_avCache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL pocketTouchesExpected;
@property (nonatomic, getter=isProximityDetectionEnabled) BOOL proximityDetectionEnabled;
@property (readonly) Class superclass;


-(BOOL)_hasModeAssertions;
-(id)_requestSensorModeAssertionForReason:(id)arg0 source:(NSInteger)arg1 builder:(id)arg2 ;
-(id)addStartupHIDLockAssertion;
-(id)assertBaselineDisabledDigitizerMode:(NSInteger)arg0 source:(NSInteger)arg1 reason:(id)arg2 ;
-(id)assertDisplayState:(NSInteger)arg0 source:(NSInteger)arg1 reason:(id)arg2 ;
-(id)init;
-(id)initWithSensorService:(id)arg0 ;
-(id)sensorModeTransactionForBacklightChangeSource:(NSInteger)arg0 ;
-(id)suspendProximityDetectionAndDisableDigitizer:(NSInteger)arg0 source:(NSInteger)arg1 reason:(id)arg2 ;
-(id)suspendProximityDetectionForSource:(NSInteger)arg0 reason:(id)arg1 ;
-(void)_reevaluateLockStateForSource:(NSInteger)arg0 ;
-(void)_removeHIDUISensorModeAssertion:(id)arg0 ;
-(void)cache:(id)arg0 didUpdateActiveAudioRoute:(id)arg1 ;
-(void)invalidate;
-(void)resetProximityCalibration;


@end


#endif
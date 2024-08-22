// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTURELOCKSCREENPREWARMINGMONITOR_H
#define FIGCAPTURELOCKSCREENPREWARMINGMONITOR_H

@class NSDictionary, NSString;
@protocol FigCaptureDisplayLayoutObserver, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface FigCaptureLockScreenPrewarmingMonitor : NSObject <FigCaptureDisplayLayoutObserver>

 {
    NSObject<OS_dispatch_queue> *_notifyQueue;
    int _biometricEnrollmentChangedToken;
    BOOL _haveEnrolledBiometricIdentities;
    int _activeBiometricOperationChangedToken;
    int _activeBiometricOperationType;
    NSInteger _lastBiometricMatchCompleteTime;
    NSDictionary *_mobileKeyBagOptions;
    int _deviceLockStateChangedToken;
    int _deviceLockState;
    NSInteger _lastDeviceUnlockTime;
    BOOL _onLockScreen;
    BOOL _addingLayoutObserver;
    BOOL _observingLayoutChanges;
    BOOL _isPrewarming;
    NSObject<OS_dispatch_source> *_delayedPrewarmTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
+(void)start;
+(void)stop;
-(void)dealloc;
-(void)layoutMonitor:(id)arg0 didUpdateLayout:(id)arg1 ;


@end


#endif
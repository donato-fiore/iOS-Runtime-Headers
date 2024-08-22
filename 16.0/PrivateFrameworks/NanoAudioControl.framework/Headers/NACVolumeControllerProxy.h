// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NACVOLUMECONTROLLERPROXY_H
#define NACVOLUMECONTROLLERPROXY_H

@class NSNumber, NSOrderedSet, NSString;
@protocol NACVolumeController, OS_dispatch_source, NACVolumeControllerDelegate;

#import <Foundation/Foundation.h>

#import "NACProxyVolumeControlTarget.h"
#import "NACEventThrottler.h"
#import "NACXPCClient.h"

@interface NACVolumeControllerProxy : NSObject <NACVolumeController>

 {
    NACProxyVolumeControlTarget *_target;
    NACEventThrottler *_volumeThrottler;
    NACEventThrottler *_hapticThrottler;
    NSObject<OS_dispatch_source> *_setVolumeTimer;
    NSObject<OS_dispatch_source> *_setHapticTimer;
    NSObject<OS_dispatch_source> *_setProminentHapticTimer;
    NSObject<OS_dispatch_source> *_setHapticStateTimer;
    NACXPCClient *_xpcClient;
    BOOL _observingVolume;
    float _lastRecievedHapticIntensity;
    BOOL _lastReceivedProminentHapticEnabled;
    NSInteger _lastReceivedHapticState;
    NSNumber *_volumeValue;
    NSNumber *_hapticIntensity;
    NSOrderedSet *_availableListeningModes;
    NSString *_currentListeningMode;
    BOOL _observingListeningModes;
}


@property (readonly, nonatomic) float EUVolumeLimit; // ivar: _EUVolumeLimit
@property (readonly, nonatomic) NSOrderedSet *availableListeningModes;
@property (retain, nonatomic) NSString *currentListeningMode;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NACVolumeControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) float hapticIntensity;
@property (nonatomic) NSInteger hapticState; // ivar: _hapticState
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isMuted) BOOL muted; // ivar: _muted
@property (nonatomic, getter=isProminentHapticEnabled) BOOL prominentHapticEnabled; // ivar: _prominentHapticEnabled
@property (readonly) Class superclass;
@property (nonatomic, getter=isSystemMuted) BOOL systemMuted; // ivar: _systemMuted
@property (readonly, nonatomic, getter=isVolumeControlAvailable) BOOL volumeControlAvailable; // ivar: _volumeControlAvailable
@property (readonly, nonatomic) float volumeValue;
@property (readonly, nonatomic, getter=isVolumeWarningEnabled) BOOL volumeWarningEnabled; // ivar: _volumeWarningEnabled
@property (readonly, nonatomic) NSInteger volumeWarningState; // ivar: _volumeWarningState


-(id)_scheduleTimeoutWithBlock:(id)arg0 ;
-(id)initWithVolumeControlTarget:(id)arg0 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg0 ;
-(void)_applicationWillResignActiveNotification:(id)arg0 ;
-(void)_cancelSetHapticStateTimer;
-(void)_cancelSetHapticTimer;
-(void)_cancelSetProminentHapticTimer;
-(void)_cancelSetVolumeTimer;
-(void)_handleFailedToSetCurrentListeningModeNotification:(id)arg0 ;
-(void)_hapticTimeout;
-(void)_mutedStateDidChange;
-(void)_notifyDelegateHapticChanged;
-(void)_notifyDelegateHapticStateChanged;
-(void)_notifyDelegateProminentHapticStateChanged;
-(void)_notifyDelegateSystemMutedStateChanged;
-(void)_notifyDelegateVolumeChanged;
-(void)_prominentHapticStateDidChange;
-(void)_prominentHapticTimeout;
-(void)_systemMutedStateDidChange;
-(void)_volumeControlAvailabilityDidChange;
-(void)_volumeTimout;
-(void)_volumeWarningDidChange;
-(void)beginObservingHaptics;
-(void)beginObservingListeningModes;
-(void)beginObservingVolume;
-(void)dealloc;
-(void)endObservingHaptics;
-(void)endObservingListeningModes;
-(void)endObservingVolume;


@end


#endif
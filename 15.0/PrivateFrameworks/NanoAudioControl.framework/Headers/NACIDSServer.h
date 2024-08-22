// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NACIDSSERVER_H
#define NACIDSSERVER_H

@class NSMutableDictionary, NSArray, IDSService, NSString;
@protocol NACVolumeControllerDelegate, IDSServiceDelegate, MPVolumeControllerDelegate, MPAVRoutingControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NACRunAssertion.h"
#import "NACEventThrottler.h"

@interface NACIDSServer : NSObject <NACVolumeControllerDelegate, IDSServiceDelegate, MPVolumeControllerDelegate, MPAVRoutingControllerDelegate>

 {
    NACRunAssertion *_systemVolumeRunAssertion;
    NACRunAssertion *_proxyVolumeRunAssertion;
    NSMutableDictionary *_systemVolumeObservers;
    NSMutableDictionary *_proxyVolumeObservers;
    NSMutableDictionary *_routesObservers;
    NSMutableDictionary *_messageRecords;
    NSArray *_volumeAudioCategories;
    IDSService *_idsService;
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _shouldPickRouteAfterFetching;
    BOOL _shouldObserveSystemMutedState;
    BOOL _isSystemMuted;
    int _systemMuteToken;
    BOOL _shouldObserveHapticState;
    BOOL _prominentHapticEnabled;
    float _hapticIntensity;
    NSInteger _hapticState;
    NACEventThrottler *_hapticThrottler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_hasRequestedVolumeAtLeastOnce;
-(BOOL)_shouldForceVolumeWarning;
-(id)_nacVolumeControllerForTarget:(id)arg0 createIfNeeded:(BOOL)arg1 ;
-(id)_targetForNACVolumeController:(id)arg0 ;
-(id)_targetForVolumeController:(id)arg0 ;
-(id)initWithVolumeAudioCategories:(id)arg0 ;
-(void)_beginObservingHapticState;
-(void)_beginObservingProxyVolumeForTarget:(id)arg0 withEndpointRoute:(id)arg1 ;
-(void)_beginObservingSystemMutedState;
-(void)_beginObservingSystemVolume;
-(void)_cancelProxyVolumeObservationForTarget:(id)arg0 ;
-(void)_cancelRouteObservationForCategory:(id)arg0 ;
-(void)_cancelSystemVolumeObservation;
-(void)_handleBeginObservingAudioRoutes:(id)arg0 ;
-(void)_handleBeginObservingListeningModes:(id)arg0 ;
-(void)_handleBeginObservingProxyVolumeForTarget:(id)arg0 ;
-(void)_handleBeginObservingSystemVolume;
-(void)_handleBeginObservingVolume:(id)arg0 ;
-(void)_handleEndObservingAudioRoutes:(id)arg0 ;
-(void)_handleEndObservingListeningModes:(id)arg0 ;
-(void)_handleEndObservingVolume:(id)arg0 ;
-(void)_handlePickAudioRoute:(id)arg0 ;
-(void)_handleSetCurrentListeningMode:(id)arg0 ;
-(void)_handleSetHapticIntensity:(id)arg0 ;
-(void)_handleSetHapticState:(id)arg0 ;
-(void)_handleSetMuted:(id)arg0 ;
-(void)_handleSetProminentHapticEnabled:(id)arg0 ;
-(void)_handleSetSystemMuted:(id)arg0 ;
-(void)_handleSetVolume:(id)arg0 ;
-(void)_hapticIntensityDidChangeNotification:(id)arg0 ;
-(void)_sendAvailableListeningModes:(id)arg0 currentListeningMode:(id)arg1 error:(id)arg2 forTarget:(id)arg3 ;
-(void)_sendCurrentObservingSystemVolumeValues;
-(void)_sendEUVolumeLimit:(float)arg0 forTarget:(id)arg1 ;
-(void)_sendHapticState:(NSInteger)arg0 ;
-(void)_sendMessage:(id)arg0 type:(NSInteger)arg1 timeout:(CGFloat)arg2 queueOne:(id)arg3 retry:(BOOL)arg4 ;
-(void)_sendMutedState:(BOOL)arg0 forTarget:(id)arg1 ;
-(void)_sendSystemMutedState:(BOOL)arg0 ;
-(void)_sendVolumeControlAvailability:(BOOL)arg0 forTarget:(id)arg1 ;
-(void)_sendVolumeValue:(float)arg0 forTarget:(id)arg1 ;
-(void)_sendVolumeWarningEnabled:(BOOL)arg0 volumeWarningState:(NSInteger)arg1 forTarget:(id)arg2 ;
-(void)_setRequestedVolumeAtLeastOnce;
-(void)_updateHapticIntensityValue;
-(void)_updateHapticState;
-(void)_updateProminentHapticState;
-(void)_updateSystemMutedState;
-(void)beginObservingHapticState;
-(void)beginObservingSystemMutedState;
-(void)dealloc;
-(void)routingControllerAvailableRoutesDidChange:(id)arg0 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)updateProminentHapticState;
-(void)volumeController:(id)arg0 EUVolumeLimitDidChange:(float)arg1 ;
-(void)volumeController:(id)arg0 didFailToSetCurrentListeningModeWithError:(id)arg1 ;
-(void)volumeController:(id)arg0 mutedStateDidChange:(BOOL)arg1 ;
-(void)volumeController:(id)arg0 volumeControlAvailableDidChange:(BOOL)arg1 ;
-(void)volumeController:(id)arg0 volumeValueDidChange:(float)arg1 ;
-(void)volumeController:(id)arg0 volumeWarningStateDidChange:(NSInteger)arg1 ;
-(void)volumeControllerDidUpdateAvailableListeningModes:(id)arg0 ;
-(void)volumeControllerDidUpdateCurrentListeningMode:(id)arg0 ;


@end


#endif
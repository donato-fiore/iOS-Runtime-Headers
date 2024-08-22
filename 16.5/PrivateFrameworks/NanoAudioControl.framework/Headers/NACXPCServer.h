// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NACXPCSERVER_H
#define NACXPCSERVER_H

@class NPSDomainAccessor, NSMutableDictionary, NSXPCListener, NSString;
@protocol NSXPCListenerDelegate, NACXPCInterface, NACIDSClientDelegate, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "NACIDSClient.h"

@interface NACXPCServer : NSObject <NSXPCListenerDelegate, NACXPCInterface, NACIDSClientDelegate>

 {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_audioAndHapticPreviewQueue;
    NPSDomainAccessor *_domainAccessor;
    NSMutableDictionary *_volumeRecords;
    NSMutableDictionary *_listeningModesRecords;
    NSMutableDictionary *_audioRoutesRecords;
    NSXPCListener *_xpcListener;
    NACIDSClient *_idsClient;
    float _hapticIntensity;
    BOOL _prominentHapticEnabled;
    NSInteger _hapticState;
    BOOL _systemMutedState;
    NSObject<OS_dispatch_source> *_audioRouteDeferTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)server;
-(BOOL)_cachedProminentHapticState;
-(BOOL)_cachedSystemMutedState;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(NSInteger)_aggregatedCountOfObserversForTarget:(id)arg0 inRecords:(id)arg1 ;
-(NSInteger)_cachedHapticState;
-(float)_cachedHapticIntensity;
-(id)_audioRoutesRecordForCategory:(id)arg0 ;
-(id)_cachedVolumeRecords;
-(id)_listeningModesRecordForTarget:(id)arg0 ;
-(id)_routeObservationCategoriesForConnection:(id)arg0 ;
-(id)_volumeRecordForTarget:(id)arg0 ;
-(id)init;
-(void)EULimitForTarget:(id)arg0 result:(id)arg1 ;
-(void)_beginObservingListeningModesForTarget:(id)arg0 connection:(id)arg1 ;
-(void)_beginObservingVolumeForTarget:(id)arg0 connection:(id)arg1 ;
-(void)_cancelDeferredAudioRoutesUpdate;
-(void)_cleanupConnection:(id)arg0 ;
-(void)_endObservingAudioRoutesForCategory:(id)arg0 connection:(id)arg1 ;
-(void)_endObservingListeningModesForTarget:(id)arg0 connection:(id)arg1 ;
-(void)_endObservingVolumeForTarget:(id)arg0 connection:(id)arg1 ;
-(void)_persistHapticIntensity;
-(void)_persistHapticState;
-(void)_persistProminentHapticState;
-(void)_persistSystemMutedState;
-(void)_persistVolumeRecords;
-(void)_scheduleDeferredAudioRoutesUpdate:(id)arg0 category:(id)arg1 ;
-(void)_updateAudioRoutes:(id)arg0 category:(id)arg1 ;
-(void)audioRoutesForCategory:(id)arg0 result:(id)arg1 ;
-(void)availableListeningModesForTarget:(id)arg0 result:(id)arg1 ;
-(void)beginObservingAudioRoutesForCategory:(id)arg0 ;
-(void)beginObservingListeningModesForTarget:(id)arg0 ;
-(void)beginObservingVolumeForTarget:(id)arg0 ;
-(void)client:(id)arg0 EULimit:(float)arg1 didChangeForTarget:(id)arg2 ;
-(void)client:(id)arg0 audioRoutes:(id)arg1 didChangeForCategory:(id)arg2 ;
-(void)client:(id)arg0 availableListeningModes:(id)arg1 didChangeForTarget:(id)arg2 ;
-(void)client:(id)arg0 currentListeningMode:(id)arg1 didChangeForTarget:(id)arg2 ;
-(void)client:(id)arg0 didFailToSetCurrentListeningModeForTarget:(id)arg1 error:(id)arg2 ;
-(void)client:(id)arg0 hapticIntensityDidChange:(float)arg1 ;
-(void)client:(id)arg0 hapticStateDidChange:(NSInteger)arg1 ;
-(void)client:(id)arg0 mutedState:(BOOL)arg1 didChangeForTarget:(id)arg2 ;
-(void)client:(id)arg0 prominentHapticStateDidChange:(BOOL)arg1 ;
-(void)client:(id)arg0 routeObservationCancelledForCategory:(id)arg1 ;
-(void)client:(id)arg0 systemMutedStateDidChange:(BOOL)arg1 ;
-(void)client:(id)arg0 volumeControlAvailable:(BOOL)arg1 didChangeForTarget:(id)arg2 ;
-(void)client:(id)arg0 volumeObservationCancelledForTarget:(id)arg1 ;
-(void)client:(id)arg0 volumeValue:(float)arg1 didChangeForTarget:(id)arg2 ;
-(void)client:(id)arg0 volumeWarningEnabled:(BOOL)arg1 volumeWarningState:(NSInteger)arg2 didChangeForTarget:(id)arg3 ;
-(void)currentListeningModeForTarget:(id)arg0 result:(id)arg1 ;
-(void)endObservingAudioRoutesForCategory:(id)arg0 ;
-(void)endObservingListeningModesForTarget:(id)arg0 ;
-(void)endObservingVolumeForTarget:(id)arg0 ;
-(void)hapticIntensity:(id)arg0 ;
-(void)hapticState:(id)arg0 ;
-(void)mutedStateForTarget:(id)arg0 result:(id)arg1 ;
-(void)pickAudioRouteWithIdentifier:(id)arg0 category:(id)arg1 ;
-(void)playAudioAndHapticPreview;
-(void)playDefaultHapticPreview;
-(void)playProminentHapticPreview;
-(void)prominentHapticEnabled:(id)arg0 ;
-(void)setCurrentListeningMode:(id)arg0 forTarget:(id)arg1 ;
-(void)setHapticIntensity:(float)arg0 ;
-(void)setHapticState:(NSInteger)arg0 ;
-(void)setMuted:(BOOL)arg0 forTarget:(id)arg1 ;
-(void)setProminentHapticEnabled:(BOOL)arg0 ;
-(void)setSystemMuted:(BOOL)arg0 ;
-(void)setVolumeValue:(float)arg0 forTarget:(id)arg1 ;
-(void)systemMutedState:(id)arg0 ;
-(void)volumeControlAvailabilityForTarget:(id)arg0 result:(id)arg1 ;
-(void)volumeValueForTarget:(id)arg0 result:(id)arg1 ;
-(void)volumeWarningForTarget:(id)arg0 result:(id)arg1 ;


@end


#endif
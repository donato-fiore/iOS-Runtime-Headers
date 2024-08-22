// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NACVOLUMECONTROLLERLOCAL_H
#define NACVOLUMECONTROLLERLOCAL_H

@class NSString, MPAVRoute, MPVolumeController, MPAVRoutingController, NSCountedSet, NSOrderedSet;
@protocol MPVolumeControllerDelegate, MPAVRoutingControllerDelegate, MediaControlsVolumeControllerObserver, NACVolumeController, OS_dispatch_queue, NACVolumeControllerDelegate;

#import <Foundation/Foundation.h>

#import "NACEventThrottler.h"
#import "MediaControlsVolumeController.h"

@interface NACVolumeControllerLocal : NSObject <MPVolumeControllerDelegate, MPAVRoutingControllerDelegate, MediaControlsVolumeControllerObserver, NACVolumeController>

 {
    NSInteger _target;
    NSString *_audioCategory;
    MPAVRoute *_route;
    MPVolumeController *_volumeController;
    MPAVRoutingController *_routingController;
    NSCountedSet *_volumeSetHistory;
    NACEventThrottler *_volumeThrottler;
    NACEventThrottler *_hapticThrottler;
    BOOL _validCachedMutedValue;
    BOOL _muted;
    BOOL _shouldIgnoreHaptics;
    BOOL _monitoringHaptics;
    NSInteger _cachedHapticState;
    NSObject<OS_dispatch_queue> *_serialQueue;
    MediaControlsVolumeController *_mediaControlsVolumeController;
    NSOrderedSet *_lastNotifiedAvailableListeningModes;
    NSString *_lastNotifiedCurrentListeningMode;
}


@property (readonly, nonatomic) float EUVolumeLimit;
@property (readonly, nonatomic) NSOrderedSet *availableListeningModes;
@property (retain, nonatomic) NSString *currentListeningMode;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NACVolumeControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) float hapticIntensity;
@property (nonatomic) NSInteger hapticState;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isMuted) BOOL muted;
@property (nonatomic, getter=isProminentHapticEnabled) BOOL prominentHapticEnabled;
@property (readonly) Class superclass;
@property (nonatomic, getter=isSystemMuted) BOOL systemMuted; // ivar: _systemMuted
@property (readonly, nonatomic, getter=isVolumeControlAvailable) BOOL volumeControlAvailable;
@property (readonly, nonatomic) float volumeValue;
@property (readonly, nonatomic, getter=isVolumeWarningEnabled) BOOL volumeWarningEnabled;
@property (readonly, nonatomic) NSInteger volumeWarningState;


-(id)_init;
-(id)_mediaControlsVolumeController;
-(id)_volumeController;
-(id)init;
-(id)initWithAudioCategory:(id)arg0 ;
-(id)initWithRoute:(id)arg0 ;
-(id)initWithTarget:(NSInteger)arg0 category:(id)arg1 ;
-(void)_ignoreHapticObservation;
-(void)_updateMutedStateFromVolumeController:(id)arg0 ;
-(void)_updateVolumeState;
-(void)beginObservingHapticState;
-(void)beginObservingHaptics;
-(void)beginObservingListeningModes;
-(void)beginObservingVolume;
-(void)endObservingHapticState;
-(void)endObservingHaptics;
-(void)endObservingListeningModes;
-(void)endObservingVolume;
-(void)mediaControlsVolumeController:(id)arg0 didUpdateSplitRoute:(BOOL)arg1 ;
-(void)playDefaultHapticPreview;
-(void)playPreview;
-(void)playProminentHapticPreview;
-(void)routingControllerAvailableRoutesDidChange:(id)arg0 ;
-(void)updateCachedHapticState;
-(void)volumeController:(id)arg0 EUVolumeLimitDidChange:(float)arg1 ;
-(void)volumeController:(id)arg0 mutedStateDidChange:(BOOL)arg1 ;
-(void)volumeController:(id)arg0 volumeControlAvailableDidChange:(BOOL)arg1 ;
-(void)volumeController:(id)arg0 volumeValueDidChange:(float)arg1 ;
-(void)volumeController:(id)arg0 volumeWarningStateDidChange:(NSInteger)arg1 ;


@end


#endif
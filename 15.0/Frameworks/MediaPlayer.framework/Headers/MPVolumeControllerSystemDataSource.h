// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPVOLUMECONTROLLERSYSTEMDATASOURCE_H
#define MPVOLUMECONTROLLERSYSTEMDATASOURCE_H

@class AVSystemController, NSString;
@protocol MPVolumeControllerDataSource, MPVolumeControllerDataSourceDelegate;

#import <Foundation/Foundation.h>


@interface MPVolumeControllerSystemDataSource : NSObject <MPVolumeControllerDataSource>

 {
    BOOL _debugVolumeWarning;
    BOOL _volumeInitialized;
    BOOL _volumeControlCapabilitiesInitialized;
    AVSystemController *_avSystemController;
}


@property (readonly, nonatomic) float EUVolumeLimit; // ivar: _EUVolumeLimit
@property (readonly, nonatomic) BOOL applicationShouldOverrideHardwareVolumeBehavior;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MPVolumeControllerDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isMuted) BOOL muted; // ivar: _muted
@property (readonly) Class superclass;
@property (nonatomic) float volume; // ivar: _volume
@property (copy, nonatomic) NSString *volumeAudioCategory; // ivar: _volumeAudioCategory
@property (readonly, nonatomic, getter=isVolumeControlAvailable) BOOL volumeControlAvailable; // ivar: _volumeControlAvailable
@property (readonly, copy, nonatomic) NSString *volumeControlLabel; // ivar: _volumeControlLabel
@property (readonly, nonatomic) BOOL volumeWarningEnabled; // ivar: _volumeWarningEnabled
@property (readonly, nonatomic) NSInteger volumeWarningState; // ivar: _volumeWarningState


-(float)_volumeApplyingEUVolumePolicyToVolume:(float)arg0 ;
-(id)_mediaPlaybackVolumeAudioCategory;
-(id)_reloadQueue;
-(id)init;
-(void)_EUVolumeLimitDidChange:(id)arg0 ;
-(void)_EUVolumeLimitEnforcedDidChange:(id)arg0 ;
-(void)_mediaServerDiedNotification:(id)arg0 ;
-(void)_routeDidChangeNotification:(id)arg0 ;
-(void)_setup;
-(void)_systemMuteDidChange:(id)arg0 ;
-(void)_systemVolumeDidChange:(id)arg0 ;
-(void)_tearDown;
-(void)_updateRouteLabelForRoute:(id)arg0 ;
-(void)_volumeControlCapabilitiesDidChangeNotification:(id)arg0 ;
-(void)_volumeDidChangeNotification:(id)arg0 ;
-(void)adjustVolumeValue:(float)arg0 ;
-(void)dealloc;
-(void)getVolumeValueWithCompletion:(id)arg0 ;
-(void)initializeVolume;
-(void)reload;
-(void)reloadWarning;
-(void)updateVolume:(float)arg0 ;
-(void)updateVolumeControlCapabilities:(unsigned int)arg0 ;


@end


#endif
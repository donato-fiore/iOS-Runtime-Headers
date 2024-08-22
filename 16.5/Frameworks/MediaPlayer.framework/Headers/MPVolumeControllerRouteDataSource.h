// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPVOLUMECONTROLLERROUTEDATASOURCE_H
#define MPVOLUMECONTROLLERROUTEDATASOURCE_H

@class NSString;
@protocol MPVolumeControllerDataSource, MPVolumeControllerDataSourceDelegate;

#import <Foundation/Foundation.h>

#import "MPAVRoute.h"

@interface MPVolumeControllerRouteDataSource : NSObject <MPVolumeControllerDataSource>

 {
    float _pendingVolume;
    BOOL _hasPendingVolume;
    BOOL _hasVolumeInFlight;
    BOOL _volumeInitialized;
    BOOL _volumeCapabilitiesInitialized;
}


@property (readonly, nonatomic) float EUVolumeLimit; // ivar: _EUVolumeLimit
@property (readonly, nonatomic) BOOL applicationShouldOverrideHardwareVolumeBehavior;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MPVolumeControllerDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MPAVRoute *groupRoute; // ivar: _groupRoute
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isMuted) BOOL muted; // ivar: _muted
@property (retain, nonatomic) MPAVRoute *outputDeviceRoute; // ivar: _outputDeviceRoute
@property (readonly) Class superclass;
@property (nonatomic) float volume; // ivar: _volume
@property (readonly, copy, nonatomic) NSString *volumeAudioCategory;
@property (readonly, nonatomic, getter=isVolumeControlAvailable) BOOL volumeControlAvailable; // ivar: _volumeControlAvailable
@property (readonly, nonatomic) unsigned int volumeControlCapabilities; // ivar: _volumeControlCapabilities
@property (readonly, copy, nonatomic) NSString *volumeControlLabel;
@property (readonly, nonatomic) BOOL volumeWarningEnabled; // ivar: _volumeWarningEnabled
@property (readonly, nonatomic) NSInteger volumeWarningState; // ivar: _volumeWarningState


-(id)initWithGroupRoute:(id)arg0 outputDeviceRoute:(id)arg1 ;
-(void)_routeVolumeControlCapabilitiesDidChangeNotification:(id)arg0 ;
-(void)_routeVolumeDidChangeNotification:(id)arg0 ;
-(void)_sendVolumeButtonEventWithUsagePage:(unsigned int)arg0 usage:(unsigned int)arg1 down:(BOOL)arg2 ;
-(void)_setPendingVolumeIfNeeded;
-(void)_updateVolumeControlCapabilities:(unsigned int)arg0 ;
-(void)adjustVolumeValue:(float)arg0 ;
-(void)beginDecreasingRelativeVolume;
-(void)beginIncreasingRelativeVolume;
-(void)dealloc;
-(void)endDecreasingRelativeVolume;
-(void)endIncreasingRelativeVolume;
-(void)getVolumeValueWithCompletion:(id)arg0 ;
-(void)initializeVolume;
-(void)reload;


@end


#endif
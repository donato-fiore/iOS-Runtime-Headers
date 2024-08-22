// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MEDIACONTROLSVOLUMECONTROLLER_H
#define MEDIACONTROLSVOLUMECONTROLLER_H

@class NSString, NSHashTable, MPAVOutputDeviceRoute, MPVolumeController, MPAVEndpointRoute;
@protocol MPVolumeControllerDelegate;

#import <Foundation/Foundation.h>


@interface MediaControlsVolumeController : NSObject <MPVolumeControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHeadTrackedSpatialAudioActive) BOOL headTrackedSpatialAudioActive; // ivar: _headTrackedSpatialAudioActive
@property (readonly, nonatomic) BOOL isSplitRoute; // ivar: _isSplitRoute
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (nonatomic) BOOL primaryInteractionEnabled; // ivar: _primaryInteractionEnabled
@property (retain, nonatomic) MPAVOutputDeviceRoute *primaryOutputDeviceRoute; // ivar: _primaryOutputDeviceRoute
@property (retain, nonatomic) MPVolumeController *primaryVolumeController; // ivar: _primaryVolumeController
@property (nonatomic) BOOL secondaryInteractionEnabled; // ivar: _secondaryInteractionEnabled
@property (retain, nonatomic) MPAVOutputDeviceRoute *secondaryOutputDeviceRoute; // ivar: _secondaryOutputDeviceRoute
@property (retain, nonatomic) MPVolumeController *secondaryVolumeController; // ivar: _secondaryVolumeController
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsHeadTrackedSpatialAudio; // ivar: _supportsHeadTrackedSpatialAudio
@property (readonly, nonatomic) MPAVOutputDeviceRoute *systemOutputDeviceRoute; // ivar: _systemOutputDeviceRoute
@property (retain, nonatomic) MPAVEndpointRoute *systemRoute; // ivar: _systemRoute
@property (retain, nonatomic) MPVolumeController *systemVolumeController; // ivar: _systemVolumeController
@property (copy, nonatomic) NSString *volumeAudioCategory;


+(BOOL)isDefaultPackage:(id)arg0 ;
-(BOOL)_setupOutputDevicesAndVolumeControllersIfNeeded;
-(BOOL)userInteractionEnabledForRouteType:(NSInteger)arg0 ;
-(BOOL)volumeControlAvailableForRouteType:(NSInteger)arg0 ;
-(NSInteger)_routeForVolumeController:(id)arg0 ;
-(float)volumeForRouteType:(NSInteger)arg0 ;
-(id)_packageNameForRoute:(id)arg0 isRTL:(BOOL)arg1 isSlider:(BOOL)arg2 ;
-(id)_volumePackageNameForClusterRoute:(id)arg0 isRTL:(BOOL)arg1 ;
-(id)_volumePackageNameForRTL:(BOOL)arg0 ;
-(id)availableBluetoothListeningModeForRouteType:(NSInteger)arg0 ;
-(id)currentBluetoothListeningModeForRouteType:(NSInteger)arg0 ;
-(id)glyphStateForVolumeLevel:(CGFloat)arg0 packageName:(id)arg1 ;
-(id)headTrackedSpatialAudioModeForRouteType:(NSInteger)arg0 ;
-(id)init;
-(id)outputContextDescription;
-(id)outputeDeviceForRouteType:(NSInteger)arg0 ;
-(id)packageNameForRouteType:(NSInteger)arg0 isRTL:(BOOL)arg1 isSlider:(BOOL)arg2 ;
-(id)routeNameForRouteType:(NSInteger)arg0 ;
-(id)setCurrentBluetoothListeningModeForRouteType:(NSInteger)arg0 bluetoothListeningMode:(id)arg1 ;
-(void)_notifyUserInteractionEnabledChanged:(BOOL)arg0 routeType:(NSInteger)arg1 ;
-(void)_notifyVolumeChangedForVolumeController:(id)arg0 volumeControlAvailable:(BOOL)arg1 effectiveVolume:(float)arg2 ;
-(void)addObserver:(id)arg0 ;
-(void)logFailedSetBluetoothListeningMode:(id)arg0 forRouteType:(NSInteger)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)routeDidChangeNotification;
-(void)setHeadTrackedSpatialAudioMode:(id)arg0 forRouteType:(NSInteger)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg0 forRouteType:(NSInteger)arg1 ;
-(void)setVolume:(float)arg0 forRouteType:(NSInteger)arg1 ;
-(void)volumeController:(id)arg0 volumeControlAvailableDidChange:(BOOL)arg1 ;
-(void)volumeController:(id)arg0 volumeValueDidChange:(float)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MEDIACONTROLSVOLUMECONTROLLER_H
#define MEDIACONTROLSVOLUMECONTROLLER_H

@class NSString, NSHashTable, MPAVOutputDeviceRoute, MPVolumeController, MPAVEndpointRoute;
@protocol MPVolumeControllerDelegate;

#import <Foundation/Foundation.h>


@interface MediaControlsVolumeController : NSObject <MPVolumeControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isSplitRoute; // ivar: _isSplitRoute
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) MPAVOutputDeviceRoute *primaryOutputDeviceRoute; // ivar: _primaryOutputDeviceRoute
@property (retain, nonatomic) MPVolumeController *primaryVolumeController; // ivar: _primaryVolumeController
@property (retain, nonatomic) MPAVOutputDeviceRoute *secondaryOutputDeviceRoute; // ivar: _secondaryOutputDeviceRoute
@property (retain, nonatomic) MPVolumeController *secondaryVolumeController; // ivar: _secondaryVolumeController
@property (readonly) Class superclass;
@property (retain, nonatomic) MPAVOutputDeviceRoute *systemOutputDeviceRoute; // ivar: _systemOutputDeviceRoute
@property (retain, nonatomic) MPAVEndpointRoute *systemRoute; // ivar: _systemRoute
@property (retain, nonatomic) MPVolumeController *systemVolumeController; // ivar: _systemVolumeController
@property (copy, nonatomic) NSString *volumeAudioCategory; // ivar: _volumeAudioCategory


-(BOOL)_setupOutputDevicesAndVolumeControllersIfNeeded;
-(BOOL)setCurrentBluetoothListeningModeForRouteType:(NSUInteger)arg0 bluetoothListeningMode:(id)arg1 error:(*id)arg2 ;
-(BOOL)volumeControlAvailableForRouteType:(NSUInteger)arg0 ;
-(NSUInteger)_routeForVolumeController:(id)arg0 ;
-(float)volumeForRouteType:(NSUInteger)arg0 ;
-(id)availableBluetoothListeningModeForRouteType:(NSUInteger)arg0 ;
-(id)currentBluetoothListeningModeForRouteType:(NSUInteger)arg0 ;
-(id)imageForRouteType:(NSUInteger)arg0 ;
-(id)init;
-(id)routeNameForRouteType:(NSUInteger)arg0 ;
-(void)_notifyVolumeChangedForVolumeController:(id)arg0 volumeControlAvailable:(BOOL)arg1 effectiveVolume:(float)arg2 ;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)routeDidChangeNotification;
-(void)setVolume:(float)arg0 forRouteType:(NSUInteger)arg1 ;
-(void)volumeController:(id)arg0 volumeControlAvailableDidChange:(BOOL)arg1 ;
-(void)volumeController:(id)arg0 volumeValueDidChange:(float)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUSYSTEMVOLUMECONTROLLER_H
#define MRUSYSTEMVOLUMECONTROLLER_H

@class NSString, MPVolumeController;
@protocol MRUSystemOutputDeviceRouteControllerObserver, MPVolumeControllerDelegate, MRUSystemVolumeControllerDelegate;

#import <Foundation/Foundation.h>

#import "MRUSystemOutputDeviceRouteController.h"

@interface MRUSystemVolumeController : NSObject <MRUSystemOutputDeviceRouteControllerObserver, MPVolumeControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRUSystemVolumeControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MRUSystemOutputDeviceRouteController *outputDeviceRouteController; // ivar: _outputDeviceRouteController
@property (readonly, nonatomic) MPVolumeController *primaryVolumeController; // ivar: _primaryVolumeController
@property (readonly, nonatomic) MPVolumeController *secondaryVolumeController; // ivar: _secondaryVolumeController
@property (readonly) Class superclass;
@property (readonly, nonatomic) MPVolumeController *systemVolumeController; // ivar: _systemVolumeController
@property (readonly, copy, nonatomic) NSString *volumeAudioCategory;


+(id)packageStateForVolumeValue:(float)arg0 ;
-(NSInteger)typeForVolumeController:(id)arg0 ;
-(float)volumeValueForType:(NSInteger)arg0 ;
-(id)initWithOutputDeviceRouteController:(id)arg0 ;
-(unsigned int)volumeCapabilitiesForType:(NSInteger)arg0 ;
-(void)decreaseVolume;
-(void)increaseVolume;
-(void)setVolumeValue:(float)arg0 forType:(NSInteger)arg1 ;
-(void)systemOutputDeviceRouteControllerDidUpdateOutputDevices:(id)arg0 ;
-(void)updateVolumeControllers;
-(void)volumeController:(id)arg0 volumeControlCapabilitiesDidChange:(unsigned int)arg1 ;
-(void)volumeController:(id)arg0 volumeValueDidChange:(float)arg1 ;


@end


#endif
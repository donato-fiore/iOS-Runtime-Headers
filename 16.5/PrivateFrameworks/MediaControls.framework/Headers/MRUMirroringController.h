// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUMIRRORINGCONTROLLER_H
#define MRUMIRRORINGCONTROLLER_H

@class NSArray, NSMutableSet, NSString, AVOutputDevice;
@protocol MRUOutputContextControllerDelegate, MRUMirroringDiscoverySessionControllerDelegate, MRUMirroringControllerDelegate;

#import <Foundation/Foundation.h>

#import "MRUOutputContextController.h"
#import "MRUMirroringDiscoverySessionController.h"

@interface MRUMirroringController : NSObject <MRUOutputContextControllerDelegate, MRUMirroringDiscoverySessionControllerDelegate>



@property (retain, nonatomic) MRUOutputContextController *audioContextController; // ivar: _audioContextController
@property (retain, nonatomic) MRUMirroringDiscoverySessionController *audioDiscoverySessionController; // ivar: _audioDiscoverySessionController
@property (readonly, nonatomic) NSArray *availableAudioOutputDevices; // ivar: _availableAudioOutputDevices
@property (readonly, nonatomic) NSArray *availableOutputDevices; // ivar: _availableOutputDevices
@property (retain, nonatomic) NSMutableSet *busyIdentifiers; // ivar: _busyIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRUMirroringControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MRUOutputContextController *outputContextController; // ivar: _outputContextController
@property (retain, nonatomic) MRUMirroringDiscoverySessionController *outputDeviceDiscoverySessionController; // ivar: _outputDeviceDiscoverySessionController
@property (readonly, nonatomic) AVOutputDevice *selectedAudioOutputDevice; // ivar: _selectedAudioOutputDevice
@property (readonly, nonatomic) AVOutputDevice *selectedOutputDevice; // ivar: _selectedOutputDevice
@property (readonly) Class superclass;
@property (nonatomic) BOOL tetheredDisplayPortModeEnabled; // ivar: _tetheredDisplayPortModeEnabled


+(id)mirroringControllerWithAudioRoutingSupport;
+(id)symbolNameForOutputDevice:(id)arg0 ;
-(id)init;
-(id)outputDeviceForID:(id)arg0 ;
-(void)addBusyIdentifier:(id)arg0 ;
-(void)mirrorToOutputDevice:(id)arg0 completion:(id)arg1 ;
-(void)mirroringDiscoverySessionController:(id)arg0 didChangeAvailableOutputDevices:(id)arg1 ;
-(void)outputContextController:(id)arg0 didChangeOutputDevice:(id)arg1 ;
-(void)pairingHandlerNotification:(id)arg0 ;
-(void)removeBusyIdentifier:(id)arg0 ;
-(void)selectAudioOutputDevice:(id)arg0 completion:(id)arg1 ;
-(void)startDetailedDiscovery;
-(void)startMirroringToOutputDevice:(id)arg0 completion:(id)arg1 ;
-(void)stopDetailedDiscovery;
-(void)stopMirroringWithCompletion:(id)arg0 ;
-(void)updateAvailableAudioOutputDevices;
-(void)updateAvailableOutputDevices;
-(void)updateSelectedAudioOutputDevice;
-(void)updateSelectedOutputDevice;


@end


#endif
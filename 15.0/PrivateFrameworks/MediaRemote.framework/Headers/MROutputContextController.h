// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MROUTPUTCONTEXTCONTROLLER_H
#define MROUTPUTCONTEXTCONTROLLER_H

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;


#import "MROutputContextDataSource.h"
#import "MRAVOutputContext.h"

@interface MROutputContextController : MROutputContextDataSource {
    MRAVOutputContext *_outputContext;
    float _masterVolume;
    unsigned int _masterVolumeControlCapabilities;
    BOOL _localVolumeInitialized;
    BOOL _localVolumeControlCapabilitiesInitialized;
    NSMutableDictionary *_outputDeviceVolume;
    NSObject<OS_dispatch_queue> *_serialQueue;
}


@property (readonly, nonatomic) NSString *localDeviceUID;
@property (nonatomic) float localVolume; // ivar: _localVolume
@property (nonatomic) unsigned int localVolumeControlCapabilities; // ivar: _localVolumeControlCapabilities


+(id)sharedOutputContextController;
-(float)volume;
-(float)volumeForOutputDeviceUID:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)initWithOutputContext:(id)arg0 ;
-(id)outputDevices;
-(id)setVolume:(float)arg0 outputDeviceUID:(id)arg1 ;
-(id)uniqueIdentifier;
-(unsigned int)volumeControlCapabilities;
-(unsigned int)volumeControlCapabilitiesForOutputDeviceUID:(id)arg0 error:(*id)arg1 ;
-(void)_handleLocalDeviceVolumeControlCapabilitiesDidChangeNotification:(id)arg0 ;
-(void)_handleLocalDeviceVolumeDidChangeNotification:(id)arg0 ;
-(void)_handleOutputDeviceAddedNotification:(id)arg0 ;
-(void)_handleOutputDeviceDidChangeNotification:(id)arg0 ;
-(void)_handleOutputDeviceRemovedNotification:(id)arg0 ;
-(void)_handleOutputDeviceVolumeControlCapabilitiesDidChangeNotification:(id)arg0 ;
-(void)_handleOutputDeviceVolumeDidChangeNotification:(id)arg0 ;
-(void)_handleOutputDevicesReloadedNotification:(id)arg0 ;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MROUTPUTCONTEXTCONTROLLER_H
#define MROUTPUTCONTEXTCONTROLLER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;


#import "MROutputContextDataSource.h"
#import "MRAVOutputContext.h"
#import "MRAVOutputDevice.h"

@interface MROutputContextController : MROutputContextDataSource {
    MRAVOutputContext *_outputContext;
    float _masterVolume;
    unsigned int _masterVolumeControlCapabilities;
    BOOL _masterIsMuted;
    BOOL _localVolumeInitialized;
    BOOL _localVolumeControlCapabilitiesInitialized;
    BOOL _localIsMutedInitialized;
    NSMutableDictionary *_outputDeviceVolume;
    NSObject<OS_dispatch_queue> *_serialQueue;
}


@property (retain, nonatomic) MRAVOutputDevice *designatedGroupLeaderWhenContextEmpty; // ivar: _designatedGroupLeaderWhenContextEmpty
@property (readonly, nonatomic, getter=isLocalDeviceDesignatedGroupLeader) BOOL localDeviceDesignatedGroupLeader;
@property (nonatomic) BOOL localIsMuted; // ivar: _localIsMuted
@property (nonatomic) float localVolume; // ivar: _localVolume
@property (nonatomic) unsigned int localVolumeControlCapabilities; // ivar: _localVolumeControlCapabilities
@property (readonly, nonatomic, getter=isOutputContextEmpty) BOOL outputContextEmpty;
@property (readonly, nonatomic) BOOL useLocalValues;
@property (readonly, nonatomic) BOOL useOutputContextValues;


+(id)sharedOutputContextController;
-(BOOL)isMutedForOutputDevice:(id)arg0 error:(*id)arg1 ;
-(float)volume;
-(float)volumeForOutputDeviceUID:(id)arg0 error:(*id)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)initWithOutputContext:(id)arg0 ;
-(id)outputDevices;
-(id)setMuted:(BOOL)arg0 outputDeviceUID:(id)arg1 ;
-(id)setVolume:(float)arg0 outputDeviceUID:(id)arg1 ;
-(id)uniqueIdentifier;
-(unsigned int)volumeControlCapabilities;
-(unsigned int)volumeControlCapabilitiesForOutputDeviceUID:(id)arg0 error:(*id)arg1 ;
-(void)_handleLocalDeviceIsMutedDidChangeNotification:(id)arg0 ;
-(void)_handleLocalDeviceVolumeControlCapabilitiesDidChangeNotification:(id)arg0 ;
-(void)_handleLocalDeviceVolumeDidChangeNotification:(id)arg0 ;
-(void)_handleOutputDeviceAddedNotification:(id)arg0 ;
-(void)_handleOutputDeviceDidChangeNotification:(id)arg0 ;
-(void)_handleOutputDeviceRemovedNotification:(id)arg0 ;
-(void)_handleOutputDeviceVolumeControlCapabilitiesDidChangeNotification:(id)arg0 ;
-(void)_handleOutputDeviceVolumeDidChangeNotification:(id)arg0 ;
-(void)_handleOutputDevicesReloadedNotification:(id)arg0 ;
-(void)_handlePredictedOutputDeviceDidChangeNotification:(id)arg0 ;
-(void)dealloc;


@end


#endif
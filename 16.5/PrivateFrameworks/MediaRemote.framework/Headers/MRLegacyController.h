// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRLEGACYCONTROLLER_H
#define MRLEGACYCONTROLLER_H

@class NSString;
@protocol MRProtocolClientConnectionDelegate, MRLegacyControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MRExternalDevice.h"

@interface MRLegacyController : NSObject <MRProtocolClientConnectionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRLegacyControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MRExternalDevice *externalDevice; // ivar: _externalDevice
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *outputDeviceUID; // ivar: _outputDeviceUID
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)initWithAVOutputDevice:(id)arg0 ;
-(id)initWithExternalDevice:(id)arg0 outputDeviceUID:(id)arg1 ;
-(id)initWithOutputDevice:(id)arg0 ;
-(id)initWithOutputDeviceUID:(id)arg0 ;
-(void)addOutputDeviceIDs:(id)arg0 completion:(id)arg1 ;
-(void)connect;
-(void)dealloc;
-(void)getMasterVolumeCapabilitiesWithCompletion:(id)arg0 ;
-(void)getMasterVolumeWithCompletion:(id)arg0 ;
-(void)getOutputDeviceVolume:(id)arg0 completion:(id)arg1 ;
-(void)getOutputDeviceVolumeCapabilities:(id)arg0 completion:(id)arg1 ;
-(void)handleVolumeCapabilitiesDidChangeNotification:(id)arg0 ;
-(void)modifyTopologyAddingDevices:(id)arg0 removingDevices:(id)arg1 settingDevices:(id)arg2 completion:(id)arg3 ;
-(void)removeOutputDeviceIDs:(id)arg0 completion:(id)arg1 ;
-(void)setMasterVolume:(float)arg0 completion:(id)arg1 ;
-(void)setOutputDeviceIDs:(id)arg0 completion:(id)arg1 ;
-(void)setVolume:(float)arg0 forOutputDeviceID:(id)arg1 completion:(id)arg2 ;
-(void)setupExternalDevice;
-(void)tearDown;


@end


#endif
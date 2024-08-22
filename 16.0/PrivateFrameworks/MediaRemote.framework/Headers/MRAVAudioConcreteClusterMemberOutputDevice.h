// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRAVAUDIOCONCRETECLUSTERMEMBEROUTPUTDEVICE_H
#define MRAVAUDIOCONCRETECLUSTERMEMBEROUTPUTDEVICE_H

@class AVOutputDeviceClusterMember;


#import "MRAVOutputDevice.h"

@interface MRAVAudioConcreteClusterMemberOutputDevice : MRAVOutputDevice

@property (readonly, nonatomic) AVOutputDeviceClusterMember *avClusterMemberOutputDevice; // ivar: _avClusterMemberOutputDevice
@property (readonly, nonatomic) MRAVOutputDevice *parent; // ivar: _parent


-(BOOL)isLocalDevice;
-(BOOL)isPickable;
-(BOOL)isVolumeControlAvailable;
-(float)volume;
-(id)groupID;
-(id)initWithAVCusterMemeberOutputDevice:(id)arg0 parent:(id)arg1 sourceInfo:(id)arg2 ;
-(id)modelID;
-(id)name;
-(id)uid;
-(unsigned int)deviceSubtype;
-(unsigned int)deviceType;
-(unsigned int)volumeCapabilities;
-(void)setVolume:(float)arg0 ;


@end


#endif
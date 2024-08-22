// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRAVCONCRETEENDPOINT_H
#define MRAVCONCRETEENDPOINT_H

@class AVOutputDeviceGroup;


#import "MRConcreteEndpoint.h"

@interface MRAVConcreteEndpoint : MRConcreteEndpoint {
    AVOutputDeviceGroup *_outputDeviceGroup;
}




+(id)errorWithChangeResult:(id)arg0 outputDevice:(id)arg1 ;
-(float)volumeForOutputDevice:(id)arg0 error:(*id)arg1 ;
-(id)initWithDesignatedGroupLeader:(id)arg0 outputDevices:(id)arg1 ;
-(id)initWithOutputDeviceGroup:(id)arg0 groupLeader:(id)arg1 outputDevices:(id)arg2 ;
-(void)addOutputDevices:(id)arg0 initiator:(id)arg1 withReplyQueue:(id)arg2 completion:(id)arg3 ;
-(void)handleVolumeCapabilityChangedNotification:(id)arg0 ;
-(void)handleVolumeChangedNotification:(id)arg0 ;
-(void)outputDeviceVolume:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)registerVolumeNotifications;
-(void)removeOutputDevices:(id)arg0 initiator:(id)arg1 withReplyQueue:(id)arg2 completion:(id)arg3 ;
-(void)setExternalDevice:(id)arg0 ;
-(void)setOutputDeviceVolume:(float)arg0 outputDevice:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)setOutputDevices:(id)arg0 initiator:(id)arg1 withReplyQueue:(id)arg2 completion:(id)arg3 ;
-(void)volumeControlCapabilitiesForOutputDevice:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;


@end


#endif
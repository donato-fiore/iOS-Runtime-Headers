// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMRSETENDPOINTVOLUMEOPERATIONDEFAULTEXTERNALOBJECTINTERFACE_H
#define HMDMRSETENDPOINTVOLUMEOPERATIONDEFAULTEXTERNALOBJECTINTERFACE_H

@class HMFObject;
@protocol HMDMRSetEndpointVolumeOperationExternalObjectInterface;



@interface HMDMRSetEndpointVolumeOperationDefaultExternalObjectInterface : HMFObject <HMDMRSetEndpointVolumeOperationExternalObjectInterface>





-(id)copyMRAVEndpointOutputDevices:(id)arg0 ;
-(id)createAssistantConnection;
-(id)createAssistantDiscovery;
-(id)getMRAVEndpointOutputDeviceUIDVolumeControlCapabilitiesForEndpoint:(id)arg0 outputDeviceUID:(id)arg1 queue:(id)arg2 ;
-(id)setMRAVOutputDeviceVolume:(float)arg0 endpoint:(id)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC27SIRIVIRTUALDEVICERESOLUTION23DEVICERESOLUTIONSERVICE_H
#define _TTC27SIRIVIRTUALDEVICERESOLUTION23DEVICERESOLUTIONSERVICE_H

@class TtC27SiriVirtualDeviceResolution26SVDDeviceResolutionService;
@protocol HMHomeManagerDelegatePrivate;



@interface _TtC27SiriVirtualDeviceResolution23DeviceResolutionService : TtC27SiriVirtualDeviceResolution26SVDDeviceResolutionService <HMHomeManagerDelegatePrivate>

 {
    ? homeManager;
    ? homeManagerReadyGroup;
    ? initialLoadDone;
    ? endpointUUID;
    ? waitingOnHomeManagerDataSync;
}




-(id)init;
-(void)homeManagerDidUpdateDataSyncInProgress:(id)arg0 ;
-(void)homeManagerDidUpdateHomes:(id)arg0 ;


@end


#endif
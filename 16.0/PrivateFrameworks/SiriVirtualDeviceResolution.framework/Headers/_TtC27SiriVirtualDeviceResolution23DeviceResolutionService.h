// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC27SIRIVIRTUALDEVICERESOLUTION23DEVICERESOLUTIONSERVICE_H
#define _TTC27SIRIVIRTUALDEVICERESOLUTION23DEVICERESOLUTIONSERVICE_H

@protocol HMHomeManagerDelegatePrivate;

#import <Foundation/Foundation.h>


@interface _TtC27SiriVirtualDeviceResolution23DeviceResolutionService : NSObject <HMHomeManagerDelegatePrivate>

 {
    ? homeManagerReadyGroup;
    ? queue;
    ? homeManager;
    ? initialLoadDone;
    ? endpointUUID;
    ? waitingOnHomeManagerDataSync;
    ? _xpcConnection;
}




-(id)init;
-(void)homeManagerDidUpdateDataSyncInProgress:(id)arg0 ;
-(void)homeManagerDidUpdateHomes:(id)arg0 ;


@end


#endif
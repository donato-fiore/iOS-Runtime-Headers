// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMSM_IDSCONNECTION_H
#define CMSM_IDSCONNECTION_H

@class IDSService, IDSDevice, NSString;
@protocol IDSServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CMSM_IDSConnection : NSObject <IDSServiceDelegate>

 {
    IDSService *pIdsService;
    NSObject<OS_dispatch_queue> *idsDispatchQueue;
    IDSDevice *pNearbyPairedDevice;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyNearbyPairedDevice;
-(id)copyNearbyPairedDeviceModelIdentifier;
-(id)copyNearbyPairedDeviceName;
-(id)copyNearbyPairedDeviceProductName;
-(id)copyNearbyPairedDeviceUniqueID;
-(id)init;
-(void)service:(id)arg0 connectedDevicesChanged:(id)arg1 ;
-(void)service:(id)arg0 nearbyDevicesChanged:(id)arg1 ;
-(void)updateNearbyPairedDevice;


@end


#endif
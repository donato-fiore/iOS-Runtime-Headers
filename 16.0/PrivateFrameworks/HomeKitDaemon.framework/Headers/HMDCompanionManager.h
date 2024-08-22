// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCOMPANIONMANAGER_H
#define HMDCOMPANIONMANAGER_H

@class HMFObject, NSString;
@protocol HMFLogging, HMDIDSServiceDelegate, OS_dispatch_queue, HMDIDSService;


#import "HMDDevice.h"

@interface HMDCompanionManager : HMFObject <HMFLogging, HMDIDSServiceDelegate>

 {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly) HMDDevice *companion; // ivar: _companion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HMDIDSService> *service; // ivar: _service
@property (readonly) Class superclass;


+(BOOL)isCompatibleCompanionDevice:(id)arg0 ;
+(id)logCategory;
+(id)sharedManager;
+(id)shortDescription;
-(id)attributeDescriptions;
-(id)init;
-(void)__initializeConnectedDevices;
-(void)service:(id)arg0 connectedDevicesChanged:(id)arg1 ;
-(void)service:(id)arg0 devicesChanged:(id)arg1 ;


@end


#endif
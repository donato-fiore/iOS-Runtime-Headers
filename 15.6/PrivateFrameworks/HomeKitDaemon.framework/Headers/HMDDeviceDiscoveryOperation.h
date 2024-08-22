// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDDEVICEDISCOVERYOPERATION_H
#define HMDDEVICEDISCOVERYOPERATION_H

@class HMFOperation, NSMutableSet, NSString, NSSet, IDSService;
@protocol IDSServiceDelegate, OS_dispatch_queue;


#import "HMDIDSSendMessageOperation.h"
#import "HMDAccount.h"

@interface HMDDeviceDiscoveryOperation : HMFOperation <IDSServiceDelegate>

 {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
    HMDIDSSendMessageOperation *_operation;
    NSMutableSet *_devices;
}


@property (readonly) HMDAccount *account; // ivar: _account
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSSet *devices;
@property (copy) id *discoveryBlock; // ivar: _discoveryBlock
@property (readonly) NSUInteger hash;
@property (readonly) IDSService *service; // ivar: _service
@property (readonly) Class superclass;


+(CGFloat)timeout;
+(id)logCategory;
-(id)initWithAccount:(id)arg0 ;
-(id)initWithAccount:(id)arg0 service:(id)arg1 timeout:(CGFloat)arg2 ;
-(id)initWithAccount:(id)arg0 timeout:(CGFloat)arg1 ;
-(void)cancelWithError:(id)arg0 ;
-(void)main;
-(void)service:(id)arg0 account:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)setQualityOfService:(NSInteger)arg0 ;


@end


#endif
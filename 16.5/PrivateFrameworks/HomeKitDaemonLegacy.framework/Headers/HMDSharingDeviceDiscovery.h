// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSHARINGDEVICEDISCOVERY_H
#define HMDSHARINGDEVICEDISCOVERY_H

@class HMFObject, NSString, SFDeviceDiscovery;
@protocol HMDSharingDeviceDiscovery, OS_dispatch_queue;



@interface HMDSharingDeviceDiscovery : HMFObject <HMDSharingDeviceDiscovery>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *deviceChangedHandler;
@property (retain, nonatomic) SFDeviceDiscovery *deviceDiscovery; // ivar: _deviceDiscovery
@property (copy, nonatomic) id *deviceFoundHandler;
@property (copy, nonatomic) id *deviceLostHandler;
@property (nonatomic) NSUInteger discoveryFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dealloc;
-(void)repairDevice:(id)arg0 flags:(unsigned int)arg1 completion:(id)arg2 ;
-(void)start;
-(void)stop;


@end


#endif
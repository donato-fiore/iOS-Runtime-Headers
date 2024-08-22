// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMSTVREMOTECORESERVICEPROVIDER_H
#define RMSTVREMOTECORESERVICEPROVIDER_H

@class TVRCDeviceQuery, NSSet, NSMapTable, NSString;
@protocol TVRCDeviceQueryDelegate, RMSServiceProvider, OS_dispatch_queue, RMSServiceProviderDelegate;

#import <Foundation/Foundation.h>


@interface RMSTVRemoteCoreServiceProvider : NSObject <TVRCDeviceQueryDelegate, RMSServiceProvider>

 {
    NSObject<OS_dispatch_queue> *_queue;
    TVRCDeviceQuery *_deviceQuery;
    NSSet *_devices;
    NSMapTable *_services;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RMSServiceProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_serviceWithDevice:(id)arg0 ;
-(id)init;
-(void)_didDiscoverDevice:(id)arg0 ;
-(void)_didRemoveDevice:(id)arg0 ;
-(void)beginDiscovery;
-(void)deviceQueryDidUpdateDevices:(id)arg0 ;
-(void)endDiscovery;


@end


#endif
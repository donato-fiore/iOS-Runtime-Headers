// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDNETWORKROUTERCONTROLLER_H
#define HMDNETWORKROUTERCONTROLLER_H

@class NSString;
@protocol HMFLogging, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDHAPAccessory.h"
#import "HMDService.h"

@interface HMDNetworkRouterController : NSObject <HMFLogging>



@property (weak, nonatomic) HMDHAPAccessory *accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDService *routerService; // ivar: _routerService
@property (readonly) Class superclass;
@property (readonly) NSString *wiFiSSID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithAccessory:(id)arg0 service:(id)arg1 workQueue:(id)arg2 ;
-(void)_writeClientConfigurationControlRequest:(id)arg0 operationName:(id)arg1 completion:(id)arg2 ;
-(void)_writeTLVWithValueInResponse:(id)arg0 characteristicType:(id)arg1 operationName:(id)arg2 completion:(id)arg3 ;
-(void)_writeValue:(id)arg0 forCharacteristic:(id)arg1 completion:(id)arg2 ;
-(void)_writeValueIfDifferent:(id)arg0 characteristicType:(id)arg1 operationName:(id)arg2 completion:(id)arg3 ;
-(void)addClientConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)getAccessViolationList:(id)arg0 ;
-(void)getClientStatusWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)getClientStatusWithIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)readClientConfigurationWithClientIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)removeClientConfigurationWithClientIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)resetAccessViolationForClientIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)updateClientConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)writeManagedNetworkEnable:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif
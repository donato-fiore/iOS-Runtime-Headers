// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHEALTHPERIPHERAL_H
#define HDHEALTHPERIPHERAL_H

@class NSMutableDictionary, CBPeripheral, NSString, HKDevice, NSUUID;
@protocol CBPeripheralDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDHealthServiceManager.h"
#import "HDProfile.h"

@interface HDHealthPeripheral : NSObject <CBPeripheralDelegate>

 {
    BOOL _privateMode;
    BOOL _discoveredServices;
    NSMutableDictionary *_healthServices;
    HDHealthServiceManager *_serviceManager;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_servicesQueue;
    NSMutableDictionary *_serviceForProperty;
    NSMutableDictionary *_propertiesAwaiting;
}


@property (readonly, nonatomic) CBPeripheral *cbPeripheral; // ivar: _cbPeripheral
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKDevice *deviceInformation; // ivar: _deviceInformation
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSInteger state;
@property (readonly) NSString *stateDescription;
@property (readonly) Class superclass;


+(id)implementedProperties;
-(BOOL)hasServiceWithUUID:(id)arg0 ;
-(BOOL)updateCBPeripheral:(id)arg0 ;
-(id)healthServiceForType:(NSInteger)arg0 ;
-(id)initWithCBPeripheral:(id)arg0 name:(id)arg1 serviceManager:(id)arg2 profile:(id)arg3 ;
-(void)addHealthService:(id)arg0 ;
-(void)disconnectServices;
-(void)discoverServices;
-(void)getProperty:(id)arg0 withHandler:(id)arg1 ;
-(void)performOperation:(id)arg0 withParameters:(id)arg1 completion:(id)arg2 ;
-(void)peripheral:(id)arg0 didDiscoverCharacteristicsForService:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didDiscoverServices:(id)arg1 ;
-(void)peripheral:(id)arg0 didModifyServices:(id)arg1 ;
-(void)peripheral:(id)arg0 didReadRSSI:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didUpdateNotificationStateForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didUpdateValueForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didWriteValueForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)service:(id)arg0 didReadProperty:(id)arg1 value:(id)arg2 error:(id)arg3 ;
-(void)writeCharacteristic:(id)arg0 expectResponse:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif
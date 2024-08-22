// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDHEALTHSERVICE_H
#define HDHEALTHSERVICE_H

@class NSMutableArray, NSMutableDictionary, NSUUID, NSString;
@protocol HDHSCharacteristicsDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDDeviceEntity.h"
#import "HDHealthServiceManager.h"
#import "HDHealthPeripheral.h"
#import "HDProfile.h"

@interface HDHealthService : NSObject <HDHSCharacteristicsDelegate>

 {
    NSObject<OS_dispatch_queue> *_dataQueue;
    NSMutableArray *_pendingCharacteristicBuffer;
    HDDeviceEntity *_deviceEntity;
    uint8_t _deviceInformationLoaded;
    HDHealthServiceManager *_serviceManager;
    NSMutableDictionary *_writableCharacteristics;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSMutableArray *_pendingWrites;
}


@property (readonly, nonatomic) BOOL characteristicsDiscovered; // ivar: _characteristicsDiscovered
@property BOOL deliverData; // ivar: _deliverData
@property (readonly, weak, nonatomic) HDHealthPeripheral *healthPeripheral; // ivar: _healthPeripheral
@property (readonly, nonatomic) NSUUID *peripheralUUID; // ivar: _peripheralUUID
@property (weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (retain, nonatomic) NSString *serviceId; // ivar: _serviceId


+(NSInteger)serviceType;
+(id)implementedProperties;
+(id)serviceUUID;
-(BOOL)processAdvertisementData:(id)arg0 ;
-(BOOL)supportsOperation:(id)arg0 ;
-(BOOL)supportsWritingCharacteristic:(id)arg0 ;
-(id)description;
-(id)initWithServiceManager:(id)arg0 peripheral:(id)arg1 advertisementData:(id)arg2 profile:(id)arg3 ;
-(id)servicesInProfile;
-(void)characteristicDataReceived:(id)arg0 ;
-(void)deviceDisconnecting;
-(void)deviceInformationSetOnPeripheral;
-(void)mfaSucceededOnPeripheral;
-(void)performOperation:(id)arg0 onPeripheral:(id)arg1 withParameters:(id)arg2 completion:(id)arg3 ;
-(void)peripheral:(id)arg0 didDiscoverCharacteristic:(id)arg1 ;
-(void)peripheral:(id)arg0 didDiscoverCharacteristics:(id)arg1 ;
-(void)peripheral:(id)arg0 didUpdateValueForCharacteristic:(id)arg1 updateTime:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg0 didWriteValueForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)readProperty:(id)arg0 ;
-(void)setWritableCharacteristic:(id)arg0 ;
-(void)writeCharacteristic:(id)arg0 expectResponse:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif
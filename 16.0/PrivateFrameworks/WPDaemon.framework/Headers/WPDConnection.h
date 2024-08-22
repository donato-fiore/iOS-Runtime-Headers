// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WPDCONNECTION_H
#define WPDCONNECTION_H

@class CBCentral, CBCharacteristic, CBService, NSString, NSDictionary, CBPeripheral, CBPeripheralManager, NSMutableSet;
@protocol CBPeripheralDelegate, OS_voucher;

#import <Foundation/Foundation.h>

#import "WPCharacteristic.h"
#import "WPDClient.h"

@interface WPDConnection : NSObject <CBPeripheralDelegate>



@property (retain) CBCentral *central; // ivar: _central
@property (retain) CBCharacteristic *centralCharacteristic; // ivar: _centralCharacteristic
@property (retain) CBService *centralService; // ivar: _centralService
@property (retain) NSString *characteristicService; // ivar: _characteristicService
@property (retain) WPCharacteristic *characteristicToSend; // ivar: _characteristicToSend
@property (retain) NSDictionary *charsAndServicesToDiscover; // ivar: _charsAndServicesToDiscover
@property (weak, nonatomic) WPDClient *client; // ivar: _client
@property BOOL connectablePacket; // ivar: _connectablePacket
@property (nonatomic, getter=fetchConnectionType) NSInteger connectionType; // ivar: _connectionType
@property NSUInteger dataLeftToSend; // ivar: _dataLeftToSend
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didConnectSent; // ivar: _didConnectSent
@property (readonly) NSUInteger hash;
@property (retain) CBPeripheral *peripheral; // ivar: _peripheral
@property (nonatomic) NSInteger recentRole; // ivar: _recentRole
@property (retain) CBPeripheralManager *sendDataManager; // ivar: _sendDataManager
@property (retain, nonatomic) NSMutableSet *subscribedCharacteristics; // ivar: _subscribedCharacteristics
@property (readonly) Class superclass;
@property (retain) NSObject<OS_voucher> *voucher; // ivar: _voucher


-(NSInteger)connectionType;
-(id)getCentral;
-(id)getCharacteristicWithUUID:(id)arg0 inService:(id)arg1 forPeripheral:(id)arg2 ;
-(id)getPeripheral;
-(id)getPeripheralUUID;
-(id)init;
-(id)initWithCentral:(id)arg0 characteristic:(id)arg1 ;
-(id)initWithPeripheral:(id)arg0 ;
-(id)sendDataToCharacteristic:(id)arg0 inService:(id)arg1 forPeer:(id)arg2 ;
-(id)subscribe:(BOOL)arg0 toPeer:(id)arg1 withCharacteristic:(id)arg2 inService:(id)arg3 ;
-(void)dealloc;
-(void)discoverCharacteristicsAndServices:(id)arg0 forPeripheral:(id)arg1 ;
-(void)holdVoucher;
-(void)peripheral:(id)arg0 didDiscoverCharacteristicsForService:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didDiscoverServices:(id)arg1 ;
-(void)peripheral:(id)arg0 didModifyServices:(id)arg1 ;
-(void)peripheral:(id)arg0 didUpdateNotificationStateForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didUpdateValueForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didWriteValueForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)readyForDataTransfer;
-(void)resetData;
-(void)sendDataToCentral;
-(void)sendDataToPeripheral;
-(void)updateWithCentral:(id)arg0 characteristic:(id)arg1 ;
-(void)updateWithPeripheral:(id)arg0 ;


@end


#endif
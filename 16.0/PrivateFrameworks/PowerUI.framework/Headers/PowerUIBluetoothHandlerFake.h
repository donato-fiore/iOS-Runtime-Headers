// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POWERUIBLUETOOTHHANDLERFAKE_H
#define POWERUIBLUETOOTHHANDLERFAKE_H

@class NSString;


#import "PowerUIBluetoothHandler.h"

@interface PowerUIBluetoothHandlerFake : PowerUIBluetoothHandler

@property (nonatomic) *BTDeviceImpl fakeDevice; // ivar: _fakeDevice
@property (retain, nonatomic) NSString *fakeDeviceAddress; // ivar: _fakeDeviceAddress
@property (nonatomic) BOOL fakeDeviceConnected; // ivar: _fakeDeviceConnected


-(BOOL)isDeviceConnected:(struct BTDeviceImpl *)arg0 forSession:(struct BTSessionImpl *)arg1 ;
-(id)getAddressStringForDevice:(struct BTDeviceImpl *)arg0 ;
-(id)init:(id)arg0 ;
-(int)deviceConnectWrapper:(struct BTDeviceImpl *)arg0 ;
-(int)getDeviceIDWrapperWithDevice:(struct BTDeviceImpl *)arg0 withVendorIdSource:(*unsigned int)arg1 withVendorId:(*unsigned int)arg2 withProductId:(*unsigned int)arg3 withVersionId:(*unsigned int)arg4 ;
-(int)isAppleAudioDeviceWrapperWithDevice:(struct BTDeviceImpl *)arg0 withBool:(*unsigned int)arg1 ;
-(int)sendCustomMessageWrapperWithManager:(struct BTAccessoryManagerImpl *)arg0 withMessageType:(int)arg1 withDeviceHandle:(struct BTDeviceImpl *)arg2 withData:(char *)arg3 withDataSize:(NSUInteger)arg4 ;
-(struct BTDeviceImpl *)getDeviceForAddressString:(id)arg0 forSession:(struct BTSessionImpl *)arg1 ;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLEMIDIACCESSOR_H
#define BLEMIDIACCESSOR_H


#import <Foundation/Foundation.h>


@interface BLEMIDIAccessor : NSObject



+(BOOL)deviceIsLocalPeripheral:(unsigned int)arg0 ;
+(BOOL)deviceIsNullDevice:(unsigned int)arg0 ;
+(BOOL)deviceIsOnline:(unsigned int)arg0 ;
+(BOOL)deviceIsRemotePeripheral:(unsigned int)arg0 ;
+(BOOL)uuidIsForgettable:(id)arg0 ;
+(NSUInteger)timeStampWithEpoch:(NSUInteger)arg0 offset:(unsigned short)arg1 ;
+(id)localPeripheralName;
+(id)nameForMIDIDevice:(unsigned int)arg0 ;
+(id)uuidForMIDIDevice:(unsigned int)arg0 ;
+(unsigned int)localPeripheral;
+(unsigned int)midiDeviceForUUID:(id)arg0 ;
+(unsigned int)midiDeviceForUUID:(id)arg0 isLocalPeripheral:(BOOL)arg1 isRemotePeripheral:(BOOL)arg2 ;
+(unsigned int)nullDevice;
+(unsigned short)reconstructWithHighByte:(unsigned char)arg0 lowByte:(unsigned char)arg1 overflow:(BOOL)arg2 ;
+(unsigned short)timeStampOffset:(NSUInteger)arg0 ;
+(void)logEvent:(char *)arg0 length:(unsigned short)arg1 timeStamp:(NSUInteger)arg2 intoBuffer:(char *)arg3 ;
+(void)splitOffset:(unsigned short)arg0 intoHeaderByte:(char *)arg1 timeStampByte:(char *)arg2 ;


@end


#endif
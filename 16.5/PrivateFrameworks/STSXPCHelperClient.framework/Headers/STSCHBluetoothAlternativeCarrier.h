// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSCHBLUETOOTHALTERNATIVECARRIER_H
#define STSCHBLUETOOTHALTERNATIVECARRIER_H

@class NSData;


#import "STSCHAlternativeCarrier.h"

@interface STSCHBluetoothAlternativeCarrier : STSCHAlternativeCarrier

@property (retain, nonatomic) NSData *advertiseUUID; // ivar: _advertiseUUID
@property (retain, nonatomic) NSData *humanReadableAdvertiseUUID; // ivar: _humanReadableAdvertiseUUID
@property (readonly, nonatomic) NSData *humanReadableLEAddress;
@property (retain, nonatomic) NSData *leAddr; // ivar: _leAddr
@property (nonatomic) NSUInteger leRole; // ivar: _leRole


+(BOOL)supportsSecureCoding;
+(id)connectionHandoverAlternativeCarrierWithBundle:(id)arg0 ;
-(NSUInteger)roleFromSpec:(unsigned char)arg0 ;
-(id)_createCarrierConfigurationRecord;
-(id)description;
-(id)initWithAddress:(id)arg0 advertiseUUID:(id)arg1 role:(NSUInteger)arg2 powerState:(NSUInteger)arg3 auxiliaryRecords:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNdefRecordBundle:(id)arg0 ;
-(id)roleString;
-(unsigned char)specRole;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
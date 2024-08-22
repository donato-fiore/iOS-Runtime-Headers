// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAP2TLVPARAMCHARACTERISTICSIGNATURE_H
#define HAP2TLVPARAMCHARACTERISTICSIGNATURE_H

@class NSData, NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAP2TLVCharacteristicPropertiesWrapper.h"
#import "HAPTLVUnsignedNumberValue.h"

@interface HAP2TLVParamCharacteristicSignature : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) NSData *bluetoothFormat; // ivar: _bluetoothFormat
@property (retain, nonatomic) HAP2TLVCharacteristicPropertiesWrapper *characteristicProperties; // ivar: _characteristicProperties
@property (retain, nonatomic) NSData *characteristicType; // ivar: _characteristicType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *instanceID; // ivar: _instanceID
@property (retain, nonatomic) NSData *stepValue; // ivar: _stepValue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *userDescription; // ivar: _userDescription
@property (retain, nonatomic) NSData *validRange; // ivar: _validRange
@property (retain, nonatomic) NSData *validValues; // ivar: _validValues
@property (retain, nonatomic) NSData *validValuesRange; // ivar: _validValuesRange


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithInstanceID:(id)arg0 characteristicType:(id)arg1 characteristicProperties:(id)arg2 userDescription:(id)arg3 bluetoothFormat:(id)arg4 validRange:(id)arg5 stepValue:(id)arg6 validValues:(id)arg7 validValuesRange:(id)arg8 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif
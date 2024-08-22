// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAP2TLVPARAMSERVICESIGNATURE_H
#define HAP2TLVPARAMSERVICESIGNATURE_H

@class NSString, NSData;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAP2TLVParamCharacteristicList.h"
#import "HAPTLVUnsignedNumberValue.h"
#import "HAP2TLVServicePropertiesWrapper.h"

@interface HAP2TLVParamServiceSignature : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) HAP2TLVParamCharacteristicList *characteristicList; // ivar: _characteristicList
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *instanceID; // ivar: _instanceID
@property (retain, nonatomic) NSData *linkedServices; // ivar: _linkedServices
@property (retain, nonatomic) HAP2TLVServicePropertiesWrapper *properties; // ivar: _properties
@property (retain, nonatomic) NSData *serviceType; // ivar: _serviceType
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithInstanceID:(id)arg0 serviceType:(id)arg1 properties:(id)arg2 linkedServices:(id)arg3 characteristicList:(id)arg4 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif
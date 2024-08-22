// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPNFCACCESSCONTROL_H
#define HAPNFCACCESSCONTROL_H

@class NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPNFCAccessDeviceCredentialKeyRequest.h"
#import "HAPNFCAccessDeviceCredentialKeyResponse.h"
#import "HAPNFCAccessIssuerKeyRequest.h"
#import "HAPNFCAccessIssuerKeyResponse.h"
#import "HAPNFCAccessOperationTypeWrapper.h"
#import "HAPNFCAccessReaderKeyRequest.h"
#import "HAPNFCAccessReaderKeyResponse.h"

@interface HAPNFCAccessControl : NSObject <NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HAPNFCAccessDeviceCredentialKeyRequest *deviceCredentialKeyRequest; // ivar: _deviceCredentialKeyRequest
@property (retain, nonatomic) HAPNFCAccessDeviceCredentialKeyResponse *deviceCredentialKeyResponse; // ivar: _deviceCredentialKeyResponse
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HAPNFCAccessIssuerKeyRequest *issuerKeyRequest; // ivar: _issuerKeyRequest
@property (retain, nonatomic) HAPNFCAccessIssuerKeyResponse *issuerKeyResponse; // ivar: _issuerKeyResponse
@property (retain, nonatomic) HAPNFCAccessOperationTypeWrapper *operationType; // ivar: _operationType
@property (retain, nonatomic) HAPNFCAccessReaderKeyRequest *readerKeyRequest; // ivar: _readerKeyRequest
@property (retain, nonatomic) HAPNFCAccessReaderKeyResponse *readerKeyResponse; // ivar: _readerKeyResponse
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithOperationType:(id)arg0 issuerKeyRequest:(id)arg1 issuerKeyResponse:(id)arg2 deviceCredentialKeyRequest:(id)arg3 deviceCredentialKeyResponse:(id)arg4 readerKeyRequest:(id)arg5 readerKeyResponse:(id)arg6 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif
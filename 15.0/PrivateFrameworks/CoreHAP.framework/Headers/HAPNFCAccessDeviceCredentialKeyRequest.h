// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPNFCACCESSDEVICECREDENTIALKEYREQUEST_H
#define HAPNFCACCESSDEVICECREDENTIALKEYREQUEST_H

@class NSString, NSData;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPNFCAccessKeyStateWrapper.h"
#import "HAPNFCAccessKeyTypeWrapper.h"

@interface HAPNFCAccessDeviceCredentialKeyRequest : NSObject <NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *identifier; // ivar: _identifier
@property (retain, nonatomic) NSData *issuerKeyIdentifier; // ivar: _issuerKeyIdentifier
@property (retain, nonatomic) NSData *key; // ivar: _key
@property (retain, nonatomic) HAPNFCAccessKeyStateWrapper *state; // ivar: _state
@property (readonly) Class superclass;
@property (retain, nonatomic) HAPNFCAccessKeyTypeWrapper *type; // ivar: _type


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithType:(id)arg0 key:(id)arg1 issuerKeyIdentifier:(id)arg2 state:(id)arg3 identifier:(id)arg4 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif
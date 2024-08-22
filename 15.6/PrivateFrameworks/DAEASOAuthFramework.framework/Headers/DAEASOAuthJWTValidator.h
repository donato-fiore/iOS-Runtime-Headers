// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DAEASOAUTHJWTVALIDATOR_H
#define DAEASOAUTHJWTVALIDATOR_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface DAEASOAuthJWTValidator : NSObject

@property (retain, nonatomic) NSData *decodedHeader; // ivar: _decodedHeader
@property (retain, nonatomic) NSData *decodedPayload; // ivar: _decodedPayload
@property (retain, nonatomic) NSData *decodedSignature; // ivar: _decodedSignature
@property (retain, nonatomic) id *headerJSONObject; // ivar: _headerJSONObject
@property (retain, nonatomic) id *payloadJSONObject; // ivar: _payloadJSONObject
@property (retain, nonatomic) NSString *rawHeader; // ivar: _rawHeader
@property (retain, nonatomic) NSString *rawPayload; // ivar: _rawPayload
@property (retain, nonatomic) NSString *rawSignature; // ivar: _rawSignature


+(id)base64URLDecode:(id)arg0 ;
+(id)base64URLEncode:(id)arg0 ;
-(BOOL)_signatureValid:(id)arg0 ;
-(BOOL)idTokenValidWithJWKS:(id)arg0 withAudience:(id)arg1 withIssuer:(id)arg2 ;
-(BOOL)personalAccount;
-(id)init;
-(id)initWithIdToken:(id)arg0 ;


@end


#endif
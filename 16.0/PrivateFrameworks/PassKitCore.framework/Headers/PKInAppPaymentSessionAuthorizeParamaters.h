// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKINAPPPAYMENTSESSIONAUTHORIZEPARAMATERS_H
#define PKINAPPPAYMENTSESSIONAUTHORIZEPARAMATERS_H

@class NSData;

#import <Foundation/Foundation.h>


@interface PKInAppPaymentSessionAuthorizeParamaters : NSObject

@property (retain, nonatomic) NSData *authenticationCredential; // ivar: _authenticationCredential
@property (nonatomic) NSInteger cryptogramType; // ivar: _cryptogramType
@property (nonatomic) *BOOL isFeatureNotSupportedError; // ivar: _isFeatureNotSupportedError
@property (retain, nonatomic) NSData *networkMerchantIdentifier; // ivar: _networkMerchantIdentifier
@property (retain, nonatomic) NSData *nonce; // ivar: _nonce


-(id)initWithNonce:(id)arg0 authenticationCredential:(id)arg1 networkMerchantIdentifier:(id)arg2 cryptogramType:(NSInteger)arg3 ;


@end


#endif
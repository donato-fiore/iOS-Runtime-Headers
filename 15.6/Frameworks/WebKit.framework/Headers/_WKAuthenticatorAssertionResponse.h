// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _WKAUTHENTICATORASSERTIONRESPONSE_H
#define _WKAUTHENTICATORASSERTIONRESPONSE_H

@class WKAuthenticatorResponse, NSData;



@interface _WKAuthenticatorAssertionResponse : WKAuthenticatorResponse

@property (readonly, nonatomic) NSData *authenticatorData; // ivar: _authenticatorData
@property (readonly, nonatomic) NSData *signature; // ivar: _signature
@property (readonly, nonatomic) NSData *userHandle; // ivar: _userHandle


-(id)initWithClientDataJSON:(id)arg0 rawId:(id)arg1 extensions:(*void)arg2 authenticatorData:(id)arg3 signature:(id)arg4 userHandle:(id)arg5 attachment:(NSInteger)arg6 ;


@end


#endif
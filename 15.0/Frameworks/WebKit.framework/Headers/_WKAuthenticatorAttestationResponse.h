// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _WKAUTHENTICATORATTESTATIONRESPONSE_H
#define _WKAUTHENTICATORATTESTATIONRESPONSE_H

@class WKAuthenticatorResponse, NSData;



@interface _WKAuthenticatorAttestationResponse : WKAuthenticatorResponse

@property (readonly, nonatomic) NSData *attestationObject; // ivar: _attestationObject


-(id)initWithClientDataJSON:(id)arg0 rawId:(id)arg1 extensions:(*void)arg2 attestationObject:(id)arg3 attachment:(NSInteger)arg4 ;


@end


#endif
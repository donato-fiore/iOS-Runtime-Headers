// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEPROFILEPAYLOADBASEVPN_H
#define NEPROFILEPAYLOADBASEVPN_H

@class NSString;


#import "NEProfilePayloadBase.h"

@interface NEProfilePayloadBaseVPN : NEProfilePayloadBase {
    BOOL _userNameRequired;
    BOOL _passwordRequired;
    BOOL _proxyUserNameRequired;
    BOOL _proxyPasswordRequired;
    BOOL _sharedSecretRequired;
    BOOL _pinRequired;
    NSString *_userName;
    NSString *_password;
    NSString *_proxyUserName;
    NSString *_proxyPassword;
    NSString *_sharedSecret;
    NSString *_pin;
}




-(BOOL)setPostprocessedPayloadContents:(id)arg0 ;
-(id)getPreprocessedPayloadContents;
-(id)initWithPayload:(id)arg0 ;
-(id)validatePayload;


@end


#endif
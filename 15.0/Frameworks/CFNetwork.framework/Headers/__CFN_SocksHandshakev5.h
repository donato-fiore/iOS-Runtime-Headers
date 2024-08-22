// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __CFN_SOCKSHANDSHAKEV5_H
#define __CFN_SOCKSHANDSHAKEV5_H

@class SocksHandshake, NSMutableSet, NSMutableString;



@interface __CFN_SocksHandshakev5 : SocksHandshake {
    BOOL _done;
    NSUInteger _state;
    int _numberOfAuthVersionSupported;
    NSMutableSet *_authMethods;
    unsigned char _addressType;
    int _destinationLen;
    NSMutableString *_domainName;
    unsigned char ipaddr;
    int _portLen;
    unsigned short _destPort;
    int _usernameLen;
    NSMutableString *_username;
    int _passwordLen;
    NSMutableString *_password;
}




-(BOOL)parse:(char *)arg0 len:(NSInteger)arg1 completion:(id)arg2 ;
-(id)finish:(int)arg0 ;


@end


#endif
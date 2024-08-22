// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPPRIVATEACCESSTOKENREQUEST_H
#define NSPPRIVATEACCESSTOKENREQUEST_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface NSPPrivateAccessTokenRequest : NSObject {
    unsigned char _configKeyID;
    unsigned char _truncatedTokenKeyID;
    unsigned short _tokenType;
    unsigned short _issuerKEMID;
    unsigned short _issuerKDFID;
    unsigned short _issuerAEADID;
    NSData *_requestData;
    NSData *_blindedRequest;
    NSData *_issuerEncapKey;
    NSData *_issuerEncapKeyID;
    NSString *_originName;
    NSData *_encryptedTokenRequest;
    NSData *_requestKey;
    NSData *_requestSignature;
    *__SecKey _ephemeralPrivateKey;
    *cchpke_initiator _hpkeContext;
    NSData *_hpkeEnc;
}




-(void)dealloc;


@end


#endif
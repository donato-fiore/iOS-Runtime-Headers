// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCOAUTH2PARAMETERS_H
#define BCOAUTH2PARAMETERS_H

@class NSString, NSArray, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BCOAuth2Parameters : NSObject <NSSecureCoding>

 {
    NSString *_clientIdentifier;
    NSString *_clientSecret;
    NSArray *_scope;
    NSString *_state;
    NSString *_responseType;
    NSString *_responseEncryptionKey;
    NSURL *_authorizationURL;
    NSURL *_accessTokenURL;
}




+(BOOL)supportsSecureCoding;
-(id)authenticationSessionURL;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)responseEncryptionKey;
-(id)tokenExchangeBodyWithCode:(id)arg0 ;
-(id)tokenExchangeURL;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
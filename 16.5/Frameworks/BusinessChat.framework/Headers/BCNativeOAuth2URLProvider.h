// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCNATIVEOAUTH2URLPROVIDER_H
#define BCNATIVEOAUTH2URLPROVIDER_H

@class NSString, NSArray, NSURL;
@protocol BCNativeOAuth2Protocol, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BCNativeOAuth2URLProvider : NSObject <BCNativeOAuth2Protocol, NSSecureCoding>

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


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)URLProviderWithDictionary:(id)arg0 ;
-(BOOL)shouldHandleRedirectURI:(id)arg0 ;
-(id)authenticationSessionURL;
-(id)initWithCoder:(id)arg0 ;
-(id)responseEncryptionKey;
-(id)tokenExchangeBodyWithCode:(id)arg0 ;
-(id)tokenExchangeURL;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
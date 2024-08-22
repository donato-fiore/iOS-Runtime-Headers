// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSERVERSIDEOAUTH2URLPROVIDER_H
#define BCSERVERSIDEOAUTH2URLPROVIDER_H

@class NSURL, NSString, NSArray;
@protocol BCBaseOAuth2Protocol, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BCServerSideOAuth2URLProvider : NSObject <BCBaseOAuth2Protocol, NSSecureCoding>

 {
    NSURL *_authorizationURL;
    NSString *_clientIdentifier;
    NSArray *_scope;
    NSString *_state;
    NSString *_responseType;
    NSString *_additionalParameters;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURL *redirectURI; // ivar: _redirectURI
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)URLProviderWithDictionary:(id)arg0 ;
-(BOOL)shouldHandleRedirectURI:(id)arg0 ;
-(id)authenticationSessionURL;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASAUTHORIZATIONPLATFORMPUBLICKEYCREDENTIALPROVIDER_H
#define ASAUTHORIZATIONPLATFORMPUBLICKEYCREDENTIALPROVIDER_H

@class NSString;
@protocol ASAuthorizationProvider;

#import <Foundation/Foundation.h>


@interface ASAuthorizationPlatformPublicKeyCredentialProvider : NSObject <ASAuthorizationProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier; // ivar: _relyingPartyIdentifier
@property (readonly) Class superclass;


-(id)createCredentialAssertionRequestWithChallenge:(id)arg0 ;
-(id)createCredentialRegistrationRequestWithChallenge:(id)arg0 name:(id)arg1 userID:(id)arg2 ;
-(id)initWithRelyingPartyIdentifier:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASAUTHORIZATIONSECURITYKEYPUBLICKEYCREDENTIALPROVIDER_H
#define ASAUTHORIZATIONSECURITYKEYPUBLICKEYCREDENTIALPROVIDER_H

@class NSString;
@protocol ASAuthorizationProvider;

#import <Foundation/Foundation.h>


@interface ASAuthorizationSecurityKeyPublicKeyCredentialProvider : NSObject <ASAuthorizationProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier; // ivar: _relyingPartyIdentifier
@property (readonly) Class superclass;


-(id)createCredentialAssertionRequestWithChallenge:(id)arg0 ;
-(id)createCredentialRegistrationRequestWithChallenge:(id)arg0 displayName:(id)arg1 name:(id)arg2 userID:(id)arg3 ;
-(id)initWithRelyingPartyIdentifier:(id)arg0 ;


@end


#endif